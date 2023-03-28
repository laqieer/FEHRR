// Headers from: menuinfo.c

#include "menuinfo.h"

#include "bmfx.h"
#include "itemuse.h"
#include "prepphase.h"
#include "battlepreview.h"
#include "debugmenu.h"
#include "mapmenu.h"
#include "ui.h"
#include "save_core.h"
#include "statscreen.h"

#include "constants/msg.h"

// Headers from: debugmenu.c

#include "debugmenu.h"

#include "random.h"
#include "hardware.h"
#include "debugtext.h"
#include "text.h"
#include "face.h"
#include "faceNew.h"
#include "gamecontroller.h"
#include "bm.h"
#include "unit.h"
#include "map.h"
#include "bmfx.h"
#include "bmio.h"
#include "chapter.h"
#include "chapterinfo.h"
#include "menuinfo.h"
#include "ui.h"
#include "menu.h"

#include "constants/videoalloc_global.h"
#include "constants/chapters.h"
#include "constants/faces.h"

// New headers

#include "talk.h"
#include "voice.h"
#include "textNew.h"
#include "log.h"
#include "mapmenuNew.h"

void Menu_Redraw(struct MenuProc * proc)
{
    int i;

    if (proc->flags & MENU_FLAG_HIDDEN)
        return;

    for (i = 0; i < proc->entry_count; i++)
    {
        struct MenuEntProc * ent_proc = proc->entries[i];

        ClearText(&ent_proc->text);

        if (ent_proc->info->display != NULL)
        {
            ent_proc->info->display(proc, ent_proc);
            continue;
        }

        if (ent_proc->info->text_color)
            Text_SetColor(&ent_proc->text, ent_proc->info->text_color);

        if (ent_proc->availability == MENU_ENTRY_DISABLED)
            Text_SetColor(&ent_proc->text, TEXT_COLOR_SYSTEM_GRAY);

        Text_DrawString(&ent_proc->text, ent_proc->info->label);

        PutText(&ent_proc->text, gBg0Tm + TM_OFFSET(ent_proc->x, ent_proc->y));
    }

    // PutMenuEntryHover(proc, proc->active_entry, TRUE);

    EnableBgSync(BG0_SYNC_BIT | BG1_SYNC_BIT);
}

fu8 ChangeLanguage(struct MenuProc * menu, struct MenuEntProc * ent)
{
    ChangeLang();
    Menu_Redraw(menu);

    return MENU_ACTION_NOCURSOR | MENU_ACTION_SE_6A;
}

fu8 DebugTalk(struct MenuProc * menu, struct MenuEntProc * ent)
{
    FreezeMenu();
    EndMuralBackground();
    DebugScreenInit();
    DebugInitObj(-1, 9);
    StartTalkDebug();

    return MENU_ACTION_NOCURSOR | MENU_ACTION_SE_6A | MENU_ACTION_CLEAR;
}

fu8 DebugVoice(struct MenuProc * menu, struct MenuEntProc * ent)
{
    FreezeMenu();
    EndMuralBackground();
    DebugScreenInit();
    DebugInitObj(-1, 9);
    StartVoiceDebug();

    return MENU_ACTION_NOCURSOR | MENU_ACTION_SE_6A | MENU_ACTION_CLEAR;
}

fu8 DebugFace(struct MenuProc * menu, struct MenuEntProc * ent)
{
    FreezeMenu();
    EndMuralBackground();
    DebugScreenInit();
    DebugInitObj(-1, 9);
    StartFaceDebug();

    return MENU_ACTION_NOCURSOR | MENU_ACTION_SE_6A | MENU_ACTION_CLEAR;
}

void StartDebugManim(void);

fu8 DebugManim(struct MenuProc * menu, struct MenuEntProc * ent)
{
    FreezeMenu();
    EndMuralBackground();
    DebugScreenInit();
    DebugInitObj(-1, 9);
    StartDebugManim();

    return MENU_ACTION_NOCURSOR | MENU_ACTION_SE_6A | MENU_ACTION_CLEAR;
}

struct MenuEntInfo const MenuEntInfo_Debug_StartUp[] =
{
    {
        .label = (const char *)3726, // 表示言語切替
        .available = MenuEntryEnabled,
        .on_select = ChangeLanguage,
    },

    {
        .label = (const char *)3498, // リリースエントリ
        .available = MenuEntryEnabled,
        .on_select = func_fe6_0801AEBC,
    },

    {
        .label = (const char *)3499, // どこでも再開
        .available = func_fe6_0801ADB4,
        .on_select = func_fe6_0801ADCC,
    },
/*
    {
        .label = (const char *)3500, // 手再開
        .available = func_fe6_0801AD6C,
        .on_select = func_fe6_0801AD84,
    },
*/
    {
        .label = (const char *)3735, // 文字列テスト
        .available = MenuEntryEnabled,
        .on_select = DebugTalk,
    },

    {
        .label = (const char *)3736, // キャラクターテスト
        .available = MenuEntryEnabled,
        .on_select = DebugVoice,
    },

    {
        .label = (const char *)3737, // 顔画像テスト
        .available = MenuEntryEnabled,
        .on_select = DebugFace,
    },

    {
        .label = (const char *)3784, // manim debug
        .available = MenuEntryEnabled,
        .on_select = DebugManim,
    },

    { 0 }, // end
};

struct MenuInfo const MenuInfo_Debug_StartUp =
{
    .rect = { 9, 3, 12, 0 },
    .entries = MenuEntInfo_Debug_StartUp,
    .on_init = func_fe6_0801AB64,
    .on_end = func_fe6_0801ABE8,
};

void StartMenu_Debug_StartUp(void)
{
    SetMainFunc(OnMain);
    SetOnVBlank(OnVBlank);

    InitBmDisplay();

    DebugInitBg(2, 0);

    Assert(IsSramWorking());

    StartMuralBackground(StartMenu(&MenuInfo_Debug_StartUp), (u8 *) BG_VRAM + CHR_SIZE * 0x580, -1);
}

fu8 MapMenu_Debug_Select(struct MenuProc * menu, struct MenuEntProc * ent);

fu8 MapMenu_CpControl_Select(struct MenuProc * menu, struct MenuEntProc * ent);

fu8 MapMenu_Save_Select(struct MenuProc * menu, struct MenuEntProc * ent);

struct MenuEntInfo const MenuEntInfo_MapNew[] =
{
    {
        .label = (const char *)3738, // 危険
        .msg_help = 3767,
        .available = MenuEntryEnabled,
        .on_select = MapMenu_DangerZone_Select,
    },

    {
        .label = (const char *)3739, // 部隊
        .msg_help = MSG_654,
        .available = MenuEntryEnabled,
        .on_select = MapMenu_Unit_SelectNew,
    },

    {
        .label = (const char *)3740, // 状況
        .msg_help = MSG_655,
        .available = MenuEntryEnabled,
        .on_select = MapMenu_Status_Select,
    },

    {
        .label = (const char *)3741, // 設定
        .msg_help = MSG_656,
        .available = MenuEntryEnabled,
        .on_select = MapMenu_Options_Select,
    },

    {
        .label = (const char *)3742, // 中断
        .msg_help = MSG_657,
        .available = MapMenu_Suspend_Available,
        .on_select = MapMenu_Suspend_Select,
    },

    {
        .label = (const char *)3743, // 担当
        .msg_help = 3768,
        .available = MenuEntryEnabled,
        .on_select = MapMenu_CpControl_Select,
    },

    {
        .label = (const char *)3744, // デバ
        .msg_help = 3769,
        .available = MenuEntryEnabled,
        .on_select = MapMenu_Debug_Select,
    },
/*
    {
        .label = (const char *)3745, // 記録
        .msg_help = 3770,
        .available = MenuEntryEnabled,
        .on_select = MapMenu_Save_Select,
    },
*/
    {
        .label = (const char *)3746, // 終了
        .msg_help = MSG_658,
        .available = MenuEntryEnabled,
        .on_select = MapMenu_End_SelectNew,
    },

    { 0 }, // end
};

struct MenuInfo const MenuInfo_MapNew =
{
    .rect = { 1, 1, 6, 0 },
    .entries = MenuEntInfo_MapNew,
    .on_b_press = MenuActionClose,
    .on_r_press = MenuActionHelpBox,
    .on_help_box = MenuHelpBoxRegular,
};
