#include "debugmenu.h"

#include "random.h"
#include "hardware.h"
#include "debugtext.h"
#include "text.h"
#include "face.h"
#include "gamecontroller.h"
#include "bm.h"
#include "bmNew.h"
#include "unit.h"
#include "map.h"
#include "bmfx.h"
#include "bmio.h"
#include "chapter.h"
#include "chapterinfo.h"
#include "menuinfo.h"
#include "ui.h"
#include "menu.h"
#include "statscreen.h" // StartMuralBackground
#include "save_core.h"
#include "save_stats.h"
#include "save_game.h"
#include "sound.h"
#include "song.h"

#include "constants/videoalloc_global.h"
#include "constants/chapters.h"
#include "constants/faces.h"
#include "constants/songs.h"

#include "chapterNew.h"
#include "chapters.h"
#include "saveNew.h"
#include "menuNew.h"
#include "songsNew.h"

enum
{
    DEBUG_WEATHER_NONE,
    DEBUG_WEATHER_SANDSTORM,
    DEBUG_WEATHER_SNOW,
    DEBUG_WEATHER_SNOWSTORM,
    DEBUG_WEATHER_RAIN,
    DEBUG_WEATHER_NIGHT,
    DEBUG_WEATHER_FLAMES,

    DEBUG_WEATHER_COUNT,
};

fu8 MapDebugMenu_Map_Select(struct MenuProc * menu, struct MenuEntProc * ent)
{
    struct MapDebugMenuEntProc * mapEnt = (struct MapDebugMenuEntProc *)ent;

    EndMapMain();

    SetChapterInPlaySt(&gPlayStNew, mapEnt->mapId);
    CleanupUnitsBeforeChapter();
    RestartGameAndChapter();

    return MENU_ACTION_NOCURSOR | MENU_ACTION_END | MENU_ACTION_SE_6A | MENU_ACTION_CLEAR;
}

fu8 func_fe6_0801ACD8New(struct MenuProc * menu, struct MenuEntProc * ent)
{
    RandInit(GetGameTime());

    InitUnits();

    WriteNewGameSave(SAVE_GAME0, FALSE);
    SetChapterInPlaySt(&gPlayStNew, ent->id);

    WriteGameSave(SAVE_GAME0);
    CleanupUnitsBeforeChapter();

    RestartGameAndChapter();

    return MENU_ACTION_END;
}

fu8 func_fe6_0801ACD8Old(struct MenuProc * menu, struct MenuEntProc * ent)
{
    return func_fe6_0801ACD8New(menu, ent);
}

fu8 MapMenu_DebugMonitor_Available(struct MenuEntInfo const * info, int id)
{
    return FindProc(ProcScr_DebugMonitor) != NULL ? MENU_ENTRY_ENABLED : MENU_ENTRY_DISABLED;
}

fu8 MapDebugMenu_Map_Idle(struct MenuProc * menu, struct MenuEntProc * ent)
{
    struct MapDebugMenuEntProc * mapEnt = (struct MapDebugMenuEntProc *)ent;

    if (gKeySt->repeated & KEY_DPAD_RIGHT)
        mapEnt->mapId++;

    if (gKeySt->repeated & KEY_DPAD_LEFT)
        mapEnt->mapId--;

    if (mapEnt->mapId >= CHAPTER_CH_COUNT)
        mapEnt->mapId = CHAPTER_CH_COUNT - 1;

    if (mapEnt->mapId < CHAPTER_1)
        mapEnt->mapId = CHAPTER_1;

    if (gKeySt->repeated & (KEY_DPAD_LEFT | KEY_DPAD_RIGHT))
    {
        DebugPutStr(gBg0Tm + TM_OFFSET(7, 3), "        ");
        DebugPutStr(gBg0Tm + TM_OFFSET(7, 3), GetChapterInfo(mapEnt->mapId)->debug_name);

        EnableBgSync(BG0_SYNC_BIT);
    }

    return 0;
}

char const * const offon[] =
{
    (char const *)3755,
    (char const *)3756,
};

u32 MapDebugMenu_Debug_Info_Display(struct MenuProc * menu, struct MenuEntProc * ent)
{
    struct GenericProc * proc = FindProc(ProcScr_DebugMonitor);

    ClearText(&ent->text);

    Text_InsertDrawString(&ent->text, 8, ent->availability ? TEXT_COLOR_SYSTEM_GRAY : TEXT_COLOR_SYSTEM_WHITE, (char const *)3764); // デブ情報
    Text_InsertDrawString(&ent->text, 64, ent->availability ? TEXT_COLOR_SYSTEM_GRAY : TEXT_COLOR_SYSTEM_BLUE, offon[ent->availability ? FALSE : proc->unk66]);

    PutText(&ent->text, gBg0Tm + TM_OFFSET(ent->x, ent->y));

    return 0;
}

fu8 MapDebugMenu_Debug_Info_Select(struct MenuProc * menu, struct MenuEntProc * ent)
{
    if (ent->availability == MENU_ENTRY_DISABLED)
    {
        MenuFrozenHelpBox(menu, 3782);
        return MENU_ACTION_SE_6B;
    }

    return 0;
}

fu8 MapDebugMenu_Debug_Info_Idle(struct MenuProc * menu, struct MenuEntProc * ent)
{
    if (ent->availability == MENU_ENTRY_DISABLED)
        return 0;

    struct GenericProc * proc = FindProc(ProcScr_DebugMonitor);

    if (gKeySt->pressed & (KEY_BUTTON_A | KEY_DPAD_RIGHT | KEY_DPAD_LEFT))
    {
        proc->unk66 ^= 1;
        MapDebugMenu_Debug_Info_Display(menu, ent);

        DebugInitObj(-1, 9);
    }

    return 0;
}

char const * const weatherNames[] =
{
    [DEBUG_WEATHER_NONE]      = (char const *)3757,
    [DEBUG_WEATHER_SANDSTORM] = (char const *)3758,
    [DEBUG_WEATHER_SNOW]      = (char const *)3759,
    [DEBUG_WEATHER_SNOWSTORM] = (char const *)3760,
    [DEBUG_WEATHER_RAIN]      = (char const *)3761,
    [DEBUG_WEATHER_NIGHT]     = (char const *)3762,
    [DEBUG_WEATHER_FLAMES]    = (char const *)3763,
};

const int weathers[] = {
    [DEBUG_WEATHER_NONE]      = WEATHER_NONE,
    [DEBUG_WEATHER_SANDSTORM] = WEATHER_SANDSTORM,
    [DEBUG_WEATHER_SNOW]      = WEATHER_SNOW,
    [DEBUG_WEATHER_SNOWSTORM] = WEATHER_SNOWSTORM,
    [DEBUG_WEATHER_RAIN]      = WEATHER_RAIN,
    [DEBUG_WEATHER_NIGHT]     = WEATHER_NIGHT,
    [DEBUG_WEATHER_FLAMES]    = WEATHER_FLAMES,
};

const int debugWeathers[] = {
    [WEATHER_NONE]      = DEBUG_WEATHER_NONE,
    [WEATHER_SANDSTORM] = DEBUG_WEATHER_SANDSTORM,
    [WEATHER_SNOW]      = DEBUG_WEATHER_SNOW,
    [WEATHER_SNOWSTORM] = DEBUG_WEATHER_SNOWSTORM,
    [WEATHER_RAIN]      = DEBUG_WEATHER_RAIN,
    [WEATHER_NIGHT]     = DEBUG_WEATHER_NIGHT,
    [WEATHER_FLAMES]    = DEBUG_WEATHER_FLAMES,
};

u32 MapDebugMenu_Weather_Display(struct MenuProc * menu, struct MenuEntProc * ent)
{
    struct GenericProc * proc = FindProc(ProcScr_DebugMonitor);

    ClearText(&ent->text);

    Text_InsertDrawString(&ent->text, 8,  ent->availability ? TEXT_COLOR_SYSTEM_GRAY : TEXT_COLOR_SYSTEM_WHITE, (char const *)3765); // 天気
    Text_InsertDrawString(&ent->text, 48, ent->availability ? TEXT_COLOR_SYSTEM_GRAY : TEXT_COLOR_SYSTEM_BLUE, weatherNames[ent->availability ? GetChapterInfo(GetChapterInPlaySt(&gPlayStNew))->weather : (proc ? proc->unk58 : debugWeathers[gPlaySt.weather]) % DEBUG_WEATHER_COUNT]);

    PutText(&ent->text, gBg0Tm + TM_OFFSET(ent->x, ent->y));

    return 0;
}

fu8 MapDebugMenu_Weather_Select(struct MenuProc * menu, struct MenuEntProc * ent)
{
    if (ent->availability == MENU_ENTRY_DISABLED)
    {
        MenuFrozenHelpBox(menu, 3782);
        return MENU_ACTION_SE_6B;
    }

    return 0;
}

fu8 MapDebugMenu_Weather_Idle(struct MenuProc * menu, struct MenuEntProc * ent)
{
    if (ent->availability == MENU_ENTRY_DISABLED)
        return 0;

    if (gKeySt->pressed & (KEY_BUTTON_A | KEY_DPAD_RIGHT | KEY_DPAD_LEFT))
    {
        struct GenericProc * proc = FindProc(ProcScr_DebugMonitor);

        if (proc == NULL)
        {
            SetWeather(weathers[(debugWeathers[gPlaySt.weather] + 1) % DEBUG_WEATHER_COUNT]);
            MapDebugMenu_Weather_Display(menu, ent);
            return 0;
        }

        proc->unk58++;
        MapDebugMenu_Weather_Display(menu, ent);

        switch (proc->unk58 % DEBUG_WEATHER_COUNT)
        {

        case DEBUG_WEATHER_NONE:
            SetWeather(WEATHER_NONE);
            break;

        case DEBUG_WEATHER_SANDSTORM:
            SetWeather(WEATHER_SANDSTORM);
            break;

        case DEBUG_WEATHER_SNOW:
            SetWeather(WEATHER_SNOW);
            break;

        case DEBUG_WEATHER_SNOWSTORM:
            SetWeather(WEATHER_SNOWSTORM);
            break;

        case DEBUG_WEATHER_RAIN:
            SetWeather(WEATHER_RAIN);
            break;

        case DEBUG_WEATHER_NIGHT:
            SetWeather(WEATHER_NIGHT);
            break;

        case DEBUG_WEATHER_FLAMES:
            SetWeather(WEATHER_FLAMES);
            break;

        }
    }

    return 0;
}

fu8 MapMenu_Fog_Available(struct MenuEntInfo const * info, int id)
{
    return GetChapterInfo(GetChapterInPlaySt(&gPlayStNew))->fog != 0 ? MENU_ENTRY_ENABLED : MENU_ENTRY_DISABLED;
}

u32 MapDebugMenu_Fog_Display(struct MenuProc * menu, struct MenuEntProc * ent)
{
    ClearText(&ent->text);

    Text_InsertDrawString(&ent->text, 8, ent->availability ? TEXT_COLOR_SYSTEM_GRAY : TEXT_COLOR_SYSTEM_WHITE, (char const *)3766); // さく敵
    Text_InsertDrawString(&ent->text, 64, ent->availability ? TEXT_COLOR_SYSTEM_GRAY : TEXT_COLOR_SYSTEM_BLUE, offon[gPlaySt.vision != 0]);

    PutText(&ent->text, gBg0Tm + TM_OFFSET(ent->x, ent->y));

    return 0;
}

fu8 MapDebugMenu_Fog_Select(struct MenuProc * menu, struct MenuEntProc * ent)
{
    if (ent->availability == MENU_ENTRY_DISABLED)
    {
        MenuFrozenHelpBox(menu, 3783);
        return MENU_ACTION_SE_6B;
    }

    return 0;
}

fu8 MapDebugMenu_Fog_Idle(struct MenuProc * menu, struct MenuEntProc * ent)
{
    if (ent->availability == MENU_ENTRY_DISABLED)
        return 0;

    if (IsMapFadeActive())
        return 0;

    if (gKeySt->pressed & (KEY_BUTTON_A | KEY_DPAD_RIGHT | KEY_DPAD_LEFT))
    {
        if (gPlaySt.vision == 0)
            SetFogVision(GetChapterInfo(GetChapterInPlaySt(&gPlayStNew))->fog);
        else
            SetFogVision(0);

        MapDebugMenu_Fog_Display(menu, ent);
    }

    return 0;
}

u32 MapDebugMenu_Playthrough_Display(struct MenuProc * menu, struct MenuEntProc * ent)
{
    ClearText(&ent->text);

    Text_InsertDrawString(&ent->text, 8, TEXT_COLOR_SYSTEM_WHITE, (const char *)3343); // 周回数
    Text_InsertDrawString(&ent->text, 72, TEXT_COLOR_SYSTEM_BLUE, (const char *)3344); // 周目
    Text_InsertDrawNumberOrBlank(&ent->text, 64, TEXT_COLOR_SYSTEM_BLUE, GetGlobalCompletedPlaythroughCount() + 1);

    PutText(&ent->text, gBg0Tm + TM_OFFSET(ent->x, ent->y));

    return 0;
}

fu8 MapDebugMenu_Playthrough_Idle(struct MenuProc * menu, struct MenuEntProc * ent)
{
    struct GlobalSaveInfo save_info;
    int clearCount, i;

    if (!(gKeySt->repeated & (KEY_DPAD_RIGHT | KEY_DPAD_LEFT)))
        return 0;

    clearCount = GetGlobalCompletedPlaythroughCount();

    if (gKeySt->repeated & KEY_DPAD_LEFT)
    {
        if (clearCount >= 0)
            clearCount--;
    }

    if (gKeySt->repeated & KEY_DPAD_RIGHT)
    {
        if (clearCount < MAX_CLEARED_PLAYTHROUGHS)
            clearCount++;
    }

    ReadGlobalSaveInfo(&save_info);

    for (i = 0; i < MAX_CLEARED_PLAYTHROUGHS; ++i)
        save_info.cleared_playthroughs[i] = 0;

    i = 0;

    while (i < clearCount)
    {
        i++;
        RegisterCompletedPlaythrough(&save_info, i);
    }

    if (clearCount == 0)
    {
        save_info.completed = FALSE;
        save_info.completed_true = FALSE;
        save_info.completed_hard = FALSE;
        save_info.completed_true_hard = FALSE;
    }
    else
    {
        save_info.completed = TRUE;
    }

    WriteGlobalSaveInfo(&save_info);

    MapDebugMenu_Playthrough_Display(menu, ent);

    return 0;
}

u32 MapDebugMenu_ChangeBGM_Display(struct MenuProc * menu, struct MenuEntProc * ent)
{
    ClearText(&ent->text);

    Text_InsertDrawString(&ent->text, 8, TEXT_COLOR_SYSTEM_WHITE, (const char *)3785); // BGM
    Text_InsertDrawNumberOrBlank(&ent->text, 40, TEXT_COLOR_SYSTEM_BLUE, GetCurrentBgmSong());
    Text_InsertDrawString(&ent->text, 48, TEXT_COLOR_SYSTEM_BLUE, getSongName(GetCurrentBgmSong()));

    PutText(&ent->text, gBg0Tm + TM_OFFSET(ent->x, ent->y));

    return 0;
}

#define MAX_MAP_BGM 0x49

fu8 MapDebugMenu_ChangeBGM_Idle(struct MenuProc * menu, struct MenuEntProc * ent)
{
    if (!(gKeySt->repeated & (KEY_DPAD_RIGHT | KEY_DPAD_LEFT)))
        return 0;

    int bgm = GetCurrentBgmSong();

    if (gKeySt->repeated & KEY_DPAD_LEFT)
    {
        if (bgm >= 0)
            bgm--;
        if (bgm > MAX_MAP_BGM && bgm <= SONG_NEW)
            bgm = MAX_MAP_BGM;
    }

    if (gKeySt->repeated & KEY_DPAD_RIGHT)
    {
        if (bgm < SONG_MAX - 1)
            bgm++;
        if (bgm > MAX_MAP_BGM && bgm <= SONG_NEW)
            bgm = SONG_NEW + 1;
    }

    StartBgmCore(bgm, &gMusicPlayer_MainBgm);

    MapDebugMenu_ChangeBGM_Display(menu, ent);

    return 0;
}

fu8 MapDebugMenu_ChangeBGM_Select(struct MenuProc * menu, struct MenuEntProc * ent)
{
    // reset map BGM
    StartBgmCore(GetActiveMapSong(), &gMusicPlayer_MainBgm);

    MapDebugMenu_ChangeBGM_Display(menu, ent);

    return 0;
}

fu8 MapDebugMenu_ClearStage_Select(struct MenuProc * menu, struct MenuEntProc * ent)
{
    StartEvent(GetChapterEventInfo(GetChapterInPlaySt(&gPlayStNew))->event_script_victory);
    return MENU_ACTION_NOCURSOR | MENU_ACTION_END | MENU_ACTION_SE_6A | MENU_ACTION_CLEAR;
}

struct MenuEntInfo CONST_DATA MenuEntInfo_Debug_Map[] =
{
    {
        .label = (char const *)3747, // マップ
        .msg_help = 3771,
        .available = MenuEntryEnabled,
        .on_select = MapDebugMenu_Map_Select,
        .on_idle = MapDebugMenu_Map_Idle,
    },

    {
        .label = (char const *)3748, // デブ情報
        .msg_help = 3772,
        .available = MapMenu_DebugMonitor_Available,
        .display = MapDebugMenu_Debug_Info_Display,
        .on_select = MapDebugMenu_Debug_Info_Select,
        .on_idle = MapDebugMenu_Debug_Info_Idle,
    },

    {
        .label = (char const *)3749, // 天気
        .msg_help = 3773,
        // .available = MapMenu_DebugMonitor_Available,
        .available = MenuEntryEnabled,
        .display = MapDebugMenu_Weather_Display,
        .on_select = MapDebugMenu_Weather_Select,
        .on_idle = MapDebugMenu_Weather_Idle,
    },

    {
        .label = (char const *)3750, // 索敵
        .msg_help = 3774,
        .available = MapMenu_Fog_Available,
        .display = MapDebugMenu_Fog_Display,
        .on_select = MapDebugMenu_Fog_Select,
        .on_idle = MapDebugMenu_Fog_Idle,
    },

    {
        .label = (char const *)3751, // 周回数
        .msg_help = 3775,
        .available = MenuEntryEnabled,
        .display = MapDebugMenu_Playthrough_Display,
        .on_select = func_fe6_0801AA70,
        .on_idle = MapDebugMenu_Playthrough_Idle,
    },

    {
        .label = (char const *)3810, // クリアステージ
        .msg_help = 3811,
        .available = MenuEntryEnabled,
        .on_select = MapDebugMenu_ClearStage_Select,
    },

    {
        .label = (char const *)3752, // クリアずみ
        .msg_help = 3776,
        .available = MenuEntryEnabled,
        .on_select = func_fe6_0801AA74,
    },

    {
        .label = (char const *)3753, // change map BGM
        .msg_help = 3777,
        .available = MenuEntryEnabled,
        .display = MapDebugMenu_ChangeBGM_Display,
        .on_select = MapDebugMenu_ChangeBGM_Select,
        .on_idle = MapDebugMenu_ChangeBGM_Idle,
    },

    {
        .label = (char const *)3754, // おやすみなさい
        .msg_help = 3778,
        .available = MenuEntryEnabled,
        .on_select = func_fe6_0801AEC8,
    },

    { 0 }, // end
};

fu8 InitDebugMapMenu(struct MenuProc * menu)
{
    DebugPutStr(gBg0Tm + TM_OFFSET(7, 3), GetChapterInfo(CHAPTER_1)->debug_name);
    EnableBgSync(BG0_SYNC_BIT);

    return 0;
}

struct MenuInfo const MenuInfo_Debug_Map =
{
    .rect = { 1, 1, 20, 0 },
    .entries = MenuEntInfo_Debug_Map,
    .on_init = InitDebugMapMenu,
    .on_b_press = func_fe6_0801A748,
    .on_r_press = MenuActionHelpBox,
    .on_help_box = MenuHelpBoxRegular,
};

fu8 MapMenu_Debug_Select(struct MenuProc * menu, struct MenuEntProc * ent)
{
    EndMenu(menu);
    ClearUi();

    StartMenu(&MenuInfo_Debug_Map);
    DebugInitBg(2, 0);

    return MENU_ACTION_NOCURSOR;
}

char const * CpControlNames[] =
{
    (char const *)3779,
    (char const *)3780,
    (char const *)3781,
};

u32 DebugCpControlMenu_Entry_DisplayNew(struct MenuProc * menu, struct MenuEntProc * ent)
{

    int state;

    if (ent->id != 0)
        state = gPlaySt.debug_control_green;
    else
        state = gPlaySt.debug_control_red;

    ClearText(&ent->text);

    Text_InsertDrawString(&ent->text, 8, TEXT_COLOR_SYSTEM_WHITE, (const char *)(ent->id != 0 ? 3347 : 3346));
    Text_InsertDrawString(&ent->text, 32, TEXT_COLOR_SYSTEM_BLUE, CpControlNames[state]);

    PutText(&ent->text, gBg0Tm + TM_OFFSET(ent->x, ent->y));

    return 0;
}

fu8 DebugCpControlMenu_Entry_IdleNew(struct MenuProc * menu, struct MenuEntProc * ent)
{
    if (gKeySt->pressed & (KEY_BUTTON_A | KEY_DPAD_RIGHT | KEY_DPAD_LEFT))
    {
        int state;

        if (ent->id != 0)
            state = gPlaySt.debug_control_green;
        else
            state = gPlaySt.debug_control_red;

        if (gKeySt->pressed & KEY_DPAD_LEFT)
            state--;

        if (gKeySt->pressed & (KEY_DPAD_RIGHT | KEY_BUTTON_A))
            state++;

        if (state > 2)
            state = 2;

        if (state < 0)
            state = 0;

        if (ent->id != 0)
            gPlaySt.debug_control_green = state;
        else
            gPlaySt.debug_control_red = state;

        DebugCpControlMenu_Entry_DisplayNew(menu, ent);
    }

    return 0;
}

struct MenuEntInfo CONST_DATA MenuEntInfo_DebugCpControlNew[] =
{
    {
        .label = (const char *)3346, // 赤軍
        .available = MenuEntryEnabled,
        .display = DebugCpControlMenu_Entry_DisplayNew,
        .on_idle = DebugCpControlMenu_Entry_IdleNew,
    },

    {
        .label = (const char *)3347, // 緑軍
        .available = MenuEntryEnabled,
        .display = DebugCpControlMenu_Entry_DisplayNew,
        .on_idle = DebugCpControlMenu_Entry_IdleNew,
    },

    { 0 }, // end
};

struct MenuInfo CONST_DATA MenuInfo_DebugCpControlNew =
{
    .rect = { 1, 1, 11, 0 },
    .entries = MenuEntInfo_DebugCpControlNew,
    .on_b_press = func_fe6_0801A748,
};

fu8 MapMenu_CpControl_Select(struct MenuProc * menu, struct MenuEntProc * ent)
{
    StartMenu(&MenuInfo_DebugCpControlNew);

    return MENU_ACTION_NOCURSOR | MENU_ACTION_END | MENU_ACTION_SE_6A | MENU_ACTION_CLEAR;
}

fu8 DebugSaveMenu_Save_Select(struct MenuProc * menu, struct MenuEntProc * ent)
{
    if (ent->availability == MENU_ENTRY_DISABLED)
        return MENU_ACTION_SE_6B;

    WriteSuspendSaveAlt(SAVE_SUSPEND_ALT);

    return MENU_ACTION_NOCURSOR | MENU_ACTION_END | MENU_ACTION_SE_6A | MENU_ACTION_CLEAR;
}

fu8 DebugSaveMenu_Continue_Available(struct MenuEntInfo const * info, int id)
{
    return !IsValidSuspendSaveAlt(SAVE_SUSPEND_ALT) ? MENU_ENTRY_DISABLED : MENU_ENTRY_ENABLED;
}

struct MenuEntInfo CONST_DATA MenuEntInfo_Debug_Save[] =
{
    {
        .label = (const char *)3501, // 手中断
        .available = MenuEntryEnabled,
        .on_select = DebugSaveMenu_Save_Select,
    },

    {
        .label = (const char *)3500, // 手再開
        .available = DebugSaveMenu_Continue_Available,
        .on_select = func_fe6_0801AD84,
    },

    { 0 }, // end
};

struct MenuInfo CONST_DATA MenuInfo_Debug_Save =
{
    .rect = { 1, 1, 8, 0 },
    .entries = MenuEntInfo_Debug_Save,
    .on_b_press = func_fe6_0801A748,
};

fu8 MapMenu_Save_Select(struct MenuProc * menu, struct MenuEntProc * ent)
{
    StartMenu(&MenuInfo_Debug_Save);

    return MENU_ACTION_NOCURSOR | MENU_ACTION_END | MENU_ACTION_SE_6A | MENU_ACTION_CLEAR;
}
