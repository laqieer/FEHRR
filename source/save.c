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

bool CheckSaveChunkChapterValidNew(int slot)
{
    struct PlaySt playSt;

    if (!VerifySaveBlockInfoByIndex(slot))
        return FALSE;

    LoadPlaySt(slot, &playSt);

    if (GetChapterInPlaySt((struct PlayStNew *)&playSt) <= 1)
        return FALSE;
    else
        return TRUE;
}

bool CheckSaveChunkChapterValidOld(int slot)
{
    return CheckSaveChunkChapterValidNew(slot);
}
