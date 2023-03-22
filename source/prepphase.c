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

    if (!(gPlaySt.flags & PLAY_FLAG_4))
    {
        func_fe6_0807A07C();
        InitPlayerDeployUnits();

        gPlaySt.flags |= PLAY_FLAG_4;
    }

    gBmSt.flags |= BM_FLAG_4;

    gPlaySt.vision = GetChapterInfo(GetChapterInPlaySt(&gPlayStNew))->fog;

    RefreshEntityMaps();
    RenderMap();
}

void PrepPhase_InitOld(struct GenericProc * proc)
{
    PrepPhase_InitNew(proc);
}
