#include "save.h"

#include "sram.h"
#include "gbaio.h"
#include "util.h"
#include "eventinfo.h"
#include "supply.h"
#include "bm.h"
#include "bmNew.h"
#include "hardware.h"
#include "faction.h"
#include "battle.h"
#include "chapter.h"
#include "unit.h"
#include "action.h"
#include "trap.h"

#include "constants/chapters.h"

void PidStatsRecordDeathDataNew(u8 pid, u8 killerPid, int deathCause)
{
    struct PidStats * bwl = GetPidStats(pid);
    if (NULL ==bwl)
        return;

    // FIXME: expand bwl->deathCh
    bwl->deathCh = GetChapterInPlaySt(&gPlayStNew);
    bwl->deathTurn = gPlaySt.turn;
    bwl->killerPid = killerPid;
    bwl->deathCause = deathCause;
}

void PidStatsRecordDeathDataOld(u8 pid, u8 killerPid, int deathCause)
{
    PidStatsRecordDeathDataNew(pid, killerPid, deathCause);
}

void SavePlayThroughDataNew()
{
    int ret, difficult;
    int mode;
    struct GlobalSaveInfo info;

    ret = LoadGlobalSaveInfo(&info);
    if (!ret)
    {
        InitGlobalSaveInfo();
        LoadGlobalSaveInfo(&info);
    }

    RegisterCompletedPlaythrough(&info, gPlaySt.playthrough_id);
    info.playedThrough = TRUE;

    difficult = PLAY_FLAG_HARD & gPlaySt.flags;
    mode = (0 != difficult) * 2;

    if (CHAPTER_UNK_19 == GetChapterInPlaySt(&gPlayStNew))
        mode++;

    switch (mode) {
    case 1:
        info.unk_0E_2 = TRUE;
        break;

    case 2:
        info.unk_0E_1 = TRUE;
        break;

    case 3:
        info.unk_0E_3 = TRUE;
        info.unk_0E_1 = TRUE;
        info.unk_0E_2 = TRUE;
        break;

    default:
        break;
    }

    SaveGlobalSaveInfo(&info);
    gPlaySt.flags |= PLAY_FLAG_COMPLETE;
}

void SavePlayThroughDataOld()
{
    SavePlayThroughDataNew();
}
