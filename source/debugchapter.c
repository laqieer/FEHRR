#include "debugchapter.h"
#include "unit.h"
#include "faction.h"
#include "eventscript.h"
#include "heroes.h"
#include "hero_jobs.h"
#include "constants/pids.h"
#include "constants/jids.h"
#include "constants/iids.h"

const u8 DebugChapterMap[] = {
    0, 0x32, 1, 0,
    15, 10,
    24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0,
    24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0,
    24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0,
    24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0,
    24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0,
    24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0,
    24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0,
    24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0,
    24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0,
    24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0, 24, 0,
};

const EventScr DummyEvent[] = {
    EvtEnd
};

const struct UnitInfo DebugRedUnits[] = {
    {
        .pid = PID_ZEPHIEL,
        .jid = JID_KING,
        .pid_lead = PID_ZEPHIEL,
        .level = DEBUG_RED_UNIT_LEVEL,
        .autolevel = DEBUG_RED_UNIT_AUTOLEVEL,
        .faction_id = FACTION_ID_RED,
        .items = {
            IID_ECKESACHS,
        },
        .x_load = 7,
        .y_load = 2,
        .x_move = 7,
        .y_move = 2,
    },
    {
    }
};

const EventScr LoadDebugUnits[] = {
    EvtLoadUnits(&DebugBlueUnits)
    EvtLoadUnits(&DebugRedUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr DebugChapterEventListTurn[] = {
    2, (EventScr)&LoadDebugUnits, 1,
    EvtEnd
};

const struct ChapterEventInfo DebugChapterEvent = {
    .event_list_turn = DebugChapterEventListTurn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = DummyEvent,
    .units_blue = DebugBlueUnits,
    .units_red = DebugRedUnits,
};
