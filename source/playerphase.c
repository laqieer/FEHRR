#include "playerphase.h"

#include "hardware.h"
#include "move.h"
#include "sound.h"
#include "text.h"
#include "bm.h"
#include "bmNew.h"
#include "unit.h"
#include "map.h"
#include "mapwork.h"
#include "bmfx.h"
#include "faction.h"
#include "unitsprite.h"
#include "trap.h"
#include "chapter.h"
#include "action.h"
#include "movepath.h"
#include "prepphase.h"
#include "menuinfo.h"
#include "mu.h"
#include "eventinfo.h"
#include "statscreen.h"
#include "mapui.h"
#include "minimap.h"
#include "save.h"
#include "save_stats.h"
#include "utilNew.h"
#include "menuNew.h"
#include "mapworkNew.h"
#include "playerphaseNew.h"

#include "constants/videoalloc_global.h"
#include "constants/chapters.h"
#include "constants/pids.h"
#include "constants/songs.h"

bool CanSelectMoveTo(int x, int y);
void PlayerPhase_ContinueAction(ProcPtr proc);
void PlayerPhase_CancelAction(ProcPtr proc);
bool PlayerPhase_AttemptReMove(ProcPtr proc);

bool TrySetCursorOn(int uid);

void PlayerPhase_Suspend(ProcPtr proc);
void PlayerPhase_IdleLoop(ProcPtr proc);
void PlayerPhase_BeginMoveSelect(ProcPtr proc);
void PlayerPhase_BeginMove(ProcPtr proc);
void PlayerPhase_WaitForMove(ProcPtr proc);
void PlayerPhase_BeginActionSelect(ProcPtr proc);
bool PlayerPhase_BeginAction(ProcPtr proc);
bool PlayerPhase_WatchActiveUnit(ProcPtr proc);
void PlayerPhase_FinishAction(ProcPtr proc);
void PlayerPhase_0801BD08(ProcPtr proc);
void PlayerPhase_HandleAutoEnd(ProcPtr proc);

void PlayerPhase_IdleLoopNew(ProcPtr proc)
{
    HandlePlayerMapCursor();

    if (gKeySt->pressed & KEY_BUTTON_L)
    {
        TrySwitchViewedUnit(gBmSt.cursor.x, gBmSt.cursor.y);
        PlaySe(SONG_6B);
    }
    else if (!IsMapFadeActive())
    {
        if ((gKeySt->pressed & KEY_BUTTON_R) && gMapUnit[gBmSt.cursor.y][gBmSt.cursor.x] != 0)
        {
            EndAllMus();
            EndMapUi();
            SetStatScreenExcludedUnitFlags(UNIT_FLAG_DEAD | UNIT_FLAG_NOT_DEPLOYED | UNIT_FLAG_UNDER_ROOF | UNIT_FLAG_CONCEALED);

            StartStatScreen(GetUnit(gMapUnit[gBmSt.cursor.y][gBmSt.cursor.x]), proc);
            Proc_Goto(proc, L_PLAYERPHASE_5);

            return;
        }

        if (gKeySt->pressed & KEY_BUTTON_A)
        {
            struct Unit * unit = GetUnit(gMapUnit[gBmSt.cursor.y][gBmSt.cursor.x]);

            switch (GetPlayerSelectKind(unit))
            {

            case PLAYER_SELECT_NOUNIT:
            case PLAYER_SELECT_TURNENDED:
                EndMapUi();

                gPlaySt.x_cursor = gBmSt.cursor.x;
                gPlaySt.y_cursor = gBmSt.cursor.y;

                StartAdjustedMenu(&MenuInfo_MapNew, gBmSt.cursor_sprite_target.x - gBmSt.camera.x, 1, 23);
                StartAvailableMapMenuEvent();

                Proc_Goto(proc, L_PLAYERPHASE_IDLE);

                return;

            case PLAYER_SELECT_CONTROL:
                UnitBeginAction(unit);
                PidStatsAddAct(gActiveUnit->pinfo->id);

                Proc_Break(proc);

                goto put_cursor;

            case PLAYER_SELECT_NOCONTROL:
                UnitBeginAction(unit);
                gBmSt.swap_action_range_count = 0;

                Proc_Goto(proc, L_PLAYERPHASE_SEE_RANGE);

                goto put_cursor;

            }
        }

        if (gKeySt->pressed & KEY_BUTTON_SELECT)
        {
            struct Unit * unit = GetUnit(gMapUnit[gBmSt.cursor.y][gBmSt.cursor.x]);

            if (unit)
            {
                EndAllMus();
                ShowUnitSprite(unit);
            }

            EndMapUi();

            gPlaySt.x_cursor = gBmSt.cursor.x;
            gPlaySt.y_cursor = gBmSt.cursor.y;

            if (GetChapterInPlaySt(&gPlayStNew) == CHAPTER_TUTORIAL)
            {
                StartMenu(&MenuInfo_TutorialInterruptMenu);
            }
            else
            {
                StartAdjustedMenu(&MenuInfo_MapNew, gBmSt.cursor_sprite_target.x - gBmSt.camera.x, 1, 23);
                StartAvailableMapMenuEvent();
            }

            Proc_Goto(proc, L_PLAYERPHASE_IDLE);

            return;
        }

        if ((gKeySt->pressed & KEY_BUTTON_START) && !(gKeySt->held & KEY_BUTTON_SELECT))
        {
            struct Unit * unit = GetUnit(gMapUnit[gBmSt.cursor.y][gBmSt.cursor.x]);

            if (unit)
            {
                EndAllMus();
                ShowUnitSprite(unit);
            }

            EndMapUi();
            StartMinimap();

            Proc_Goto(proc, L_PLAYERPHASE_IDLE);

            return;
        }
    }

put_cursor:
    UnitSpriteHoverUpdate();

    PutMapCursor(gBmSt.cursor_sprite.x, gBmSt.cursor_sprite.y,
        IsUnitSpriteHoverEnabledAt(gBmSt.cursor.x, gBmSt.cursor.y) ? MAP_CURSOR_STRETCHED : MAP_CURSOR_DEFAULT);
}

void PlayerPhase_IdleLoopOld(ProcPtr proc)
{
    PlayerPhase_IdleLoopNew(proc);
}

void LimitView_InitNew(struct GenericProc * proc)
{
    int ix, iy;

    SetWinEnable(0, 0, 0);

    gBmSt.flags |= BM_FLAG_LIMITVIEW;

    RenderMap();

    for (iy = 9; iy >= 0; --iy)
        for (ix = 14; ix >= 0; --ix)
            PutLimitViewSquare(gBg2Tm, gBmSt.map_render_anchor.x + ix, gBmSt.map_render_anchor.y + iy, ix, iy);

    EnableBgSync(BG2_SYNC_BIT);
    SetBgOffset(2, 0, 0);

    switch (GetChapterInPlaySt(&gPlayStNew))
    {

    case CHAPTER_8:
    case CHAPTER_16:
    case CHAPTER_24:
    case CHAPTER_FINAL:
    case CHAPTER_8X:
    case CHAPTER_14X:
    case CHAPTER_20X_I:
        SetBlendAlpha(12, 7);
        break;

    default:
        SetBlendAlpha(10, 6);
        break;

    }

    SetBlendTargetANew(0, 0, 1, 0, 0); SetBlendBackdropA(0);
    SetBlendTargetBNew(0, 0, 0, 1, 1); SetBlendBackdropB(1);

    InitBmBgLayers();
}

void LimitView_InitOld(struct GenericProc * proc)
{
    LimitView_InitNew(proc);
}

void PlayerPhase_DisplayDangerZone() {

    GenerateDangerZoneRange(gBmSt.swap_action_range_count & 1);

    MapFill(gMapMovement, -1);

    PlaySe(0x68);

    gBmSt.flags |= (1 << 3);
    gBmSt.flags &= ~(1 << 1);

    if (gBmSt.swap_action_range_count & 1) {
        StartLimitView(5);
    } else {
        StartLimitView(3);
    }

    return;
}

struct ProcScr const ProcScr_PlayerPhaseNew[] =
{
    PROC_19,
    PROC_MARK(PROC_MARK_2),
    PROC_SLEEP(0),

PROC_LABEL(L_PLAYERPHASE_BEGIN),
    PROC_CALL(PlayerPhase_Suspend),

    PROC_CALL(RefreshEntityMaps),
    PROC_CALL(RenderMap),
    PROC_CALL(RefreshUnitSprites),

    PROC_CALL(PlayerPhase_HandleAutoEnd),

    PROC_CALL(StartMapSongBgm),

    // fallthrough

PROC_LABEL(L_PLAYERPHASE_IDLE),
    PROC_CALL(StartMapUi),
    PROC_CALL(ResetUnitSpritHover),

    PROC_REPEAT(PlayerPhase_IdleLoop),

    // fallthrough

PROC_LABEL(L_PLAYERPHASE_MOVE),
    PROC_CALL(EndMapUi),

    PROC_WHILE(IsMapFadeActive),

    PROC_CALL(ClearMapFadeUnits),
    PROC_CALL(RefreshUnitSprites),

    PROC_CALL(PlayerPhase_BeginMoveSelect),
    PROC_REPEAT(PlayerPhase_MoveSelectLoop),

    PROC_CALL(PlayerPhase_BeginMove),
    PROC_REPEAT(PlayerPhase_WaitForMove),

    // fallthrough

PROC_LABEL(L_PLAYERPHASE_ACTION_SELECT),
    PROC_REPEAT(PlayerPhase_BeginActionSelect),

    // fallthrough

PROC_LABEL(L_PLAYERPHASE_ACTION),
    PROC_WHILE_EXISTS(ProcScr_CamMove),

    PROC_CALL_2(PlayerPhase_BeginAction),

    PROC_CALL_2(DoAction),
    PROC_CALL_2(DoHandleStepTraps),

    PROC_CALL_2(StartAvailableMoveEvents),
    PROC_CALL_2(PlayerPhase_WatchActiveUnit),

    PROC_CALL(PlayerPhase_FinishAction),

    PROC_GOTO(L_PLAYERPHASE_BEGIN),

PROC_LABEL(L_PLAYERPHASE_MAPFADE_MOVE),
    PROC_WHILE(IsMapFadeActive),

    PROC_GOTO(L_PLAYERPHASE_MOVE),

PROC_LABEL(L_PLAYERPHASE_5),
    PROC_CALL(PlayerPhase_0801BD08),

    // fallthrough

PROC_LABEL(L_PLAYERPHASE_10),
    PROC_START_CHILD_LOCKING(ProcScr_ReturnFromStatScreen),

    PROC_GOTO(L_PLAYERPHASE_IDLE),

PROC_LABEL(L_PLAYERPHASE_6),
    PROC_CALL(PlayerPhase_0801BC84),

    PROC_GOTO(L_PLAYERPHASE_MOVE),

PROC_LABEL(L_PLAYERPHASE_8),
    PROC_SLEEP(0),

    PROC_CALL(EndAllMus),

    PROC_GOTO(L_PLAYERPHASE_BEGIN),

PROC_LABEL(L_PLAYERPHASE_SEE_RANGE),
    PROC_CALL(EndMapUi),

    PROC_WHILE(IsMapFadeActive),

    PROC_CALL(PlayerPhase_BeginSeeActionRange),
    PROC_REPEAT(PlayerPhase_MoveSelectLoop),

    PROC_GOTO(L_PLAYERPHASE_IDLE),

PROC_LABEL(L_PLAYERPHASE_DANGER_ZONE),
    PROC_CALL(PlayerPhase_DisplayDangerZone),
    PROC_REPEAT(PlayerPhase_MoveSelectLoop),

    PROC_GOTO(L_PLAYERPHASE_IDLE),

PROC_LABEL(L_PLAYERPHASE_END),
    PROC_WHILE(IsMapFadeActive),

    PROC_END,
};

bool TrySetCursorOnNew(int uid)
{
    struct Unit * unit = GetUnit(uid);

    if (!unit)
        return FALSE;

    if (!unit->pinfo)
        return FALSE;

    if (unit->flags & (UNIT_FLAG_HIDDEN | UNIT_FLAG_TURN_ENDED | UNIT_FLAG_DEAD))
        return FALSE;

    if (unit->status == UNIT_STATUS_BERSERK || unit->status == UNIT_STATUS_SLEEP)
        return FALSE;

    CameraMoveWatchPosition(FindProc(ProcScr_PlayerPhaseNew) ?: FindProc(ProcScr_PrepPhase), unit->x, unit->y);
    SetMapCursorPosition(unit->x, unit->y);

    return TRUE;
}

bool TrySetCursorOnOld(int uid)
{
    return TrySetCursorOnNew(uid);
}
