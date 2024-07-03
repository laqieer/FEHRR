#include "save_xmap.h"

#include "hardware.h"
#include "msg.h"
#include "util.h"
#include "unit.h"
#include "map.h"
#include "battle.h"
#include "chapterinfo.h"
#include "gbasram.h"
#include "chapterunits.h"
#include "save_core.h"
#include "savelayout.h"

#include "constants/msg.h"
#include "constants/chapters.h"

#include "bmNew.h"
#include "chapterNew.h"

extern struct ChapterStats gExtraChapterStats;

struct ChapterStats * func_fe6_08086AACNew(void)
{
    int time = (GetGameTime() - gPlayStNew.time_chapter_started) / (FRAMES_PER_SECOND * 3);

    if (time > 50 * FRAMES_PER_HOUR / (FRAMES_PER_SECOND * 3))
        time = 50 * FRAMES_PER_HOUR / (FRAMES_PER_SECOND * 3);

    gExtraChapterStats.chapter_id = GetChapterInPlaySt(&gPlayStNew);
    gExtraChapterStats.chapter_turn = gPlayStNew.turn;
    gExtraChapterStats.chapter_time = time;

    return &gExtraChapterStats;
}

struct ChapterStats * func_fe6_08086AACOld(void)
{
    return func_fe6_08086AACNew();
}
