#include "ai_perform.h"

#include "hardware.h"
#include "sound.h"
#include "event.h"
#include "item.h"
#include "unit.h"
#include "map.h"
#include "mapwork.h"
#include "playerphase.h"
#include "bmfx.h"
#include "faction.h"
#include "action.h"
#include "unitsprite.h"
#include "battle.h"
#include "itemaction.h"
#include "ai_decide.h"
#include "ui.h"
#include "mu.h"
#include "eventinfo.h"

#include "constants/chapters.h"
#include "constants/terrains.h"
#include "constants/songs.h"
#include "constants/msg.h"

#include "bmNew.h"

struct AiPerformProc
{
    /* 00 */ PROC_HEADER;

    /* 2C */ bool (* func)(struct AiPerformProc * proc);
    /* 30 */ u8 unk_30;
    /* 31 */ u8 isUnitVisible;
};

void AiStartCombatAction(struct AiPerformProc * proc);
void AiStartEscapeAction(struct AiPerformProc * proc);
void AiStartStealAction(struct AiPerformProc * proc);
bool AiPillageAction(struct AiPerformProc * proc);
bool AiStaffAction(struct AiPerformProc * proc);
bool AiUseItemAction(struct AiPerformProc * proc);
bool AiRefreshAction(struct AiPerformProc * proc);
bool AiTalkAction(struct AiPerformProc * proc);
bool AiDummyAction(struct AiPerformProc * proc);
bool AiEscapeAction(struct AiPerformProc * proc);
bool AiWaitAndClearScreenAction(struct AiPerformProc * proc);

void AiEndMuAndRefreshUnitsNew(void)
{
    SetMapCursorPosition(gAiDecision.x_move, gAiDecision.y_move);

    if (gPlaySt.vision != 0 && gPlaySt.faction != FACTION_RED)
    {
        RenderMapForFade();

        func_fe6_08017EDC(gAiDecision.x_move, gAiDecision.y_move);

        RefreshEntityMaps();
        RenderMap();

        StartMapFade(TRUE);
    }
    else
    {
        func_fe6_08017EDC(gAiDecision.x_move, gAiDecision.y_move);

        RenderMap();
        RefreshEntityMaps();
    }

    if (GetChapterInPlaySt(&gPlayStNew) == CHAPTER_FINAL && CheckAvailableVictoryEvent())
        StartAvailableVictoryEvent();

    EndAllMus();

    RefreshEntityMaps();

    ShowUnitSprite(gActiveUnit);
    RefreshUnitSprites();
}

void AiEndMuAndRefreshUnitsOld(void)
{
    AiEndMuAndRefreshUnitsNew();
}
