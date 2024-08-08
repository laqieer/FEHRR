#include "eventinfo.h"

#include "sound.h"
#include "event.h"
#include "eventfunctions.h"
#include "eventscript.h"
#include "bm.h"
#include "bmNew.h"
#include "item.h"
#include "unit.h"
#include "map.h"
#include "unitsprite.h"
#include "battle.h"
#include "faction.h"
#include "chapterinfo.h"
#include "support.h"
#include "trap.h"
#include "chapterevents.h"
#include "chapterNew.h"

#include "constants/iids.h"
#include "constants/chapters.h"
#include "constants/pids.h"
#include "constants/songs.h"

// TODO: move elsewhere (macros shared with event.c)
#define EVT_CMD_LO(cmd) (((cmd) & 0x0000FFFF))
#define EVT_CMD_HI(cmd) (((cmd) & 0xFFFF0000) >> 16)
#define EVT_CMD_B1(cmd) (((cmd) & 0x000000FF))
#define EVT_CMD_B2(cmd) (((cmd) & 0x0000FF00) >> 8)
#define EVT_CMD_B3(cmd) (((cmd) & 0x00FF0000) >> 16)
#define EVT_CMD_B4(cmd) (((cmd) & 0xFF000000) >> 24)

// TODO: move elsewhere (probably events.h?)
extern EventListScr const EventListScr_Tutorial_ActionSelect[];
extern struct SupportTalkEnt const gSupportTalkList[];
extern struct BattleTalkExtEnt const gBattleTalkExtList[];
extern struct BattleTalkEnt const gBattleTalkList[];
extern struct BattleTalkEnt const gTriangleAttackTalkList[];
extern EventScr const EventScr_0866AAF8[];

struct EventListCmdInfo
{
    /* 00 */ int (* func)(struct EventInfo * info);
    /* 04 */ int length;
};

extern struct EventListCmdInfo const gEventListCmdInfoTable[];

bool CheckAvailableTurnEventNew(void)
{
    struct EventInfo info;

    info.list_script = GetChapterEventInfo(GetChapterInPlaySt(&gPlayStNew))->event_list_turn;

    if (SearchAvailableEvent(&info))
    {
        return TRUE;
    }

    return FALSE;
}

bool CheckAvailableTurnEventOld(void)
{
    return CheckAvailableTurnEventNew();
}

void StartAvailableTurnEventsNew(void)
{
    struct EventInfo info;

    info.list_script = GetChapterEventInfo(GetChapterInPlaySt(&gPlayStNew))->event_list_turn;

    if (SearchAvailableEvent(&info))
    {
        StartEventFromInfo(&info);

        while (SearchNextAvailableEvent(&info) != NULL)
        {
            StartEventFromInfo(&info);
        }
    }
}

void StartAvailableTurnEventsOld(void)
{
    StartAvailableTurnEventsNew();
}

bool CheckAvailableTalkEventNew(fu8 pid_a, fu8 pid_b)
{
    struct EventInfo info;

    info.list_script = GetChapterEventInfo(GetChapterInPlaySt(&gPlayStNew))->event_list_talk;
    info.pid_a = pid_a;
    info.pid_b = pid_b;

    if (SearchAvailableEvent(&info))
    {
        return TRUE;
    }

    return FALSE;
}

bool CheckAvailableTalkEventOld(fu8 pid_a, fu8 pid_b)
{
    return CheckAvailableTalkEventNew(pid_a, pid_b);
}

void StartAvailableTalkEventNew(fu8 pid_a, fu8 pid_b)
{
    struct EventInfo info;

    info.list_script = GetChapterEventInfo(GetChapterInPlaySt(&gPlayStNew))->event_list_talk;
    info.pid_a = pid_a;
    info.pid_b = pid_b;

    if (SearchAvailableEvent(&info))
    {
        StartEventFromInfo(&info);
    }
}

void StartAvailableTalkEventOld(fu8 pid_a, fu8 pid_b)
{
    StartAvailableTalkEventNew(pid_a, pid_b);
}

int GetAvailableTileEventCommandNew(fi8 x, fi8 y)
{
    struct EventInfo info;

    info.list_script = GetChapterEventInfo(GetChapterInPlaySt(&gPlayStNew))->event_list_tile;
    info.x_location = x;
    info.y_location = y;

    if (!SearchAvailableEvent(&info))
    {
        return TILE_COMMAND_NONE;
    }

    return info.tile_command;
}

int GetAvailableTileEventCommandOld(fi8 x, fi8 y)
{
    return GetAvailableTileEventCommandNew(x, y);
}

void StartAvailableTileEventNew(fi8 x, fi8 y)
{
    struct EventInfo info;

    info.list_script = GetChapterEventInfo(GetChapterInPlaySt(&gPlayStNew))->event_list_tile;
    info.x_location = x;
    info.y_location = y;

    if (SearchAvailableEvent(&info) == NULL)
        return;

    switch (info.tile_command)
    {
        case TILE_COMMAND_VISIT:
        case TILE_COMMAND_SEIZE:
            StartEventFromInfo(&info);

            if (info.given_money != 3) // TODO: constant
                return;

            // fallthrough

        case TILE_COMMAND_PILLAGE:
            StartMapChangeEvent(GetMapChangeIdAt(info.x_location, info.y_location));
            DisableEventSkip();
            return;

        case TILE_COMMAND_DOOR:
        case TILE_COMMAND_BRIDGE:
            if ((int) info.script == EVENT_NOSCRIPT)
            {
                StartMapChangeEvent(GetMapChangeIdAt(info.x_location, info.y_location));
                SetFlag(info.flag);
            }
            else
            {
                StartEventFromInfo(&info);
            }

            DisableEventSkip();
            return;

        case TILE_COMMAND_CHEST:
            if (info.given_iid == 0)
            {
                StartMapChangeEvent(GetMapChangeIdAt(info.x_location, info.y_location));
                StartEventFromInfo(&info);
            }
            else
            {
                if (info.given_iid != IID_GOLD)
                {
                    StartChestItemEvent(info.given_iid, GetMapChangeIdAt(info.x_location, info.y_location));
                }
                else
                {
                    StartChestMoneyEvent(info.given_money, GetMapChangeIdAt(info.x_location, info.y_location));
                }
            }

            DisableEventSkip();
            SetFlag(info.flag);
            return;

        case TILE_COMMAND_ARMORY:
            func_fe6_08095E10(gActiveUnit, info.script);
            return;

        case TILE_COMMAND_VENDOR:
            func_fe6_08095E30(gActiveUnit, info.script);
            return;

        case TILE_COMMAND_SECRET:
            func_fe6_08095E50(gActiveUnit, info.script);
            return;
    }
}

void StartAvailableTileEventOld(fi8 x, fi8 y)
{
    StartAvailableTileEventNew(x, y);
}

bool StartAvailableMoveSelectEventNew(void)
{
    if (GetChapterInPlaySt(&gPlayStNew) == CHAPTER_TUTORIAL)
        func_fe6_0806C6B0();

    return FALSE;
}

bool StartAvailableMoveSelectEventOld(void)
{
    return StartAvailableMoveSelectEventNew();
}

bool CheckAvailableActionSelectEventNew(void)
{
    struct EventInfo info;

    info.list_script = EventListScr_Tutorial_ActionSelect;

    if (GetChapterInPlaySt(&gPlayStNew) == CHAPTER_TUTORIAL && SearchAvailableEvent(&info) != NULL)
        return TRUE;

    return FALSE;
}

bool CheckAvailableActionSelectEventOld(void)
{
    return CheckAvailableActionSelectEventNew();
}

bool StartAvailableActionSelectEventNew(void)
{
    struct EventInfo info;

    info.list_script = EventListScr_Tutorial_ActionSelect;

    if (GetChapterInPlaySt(&gPlayStNew) == CHAPTER_TUTORIAL && SearchAvailableEvent(&info) != NULL)
    {
        StartEventFromInfo(&info);
        return TRUE;
    }

    return FALSE;
}

bool StartAvailableActionSelectEventOld(void)
{
    return StartAvailableActionSelectEventNew();
}

bool StartAvailableAttackMenuEventNew(void)
{
    if (GetChapterInPlaySt(&gPlayStNew) == CHAPTER_TUTORIAL)
    {
        func_fe6_0806C718();
    }

    return FALSE;
}

bool StartAvailableAttackMenuEventOld(void)
{
    return StartAvailableAttackMenuEventNew();
}

bool StartAvailableAttackMenuItemEventNew(void)
{
    if (GetChapterInPlaySt(&gPlayStNew) == CHAPTER_TUTORIAL)
    {
        func_fe6_0806C734();
    }

    return FALSE;
}

bool StartAvailableAttackMenuItemEventOld(void)
{
    return StartAvailableAttackMenuItemEventNew();
}

bool StartAvailableMapMenuEventNew(void)
{
    if (GetChapterInPlaySt(&gPlayStNew) == CHAPTER_TUTORIAL)
    {
        func_fe6_0806C750();
    }

    return FALSE;
}

bool StartAvailableMapMenuEventOld(void)
{
    return StartAvailableMapMenuEventNew();
}

bool CheckAvailableMoveEventNew(void)
{
    struct EventInfo info;

    info.list_script = GetChapterEventInfo(GetChapterInPlaySt(&gPlayStNew))->event_list_move;
    info.x_location = gActiveUnit->x;
    info.y_location = gActiveUnit->y;

    if (SearchAvailableEvent(&info) != NULL)
        return TRUE;

    return FALSE;
}

bool CheckAvailableMoveEventOld(void)
{
    return CheckAvailableMoveEventNew();
}

void StartAvailableMoveEventNew(void)
{
    struct EventInfo info;

    info.list_script = GetChapterEventInfo(GetChapterInPlaySt(&gPlayStNew))->event_list_move;
    info.x_location = gActiveUnit->x;
    info.y_location = gActiveUnit->y;

    if (SearchAvailableEvent(&info) != NULL)
    {
        StartEventFromInfo(&info);
    }
}

void StartAvailableMoveEventOld(void)
{
    StartAvailableMoveEventNew();
}

bool CheckChapterVictoryNew(void)
{
    if (GetChapterInPlaySt(&gPlayStNew) == CHAPTER_FINAL && CheckFlag(FLAG_114))
        SetFlag(FLAG_3);

    return CheckFlag(FLAG_3);
}

bool CheckChapterVictoryOld(void)
{
    return CheckChapterVictoryNew();
}

void StartChapterVictoryEventNew(void)
{
    if (CheckFlag(FLAG_3))
    {
        if (GetChapterInPlaySt(&gPlayStNew) == CHAPTER_FINAL)
        {
            if (IsBossDefeated())
                StartEvent(GetChapterEventInfo(GetChapterInPlaySt(&gPlayStNew))->event_script_victory);
        }
        else
        {
            if (CheckAvailableVictoryEvent())
                StartEvent(GetChapterEventInfo(GetChapterInPlaySt(&gPlayStNew))->event_script_victory);
        }
    }
}

void StartChapterVictoryEventOld(void)
{
    StartChapterVictoryEventNew();
}

void CreateInitialRedUnitsNew(void)
{
    struct EventInfo info;

    info.script = GetChapterEventInfo(GetChapterInPlaySt(&gPlayStNew))->units_red;
    info.flag = 0;

    BatchCreateUnits(info.script);
    ApplyAllHardModeBonusLevels();

    RefreshEntityMaps();
    RefreshUnitSprites();
}

void CreateInitialRedUnitsOld(void)
{
    CreateInitialRedUnitsNew();
}

struct UnitInfo const * GetDeployUnitInfoListNew(void)
{
    return GetChapterEventInfo(GetChapterInPlaySt(&gPlayStNew))->units_blue;
}

struct UnitInfo const * GetDeployUnitInfoListOld(void)
{
    return GetDeployUnitInfoListNew();
}

struct BattleTalkEnt const * GetAvailableBattleTalkExtNew(fu8 pid_a, fu8 pid_b)
{
    struct BattleTalkExtEnt const * it;

    STATIC_ASSERT(offsetof(struct BattleTalkExtEnt, msg)  == offsetof(struct BattleTalkEnt, msg));
    STATIC_ASSERT(offsetof(struct BattleTalkExtEnt, flag) == offsetof(struct BattleTalkEnt, flag));

    for (it = gBattleTalkExtList; it->pid_b != 0; it++)
    {
        if (CheckFlag(it->flag))
            continue;

        if ((pid_a == it->pid_a && pid_b == it->pid_b) || (pid_a == it->pid_b && pid_b == it->pid_a))
        {
            //FIXME: expand CHAPTER_COUNT
            if (it->chapter == CHAPTER_COUNT)
                return (struct BattleTalkEnt const *) it;

            if (GetChapterInPlaySt(&gPlayStNew) == it->chapter)
                return (struct BattleTalkEnt const *) it;
        }
    }

    return NULL;
}

struct BattleTalkEnt const * GetAvailableBattleTalkExtOld(fu8 pid_a, fu8 pid_b)
{
    return GetAvailableBattleTalkExtNew(pid_a, pid_b);
}

struct BattleTalkEnt const * GetAvailableBattleTalkNew(fu8 pid, struct BattleTalkEnt const * it)
{
    for (; it->pid != 0; it++)
    {
        if (CheckFlag(it->flag))
            continue;

        if (pid == it->pid)
        {
            if (it->chapter == CHAPTER_COUNT && !IsChapterNew(GetChapterInPlaySt(&gPlayStNew)))
                return it;

            if (GetChapterInPlaySt(&gPlayStNew) == it->chapter)
                return it;
        }
    }

    return NULL;
}

struct BattleTalkEnt const * GetAvailableBattleTalkOld(fu8 pid, struct BattleTalkEnt const * it)
{
    return GetAvailableBattleTalkNew(pid, it);
}

void StartBattleDefeatTalkNew(fu8 pid)
{
    struct BattleTalkEnt const * ent;

    ent = GetAvailableBattleTalk(pid, gBattleDefeatTalkList);

    if (ent != NULL)
    {
        if (ent->msg != 0)
            StartTalkEvent(ent->msg);

        DisableEventSkip();
        SetFlag(ent->flag);

        if (UNIT_FACTION(GetUnitByPid(pid)) == FACTION_BLUE)
            StartBgm(SONG_45, NULL);
    }

    if (GetChapterInPlaySt(&gPlayStNew) == CHAPTER_FINAL && pid == PID_IDUNN_DRAGON)
        FadeBgmOut(4);

    if (pid == PID_ROY)
    {
        SetFlag(FLAG_101);

        if (GetChapterInPlaySt(&gPlayStNew) != CHAPTER_TUTORIAL)
        {
            if (!IsChapterNew(GetChapterInPlaySt(&gPlayStNew)))
                StartEvent(EventScr_RoyDefeated);
            StartBgm(SONG_37, NULL);
        }

        gPlaySt.config_bgm_disable = TRUE;
    }
}

void StartBattleDefeatTalkOld(fu8 pid)
{
    StartBattleDefeatTalkNew(pid);
}
