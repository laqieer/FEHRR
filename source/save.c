#include "save.h"
#include "save_core.h"
#include "save_game.h"
#include "gbasram.h"

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
#include "chapterNew.h"

#include "constants/chapters.h"

bool IsGameSavePastFirstChapterNew(int save_id)
{
    struct PlaySt playSt;

    if (!IsSaveValid(save_id))
        return FALSE;

    ReadGameSavePlaySt(save_id, &playSt);

    if (GetChapterInPlaySt((struct PlayStNew *)&playSt) <= CHAPTER_CH_1st)
        return FALSE;
    else
        return TRUE;
}

bool IsGameSavePastFirstChapterOld(int slot)
{
    return IsGameSavePastFirstChapterNew(slot);
}

bool IsValidSuspendSaveAlt(int save_id)
{
    if (!IsSramWorking())
        return FALSE;

    if (save_id != SAVE_SUSPEND && save_id != SAVE_SUSPEND_ALT)
        return FALSE;

    return ReadSaveBlockInfo(NULL, save_id);
}

void WriteSuspendSaveAlt(int save_id)
{
    struct SaveBlockInfo block_info;
    struct SuspendSavePackedUnit * buf;
    struct SuspendSaveBlock * dst;
    int i;

    if (gPlaySt.flags & PLAY_FLAG_TUTORIAL)
        return;

    if (!IsSramWorking())
        return;

    dst = GetSaveWriteAddr(save_id);

    gPlaySt.time_saved = GetGameTime();
    WriteAndVerifySramFast(&gPlaySt, &dst->play_st, sizeof(struct PlaySt));

    SaveActionRand();
    WriteAndVerifySramFast(&gAction, &dst->action, sizeof(struct Action));

    buf = (struct SuspendSavePackedUnit *)gBuf;

    for (i = 0; i < UNIT_SAVE_AMOUNT_BLUE; i++)
        EncodeSuspendSavePackedUnit(&gUnitArrayBlue[i], buf++);

    for (i = 0; i < UNIT_SAVE_AMOUNT_RED; i++)
        EncodeSuspendSavePackedUnit(&gUnitArrayRed[i], buf++);

    for (i = 0; i < UNIT_SAVE_AMOUNT_GREEN; i++)
        EncodeSuspendSavePackedUnit(&gUnitArrayGreen[i], buf++);

    WriteSramFast(gBuf, (void *) dst->units, sizeof(dst->units));

    WritePermanentFlags(dst->permanent_flags);
    WriteChapterFlags(dst->chapter_flags);
    WriteSupplyItems(dst->supply_items);
    WritePidStats(dst->pid_stats);
    WriteChapterStats(dst->chapter_stats);
    WriteTraps(dst->traps);

    block_info.magic32 = SAVE_MAGIC32;
    block_info.kind = SAVE_KIND_SUSPEND;
    WriteSaveBlockInfo(&block_info, save_id);

    gBmSt.just_resumed = FALSE;
}
