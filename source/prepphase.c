#include "prepphase.h"

#include "hardware.h"
#include "oam.h"
#include "sound.h"
#include "sprite.h"
#include "spriteanim.h"
#include "event.h"
#include "msg.h"
#include "util.h"
#include "unit.h"
#include "unitNew.h"
#include "map.h"
#include "bmfx.h"
#include "playerphase.h"
#include "unitsprite.h"
#include "chapter.h"
#include "unitrearrange.h"
#include "chapterinfo.h"
#include "subtitlehelp.h"
#include "menuinfo.h"
#include "mu.h"
#include "eventinfo.h"
#include "statscreen.h"

#include "constants/videoalloc_global.h"
#include "constants/pids.h"
#include "constants/songs.h"
#include "constants/msg.h"

#include "bmNew.h"

enum
{
    // L_PLAYERPHASE_... labels are also valid

    L_PREPPHASE_BEGINMAP = 0x32,
};

void PrepPhase_InitNew(struct GenericProc * proc)
{
    if (!GetChapterInfo(GetChapterInPlaySt(&gPlayStNew))->has_prep)
    {
        Proc_End(proc);
        return;
    }

    if (!(gPlaySt.flags & PLAY_FLAG_PREP))
    {
        RearrangeMandatoryDeployUnits();
        InitPlayerDeployUnits();

        gPlaySt.flags |= PLAY_FLAG_PREP;
    }

    gBmSt.flags |= BM_FLAG_PREP;

    gPlaySt.vision = GetChapterInfo(GetChapterInPlaySt(&gPlayStNew))->fog;

    RefreshEntityMaps();
    RenderMap();
}

void PrepPhase_InitOld(struct GenericProc * proc)
{
    PrepPhase_InitNew(proc);
}

void PrepPhase_WatchRoyNew(struct GenericProc * proc)
{
    // struct Unit * roy = GetUnitByPid(PID_ROY);

    // SetMapCursorPosition(roy->x, roy->y);

    struct Unit * unit = GetUnitToSelectAuto();
    SetMapCursorPosition(unit->x, unit->y);

    gBmSt.camera.x = GetCameraCenteredX(gBmSt.cursor.x*16);
    gBmSt.camera.y = GetCameraCenteredY(gBmSt.cursor.y*16);
}

void PrepPhase_WatchRoyOld(struct GenericProc * proc)
{
    PrepPhase_WatchRoyNew(proc);
}

void PrepPhase_RightInitCameraNew(struct GenericProc * proc)
{
    StartBgm(SONG_22, &gMusicPlayer_030064B0);

    proc->unk4A = FALSE;

    proc->x = 0;
    proc->y = 0;

    proc->unk34 = 2;
    proc->unk38 = 0;

    proc->unk4C = (gMapSize.x*16 - DISPLAY_WIDTH)/2;
}

void PrepPhase_RightInitCameraOld(struct GenericProc * proc)
{
    PrepPhase_RightInitCameraNew(proc);
}
