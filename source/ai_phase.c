#include "ai_phase.h"

#include "bm.h"
#include "bmNew.h"
#include "ai_order.h"
#include "ai_utility.h"
#include "ai_script.h"
#include "ai_data.h"
#include "ai_unk.h"

#include "constants/chapters.h"

extern struct AiSt gAiSt;

void AiPhase_BeginNew(ProcPtr proc)
{
    int i;

    gAiSt.flags = AI_FLAG_0;
    gAiSt.danger_threshold = -1;

    gAiSt.order_state = 0;

    for (i = 0; i < 8; ++i)
        gAiSt.cmd_result[i] = 0;

    //TODO: expand AiItemConfigTable
    int chapter = GetChapterInPlaySt(&gPlayStNew);
    gAiSt.special_item_flags = chapter < CHAPTER_COUNT ? AiItemConfigTable[chapter] : 7;
    gAiSt.unk_84 = 0;

    AiUpdateUnitsSeekHealing();
    func_fe6_080308B0();

    SpawnProcLocking(ProcScr_AiOrder, proc);
}

void AiPhase_BeginOld(ProcPtr proc)
{
    AiPhase_BeginNew(proc);
}

void AiPhase_Berserk_BeginNew(ProcPtr proc)
{
    int i;

    gAiSt.flags = AI_FLAG_BERSERKED;
    gAiSt.danger_threshold = -1;

    for (i = 0; i < 8; ++i)
        gAiSt.cmd_result[i] = 0;

    //TODO: expand AiItemConfigTable
    int chapter = GetChapterInPlaySt(&gPlayStNew);
    gAiSt.special_item_flags = chapter < CHAPTER_COUNT ? AiItemConfigTable[chapter] : 7;

    AiUpdateUnitsSeekHealing();
    func_fe6_080308B0();

    SpawnProcLocking(ProcScr_AiOrder_Berserk, proc);
}

void AiPhase_Berserk_BeginOld(ProcPtr proc)
{
    AiPhase_Berserk_BeginNew(proc);
}
