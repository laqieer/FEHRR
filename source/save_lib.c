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

extern u8 gUnk_0203D524[0xA];
extern bool gBoolSramWorking;
extern u8 * gPidStatsSaveLoc;
extern struct PidStats gPidStatsData[BWL_ARRAY_SIZE];
extern struct ChWinData gChWinData[WIN_ARRAY_SIZE];
extern u8 gSuspendSlotIndex;

void RegisterChWinDataNew(struct PlayStNew * playSt)
{
    //FIXME: expand WIN_ARRAY_SIZE
    struct ChWinData * winData = GetChWinData(GetFreeChWinDataIndex());

    int time = (GetGameTime() - playSt->unk_04) / 180;
    if (time > 60000)
        time = 60000;

    //FIXME: expand winData->chapter_index
    winData->chapter_index = GetChapterInPlaySt(playSt);
    winData->chapter_turn = playSt->turn;
    winData->chapter_time = time;
}

void RegisterChWinDataOld(struct PlayStNew * playSt)
{
    RegisterChWinDataNew(playSt);
}
