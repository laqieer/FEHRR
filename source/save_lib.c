#include "save.h"
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

extern u8 gUnk_0203D524[0xA];
extern bool gBoolSramWorking;
extern u8 * gPidStatsSaveLoc;
extern struct PidStats gPidStats[PID_STATS_COUNT];
extern struct ChapterStats gChapterStats[CHAPTER_STATS_COUNT];
extern u8 gSuspendSlotIndex;

void RegisterChapterStatsNew(struct PlayStNew * play_st)
{
    //FIXME: expand CHAPTER_STATS_COUNT
    struct ChapterStats * chapter_stats = GetChapterStats(GetNextChapterStatsSlot());

    int time_3s = (GetGameTime() - play_st->time_chapter_started) / (FRAMES_PER_SECOND * 3);

    // 50 hours = 50 * 60 * 20
    if (time_3s > 50 * 60 * 20)
        time_3s = 50 * 60 * 20;

    //FIXME: expand chapter_stats->chapter_id
    chapter_stats->chapter_id = GetChapterInPlaySt(play_st);
    chapter_stats->chapter_turn = play_st->turn;
    chapter_stats->chapter_time = time_3s;
}

void RegisterChapterStatsOld(struct PlayStNew * playSt)
{
    RegisterChapterStatsNew(playSt);
}
