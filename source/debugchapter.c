#include "debugchapter.h"
#include "unit.h"
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

const u32 DummyEvent[] = {
    0
};

const struct UnitInfo DebugRedUnits[] = {
    {
        .pid = 100,
        .jid = JID_KING,
        .pid_lead = 100,
        .level = DEBUG_RED_UNIT_LEVEL,
        .autolevel = DEBUG_RED_UNIT_AUTOLEVEL,
        .faction_id = 2,
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

const u32 LoadDebugUnits[] = {
    0x12, (u32)&DebugBlueUnits,
    0x12, (u32)&DebugRedUnits,
    6, 0,
};

const u32 DebugChapterEventListTurn[] = {
    2, (u32)&LoadDebugUnits, 1,
    0
};

const struct ChapterEventInfo DebugChapterEvent = {
    .event_list_turn = DebugChapterEventListTurn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = DummyEvent,
    .units_blue = DebugBlueUnits,
    .units_red = DebugRedUnits,
};
