#include "save.h"
#include "save_core.h"
#include "save_game.h"

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

#include "constants/chapters.h"

bool IsGameSavePastFirstChapterNew(int save_id)
{
    struct PlaySt playSt;

    if (!IsSaveValid(save_id))
        return FALSE;

    ReadGameSavePlaySt(save_id, &playSt);

    if (GetChapterInPlaySt((struct PlayStNew *)&playSt) <= CHAPTER_CH01)
        return FALSE;
    else
        return TRUE;
}

bool IsGameSavePastFirstChapterOld(int slot)
{
    return IsGameSavePastFirstChapterNew(slot);
}
