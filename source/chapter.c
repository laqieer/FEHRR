
#include "chapter.h"

#include "hardware.h"
#include "gamecontroller.h"
#include "bm.h"
#include "bmNew.h"
#include "map.h"
#include "faction.h"
#include "battle.h"
#include "trap.h"
#include "unitsprite.h"
#include "bmio.h"
#include "arena.h"
#include "action.h"
#include "chapterinfo.h"
#include "ui.h"
#include "mu.h"
#include "eventinfo.h"
#include "save.h"
#include "utilNew.h"
#include "chapterNew.h"

#include "constants/chapters.h"

void ResumeMapMainDuringPhase(ProcPtr mapmain);
void ResumeMapMainDuringAction(ProcPtr mapmain);
void ResumeMapMainDuringBerserk(ProcPtr mapmain);
void ResumeMapMainDuringArena(ProcPtr mapmain);
void ResumeMapMainDuringPhaseChange(ProcPtr mapmain);

void InitPlayConfigNew(int is_hard)
{
    CpuFill16(0, &gPlaySt, sizeof(gPlaySt));

    SetChapterInPlaySt(&gPlayStNew, CHAPTER_CH_1st);

    if (is_hard)
        gPlaySt.flags |= PLAY_FLAG_HARD;

    gPlaySt.config_battle_anim = 0; // TODO: battle anim type constants
    gPlaySt.unk_1C_2 = 0;
    gPlaySt.unk_1C_3 = 0;
    gPlaySt.config_no_auto_cursor = FALSE;
    gPlaySt.config_talk_speed = 1;
    gPlaySt.config_walk_speed = 0;
    gPlaySt.config_bgm_disable = FALSE;
    gPlaySt.config_se_disable = FALSE;
    gPlaySt.config_window_theme = UI_WINDOW_THEME_BLUE;
    gPlaySt.config_no_auto_end_turn = FALSE;
    gPlaySt.config_no_subtitle_help = FALSE;
    gPlaySt.config_battle_preview_kind = 0;
    gPlaySt.debug_control_red = 0;
    gPlaySt.debug_control_green = 0;
    gPlaySt.unk_1C_1 = 0;
    gPlaySt.unk_1D_5 = 0;
}

void InitPlayConfigOld(int is_hard)
{
    InitPlayConfigNew(is_hard);
}

void StartChapterNew(struct GenericProc * parent)
{
    InitBgs(NULL);

    SetMainFunc(OnMain);
    SetOnVBlank(OnVBlank);

    ResetBmSt();

    ApplySystemGraphics();
    ApplyUnitSpritePalettes();
    ResetChapterFlags();
    ResetUnitSprites();
    InitTraps();

    gPlaySt.faction = FACTION_GREEN;
    gPlaySt.turn = 0;
    gPlaySt.vision = GetChapterInfo(GetChapterInPlaySt(&gPlayStNew))->fog;
    gPlaySt.weather = GetChapterInfo(GetChapterInPlaySt(&gPlayStNew))->weather;

    InitBmBgLayers();

    InitMapForChapter(GetChapterInPlaySt(&gPlayStNew));
    InitMapTraps();

    gPlaySt.time_chapter_started = GetGameTime();
    gPlaySt.support_gain = 0;

    CreateInitialRedUnits();

    StartMapMain(parent);

    SetBackdropColor(0);
    SetBlendTargetANew(1, 1, 1, 1, 1); SetBlendBackdropA(1);
    SetBlendDarken(0x10);
}

void StartChapterOld(struct GenericProc * parent)
{
    StartChapterNew(parent);
}

void func_fe6_08029084New(void)
{
    InitBgs(NULL);

    SetMainFunc(OnMain);
    SetOnVBlank(OnVBlank);

    ApplySystemGraphics();
    ApplyUnitSpritePalettes();
    ResetUnitSprites();

    gBmSt.flags |= BM_FLAG_5;

    InitTraps();

    gPlaySt.weather = GetChapterInfo(GetChapterInPlaySt(&gPlayStNew))->weather;

    InitBmBgLayers();

    InitMapForChapter(GetChapterInPlaySt(&gPlayStNew));
    InitMapTraps();

    EndBmVSync();
    StartBmVSync();
    SpawnProc(ProcScr_MapTask, PROC_TREE_4);

    SetBackdropColor(0);
    SetDispEnable(1, 1, 1, 0, 0);
}

void func_fe6_08029084Old(void)
{
    func_fe6_08029084New();
}

void ResumeChapterFromSuspendNew(struct GenericProc * parent)
{
    ProcPtr mapmain;

    if (GetChapterInPlaySt(&gPlayStNew) == CHAPTER_CH_NULL)
        ReadExtraMapInfo();

    InitBgs(NULL);

    SetMainFunc(OnMain);
    SetOnVBlank(OnVBlank);

    ResetBmSt();

    SetMapCursorPosition(gPlaySt.x_cursor, gPlaySt.y_cursor);

    ApplySystemGraphics();
    ApplyUnitSpritePalettes();
    ResetUnitSprites();

    InitMapForChapter(GetChapterInPlaySt(&gPlayStNew));

    gBmSt.just_resumed = TRUE;

    mapmain = StartMapMain(parent);

    gBmSt.camera.x = GetCameraCenteredX(16*gBmSt.cursor.x);
    gBmSt.camera.y = GetCameraCenteredY(16*gBmSt.cursor.y);

    switch (gAction.suspend_point)
    {

    case SUSPEND_POINT_DURING_ACTION:
        ResumeMapMainDuringAction(mapmain);
        break;

    case SUSPEND_POINT_PLAYER_PHASE:
    case SUSPEND_POINT_AI_PHASE:
        ResumeMapMainDuringPhase(mapmain);
        break;

    case SUSPEND_POINT_BERSERK_PHASE:
        ResumeMapMainDuringBerserk(mapmain);
        break;

    case SUSPEND_POINT_DURING_ARENA:
        ResumeMapMainDuringArena(mapmain);
        break;

    case SUSPEND_POINT_CHANGE_PHASE:
        ResumeMapMainDuringPhaseChange(mapmain);
        break;

    }

    SetBlendTargetANew(1, 1, 1, 1, 1); SetBlendBackdropA(1);
    SetBlendDarken(0x10);
}

void ResumeChapterFromSuspendOld(struct GenericProc * parent)
{
    ResumeChapterFromSuspendNew(parent);
}

void InitBmDisplayNew(void)
{
    InitBgs(NULL);
    ApplySystemGraphics();
    ApplyChapterMapGraphics(GetChapterInPlaySt(&gPlayStNew));
    AllocWeatherParticles(gPlaySt.weather);
    RenderMap();
    RefreshUnitSprites();
    ApplyUnitSpritePalettes();
    ForceSyncUnitSpriteSheet();
    InitSystemTextFont();
}

void InitBmDisplayOld(void)
{
    InitBmDisplayNew();
}

void CleanupUnitsBeforeChapterNew(void)
{
    // Clear non-blue units

    FOR_UNITS(FACTION_GREEN+1, FACTION_PURPLE, unit,
    {
        ClearUnit(unit);
    })

    // Cleanup blue unit states

    if (GetChapterInPlaySt(&gPlayStNew) != CHAPTER_FINAL)
    {
        FOR_UNITS(FACTION_BLUE+1, FACTION_BLUE+0x40, unit,
        {
            SetUnitHp(unit, GetUnitMaxHp(unit));
            SetUnitStatus(unit, UNIT_STATUS_NONE);

            unit->torch = 0;
            unit->barrier = 0;

            unit->flags &= UNIT_FLAG_DEAD | UNIT_FLAG_SOLOANIM_1 | UNIT_FLAG_SOLOANIM_2;

            if (UNIT_ATTRIBUTES(unit) & UNIT_ATTR_SUPPLY)
                unit->flags &= ~UNIT_FLAG_DEAD;

            unit->flags |= UNIT_FLAG_HIDDEN | UNIT_FLAG_NOT_DEPLOYED;

            unit->rescue = 0;
        })
    }
    else
    {
        FOR_UNITS(FACTION_BLUE+1, FACTION_BLUE+0x40, unit,
        {
            unit->x = -1;
            unit->y = +1;

            SetUnitHp(unit, GetUnitMaxHp(unit));
            SetUnitStatus(unit, UNIT_STATUS_NONE);

            unit->torch = 0;
            unit->barrier = 0;

            unit->flags &= UNIT_FLAG_DEAD | UNIT_FLAG_NOT_DEPLOYED | UNIT_FLAG_SOLOANIM_1 | UNIT_FLAG_SOLOANIM_2;

            if (UNIT_ATTRIBUTES(unit) & UNIT_ATTR_SUPPLY)
                unit->flags &= ~UNIT_FLAG_DEAD;

            unit->flags |= UNIT_FLAG_HIDDEN;

            unit->rescue = 0;
        })
    }

    gPlaySt.flags &= ~PLAY_FLAG_4;
}

void CleanupUnitsBeforeChapterOld(void)
{
    CleanupUnitsBeforeChapterNew();
}
