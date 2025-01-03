#include "save.h"
#include "save_core.h"
#include "save_stats.h"

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
#include "saveNew.h"

#include "constants/chapters.h"

extern struct PidStatsNew gPidStatsNew[PID_STATS_COUNT];

struct PidStatsNew * GetPidStatsNew(fu8 pid)
{
    if (pid >= PID_STATS_COUNT)
        return NULL;

    // if (GetPInfo(pid)->affinity == 0)
    //     return NULL;

    return gPidStatsNew + pid - 1;
}

struct PidStatsNew * GetPidStatsOld(fu8 pid)
{
    return GetPidStatsNew(pid);
}

void PidStatsSetDefeatInfoNew(fu8 pid, fu8 killer_pid, int defeat_cause)
{
    struct PidStatsNew * stats = GetPidStatsNew(pid);
    if (stats == NULL)
        return;

    //FIXME: read stats->defeat_chapter_new instead of stats->defeat_chapter when displaying defeat info
    stats->defeat_chapter = GetChapterInPlaySt(&gPlayStNew);
    stats->defeat_chapter_new = GetChapterInPlaySt(&gPlayStNew);
    stats->defeat_turn = gPlaySt.turn;
    stats->killer_pid = killer_pid;
    stats->defeat_cause = defeat_cause;
}

void PidStatsSetDefeatInfoOld(u8 pid, u8 killerPid, int deathCause)
{
    PidStatsSetDefeatInfoNew(pid, killerPid, deathCause);
}

void WriteCompletedPlaythroughSaveDataNew()
{
    struct GlobalSaveInfo info;
    int mode_math;

    if (!ReadGlobalSaveInfo(&info))
    {
        InitGlobalSaveInfo();
        ReadGlobalSaveInfo(&info);
    }

    RegisterCompletedPlaythrough(&info, gPlaySt.playthrough_id);

    info.completed = TRUE;

    mode_math = ((gPlaySt.flags & PLAY_FLAG_HARD) != 0) * 2;

    if (CHAPTER_FINAL == GetChapterInPlaySt(&gPlayStNew))
        mode_math++;

    switch (mode_math)
    {
        case 1:
            info.completed_true = TRUE;
            break;

        case 2:
            info.completed_hard = TRUE;
            break;

        case 3:
            info.completed_true_hard = TRUE;
            info.completed_hard = TRUE;
            info.completed_true = TRUE;
            break;

        default:
            break;
    }

    WriteGlobalSaveInfo(&info);

    gPlaySt.flags |= PLAY_FLAG_COMPLETE;
}

void WriteCompletedPlaythroughSaveDataOld()
{
    WriteCompletedPlaythroughSaveDataNew();
}
