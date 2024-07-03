
#include "prelude.h"
#include "bm.h"
#include "bmNew.h"

#include "hardware.h"
#include "move.h"
#include "oam.h"
#include "sound.h"
#include "proc.h"
#include "sprite.h"
#include "icon.h"
#include "text.h"
#include "face.h"
#include "util.h"
#include "unit.h"
#include "map.h"
#include "playerphase.h"
#include "bmfx.h"
#include "faction.h"
#include "unitsprite.h"
#include "support.h"
#include "trap.h"
#include "action.h"
#include "prepphase.h"
#include "chapterinfo.h"
#include "masseffect.h"
#include "ai_phase.h"
#include "ui.h"
#include "eventinfo.h"
#include "save.h"

#include "constants/videoalloc_global.h"
#include "constants/songs.h"

#include "playerphaseNew.h"

enum
{
    CAMERA_MARGIN_LEFT   = 16*3,
    CAMERA_MARGIN_RIGHT  = 16*11,
    CAMERA_MARGIN_TOP    = 16*2,
    CAMERA_MARGIN_BOTTOM = 16*7,
};

struct CamMoveProc
{
    /* 00 */ PROC_HEADER;

    /* 2C */ struct Vec2i to;
    /* 30 */ struct Vec2i from;
    /* 34 */ struct Vec2i watchedCoord;
    /* 38 */ short calibration;
    /* 3A */ short distance;
    /* 3C */ int frame;
    /* 40 */ bool8 xCalibrated;
};

struct UnkMapCursorProc
{
    /* 00 */ PROC_HEADER;

    /* 2C */ struct Vec2i to;
    /* 30 */ struct Vec2i from;
    /* 34 */ int clock;
    /* 38 */ int duration;
};

void HandleChangePhase(void);
int BmMain_ChangePhase(ProcPtr proc);
void BmMain_StartPhase(ProcPtr proc);
void BmMain_ResumePlayerPhase(ProcPtr proc);
int BmMain_UpdateTraps(ProcPtr proc);
void BmMain_SuspendBeforePhase(ProcPtr proc);
void CamMove_OnInit(struct CamMoveProc * proc);
void CamMove_OnLoop(struct CamMoveProc * proc);
void UnkMapCursor_OnLoop(struct UnkMapCursorProc * proc);

int GetActiveMapSongNew(void)
{
    switch (gPlaySt.faction)
    {

    case FACTION_RED:
        return GetChapterInfo(GetChapterInPlaySt(&gPlayStNew))->song_red_bgm;

    case FACTION_GREEN:
        return GetChapterInfo(GetChapterInPlaySt(&gPlayStNew))->song_green_bgm;

    case FACTION_BLUE:
        if (CountFactionUnitsWithoutFlags(FACTION_RED, UNIT_FLAG_DEAD | UNIT_FLAG_NOT_DEPLOYED) <= GetChapterInfo(GetChapterInPlaySt(&gPlayStNew))->victory_bgm_enemy_threshold)
            return SONG_13;

        return GetChapterInfo(GetChapterInPlaySt(&gPlayStNew))->song_blue_bgm;

    default:
        return GetChapterInfo(GetChapterInPlaySt(&gPlayStNew))->song_blue_bgm;

    }

    return 0;
}

int GetActiveMapSongOld(void)
{
    return GetActiveMapSongNew();
}

void BmMain_StartPhaseNew(ProcPtr proc)
{
    switch (gPlaySt.faction)
    {

    case FACTION_BLUE:
        SpawnProcLocking(ProcScr_PlayerPhaseNew, proc);
        break;

    case FACTION_RED:
        SpawnProcLocking(ProcScr_AiPhase, proc);
        break;

    case FACTION_GREEN:
        SpawnProcLocking(ProcScr_AiPhase, proc);
        break;

    }

    Proc_Break(proc);
}

void BmMain_StartPhaseOld(ProcPtr proc)
{
    BmMain_StartPhaseNew(proc);
}

void BmMain_ResumePlayerPhaseNew(ProcPtr proc)
{
    Proc_Goto(SpawnProcLocking(ProcScr_PlayerPhaseNew, proc), L_PLAYERPHASE_ACTION);
    Proc_Break(proc);
}

void BmMain_ResumePlayerPhaseOld(ProcPtr proc)
{
    BmMain_ResumePlayerPhaseNew(proc);
}
