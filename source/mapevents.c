
#include "unit.h"
#include "blueunitdefs.h"
#include "redunitdefs.h"
#include "eventinfo.h"
#include "eventfunctions.h"
#include "eventscript.h"
#include "eventscripts.h"
#include "chapterevents.h"
#include "debugchapter.h"

const EventListScr EventListScr_S0001_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0001_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0001 = {
    .event_list_turn = EventListScr_S0001_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0001_Move,
    .units_red = S0001RedUnits,
    .units_blue = S0001BlueUnits1st,
    .event_script_victory = EventScr_S0001_Victory,
};

const EventListScr EventListScr_S0002_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0002_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0002 = {
    .event_list_turn = EventListScr_S0002_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0002_Move,
    .units_red = S0002RedUnits,
    .units_blue = S0002BlueUnits,
    .event_script_victory = EventScr_S0002_Victory,
};

const EventListScr EventListScr_S0101_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0101_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0101 = {
    .event_list_turn = EventListScr_S0101_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0101_Move,
    .units_red = S0101RedUnits,
    .units_blue = S0101BlueUnits,
    .event_script_victory = EventScr_S0101_Victory,
};

const EventListScr EventListScr_S0102_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0102_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0102 = {
    .event_list_turn = EventListScr_S0102_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0102_Move,
    .units_red = S0102RedUnits,
    .units_blue = S0102BlueUnits,
    .event_script_victory = EventScr_S0102_Victory,
};

const EventListScr EventListScr_S0103_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0103_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0103 = {
    .event_list_turn = EventListScr_S0103_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0103_Move,
    .units_red = S0103RedUnits,
    .units_blue = S0103BlueUnits,
    .event_script_victory = EventScr_S0103_Victory,
};

const EventListScr EventListScr_S0201_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0201_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0201 = {
    .event_list_turn = EventListScr_S0201_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0201_Move,
    .units_red = S0201RedUnits,
    .units_blue = S0201BlueUnits,
    .event_script_victory = EventScr_S0201_Victory,
};

const EventListScr EventListScr_S0202_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0202_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0202 = {
    .event_list_turn = EventListScr_S0202_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0202_Move,
    .units_red = S0202RedUnits,
    .units_blue = S0202BlueUnits,
    .event_script_victory = EventScr_S0202_Victory,
};

const EventListScr EventListScr_S0203_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0203_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0203 = {
    .event_list_turn = EventListScr_S0203_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0203_Move,
    .units_red = S0203RedUnits,
    .units_blue = S0203BlueUnits,
    .event_script_victory = EventScr_S0203_Victory,
};

const EventListScr EventListScr_S0204_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0204_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0204 = {
    .event_list_turn = EventListScr_S0204_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0204_Move,
    .units_red = S0204RedUnits,
    .units_blue = S0204BlueUnits,
    .event_script_victory = EventScr_S0204_Victory,
};

const EventListScr EventListScr_S0205_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0205_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0205 = {
    .event_list_turn = EventListScr_S0205_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0205_Move,
    .units_red = S0205RedUnits,
    .units_blue = S0205BlueUnits,
    .event_script_victory = EventScr_S0205_Victory,
};

const EventListScr EventListScr_S0301_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0301_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0301 = {
    .event_list_turn = EventListScr_S0301_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0301_Move,
    .units_red = S0301RedUnits,
    .units_blue = S0301BlueUnits,
    .event_script_victory = EventScr_S0301_Victory,
};

const EventListScr EventListScr_S0302_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0302_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0302 = {
    .event_list_turn = EventListScr_S0302_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0302_Move,
    .units_red = S0302RedUnits,
    .units_blue = S0302BlueUnits,
    .event_script_victory = EventScr_S0302_Victory,
};

const EventListScr EventListScr_S0303_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0303_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0303 = {
    .event_list_turn = EventListScr_S0303_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0303_Move,
    .units_red = S0303RedUnits,
    .units_blue = S0303BlueUnits,
    .event_script_victory = EventScr_S0303_Victory,
};

const EventListScr EventListScr_S0304_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0304_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0304 = {
    .event_list_turn = EventListScr_S0304_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0304_Move,
    .units_red = S0304RedUnits,
    .units_blue = S0304BlueUnits,
    .event_script_victory = EventScr_S0304_Victory,
};

const EventListScr EventListScr_S0305_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0305_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0305 = {
    .event_list_turn = EventListScr_S0305_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0305_Move,
    .units_red = S0305RedUnits,
    .units_blue = S0305BlueUnits,
    .event_script_victory = EventScr_S0305_Victory,
};

const EventListScr EventListScr_S0401_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0401_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0401 = {
    .event_list_turn = EventListScr_S0401_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0401_Move,
    .units_red = S0401RedUnits,
    .units_blue = S0401BlueUnits,
    .event_script_victory = EventScr_S0401_Victory,
};

const EventListScr EventListScr_S0402_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0402_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0402 = {
    .event_list_turn = EventListScr_S0402_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0402_Move,
    .units_red = S0402RedUnits,
    .units_blue = S0402BlueUnits,
    .event_script_victory = EventScr_S0402_Victory,
};

const EventListScr EventListScr_S0403_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0403_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0403 = {
    .event_list_turn = EventListScr_S0403_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0403_Move,
    .units_red = S0403RedUnits,
    .units_blue = S0403BlueUnits,
    .event_script_victory = EventScr_S0403_Victory,
};

const EventListScr EventListScr_S0404_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0404_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0404 = {
    .event_list_turn = EventListScr_S0404_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0404_Move,
    .units_red = S0404RedUnits,
    .units_blue = S0404BlueUnits,
    .event_script_victory = EventScr_S0404_Victory,
};

const EventListScr EventListScr_S0405_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0405_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0405 = {
    .event_list_turn = EventListScr_S0405_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0405_Move,
    .units_red = S0405RedUnits,
    .units_blue = S0405BlueUnits,
    .event_script_victory = EventScr_S0405_Victory,
};

const EventListScr EventListScr_S0501_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0501_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0501 = {
    .event_list_turn = EventListScr_S0501_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0501_Move,
    .units_red = S0501RedUnits,
    .units_blue = S0501BlueUnits,
    .event_script_victory = EventScr_S0501_Victory,
};

const EventListScr EventListScr_S0502_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0502_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0502 = {
    .event_list_turn = EventListScr_S0502_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0502_Move,
    .units_red = S0502RedUnits,
    .units_blue = S0502BlueUnits,
    .event_script_victory = EventScr_S0502_Victory,
};

const EventListScr EventListScr_S0503_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0503_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0503 = {
    .event_list_turn = EventListScr_S0503_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0503_Move,
    .units_red = S0503RedUnits,
    .units_blue = S0503BlueUnits,
    .event_script_victory = EventScr_S0503_Victory,
};

const EventListScr EventListScr_S0504_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0504_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0504 = {
    .event_list_turn = EventListScr_S0504_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0504_Move,
    .units_red = S0504RedUnits,
    .units_blue = S0504BlueUnits,
    .event_script_victory = EventScr_S0504_Victory,
};

const EventListScr EventListScr_S0505_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0505_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0505 = {
    .event_list_turn = EventListScr_S0505_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0505_Move,
    .units_red = S0505RedUnits,
    .units_blue = S0505BlueUnits,
    .event_script_victory = EventScr_S0505_Victory,
};

const EventListScr EventListScr_S0601_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0601_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0601 = {
    .event_list_turn = EventListScr_S0601_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0601_Move,
    .units_red = S0601RedUnits,
    .units_blue = S0601BlueUnits,
    .event_script_victory = EventScr_S0601_Victory,
};

const EventListScr EventListScr_S0602_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0602_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0602 = {
    .event_list_turn = EventListScr_S0602_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0602_Move,
    .units_red = S0602RedUnits,
    .units_blue = S0602BlueUnits,
    .event_script_victory = EventScr_S0602_Victory,
};

const EventListScr EventListScr_S0603_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0603_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0603 = {
    .event_list_turn = EventListScr_S0603_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0603_Move,
    .units_red = S0603RedUnits,
    .units_blue = S0603BlueUnits,
    .event_script_victory = EventScr_S0603_Victory,
};

const EventListScr EventListScr_S0604_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0604_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0604 = {
    .event_list_turn = EventListScr_S0604_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0604_Move,
    .units_red = S0604RedUnits,
    .units_blue = S0604BlueUnits,
    .event_script_victory = EventScr_S0604_Victory,
};

const EventListScr EventListScr_S0605_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0605_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0605 = {
    .event_list_turn = EventListScr_S0605_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0605_Move,
    .units_red = S0605RedUnits,
    .units_blue = S0605BlueUnits,
    .event_script_victory = EventScr_S0605_Victory,
};

const EventListScr EventListScr_S0701_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0701_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0701 = {
    .event_list_turn = EventListScr_S0701_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0701_Move,
    .units_red = S0701RedUnits,
    .units_blue = S0701BlueUnits,
    .event_script_victory = EventScr_S0701_Victory,
};

const EventListScr EventListScr_S0702_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0702_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0702 = {
    .event_list_turn = EventListScr_S0702_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0702_Move,
    .units_red = S0702RedUnits,
    .units_blue = S0702BlueUnits,
    .event_script_victory = EventScr_S0702_Victory,
};

const EventListScr EventListScr_S0703_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0703_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0703 = {
    .event_list_turn = EventListScr_S0703_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0703_Move,
    .units_red = S0703RedUnits,
    .units_blue = S0703BlueUnits,
    .event_script_victory = EventScr_S0703_Victory,
};

const EventListScr EventListScr_S0704_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0704_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0704 = {
    .event_list_turn = EventListScr_S0704_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0704_Move,
    .units_red = S0704RedUnits,
    .units_blue = S0704BlueUnits,
    .event_script_victory = EventScr_S0704_Victory,
};

const EventListScr EventListScr_S0705_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0705_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0705 = {
    .event_list_turn = EventListScr_S0705_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0705_Move,
    .units_red = S0705RedUnits,
    .units_blue = S0705BlueUnits,
    .event_script_victory = EventScr_S0705_Victory,
};

const EventListScr EventListScr_S0801_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0801_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0801 = {
    .event_list_turn = EventListScr_S0801_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0801_Move,
    .units_red = S0801RedUnits,
    .units_blue = S0801BlueUnits,
    .event_script_victory = EventScr_S0801_Victory,
};

const EventListScr EventListScr_S0802_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0802_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0802 = {
    .event_list_turn = EventListScr_S0802_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0802_Move,
    .units_red = S0802RedUnits,
    .units_blue = S0802BlueUnits,
    .event_script_victory = EventScr_S0802_Victory,
};

const EventListScr EventListScr_S0803_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0803_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0803 = {
    .event_list_turn = EventListScr_S0803_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0803_Move,
    .units_red = S0803RedUnits,
    .units_blue = S0803BlueUnits,
    .event_script_victory = EventScr_S0803_Victory,
};

const EventListScr EventListScr_S0804_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0804_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0804 = {
    .event_list_turn = EventListScr_S0804_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0804_Move,
    .units_red = S0804RedUnits,
    .units_blue = S0804BlueUnits,
    .event_script_victory = EventScr_S0804_Victory,
};

const EventListScr EventListScr_S0805_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0805_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0805 = {
    .event_list_turn = EventListScr_S0805_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0805_Move,
    .units_red = S0805RedUnits,
    .units_blue = S0805BlueUnits,
    .event_script_victory = EventScr_S0805_Victory,
};

const EventListScr EventListScr_S0901_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0901_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0901 = {
    .event_list_turn = EventListScr_S0901_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0901_Move,
    .units_red = S0901RedUnits,
    .units_blue = S0901BlueUnits,
    .event_script_victory = EventScr_S0901_Victory,
};

const EventListScr EventListScr_S0902_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0902_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0902 = {
    .event_list_turn = EventListScr_S0902_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0902_Move,
    .units_red = S0902RedUnits,
    .units_blue = S0902BlueUnits,
    .event_script_victory = EventScr_S0902_Victory,
};

const EventListScr EventListScr_S0903_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0903_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0903 = {
    .event_list_turn = EventListScr_S0903_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0903_Move,
    .units_red = S0903RedUnits,
    .units_blue = S0903BlueUnits,
    .event_script_victory = EventScr_S0903_Victory,
};

const EventListScr EventListScr_S0904_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0904_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0904 = {
    .event_list_turn = EventListScr_S0904_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0904_Move,
    .units_red = S0904RedUnits,
    .units_blue = S0904BlueUnits,
    .event_script_victory = EventScr_S0904_Victory,
};

const EventListScr EventListScr_S0905_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S0905_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S0905 = {
    .event_list_turn = EventListScr_S0905_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S0905_Move,
    .units_red = S0905RedUnits,
    .units_blue = S0905BlueUnits,
    .event_script_victory = EventScr_S0905_Victory,
};

const EventListScr EventListScr_S1001_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S1001_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S1001 = {
    .event_list_turn = EventListScr_S1001_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S1001_Move,
    .units_red = S1001RedUnits,
    .units_blue = S1001BlueUnits,
    .event_script_victory = EventScr_S1001_Victory,
};

const EventListScr EventListScr_S1002_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S1002_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S1002 = {
    .event_list_turn = EventListScr_S1002_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S1002_Move,
    .units_red = S1002RedUnits,
    .units_blue = S1002BlueUnits,
    .event_script_victory = EventScr_S1002_Victory,
};

const EventListScr EventListScr_S1003_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S1003_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S1003 = {
    .event_list_turn = EventListScr_S1003_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S1003_Move,
    .units_red = S1003RedUnits,
    .units_blue = S1003BlueUnits,
    .event_script_victory = EventScr_S1003_Victory,
};

const EventListScr EventListScr_S1004_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S1004_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S1004 = {
    .event_list_turn = EventListScr_S1004_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S1004_Move,
    .units_red = S1004RedUnits,
    .units_blue = S1004BlueUnits,
    .event_script_victory = EventScr_S1004_Victory,
};

const EventListScr EventListScr_S1005_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S1005_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S1005 = {
    .event_list_turn = EventListScr_S1005_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S1005_Move,
    .units_red = S1005RedUnits,
    .units_blue = S1005BlueUnits,
    .event_script_victory = EventScr_S1005_Victory,
};

const EventListScr EventListScr_S1101_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S1101 = {
    .event_list_turn = EventListScr_S1101_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S1101_Move,
    .units_red = S1101RedUnits,
    .units_blue = S1101BlueUnits,
    .event_script_victory = EventScr_S1101_Victory,
};

const EventListScr EventListScr_S1102_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S1102_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S1102 = {
    .event_list_turn = EventListScr_S1102_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S1102_Move,
    .units_red = S1102RedUnits,
    .units_blue = S1102BlueUnits,
    .event_script_victory = EventScr_S1102_Victory,
};

const EventListScr EventListScr_S1103_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S1103 = {
    .event_list_turn = EventListScr_S1103_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S1103_Move,
    .units_red = S1103RedUnits,
    .units_blue = S1103BlueUnits,
    .event_script_victory = EventScr_S1103_Victory,
};

const EventListScr EventListScr_S1104_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S1104 = {
    .event_list_turn = EventListScr_S1104_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S1104_Move,
    .units_red = S1104RedUnits,
    .units_blue = S1104BlueUnits,
    .event_script_victory = EventScr_S1104_Victory,
};

const EventListScr EventListScr_S1105_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S1105 = {
    .event_list_turn = EventListScr_S1105_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S1105_Move,
    .units_red = S1105RedUnits,
    .units_blue = S1105BlueUnits,
    .event_script_victory = EventScr_S1105_Victory,
};

const EventListScr EventListScr_S1201_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S1201_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S1201 = {
    .event_list_turn = EventListScr_S1201_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S1201_Move,
    .units_red = S1201RedUnits,
    .units_blue = S1201BlueUnits,
    .event_script_victory = EventScr_S1201_Victory,
};

const EventListScr EventListScr_S1202_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S1202_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S1202 = {
    .event_list_turn = EventListScr_S1202_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S1202_Move,
    .units_red = S1202RedUnits,
    .units_blue = S1202BlueUnits,
    .event_script_victory = EventScr_S1202_Victory,
};

const EventListScr EventListScr_S1203_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S1203 = {
    .event_list_turn = EventListScr_S1203_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S1203_Move,
    .units_red = S1203RedUnits,
    .units_blue = S1203BlueUnits,
    .event_script_victory = EventScr_S1203_Victory,
};

const EventListScr EventListScr_S1204_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S1204_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S1204 = {
    .event_list_turn = EventListScr_S1204_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S1204_Move,
    .units_red = S1204RedUnits,
    .units_blue = S1204BlueUnits,
    .event_script_victory = EventScr_S1204_Victory,
};

const EventListScr EventListScr_S1205_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S1205 = {
    .event_list_turn = EventListScr_S1205_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S1205_Move,
    .units_red = S1205RedUnits,
    .units_blue = S1205BlueUnits,
    .event_script_victory = EventScr_S1205_Victory,
};

const EventListScr EventListScr_S1301_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S1301_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S1301 = {
    .event_list_turn = EventListScr_S1301_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S1301_Move,
    .units_red = S1301RedUnits,
    .units_blue = S1301BlueUnits,
    .event_script_victory = EventScr_S1301_Victory,
};

const EventListScr EventListScr_S1302_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S1302 = {
    .event_list_turn = EventListScr_S1302_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S1302_Move,
    .units_red = S1302RedUnits,
    .units_blue = S1302BlueUnits,
    .event_script_victory = EventScr_S1302_Victory,
};

const EventListScr EventListScr_S1303_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S1303 = {
    .event_list_turn = EventListScr_S1303_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S1303_Move,
    .units_red = S1303RedUnits,
    .units_blue = S1303BlueUnits,
    .event_script_victory = EventScr_S1303_Victory,
};

const EventListScr EventListScr_S1304_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S1304 = {
    .event_list_turn = EventListScr_S1304_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S1304_Move,
    .units_red = S1304RedUnits,
    .units_blue = S1304BlueUnits,
    .event_script_victory = EventScr_S1304_Victory,
};

const EventListScr EventListScr_S1305_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S1305_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S1305 = {
    .event_list_turn = EventListScr_S1305_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S1305_Move,
    .units_red = S1305RedUnits,
    .units_blue = S1305BlueUnits,
    .event_script_victory = EventScr_S1305_Victory,
};

const EventListScr EventListScr_S1401_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S1401_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S1401 = {
    .event_list_turn = EventListScr_S1401_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S1401_Move,
    .units_red = S1401RedUnits,
    .units_blue = S1401BlueUnits,
    .event_script_victory = EventScr_S1401_Victory,
};

const EventListScr EventListScr_S1402_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S1402_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S1402 = {
    .event_list_turn = EventListScr_S1402_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S1402_Move,
    .units_red = S1402RedUnits,
    .units_blue = S1402BlueUnits,
    .event_script_victory = EventScr_S1402_Victory,
};

const EventListScr EventListScr_S1403_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S1403 = {
    .event_list_turn = EventListScr_S1403_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S1403_Move,
    .units_red = S1403RedUnits,
    .units_blue = S1403BlueUnits,
    .event_script_victory = EventScr_S1403_Victory,
};

const EventListScr EventListScr_S1404_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S1404_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S1404 = {
    .event_list_turn = EventListScr_S1404_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S1404_Move,
    .units_red = S1404RedUnits,
    .units_blue = S1404BlueUnits,
    .event_script_victory = EventScr_S1404_Victory,
};

const EventListScr EventListScr_S1405_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S1405_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S1405 = {
    .event_list_turn = EventListScr_S1405_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S1405_Move,
    .units_red = S1405RedUnits,
    .units_blue = S1405BlueUnits,
    .event_script_victory = EventScr_S1405_Victory,
};

const EventListScr EventListScr_S1501_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S1501_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S1501 = {
    .event_list_turn = EventListScr_S1501_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S1501_Move,
    .units_red = S1501RedUnits,
    .units_blue = S1501BlueUnits,
    .event_script_victory = EventScr_S1501_Victory,
};

const EventListScr EventListScr_S1601_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S1601_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S1601 = {
    .event_list_turn = EventListScr_S1601_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S1601_Move,
    .units_red = S1601RedUnits,
    .units_blue = S1601BlueUnits,
    .event_script_victory = EventScr_S1601_Victory,
};

const EventListScr EventListScr_S2011_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2011_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2011 = {
    .event_list_turn = EventListScr_S2011_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2011_Move,
    .units_red = S2011RedUnits,
    .units_blue = S2011BlueUnits,
    .event_script_victory = EventScr_S2011_Victory,
};

const EventListScr EventListScr_S2012_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2012_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2012 = {
    .event_list_turn = EventListScr_S2012_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2012_Move,
    .units_red = S2012RedUnits,
    .units_blue = S2012BlueUnits,
    .event_script_victory = EventScr_S2012_Victory,
};

const EventListScr EventListScr_S2013_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2013_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2013 = {
    .event_list_turn = EventListScr_S2013_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2013_Move,
    .units_red = S2013RedUnits,
    .units_blue = S2013BlueUnits,
    .event_script_victory = EventScr_S2013_Victory,
};

const EventListScr EventListScr_S2014_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2014_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2014 = {
    .event_list_turn = EventListScr_S2014_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2014_Move,
    .units_red = S2014RedUnits,
    .units_blue = S2014BlueUnits,
    .event_script_victory = EventScr_S2014_Victory,
};

const EventListScr EventListScr_S2015_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2015_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2015 = {
    .event_list_turn = EventListScr_S2015_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2015_Move,
    .units_red = S2015RedUnits,
    .units_blue = S2015BlueUnits,
    .event_script_victory = EventScr_S2015_Victory,
};

const EventListScr EventListScr_S2021_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2021_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2021 = {
    .event_list_turn = EventListScr_S2021_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2021_Move,
    .units_red = S2021RedUnits,
    .units_blue = S2021BlueUnits,
    .event_script_victory = EventScr_S2021_Victory,
};

const EventListScr EventListScr_S2022_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2022_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2022 = {
    .event_list_turn = EventListScr_S2022_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2022_Move,
    .units_red = S2022RedUnits,
    .units_blue = S2022BlueUnits,
    .event_script_victory = EventScr_S2022_Victory,
};

const EventListScr EventListScr_S2023_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2023_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2023 = {
    .event_list_turn = EventListScr_S2023_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2023_Move,
    .units_red = S2023RedUnits,
    .units_blue = S2023BlueUnits,
    .event_script_victory = EventScr_S2023_Victory,
};

const EventListScr EventListScr_S2024_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2024_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2024 = {
    .event_list_turn = EventListScr_S2024_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2024_Move,
    .units_red = S2024RedUnits,
    .units_blue = S2024BlueUnits,
    .event_script_victory = EventScr_S2024_Victory,
};

const EventListScr EventListScr_S2025_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2025 = {
    .event_list_turn = EventListScr_S2025_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2025_Move,
    .units_red = S2025RedUnits,
    .units_blue = S2025BlueUnits,
    .event_script_victory = EventScr_S2025_Victory,
};

const EventListScr EventListScr_S2031_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2031_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2031 = {
    .event_list_turn = EventListScr_S2031_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2031_Move,
    .units_red = S2031RedUnits,
    .units_blue = S2031BlueUnits,
    .event_script_victory = EventScr_S2031_Victory,
};

const EventListScr EventListScr_S2032_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2032_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2032 = {
    .event_list_turn = EventListScr_S2032_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2032_Move,
    .units_red = S2032RedUnits,
    .units_blue = S2032BlueUnits,
    .event_script_victory = EventScr_S2032_Victory,
};

const EventListScr EventListScr_S2033_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2033_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2033 = {
    .event_list_turn = EventListScr_S2033_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2033_Move,
    .units_red = S2033RedUnits,
    .units_blue = S2033BlueUnits,
    .event_script_victory = EventScr_S2033_Victory,
};

const EventListScr EventListScr_S2034_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2034_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2034 = {
    .event_list_turn = EventListScr_S2034_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2034_Move,
    .units_red = S2034RedUnits,
    .units_blue = S2034BlueUnits,
    .event_script_victory = EventScr_S2034_Victory,
};

const EventListScr EventListScr_S2035_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2035 = {
    .event_list_turn = EventListScr_S2035_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2035_Move,
    .units_red = S2035RedUnits,
    .units_blue = S2035BlueUnits,
    .event_script_victory = EventScr_S2035_Victory,
};

const EventListScr EventListScr_S2041_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2041_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2041 = {
    .event_list_turn = EventListScr_S2041_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2041_Move,
    .units_red = S2041RedUnits,
    .units_blue = S2041BlueUnits,
    .event_script_victory = EventScr_S2041_Victory,
};

const EventListScr EventListScr_S2042_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2042_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2042 = {
    .event_list_turn = EventListScr_S2042_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2042_Move,
    .units_red = S2042RedUnits,
    .units_blue = S2042BlueUnits,
    .event_script_victory = EventScr_S2042_Victory,
};

const EventListScr EventListScr_S2043_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2043_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2043 = {
    .event_list_turn = EventListScr_S2043_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2043_Move,
    .units_red = S2043RedUnits,
    .units_blue = S2043BlueUnits,
    .event_script_victory = EventScr_S2043_Victory,
};

const EventListScr EventListScr_S2044_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2044_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2044 = {
    .event_list_turn = EventListScr_S2044_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2044_Move,
    .units_red = S2044RedUnits,
    .units_blue = S2044BlueUnits,
    .event_script_victory = EventScr_S2044_Victory,
};

const EventListScr EventListScr_S2045_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2045 = {
    .event_list_turn = EventListScr_S2045_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2045_Move,
    .units_red = S2045RedUnits,
    .units_blue = S2045BlueUnits,
    .event_script_victory = EventScr_S2045_Victory,
};

const EventListScr EventListScr_S2051_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2051_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2051 = {
    .event_list_turn = EventListScr_S2051_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2051_Move,
    .units_red = S2051RedUnits,
    .units_blue = S2051BlueUnits,
    .event_script_victory = EventScr_S2051_Victory,
};

const EventListScr EventListScr_S2052_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2052 = {
    .event_list_turn = EventListScr_S2052_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2052_Move,
    .units_red = S2052RedUnits,
    .units_blue = S2052BlueUnits,
    .event_script_victory = EventScr_S2052_Victory,
};

const EventListScr EventListScr_S2053_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2053 = {
    .event_list_turn = EventListScr_S2053_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2053_Move,
    .units_red = S2053RedUnits,
    .units_blue = S2053BlueUnits,
    .event_script_victory = EventScr_S2053_Victory,
};

const EventListScr EventListScr_S2054_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2054_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2054 = {
    .event_list_turn = EventListScr_S2054_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2054_Move,
    .units_red = S2054RedUnits,
    .units_blue = S2054BlueUnits,
    .event_script_victory = EventScr_S2054_Victory,
};

const EventListScr EventListScr_S2055_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2055_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2055 = {
    .event_list_turn = EventListScr_S2055_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2055_Move,
    .units_red = S2055RedUnits,
    .units_blue = S2055BlueUnits,
    .event_script_victory = EventScr_S2055_Victory,
};

const EventListScr EventListScr_S2061_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2061_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2061 = {
    .event_list_turn = EventListScr_S2061_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2061_Move,
    .units_red = S2061RedUnits,
    .units_blue = S2061BlueUnits,
    .event_script_victory = EventScr_S2061_Victory,
};

const EventListScr EventListScr_S2062_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2062_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2062 = {
    .event_list_turn = EventListScr_S2062_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2062_Move,
    .units_red = S2062RedUnits,
    .units_blue = S2062BlueUnits,
    .event_script_victory = EventScr_S2062_Victory,
};

const EventListScr EventListScr_S2063_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2063_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2063 = {
    .event_list_turn = EventListScr_S2063_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2063_Move,
    .units_red = S2063RedUnits,
    .units_blue = S2063BlueUnits,
    .event_script_victory = EventScr_S2063_Victory,
};

const EventListScr EventListScr_S2064_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2064_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2064 = {
    .event_list_turn = EventListScr_S2064_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2064_Move,
    .units_red = S2064RedUnits,
    .units_blue = S2064BlueUnits,
    .event_script_victory = EventScr_S2064_Victory,
};

const EventListScr EventListScr_S2065_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2065_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2065 = {
    .event_list_turn = EventListScr_S2065_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2065_Move,
    .units_red = S2065RedUnits,
    .units_blue = S2065BlueUnits,
    .event_script_victory = EventScr_S2065_Victory,
};

const EventListScr EventListScr_S2071_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2071_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2071 = {
    .event_list_turn = EventListScr_S2071_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2071_Move,
    .units_red = S2071RedUnits,
    .units_blue = S2071BlueUnits,
    .event_script_victory = EventScr_S2071_Victory,
};

const EventListScr EventListScr_S2072_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2072_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2072 = {
    .event_list_turn = EventListScr_S2072_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2072_Move,
    .units_red = S2072RedUnits,
    .units_blue = S2072BlueUnits,
    .event_script_victory = EventScr_S2072_Victory,
};

const EventListScr EventListScr_S2073_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2073_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2073 = {
    .event_list_turn = EventListScr_S2073_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2073_Move,
    .units_red = S2073RedUnits,
    .units_blue = S2073BlueUnits,
    .event_script_victory = EventScr_S2073_Victory,
};

const EventListScr EventListScr_S2074_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2074_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2074 = {
    .event_list_turn = EventListScr_S2074_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2074_Move,
    .units_red = S2074RedUnits,
    .units_blue = S2074BlueUnits,
    .event_script_victory = EventScr_S2074_Victory,
};

const EventListScr EventListScr_S2075_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2075 = {
    .event_list_turn = EventListScr_S2075_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2075_Move,
    .units_red = S2075RedUnits,
    .units_blue = S2075BlueUnits,
    .event_script_victory = EventScr_S2075_Victory,
};

const EventListScr EventListScr_S2081_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2081_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2081 = {
    .event_list_turn = EventListScr_S2081_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2081_Move,
    .units_red = S2081RedUnits,
    .units_blue = S2081BlueUnits,
    .event_script_victory = EventScr_S2081_Victory,
};

const EventListScr EventListScr_S2082_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2082_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2082 = {
    .event_list_turn = EventListScr_S2082_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2082_Move,
    .units_red = S2082RedUnits,
    .units_blue = S2082BlueUnits,
    .event_script_victory = EventScr_S2082_Victory,
};

const EventListScr EventListScr_S2083_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2083_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2083 = {
    .event_list_turn = EventListScr_S2083_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2083_Move,
    .units_red = S2083RedUnits,
    .units_blue = S2083BlueUnits,
    .event_script_victory = EventScr_S2083_Victory,
};

const EventListScr EventListScr_S2084_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2084_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2084 = {
    .event_list_turn = EventListScr_S2084_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2084_Move,
    .units_red = S2084RedUnits,
    .units_blue = S2084BlueUnits,
    .event_script_victory = EventScr_S2084_Victory,
};

const EventListScr EventListScr_S2085_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2085_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2085 = {
    .event_list_turn = EventListScr_S2085_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2085_Move,
    .units_red = S2085RedUnits,
    .units_blue = S2085BlueUnits,
    .event_script_victory = EventScr_S2085_Victory,
};

const EventListScr EventListScr_S2091_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2091_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2091 = {
    .event_list_turn = EventListScr_S2091_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2091_Move,
    .units_red = S2091RedUnits,
    .units_blue = S2091BlueUnits,
    .event_script_victory = EventScr_S2091_Victory,
};

const EventListScr EventListScr_S2092_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2092_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2092 = {
    .event_list_turn = EventListScr_S2092_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2092_Move,
    .units_red = S2092RedUnits,
    .units_blue = S2092BlueUnits,
    .event_script_victory = EventScr_S2092_Victory,
};

const EventListScr EventListScr_S2093_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2093_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2093 = {
    .event_list_turn = EventListScr_S2093_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2093_Move,
    .units_red = S2093RedUnits,
    .units_blue = S2093BlueUnits,
    .event_script_victory = EventScr_S2093_Victory,
};

const EventListScr EventListScr_S2094_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2094_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2094 = {
    .event_list_turn = EventListScr_S2094_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2094_Move,
    .units_red = S2094RedUnits,
    .units_blue = S2094BlueUnits,
    .event_script_victory = EventScr_S2094_Victory,
};

const EventListScr EventListScr_S2095_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2095_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2095 = {
    .event_list_turn = EventListScr_S2095_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2095_Move,
    .units_red = S2095RedUnits,
    .units_blue = S2095BlueUnits,
    .event_script_victory = EventScr_S2095_Victory,
};

const EventListScr EventListScr_S2101_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2101_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2101 = {
    .event_list_turn = EventListScr_S2101_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2101_Move,
    .units_red = S2101RedUnits,
    .units_blue = S2101BlueUnits,
    .event_script_victory = EventScr_S2101_Victory,
};

const EventListScr EventListScr_S2102_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2102_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2102 = {
    .event_list_turn = EventListScr_S2102_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2102_Move,
    .units_red = S2102RedUnits,
    .units_blue = S2102BlueUnits,
    .event_script_victory = EventScr_S2102_Victory,
};

const EventListScr EventListScr_S2103_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2103_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2103 = {
    .event_list_turn = EventListScr_S2103_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2103_Move,
    .units_red = S2103RedUnits,
    .units_blue = S2103BlueUnits,
    .event_script_victory = EventScr_S2103_Victory,
};

const EventListScr EventListScr_S2104_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2104_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2104 = {
    .event_list_turn = EventListScr_S2104_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2104_Move,
    .units_red = S2104RedUnits,
    .units_blue = S2104BlueUnits,
    .event_script_victory = EventScr_S2104_Victory,
};

const EventListScr EventListScr_S2105_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2105_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2105 = {
    .event_list_turn = EventListScr_S2105_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2105_Move,
    .units_red = S2105RedUnits,
    .units_blue = S2105BlueUnits,
    .event_script_victory = EventScr_S2105_Victory,
};

const EventListScr EventListScr_S2111_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2111 = {
    .event_list_turn = EventListScr_S2111_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2111_Move,
    .units_red = S2111RedUnits,
    .units_blue = S2111BlueUnits,
    .event_script_victory = EventScr_S2111_Victory,
};

const EventListScr EventListScr_S2112_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2112_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2112 = {
    .event_list_turn = EventListScr_S2112_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2112_Move,
    .units_red = S2112RedUnits,
    .units_blue = S2112BlueUnits,
    .event_script_victory = EventScr_S2112_Victory,
};

const EventListScr EventListScr_S2113_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2113_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2113 = {
    .event_list_turn = EventListScr_S2113_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2113_Move,
    .units_red = S2113RedUnits,
    .units_blue = S2113BlueUnits,
    .event_script_victory = EventScr_S2113_Victory,
};

const EventListScr EventListScr_S2114_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2114_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2114 = {
    .event_list_turn = EventListScr_S2114_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2114_Move,
    .units_red = S2114RedUnits,
    .units_blue = S2114BlueUnits,
    .event_script_victory = EventScr_S2114_Victory,
};

const EventListScr EventListScr_S2115_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2115 = {
    .event_list_turn = EventListScr_S2115_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2115_Move,
    .units_red = S2115RedUnits,
    .units_blue = S2115BlueUnits,
    .event_script_victory = EventScr_S2115_Victory,
};

const EventListScr EventListScr_S2121_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2121_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2121 = {
    .event_list_turn = EventListScr_S2121_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2121_Move,
    .units_red = S2121RedUnits,
    .units_blue = S2121BlueUnits,
    .event_script_victory = EventScr_S2121_Victory,
};

const EventListScr EventListScr_S2122_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2122_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2122 = {
    .event_list_turn = EventListScr_S2122_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2122_Move,
    .units_red = S2122RedUnits,
    .units_blue = S2122BlueUnits,
    .event_script_victory = EventScr_S2122_Victory,
};

const EventListScr EventListScr_S2123_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2123_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2123 = {
    .event_list_turn = EventListScr_S2123_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2123_Move,
    .units_red = S2123RedUnits,
    .units_blue = S2123BlueUnits,
    .event_script_victory = EventScr_S2123_Victory,
};

const EventListScr EventListScr_S2124_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2124_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2124 = {
    .event_list_turn = EventListScr_S2124_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2124_Move,
    .units_red = S2124RedUnits,
    .units_blue = S2124BlueUnits,
    .event_script_victory = EventScr_S2124_Victory,
};

const EventListScr EventListScr_S2125_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2125_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2125 = {
    .event_list_turn = EventListScr_S2125_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2125_Move,
    .units_red = S2125RedUnits,
    .units_blue = S2125BlueUnits,
    .event_script_victory = EventScr_S2125_Victory,
};

const EventListScr EventListScr_S2131_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2131_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2131 = {
    .event_list_turn = EventListScr_S2131_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2131_Move,
    .units_red = S2131RedUnits,
    .units_blue = S2131BlueUnits,
    .event_script_victory = EventScr_S2131_Victory,
};

const EventListScr EventListScr_S2132_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2132_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2132 = {
    .event_list_turn = EventListScr_S2132_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2132_Move,
    .units_red = S2132RedUnits,
    .units_blue = S2132BlueUnits,
    .event_script_victory = EventScr_S2132_Victory,
};

const EventListScr EventListScr_S2133_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2133_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2133 = {
    .event_list_turn = EventListScr_S2133_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2133_Move,
    .units_red = S2133RedUnits,
    .units_blue = S2133BlueUnits,
    .event_script_victory = EventScr_S2133_Victory,
};

const EventListScr EventListScr_S2134_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2134_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2134 = {
    .event_list_turn = EventListScr_S2134_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2134_Move,
    .units_red = S2134RedUnits,
    .units_blue = S2134BlueUnits,
    .event_script_victory = EventScr_S2134_Victory,
};

const EventListScr EventListScr_S2135_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S2135_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S2135 = {
    .event_list_turn = EventListScr_S2135_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S2135_Move,
    .units_red = S2135RedUnits,
    .units_blue = S2135BlueUnits,
    .event_script_victory = EventScr_S2135_Victory,
};

const EventListScr EventListScr_S3011_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3011_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3011 = {
    .event_list_turn = EventListScr_S3011_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3011_Move,
    .units_red = S3011RedUnits,
    .units_blue = S3011BlueUnits,
    .event_script_victory = EventScr_S3011_Victory,
};

const EventListScr EventListScr_S3012_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3012_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3012 = {
    .event_list_turn = EventListScr_S3012_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3012_Move,
    .units_red = S3012RedUnits,
    .units_blue = S3012BlueUnits,
    .event_script_victory = EventScr_S3012_Victory,
};

const EventListScr EventListScr_S3013_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3013_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3013 = {
    .event_list_turn = EventListScr_S3013_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3013_Move,
    .units_red = S3013RedUnits,
    .units_blue = S3013BlueUnits,
    .event_script_victory = EventScr_S3013_Victory,
};

const EventListScr EventListScr_S3014_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3014_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3014 = {
    .event_list_turn = EventListScr_S3014_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3014_Move,
    .units_red = S3014RedUnits,
    .units_blue = S3014BlueUnits,
    .event_script_victory = EventScr_S3014_Victory,
};

const EventListScr EventListScr_S3015_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3015_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3015 = {
    .event_list_turn = EventListScr_S3015_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3015_Move,
    .units_red = S3015RedUnits,
    .units_blue = S3015BlueUnits,
    .event_script_victory = EventScr_S3015_Victory,
};

const EventListScr EventListScr_S3021_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3021_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3021 = {
    .event_list_turn = EventListScr_S3021_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3021_Move,
    .units_red = S3021RedUnits,
    .units_blue = S3021BlueUnits,
    .event_script_victory = EventScr_S3021_Victory,
};

const EventListScr EventListScr_S3022_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3022_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3022 = {
    .event_list_turn = EventListScr_S3022_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3022_Move,
    .units_red = S3022RedUnits,
    .units_blue = S3022BlueUnits,
    .event_script_victory = EventScr_S3022_Victory,
};

const EventListScr EventListScr_S3023_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3023_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3023 = {
    .event_list_turn = EventListScr_S3023_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3023_Move,
    .units_red = S3023RedUnits,
    .units_blue = S3023BlueUnits,
    .event_script_victory = EventScr_S3023_Victory,
};

const EventListScr EventListScr_S3024_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3024_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3024 = {
    .event_list_turn = EventListScr_S3024_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3024_Move,
    .units_red = S3024RedUnits,
    .units_blue = S3024BlueUnits,
    .event_script_victory = EventScr_S3024_Victory,
};

const EventListScr EventListScr_S3025_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3025_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3025 = {
    .event_list_turn = EventListScr_S3025_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3025_Move,
    .units_red = S3025RedUnits,
    .units_blue = S3025BlueUnits,
    .event_script_victory = EventScr_S3025_Victory,
};

const EventListScr EventListScr_S3031_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3031_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3031 = {
    .event_list_turn = EventListScr_S3031_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3031_Move,
    .units_red = S3031RedUnits,
    .units_blue = S3031BlueUnits,
    .event_script_victory = EventScr_S3031_Victory,
};

const EventListScr EventListScr_S3032_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3032_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3032 = {
    .event_list_turn = EventListScr_S3032_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3032_Move,
    .units_red = S3032RedUnits,
    .units_blue = S3032BlueUnits,
    .event_script_victory = EventScr_S3032_Victory,
};

const EventListScr EventListScr_S3033_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3033_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3033 = {
    .event_list_turn = EventListScr_S3033_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3033_Move,
    .units_red = S3033RedUnits,
    .units_blue = S3033BlueUnits,
    .event_script_victory = EventScr_S3033_Victory,
};

const EventListScr EventListScr_S3034_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3034_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3034 = {
    .event_list_turn = EventListScr_S3034_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3034_Move,
    .units_red = S3034RedUnits,
    .units_blue = S3034BlueUnits,
    .event_script_victory = EventScr_S3034_Victory,
};

const EventListScr EventListScr_S3035_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3035_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3035 = {
    .event_list_turn = EventListScr_S3035_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3035_Move,
    .units_red = S3035RedUnits,
    .units_blue = S3035BlueUnits,
    .event_script_victory = EventScr_S3035_Victory,
};

const EventListScr EventListScr_S3041_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3041_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3041 = {
    .event_list_turn = EventListScr_S3041_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3041_Move,
    .units_red = S3041RedUnits,
    .units_blue = S3041BlueUnits,
    .event_script_victory = EventScr_S3041_Victory,
};

const EventListScr EventListScr_S3042_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3042_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3042 = {
    .event_list_turn = EventListScr_S3042_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3042_Move,
    .units_red = S3042RedUnits,
    .units_blue = S3042BlueUnits,
    .event_script_victory = EventScr_S3042_Victory,
};

const EventListScr EventListScr_S3043_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3043_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3043 = {
    .event_list_turn = EventListScr_S3043_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3043_Move,
    .units_red = S3043RedUnits,
    .units_blue = S3043BlueUnits,
    .event_script_victory = EventScr_S3043_Victory,
};

const EventListScr EventListScr_S3044_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3044_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3044 = {
    .event_list_turn = EventListScr_S3044_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3044_Move,
    .units_red = S3044RedUnits,
    .units_blue = S3044BlueUnits,
    .event_script_victory = EventScr_S3044_Victory,
};

const EventListScr EventListScr_S3045_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3045_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3045 = {
    .event_list_turn = EventListScr_S3045_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3045_Move,
    .units_red = S3045RedUnits,
    .units_blue = S3045BlueUnits,
    .event_script_victory = EventScr_S3045_Victory,
};

const EventListScr EventListScr_S3051_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3051_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3051 = {
    .event_list_turn = EventListScr_S3051_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3051_Move,
    .units_red = S3051RedUnits,
    .units_blue = S3051BlueUnits,
    .event_script_victory = EventScr_S3051_Victory,
};

const EventListScr EventListScr_S3052_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3052_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3052 = {
    .event_list_turn = EventListScr_S3052_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3052_Move,
    .units_red = S3052RedUnits,
    .units_blue = S3052BlueUnits,
    .event_script_victory = EventScr_S3052_Victory,
};

const EventListScr EventListScr_S3053_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3053_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3053 = {
    .event_list_turn = EventListScr_S3053_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3053_Move,
    .units_red = S3053RedUnits,
    .units_blue = S3053BlueUnits,
    .event_script_victory = EventScr_S3053_Victory,
};

const EventListScr EventListScr_S3054_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3054_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3054 = {
    .event_list_turn = EventListScr_S3054_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3054_Move,
    .units_red = S3054RedUnits,
    .units_blue = S3054BlueUnits,
    .event_script_victory = EventScr_S3054_Victory,
};

const EventListScr EventListScr_S3055_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3055_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3055 = {
    .event_list_turn = EventListScr_S3055_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3055_Move,
    .units_red = S3055RedUnits,
    .units_blue = S3055BlueUnits,
    .event_script_victory = EventScr_S3055_Victory,
};

const EventListScr EventListScr_S3061_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3061_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3061 = {
    .event_list_turn = EventListScr_S3061_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3061_Move,
    .units_red = S3061RedUnits,
    .units_blue = S3061BlueUnits,
    .event_script_victory = EventScr_S3061_Victory,
};

const EventListScr EventListScr_S3062_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3062_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3062 = {
    .event_list_turn = EventListScr_S3062_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3062_Move,
    .units_red = S3062RedUnits,
    .units_blue = S3062BlueUnits,
    .event_script_victory = EventScr_S3062_Victory,
};

const EventListScr EventListScr_S3063_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3063_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3063 = {
    .event_list_turn = EventListScr_S3063_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3063_Move,
    .units_red = S3063RedUnits,
    .units_blue = S3063BlueUnits,
    .event_script_victory = EventScr_S3063_Victory,
};

const EventListScr EventListScr_S3064_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3064_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3064 = {
    .event_list_turn = EventListScr_S3064_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3064_Move,
    .units_red = S3064RedUnits,
    .units_blue = S3064BlueUnits,
    .event_script_victory = EventScr_S3064_Victory,
};

const EventListScr EventListScr_S3065_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3065_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3065 = {
    .event_list_turn = EventListScr_S3065_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3065_Move,
    .units_red = S3065RedUnits,
    .units_blue = S3065BlueUnits,
    .event_script_victory = EventScr_S3065_Victory,
};

const EventListScr EventListScr_S3071_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3071_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3071 = {
    .event_list_turn = EventListScr_S3071_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3071_Move,
    .units_red = S3071RedUnits,
    .units_blue = S3071BlueUnits,
    .event_script_victory = EventScr_S3071_Victory,
};

const EventListScr EventListScr_S3072_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3072_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3072 = {
    .event_list_turn = EventListScr_S3072_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3072_Move,
    .units_red = S3072RedUnits,
    .units_blue = S3072BlueUnits,
    .event_script_victory = EventScr_S3072_Victory,
};

const EventListScr EventListScr_S3073_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3073_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3073 = {
    .event_list_turn = EventListScr_S3073_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3073_Move,
    .units_red = S3073RedUnits,
    .units_blue = S3073BlueUnits,
    .event_script_victory = EventScr_S3073_Victory,
};

const EventListScr EventListScr_S3074_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3074_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3074 = {
    .event_list_turn = EventListScr_S3074_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3074_Move,
    .units_red = S3074RedUnits,
    .units_blue = S3074BlueUnits,
    .event_script_victory = EventScr_S3074_Victory,
};

const EventListScr EventListScr_S3075_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3075_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3075 = {
    .event_list_turn = EventListScr_S3075_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3075_Move,
    .units_red = S3075RedUnits,
    .units_blue = S3075BlueUnits,
    .event_script_victory = EventScr_S3075_Victory,
};

const EventListScr EventListScr_S3081_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3081_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3081 = {
    .event_list_turn = EventListScr_S3081_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3081_Move,
    .units_red = S3081RedUnits,
    .units_blue = S3081BlueUnits,
    .event_script_victory = EventScr_S3081_Victory,
};

const EventListScr EventListScr_S3082_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3082_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3082 = {
    .event_list_turn = EventListScr_S3082_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3082_Move,
    .units_red = S3082RedUnits,
    .units_blue = S3082BlueUnits,
    .event_script_victory = EventScr_S3082_Victory,
};

const EventListScr EventListScr_S3083_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3083_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3083 = {
    .event_list_turn = EventListScr_S3083_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3083_Move,
    .units_red = S3083RedUnits,
    .units_blue = S3083BlueUnits,
    .event_script_victory = EventScr_S3083_Victory,
};

const EventListScr EventListScr_S3084_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3084_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3084 = {
    .event_list_turn = EventListScr_S3084_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3084_Move,
    .units_red = S3084RedUnits,
    .units_blue = S3084BlueUnits,
    .event_script_victory = EventScr_S3084_Victory,
};

const EventListScr EventListScr_S3085_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3085_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3085 = {
    .event_list_turn = EventListScr_S3085_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3085_Move,
    .units_red = S3085RedUnits,
    .units_blue = S3085BlueUnits,
    .event_script_victory = EventScr_S3085_Victory,
};

const EventListScr EventListScr_S3091_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3091_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3091 = {
    .event_list_turn = EventListScr_S3091_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3091_Move,
    .units_red = S3091RedUnits,
    .units_blue = S3091BlueUnits,
    .event_script_victory = EventScr_S3091_Victory,
};

const EventListScr EventListScr_S3092_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3092_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3092 = {
    .event_list_turn = EventListScr_S3092_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3092_Move,
    .units_red = S3092RedUnits,
    .units_blue = S3092BlueUnits,
    .event_script_victory = EventScr_S3092_Victory,
};

const EventListScr EventListScr_S3093_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3093_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3093 = {
    .event_list_turn = EventListScr_S3093_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3093_Move,
    .units_red = S3093RedUnits,
    .units_blue = S3093BlueUnits,
    .event_script_victory = EventScr_S3093_Victory,
};

const EventListScr EventListScr_S3094_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3094_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3094 = {
    .event_list_turn = EventListScr_S3094_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3094_Move,
    .units_red = S3094RedUnits,
    .units_blue = S3094BlueUnits,
    .event_script_victory = EventScr_S3094_Victory,
};

const EventListScr EventListScr_S3095_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3095_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3095 = {
    .event_list_turn = EventListScr_S3095_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3095_Move,
    .units_red = S3095RedUnits,
    .units_blue = S3095BlueUnits,
    .event_script_victory = EventScr_S3095_Victory,
};

const EventListScr EventListScr_S3101_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3101_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3101 = {
    .event_list_turn = EventListScr_S3101_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3101_Move,
    .units_red = S3101RedUnits,
    .units_blue = S3101BlueUnits,
    .event_script_victory = EventScr_S3101_Victory,
};

const EventListScr EventListScr_S3102_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3102_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3102 = {
    .event_list_turn = EventListScr_S3102_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3102_Move,
    .units_red = S3102RedUnits,
    .units_blue = S3102BlueUnits,
    .event_script_victory = EventScr_S3102_Victory,
};

const EventListScr EventListScr_S3103_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3103_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3103 = {
    .event_list_turn = EventListScr_S3103_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3103_Move,
    .units_red = S3103RedUnits,
    .units_blue = S3103BlueUnits,
    .event_script_victory = EventScr_S3103_Victory,
};

const EventListScr EventListScr_S3104_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3104_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3104 = {
    .event_list_turn = EventListScr_S3104_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3104_Move,
    .units_red = S3104RedUnits,
    .units_blue = S3104BlueUnits,
    .event_script_victory = EventScr_S3104_Victory,
};

const EventListScr EventListScr_S3105_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3105_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3105 = {
    .event_list_turn = EventListScr_S3105_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3105_Move,
    .units_red = S3105RedUnits,
    .units_blue = S3105BlueUnits,
    .event_script_victory = EventScr_S3105_Victory,
};

const EventListScr EventListScr_S3111_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3111_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3111 = {
    .event_list_turn = EventListScr_S3111_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3111_Move,
    .units_red = S3111RedUnits,
    .units_blue = S3111BlueUnits,
    .event_script_victory = EventScr_S3111_Victory,
};

const EventListScr EventListScr_S3112_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3112_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3112 = {
    .event_list_turn = EventListScr_S3112_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3112_Move,
    .units_red = S3112RedUnits,
    .units_blue = S3112BlueUnits,
    .event_script_victory = EventScr_S3112_Victory,
};

const EventListScr EventListScr_S3113_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3113_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3113 = {
    .event_list_turn = EventListScr_S3113_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3113_Move,
    .units_red = S3113RedUnits,
    .units_blue = S3113BlueUnits,
    .event_script_victory = EventScr_S3113_Victory,
};

const EventListScr EventListScr_S3114_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3114_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3114 = {
    .event_list_turn = EventListScr_S3114_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3114_Move,
    .units_red = S3114RedUnits,
    .units_blue = S3114BlueUnits,
    .event_script_victory = EventScr_S3114_Victory,
};

const EventListScr EventListScr_S3115_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3115_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3115 = {
    .event_list_turn = EventListScr_S3115_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3115_Move,
    .units_red = S3115RedUnits,
    .units_blue = S3115BlueUnits,
    .event_script_victory = EventScr_S3115_Victory,
};

const EventListScr EventListScr_S3121_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3121_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3121 = {
    .event_list_turn = EventListScr_S3121_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3121_Move,
    .units_red = S3121RedUnits,
    .units_blue = S3121BlueUnits,
    .event_script_victory = EventScr_S3121_Victory,
};

const EventListScr EventListScr_S3122_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3122_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3122 = {
    .event_list_turn = EventListScr_S3122_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3122_Move,
    .units_red = S3122RedUnits,
    .units_blue = S3122BlueUnits,
    .event_script_victory = EventScr_S3122_Victory,
};

const EventListScr EventListScr_S3123_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3123_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3123 = {
    .event_list_turn = EventListScr_S3123_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3123_Move,
    .units_red = S3123RedUnits,
    .units_blue = S3123BlueUnits,
    .event_script_victory = EventScr_S3123_Victory,
};

const EventListScr EventListScr_S3124_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3124_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3124 = {
    .event_list_turn = EventListScr_S3124_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3124_Move,
    .units_red = S3124RedUnits,
    .units_blue = S3124BlueUnits,
    .event_script_victory = EventScr_S3124_Victory,
};

const EventListScr EventListScr_S3125_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3125_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3125 = {
    .event_list_turn = EventListScr_S3125_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3125_Move,
    .units_red = S3125RedUnits,
    .units_blue = S3125BlueUnits,
    .event_script_victory = EventScr_S3125_Victory,
};

const EventListScr EventListScr_S3131_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3131_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3131 = {
    .event_list_turn = EventListScr_S3131_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3131_Move,
    .units_red = S3131RedUnits,
    .units_blue = S3131BlueUnits,
    .event_script_victory = EventScr_S3131_Victory,
};

const EventListScr EventListScr_S3132_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3132_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3132 = {
    .event_list_turn = EventListScr_S3132_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3132_Move,
    .units_red = S3132RedUnits,
    .units_blue = S3132BlueUnits,
    .event_script_victory = EventScr_S3132_Victory,
};

const EventListScr EventListScr_S3133_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3133_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3133 = {
    .event_list_turn = EventListScr_S3133_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3133_Move,
    .units_red = S3133RedUnits,
    .units_blue = S3133BlueUnits,
    .event_script_victory = EventScr_S3133_Victory,
};

const EventListScr EventListScr_S3134_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3134_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3134 = {
    .event_list_turn = EventListScr_S3134_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3134_Move,
    .units_red = S3134RedUnits,
    .units_blue = S3134BlueUnits,
    .event_script_victory = EventScr_S3134_Victory,
};

const EventListScr EventListScr_S3135_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S3135_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S3135 = {
    .event_list_turn = EventListScr_S3135_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S3135_Move,
    .units_red = S3135RedUnits,
    .units_blue = S3135BlueUnits,
    .event_script_victory = EventScr_S3135_Victory,
};

const EventListScr EventListScr_S4011_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4011_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4011 = {
    .event_list_turn = EventListScr_S4011_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4011_Move,
    .units_red = S4011RedUnits,
    .units_blue = S4011BlueUnits,
    .event_script_victory = EventScr_S4011_Victory,
};

const EventListScr EventListScr_S4012_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4012_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4012 = {
    .event_list_turn = EventListScr_S4012_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4012_Move,
    .units_red = S4012RedUnits,
    .units_blue = S4012BlueUnits,
    .event_script_victory = EventScr_S4012_Victory,
};

const EventListScr EventListScr_S4013_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4013_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4013 = {
    .event_list_turn = EventListScr_S4013_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4013_Move,
    .units_red = S4013RedUnits,
    .units_blue = S4013BlueUnits,
    .event_script_victory = EventScr_S4013_Victory,
};

const EventListScr EventListScr_S4014_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4014_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4014 = {
    .event_list_turn = EventListScr_S4014_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4014_Move,
    .units_red = S4014RedUnits,
    .units_blue = S4014BlueUnits,
    .event_script_victory = EventScr_S4014_Victory,
};

const EventListScr EventListScr_S4015_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4015_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4015 = {
    .event_list_turn = EventListScr_S4015_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4015_Move,
    .units_red = S4015RedUnits,
    .units_blue = S4015BlueUnits,
    .event_script_victory = EventScr_S4015_Victory,
};

const EventListScr EventListScr_S4021_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4021_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4021 = {
    .event_list_turn = EventListScr_S4021_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4021_Move,
    .units_red = S4021RedUnits,
    .units_blue = S4021BlueUnits,
    .event_script_victory = EventScr_S4021_Victory,
};

const EventListScr EventListScr_S4022_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4022_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4022 = {
    .event_list_turn = EventListScr_S4022_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4022_Move,
    .units_red = S4022RedUnits,
    .units_blue = S4022BlueUnits,
    .event_script_victory = EventScr_S4022_Victory,
};

const EventListScr EventListScr_S4023_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4023_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4023 = {
    .event_list_turn = EventListScr_S4023_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4023_Move,
    .units_red = S4023RedUnits,
    .units_blue = S4023BlueUnits,
    .event_script_victory = EventScr_S4023_Victory,
};

const EventListScr EventListScr_S4024_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4024_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4024 = {
    .event_list_turn = EventListScr_S4024_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4024_Move,
    .units_red = S4024RedUnits,
    .units_blue = S4024BlueUnits,
    .event_script_victory = EventScr_S4024_Victory,
};

const EventListScr EventListScr_S4025_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4025_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4025 = {
    .event_list_turn = EventListScr_S4025_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4025_Move,
    .units_red = S4025RedUnits,
    .units_blue = S4025BlueUnits,
    .event_script_victory = EventScr_S4025_Victory,
};

const EventListScr EventListScr_S4031_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4031_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4031 = {
    .event_list_turn = EventListScr_S4031_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4031_Move,
    .units_red = S4031RedUnits,
    .units_blue = S4031BlueUnits,
    .event_script_victory = EventScr_S4031_Victory,
};

const EventListScr EventListScr_S4032_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4032_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4032 = {
    .event_list_turn = EventListScr_S4032_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4032_Move,
    .units_red = S4032RedUnits,
    .units_blue = S4032BlueUnits,
    .event_script_victory = EventScr_S4032_Victory,
};

const EventListScr EventListScr_S4033_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4033_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4033 = {
    .event_list_turn = EventListScr_S4033_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4033_Move,
    .units_red = S4033RedUnits,
    .units_blue = S4033BlueUnits,
    .event_script_victory = EventScr_S4033_Victory,
};

const EventListScr EventListScr_S4034_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4034_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4034 = {
    .event_list_turn = EventListScr_S4034_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4034_Move,
    .units_red = S4034RedUnits,
    .units_blue = S4034BlueUnits,
    .event_script_victory = EventScr_S4034_Victory,
};

const EventListScr EventListScr_S4035_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4035_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4035 = {
    .event_list_turn = EventListScr_S4035_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4035_Move,
    .units_red = S4035RedUnits,
    .units_blue = S4035BlueUnits,
    .event_script_victory = EventScr_S4035_Victory,
};

const EventListScr EventListScr_S4041_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4041_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4041 = {
    .event_list_turn = EventListScr_S4041_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4041_Move,
    .units_red = S4041RedUnits,
    .units_blue = S4041BlueUnits,
    .event_script_victory = EventScr_S4041_Victory,
};

const EventListScr EventListScr_S4042_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4042_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4042 = {
    .event_list_turn = EventListScr_S4042_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4042_Move,
    .units_red = S4042RedUnits,
    .units_blue = S4042BlueUnits,
    .event_script_victory = EventScr_S4042_Victory,
};

const EventListScr EventListScr_S4043_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4043_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4043 = {
    .event_list_turn = EventListScr_S4043_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4043_Move,
    .units_red = S4043RedUnits,
    .units_blue = S4043BlueUnits,
    .event_script_victory = EventScr_S4043_Victory,
};

const EventListScr EventListScr_S4044_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4044_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4044 = {
    .event_list_turn = EventListScr_S4044_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4044_Move,
    .units_red = S4044RedUnits,
    .units_blue = S4044BlueUnits,
    .event_script_victory = EventScr_S4044_Victory,
};

const EventListScr EventListScr_S4045_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4045_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4045 = {
    .event_list_turn = EventListScr_S4045_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4045_Move,
    .units_red = S4045RedUnits,
    .units_blue = S4045BlueUnits,
    .event_script_victory = EventScr_S4045_Victory,
};

const EventListScr EventListScr_S4051_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4051_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4051 = {
    .event_list_turn = EventListScr_S4051_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4051_Move,
    .units_red = S4051RedUnits,
    .units_blue = S4051BlueUnits,
    .event_script_victory = EventScr_S4051_Victory,
};

const EventListScr EventListScr_S4052_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4052_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4052 = {
    .event_list_turn = EventListScr_S4052_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4052_Move,
    .units_red = S4052RedUnits,
    .units_blue = S4052BlueUnits,
    .event_script_victory = EventScr_S4052_Victory,
};

const EventListScr EventListScr_S4053_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4053_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4053 = {
    .event_list_turn = EventListScr_S4053_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4053_Move,
    .units_red = S4053RedUnits,
    .units_blue = S4053BlueUnits,
    .event_script_victory = EventScr_S4053_Victory,
};

const EventListScr EventListScr_S4054_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4054_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4054 = {
    .event_list_turn = EventListScr_S4054_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4054_Move,
    .units_red = S4054RedUnits,
    .units_blue = S4054BlueUnits,
    .event_script_victory = EventScr_S4054_Victory,
};

const EventListScr EventListScr_S4055_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4055_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4055 = {
    .event_list_turn = EventListScr_S4055_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4055_Move,
    .units_red = S4055RedUnits,
    .units_blue = S4055BlueUnits,
    .event_script_victory = EventScr_S4055_Victory,
};

const EventListScr EventListScr_S4061_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4061_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4061 = {
    .event_list_turn = EventListScr_S4061_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4061_Move,
    .units_red = S4061RedUnits,
    .units_blue = S4061BlueUnits,
    .event_script_victory = EventScr_S4061_Victory,
};

const EventListScr EventListScr_S4062_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4062_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4062 = {
    .event_list_turn = EventListScr_S4062_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4062_Move,
    .units_red = S4062RedUnits,
    .units_blue = S4062BlueUnits,
    .event_script_victory = EventScr_S4062_Victory,
};

const EventListScr EventListScr_S4063_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4063_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4063 = {
    .event_list_turn = EventListScr_S4063_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4063_Move,
    .units_red = S4063RedUnits,
    .units_blue = S4063BlueUnits,
    .event_script_victory = EventScr_S4063_Victory,
};

const EventListScr EventListScr_S4064_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4064_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4064 = {
    .event_list_turn = EventListScr_S4064_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4064_Move,
    .units_red = S4064RedUnits,
    .units_blue = S4064BlueUnits,
    .event_script_victory = EventScr_S4064_Victory,
};

const EventListScr EventListScr_S4065_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4065_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4065 = {
    .event_list_turn = EventListScr_S4065_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4065_Move,
    .units_red = S4065RedUnits,
    .units_blue = S4065BlueUnits,
    .event_script_victory = EventScr_S4065_Victory,
};

const EventListScr EventListScr_S4071_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4071_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4071 = {
    .event_list_turn = EventListScr_S4071_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4071_Move,
    .units_red = S4071RedUnits,
    .units_blue = S4071BlueUnits,
    .event_script_victory = EventScr_S4071_Victory,
};

const EventListScr EventListScr_S4072_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4072_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4072 = {
    .event_list_turn = EventListScr_S4072_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4072_Move,
    .units_red = S4072RedUnits,
    .units_blue = S4072BlueUnits,
    .event_script_victory = EventScr_S4072_Victory,
};

const EventListScr EventListScr_S4073_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4073_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4073 = {
    .event_list_turn = EventListScr_S4073_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4073_Move,
    .units_red = S4073RedUnits,
    .units_blue = S4073BlueUnits,
    .event_script_victory = EventScr_S4073_Victory,
};

const EventListScr EventListScr_S4074_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4074_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4074 = {
    .event_list_turn = EventListScr_S4074_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4074_Move,
    .units_red = S4074RedUnits,
    .units_blue = S4074BlueUnits,
    .event_script_victory = EventScr_S4074_Victory,
};

const EventListScr EventListScr_S4075_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4075_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4075 = {
    .event_list_turn = EventListScr_S4075_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4075_Move,
    .units_red = S4075RedUnits,
    .units_blue = S4075BlueUnits,
    .event_script_victory = EventScr_S4075_Victory,
};

const EventListScr EventListScr_S4081_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4081_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4081 = {
    .event_list_turn = EventListScr_S4081_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4081_Move,
    .units_red = S4081RedUnits,
    .units_blue = S4081BlueUnits,
    .event_script_victory = EventScr_S4081_Victory,
};

const EventListScr EventListScr_S4082_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4082_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4082 = {
    .event_list_turn = EventListScr_S4082_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4082_Move,
    .units_red = S4082RedUnits,
    .units_blue = S4082BlueUnits,
    .event_script_victory = EventScr_S4082_Victory,
};

const EventListScr EventListScr_S4083_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4083_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4083 = {
    .event_list_turn = EventListScr_S4083_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4083_Move,
    .units_red = S4083RedUnits,
    .units_blue = S4083BlueUnits,
    .event_script_victory = EventScr_S4083_Victory,
};

const EventListScr EventListScr_S4084_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4084_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4084 = {
    .event_list_turn = EventListScr_S4084_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4084_Move,
    .units_red = S4084RedUnits,
    .units_blue = S4084BlueUnits,
    .event_script_victory = EventScr_S4084_Victory,
};

const EventListScr EventListScr_S4085_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4085_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4085 = {
    .event_list_turn = EventListScr_S4085_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4085_Move,
    .units_red = S4085RedUnits,
    .units_blue = S4085BlueUnits,
    .event_script_victory = EventScr_S4085_Victory,
};

const EventListScr EventListScr_S4091_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4091_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4091 = {
    .event_list_turn = EventListScr_S4091_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4091_Move,
    .units_red = S4091RedUnits,
    .units_blue = S4091BlueUnits,
    .event_script_victory = EventScr_S4091_Victory,
};

const EventListScr EventListScr_S4092_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4092_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4092 = {
    .event_list_turn = EventListScr_S4092_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4092_Move,
    .units_red = S4092RedUnits,
    .units_blue = S4092BlueUnits,
    .event_script_victory = EventScr_S4092_Victory,
};

const EventListScr EventListScr_S4093_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4093_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4093 = {
    .event_list_turn = EventListScr_S4093_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4093_Move,
    .units_red = S4093RedUnits,
    .units_blue = S4093BlueUnits,
    .event_script_victory = EventScr_S4093_Victory,
};

const EventListScr EventListScr_S4094_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4094_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4094 = {
    .event_list_turn = EventListScr_S4094_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4094_Move,
    .units_red = S4094RedUnits,
    .units_blue = S4094BlueUnits,
    .event_script_victory = EventScr_S4094_Victory,
};

const EventListScr EventListScr_S4095_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4095 = {
    .event_list_turn = EventListScr_S4095_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4095_Move,
    .units_red = S4095RedUnits,
    .units_blue = S4095BlueUnits,
    .event_script_victory = EventScr_S4095_Victory,
};

const EventListScr EventListScr_S4101_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4101_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4101 = {
    .event_list_turn = EventListScr_S4101_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4101_Move,
    .units_red = S4101RedUnits,
    .units_blue = S4101BlueUnits,
    .event_script_victory = EventScr_S4101_Victory,
};

const EventListScr EventListScr_S4102_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4102_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4102 = {
    .event_list_turn = EventListScr_S4102_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4102_Move,
    .units_red = S4102RedUnits,
    .units_blue = S4102BlueUnits,
    .event_script_victory = EventScr_S4102_Victory,
};

const EventListScr EventListScr_S4103_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4103_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4103 = {
    .event_list_turn = EventListScr_S4103_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4103_Move,
    .units_red = S4103RedUnits,
    .units_blue = S4103BlueUnits,
    .event_script_victory = EventScr_S4103_Victory,
};

const EventListScr EventListScr_S4104_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4104_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4104 = {
    .event_list_turn = EventListScr_S4104_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4104_Move,
    .units_red = S4104RedUnits,
    .units_blue = S4104BlueUnits,
    .event_script_victory = EventScr_S4104_Victory,
};

const EventListScr EventListScr_S4105_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4105 = {
    .event_list_turn = EventListScr_S4105_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4105_Move,
    .units_red = S4105RedUnits,
    .units_blue = S4105BlueUnits,
    .event_script_victory = EventScr_S4105_Victory,
};

const EventListScr EventListScr_S4111_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4111_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4111 = {
    .event_list_turn = EventListScr_S4111_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4111_Move,
    .units_red = S4111RedUnits,
    .units_blue = S4111BlueUnits,
    .event_script_victory = EventScr_S4111_Victory,
};

const EventListScr EventListScr_S4112_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4112_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4112 = {
    .event_list_turn = EventListScr_S4112_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4112_Move,
    .units_red = S4112RedUnits,
    .units_blue = S4112BlueUnits,
    .event_script_victory = EventScr_S4112_Victory,
};

const EventListScr EventListScr_S4113_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4113_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4113 = {
    .event_list_turn = EventListScr_S4113_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4113_Move,
    .units_red = S4113RedUnits,
    .units_blue = S4113BlueUnits,
    .event_script_victory = EventScr_S4113_Victory,
};

const EventListScr EventListScr_S4114_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4114_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4114 = {
    .event_list_turn = EventListScr_S4114_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4114_Move,
    .units_red = S4114RedUnits,
    .units_blue = S4114BlueUnits,
    .event_script_victory = EventScr_S4114_Victory,
};

const EventListScr EventListScr_S4115_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4115_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4115 = {
    .event_list_turn = EventListScr_S4115_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4115_Move,
    .units_red = S4115RedUnits,
    .units_blue = S4115BlueUnits,
    .event_script_victory = EventScr_S4115_Victory,
};

const EventListScr EventListScr_S4121_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4121_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4121 = {
    .event_list_turn = EventListScr_S4121_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4121_Move,
    .units_red = S4121RedUnits,
    .units_blue = S4121BlueUnits,
    .event_script_victory = EventScr_S4121_Victory,
};

const EventListScr EventListScr_S4122_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4122_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4122 = {
    .event_list_turn = EventListScr_S4122_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4122_Move,
    .units_red = S4122RedUnits,
    .units_blue = S4122BlueUnits,
    .event_script_victory = EventScr_S4122_Victory,
};

const EventListScr EventListScr_S4123_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4123_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4123 = {
    .event_list_turn = EventListScr_S4123_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4123_Move,
    .units_red = S4123RedUnits,
    .units_blue = S4123BlueUnits,
    .event_script_victory = EventScr_S4123_Victory,
};

const EventListScr EventListScr_S4124_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4124_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4124 = {
    .event_list_turn = EventListScr_S4124_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4124_Move,
    .units_red = S4124RedUnits,
    .units_blue = S4124BlueUnits,
    .event_script_victory = EventScr_S4124_Victory,
};

const EventListScr EventListScr_S4125_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4125_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4125 = {
    .event_list_turn = EventListScr_S4125_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4125_Move,
    .units_red = S4125RedUnits,
    .units_blue = S4125BlueUnits,
    .event_script_victory = EventScr_S4125_Victory,
};

const EventListScr EventListScr_S4131_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4131_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4131 = {
    .event_list_turn = EventListScr_S4131_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4131_Move,
    .units_red = S4131RedUnits,
    .units_blue = S4131BlueUnits,
    .event_script_victory = EventScr_S4131_Victory,
};

const EventListScr EventListScr_S4132_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4132_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4132 = {
    .event_list_turn = EventListScr_S4132_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4132_Move,
    .units_red = S4132RedUnits,
    .units_blue = S4132BlueUnits,
    .event_script_victory = EventScr_S4132_Victory,
};

const EventListScr EventListScr_S4133_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4133_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4133 = {
    .event_list_turn = EventListScr_S4133_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4133_Move,
    .units_red = S4133RedUnits,
    .units_blue = S4133BlueUnits,
    .event_script_victory = EventScr_S4133_Victory,
};

const EventListScr EventListScr_S4134_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4134_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4134 = {
    .event_list_turn = EventListScr_S4134_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4134_Move,
    .units_red = S4134RedUnits,
    .units_blue = S4134BlueUnits,
    .event_script_victory = EventScr_S4134_Victory,
};

const EventListScr EventListScr_S4135_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S4135_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S4135 = {
    .event_list_turn = EventListScr_S4135_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S4135_Move,
    .units_red = S4135RedUnits,
    .units_blue = S4135BlueUnits,
    .event_script_victory = EventScr_S4135_Victory,
};

const EventListScr EventListScr_S5011_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5011_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5011 = {
    .event_list_turn = EventListScr_S5011_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5011_Move,
    .units_red = S5011RedUnits,
    .units_blue = S5011BlueUnits,
    .event_script_victory = EventScr_S5011_Victory,
};

const EventListScr EventListScr_S5012_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5012_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5012 = {
    .event_list_turn = EventListScr_S5012_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5012_Move,
    .units_red = S5012RedUnits,
    .units_blue = S5012BlueUnits,
    .event_script_victory = EventScr_S5012_Victory,
};

const EventListScr EventListScr_S5013_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5013_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5013 = {
    .event_list_turn = EventListScr_S5013_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5013_Move,
    .units_red = S5013RedUnits,
    .units_blue = S5013BlueUnits,
    .event_script_victory = EventScr_S5013_Victory,
};

const EventListScr EventListScr_S5014_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5014_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5014 = {
    .event_list_turn = EventListScr_S5014_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5014_Move,
    .units_red = S5014RedUnits,
    .units_blue = S5014BlueUnits,
    .event_script_victory = EventScr_S5014_Victory,
};

const EventListScr EventListScr_S5015_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5015_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5015 = {
    .event_list_turn = EventListScr_S5015_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5015_Move,
    .units_red = S5015RedUnits,
    .units_blue = S5015BlueUnits,
    .event_script_victory = EventScr_S5015_Victory,
};

const EventListScr EventListScr_S5021_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5021_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5021 = {
    .event_list_turn = EventListScr_S5021_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5021_Move,
    .units_red = S5021RedUnits,
    .units_blue = S5021BlueUnits,
    .event_script_victory = EventScr_S5021_Victory,
};

const EventListScr EventListScr_S5022_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5022_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5022 = {
    .event_list_turn = EventListScr_S5022_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5022_Move,
    .units_red = S5022RedUnits,
    .units_blue = S5022BlueUnits,
    .event_script_victory = EventScr_S5022_Victory,
};

const EventListScr EventListScr_S5023_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5023_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5023 = {
    .event_list_turn = EventListScr_S5023_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5023_Move,
    .units_red = S5023RedUnits,
    .units_blue = S5023BlueUnits,
    .event_script_victory = EventScr_S5023_Victory,
};

const EventListScr EventListScr_S5024_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5024_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5024 = {
    .event_list_turn = EventListScr_S5024_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5024_Move,
    .units_red = S5024RedUnits,
    .units_blue = S5024BlueUnits,
    .event_script_victory = EventScr_S5024_Victory,
};

const EventListScr EventListScr_S5025_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5025_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5025 = {
    .event_list_turn = EventListScr_S5025_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5025_Move,
    .units_red = S5025RedUnits,
    .units_blue = S5025BlueUnits,
    .event_script_victory = EventScr_S5025_Victory,
};

const EventListScr EventListScr_S5031_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5031_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5031 = {
    .event_list_turn = EventListScr_S5031_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5031_Move,
    .units_red = S5031RedUnits,
    .units_blue = S5031BlueUnits,
    .event_script_victory = EventScr_S5031_Victory,
};

const EventListScr EventListScr_S5032_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5032_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5032 = {
    .event_list_turn = EventListScr_S5032_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5032_Move,
    .units_red = S5032RedUnits,
    .units_blue = S5032BlueUnits,
    .event_script_victory = EventScr_S5032_Victory,
};

const EventListScr EventListScr_S5033_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5033_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5033 = {
    .event_list_turn = EventListScr_S5033_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5033_Move,
    .units_red = S5033RedUnits,
    .units_blue = S5033BlueUnits,
    .event_script_victory = EventScr_S5033_Victory,
};

const EventListScr EventListScr_S5034_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5034_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5034 = {
    .event_list_turn = EventListScr_S5034_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5034_Move,
    .units_red = S5034RedUnits,
    .units_blue = S5034BlueUnits,
    .event_script_victory = EventScr_S5034_Victory,
};

const EventListScr EventListScr_S5035_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5035 = {
    .event_list_turn = EventListScr_S5035_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5035_Move,
    .units_red = S5035RedUnits,
    .units_blue = S5035BlueUnits,
    .event_script_victory = EventScr_S5035_Victory,
};

const EventListScr EventListScr_S5041_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5041_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5041 = {
    .event_list_turn = EventListScr_S5041_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5041_Move,
    .units_red = S5041RedUnits,
    .units_blue = S5041BlueUnits,
    .event_script_victory = EventScr_S5041_Victory,
};

const EventListScr EventListScr_S5042_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5042_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5042 = {
    .event_list_turn = EventListScr_S5042_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5042_Move,
    .units_red = S5042RedUnits,
    .units_blue = S5042BlueUnits,
    .event_script_victory = EventScr_S5042_Victory,
};

const EventListScr EventListScr_S5043_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5043_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5043 = {
    .event_list_turn = EventListScr_S5043_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5043_Move,
    .units_red = S5043RedUnits,
    .units_blue = S5043BlueUnits,
    .event_script_victory = EventScr_S5043_Victory,
};

const EventListScr EventListScr_S5044_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5044_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5044 = {
    .event_list_turn = EventListScr_S5044_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5044_Move,
    .units_red = S5044RedUnits,
    .units_blue = S5044BlueUnits,
    .event_script_victory = EventScr_S5044_Victory,
};

const EventListScr EventListScr_S5045_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5045_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5045 = {
    .event_list_turn = EventListScr_S5045_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5045_Move,
    .units_red = S5045RedUnits,
    .units_blue = S5045BlueUnits,
    .event_script_victory = EventScr_S5045_Victory,
};

const EventListScr EventListScr_S5051_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5051_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5051 = {
    .event_list_turn = EventListScr_S5051_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5051_Move,
    .units_red = S5051RedUnits,
    .units_blue = S5051BlueUnits,
    .event_script_victory = EventScr_S5051_Victory,
};

const EventListScr EventListScr_S5052_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5052_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5052 = {
    .event_list_turn = EventListScr_S5052_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5052_Move,
    .units_red = S5052RedUnits,
    .units_blue = S5052BlueUnits,
    .event_script_victory = EventScr_S5052_Victory,
};

const EventListScr EventListScr_S5053_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5053_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5053 = {
    .event_list_turn = EventListScr_S5053_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5053_Move,
    .units_red = S5053RedUnits,
    .units_blue = S5053BlueUnits,
    .event_script_victory = EventScr_S5053_Victory,
};

const EventListScr EventListScr_S5054_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5054_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5054 = {
    .event_list_turn = EventListScr_S5054_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5054_Move,
    .units_red = S5054RedUnits,
    .units_blue = S5054BlueUnits,
    .event_script_victory = EventScr_S5054_Victory,
};

const EventListScr EventListScr_S5055_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5055_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5055 = {
    .event_list_turn = EventListScr_S5055_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5055_Move,
    .units_red = S5055RedUnits,
    .units_blue = S5055BlueUnits,
    .event_script_victory = EventScr_S5055_Victory,
};

const EventListScr EventListScr_S5061_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5061_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5061 = {
    .event_list_turn = EventListScr_S5061_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5061_Move,
    .units_red = S5061RedUnits,
    .units_blue = S5061BlueUnits,
    .event_script_victory = EventScr_S5061_Victory,
};

const EventListScr EventListScr_S5062_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5062_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5062 = {
    .event_list_turn = EventListScr_S5062_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5062_Move,
    .units_red = S5062RedUnits,
    .units_blue = S5062BlueUnits,
    .event_script_victory = EventScr_S5062_Victory,
};

const EventListScr EventListScr_S5063_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5063_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5063 = {
    .event_list_turn = EventListScr_S5063_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5063_Move,
    .units_red = S5063RedUnits,
    .units_blue = S5063BlueUnits,
    .event_script_victory = EventScr_S5063_Victory,
};

const EventListScr EventListScr_S5064_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5064_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5064 = {
    .event_list_turn = EventListScr_S5064_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5064_Move,
    .units_red = S5064RedUnits,
    .units_blue = S5064BlueUnits,
    .event_script_victory = EventScr_S5064_Victory,
};

const EventListScr EventListScr_S5065_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5065_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5065 = {
    .event_list_turn = EventListScr_S5065_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5065_Move,
    .units_red = S5065RedUnits,
    .units_blue = S5065BlueUnits,
    .event_script_victory = EventScr_S5065_Victory,
};

const EventListScr EventListScr_S5071_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5071_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5071 = {
    .event_list_turn = EventListScr_S5071_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5071_Move,
    .units_red = S5071RedUnits,
    .units_blue = S5071BlueUnits,
    .event_script_victory = EventScr_S5071_Victory,
};

const EventListScr EventListScr_S5072_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5072_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5072 = {
    .event_list_turn = EventListScr_S5072_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5072_Move,
    .units_red = S5072RedUnits,
    .units_blue = S5072BlueUnits,
    .event_script_victory = EventScr_S5072_Victory,
};

const EventListScr EventListScr_S5073_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5073_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5073 = {
    .event_list_turn = EventListScr_S5073_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5073_Move,
    .units_red = S5073RedUnits,
    .units_blue = S5073BlueUnits,
    .event_script_victory = EventScr_S5073_Victory,
};

const EventListScr EventListScr_S5074_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5074_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5074 = {
    .event_list_turn = EventListScr_S5074_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5074_Move,
    .units_red = S5074RedUnits,
    .units_blue = S5074BlueUnits,
    .event_script_victory = EventScr_S5074_Victory,
};

const EventListScr EventListScr_S5075_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5075 = {
    .event_list_turn = EventListScr_S5075_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5075_Move,
    .units_red = S5075RedUnits,
    .units_blue = S5075BlueUnits,
    .event_script_victory = EventScr_S5075_Victory,
};

const EventListScr EventListScr_S5081_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5081_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5081 = {
    .event_list_turn = EventListScr_S5081_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5081_Move,
    .units_red = S5081RedUnits,
    .units_blue = S5081BlueUnits,
    .event_script_victory = EventScr_S5081_Victory,
};

const EventListScr EventListScr_S5082_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5082_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5082 = {
    .event_list_turn = EventListScr_S5082_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5082_Move,
    .units_red = S5082RedUnits,
    .units_blue = S5082BlueUnits,
    .event_script_victory = EventScr_S5082_Victory,
};

const EventListScr EventListScr_S5083_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5083_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5083 = {
    .event_list_turn = EventListScr_S5083_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5083_Move,
    .units_red = S5083RedUnits,
    .units_blue = S5083BlueUnits,
    .event_script_victory = EventScr_S5083_Victory,
};

const EventListScr EventListScr_S5084_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5084_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5084 = {
    .event_list_turn = EventListScr_S5084_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5084_Move,
    .units_red = S5084RedUnits,
    .units_blue = S5084BlueUnits,
    .event_script_victory = EventScr_S5084_Victory,
};

const EventListScr EventListScr_S5085_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5085_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5085 = {
    .event_list_turn = EventListScr_S5085_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5085_Move,
    .units_red = S5085RedUnits,
    .units_blue = S5085BlueUnits,
    .event_script_victory = EventScr_S5085_Victory,
};

const EventListScr EventListScr_S5091_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5091_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5091 = {
    .event_list_turn = EventListScr_S5091_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5091_Move,
    .units_red = S5091RedUnits,
    .units_blue = S5091BlueUnits,
    .event_script_victory = EventScr_S5091_Victory,
};

const EventListScr EventListScr_S5092_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5092_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5092 = {
    .event_list_turn = EventListScr_S5092_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5092_Move,
    .units_red = S5092RedUnits,
    .units_blue = S5092BlueUnits,
    .event_script_victory = EventScr_S5092_Victory,
};

const EventListScr EventListScr_S5093_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5093_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5093 = {
    .event_list_turn = EventListScr_S5093_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5093_Move,
    .units_red = S5093RedUnits,
    .units_blue = S5093BlueUnits,
    .event_script_victory = EventScr_S5093_Victory,
};

const EventListScr EventListScr_S5094_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5094_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5094 = {
    .event_list_turn = EventListScr_S5094_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5094_Move,
    .units_red = S5094RedUnits,
    .units_blue = S5094BlueUnits,
    .event_script_victory = EventScr_S5094_Victory,
};

const EventListScr EventListScr_S5095_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5095_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5095 = {
    .event_list_turn = EventListScr_S5095_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5095_Move,
    .units_red = S5095RedUnits,
    .units_blue = S5095BlueUnits,
    .event_script_victory = EventScr_S5095_Victory,
};

const EventListScr EventListScr_S5101_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5101_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5101 = {
    .event_list_turn = EventListScr_S5101_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5101_Move,
    .units_red = S5101RedUnits,
    .units_blue = S5101BlueUnits,
    .event_script_victory = EventScr_S5101_Victory,
};

const EventListScr EventListScr_S5102_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5102_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5102 = {
    .event_list_turn = EventListScr_S5102_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5102_Move,
    .units_red = S5102RedUnits,
    .units_blue = S5102BlueUnits,
    .event_script_victory = EventScr_S5102_Victory,
};

const EventListScr EventListScr_S5103_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5103_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5103 = {
    .event_list_turn = EventListScr_S5103_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5103_Move,
    .units_red = S5103RedUnits,
    .units_blue = S5103BlueUnits,
    .event_script_victory = EventScr_S5103_Victory,
};

const EventListScr EventListScr_S5104_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5104_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5104 = {
    .event_list_turn = EventListScr_S5104_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5104_Move,
    .units_red = S5104RedUnits,
    .units_blue = S5104BlueUnits,
    .event_script_victory = EventScr_S5104_Victory,
};

const EventListScr EventListScr_S5105_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5105_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5105 = {
    .event_list_turn = EventListScr_S5105_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5105_Move,
    .units_red = S5105RedUnits,
    .units_blue = S5105BlueUnits,
    .event_script_victory = EventScr_S5105_Victory,
};

const EventListScr EventListScr_S5111_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5111_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5111 = {
    .event_list_turn = EventListScr_S5111_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5111_Move,
    .units_red = S5111RedUnits,
    .units_blue = S5111BlueUnits,
    .event_script_victory = EventScr_S5111_Victory,
};

const EventListScr EventListScr_S5112_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5112_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5112 = {
    .event_list_turn = EventListScr_S5112_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5112_Move,
    .units_red = S5112RedUnits,
    .units_blue = S5112BlueUnits,
    .event_script_victory = EventScr_S5112_Victory,
};

const EventListScr EventListScr_S5113_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5113_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5113 = {
    .event_list_turn = EventListScr_S5113_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5113_Move,
    .units_red = S5113RedUnits,
    .units_blue = S5113BlueUnits,
    .event_script_victory = EventScr_S5113_Victory,
};

const EventListScr EventListScr_S5114_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5114_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5114 = {
    .event_list_turn = EventListScr_S5114_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5114_Move,
    .units_red = S5114RedUnits,
    .units_blue = S5114BlueUnits,
    .event_script_victory = EventScr_S5114_Victory,
};

const EventListScr EventListScr_S5115_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5115_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5115 = {
    .event_list_turn = EventListScr_S5115_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5115_Move,
    .units_red = S5115RedUnits,
    .units_blue = S5115BlueUnits,
    .event_script_victory = EventScr_S5115_Victory,
};

const EventListScr EventListScr_S5121_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5121_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5121 = {
    .event_list_turn = EventListScr_S5121_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5121_Move,
    .units_red = S5121RedUnits,
    .units_blue = S5121BlueUnits,
    .event_script_victory = EventScr_S5121_Victory,
};

const EventListScr EventListScr_S5122_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5122_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5122 = {
    .event_list_turn = EventListScr_S5122_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5122_Move,
    .units_red = S5122RedUnits,
    .units_blue = S5122BlueUnits,
    .event_script_victory = EventScr_S5122_Victory,
};

const EventListScr EventListScr_S5123_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5123_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5123 = {
    .event_list_turn = EventListScr_S5123_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5123_Move,
    .units_red = S5123RedUnits,
    .units_blue = S5123BlueUnits,
    .event_script_victory = EventScr_S5123_Victory,
};

const EventListScr EventListScr_S5124_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5124_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5124 = {
    .event_list_turn = EventListScr_S5124_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5124_Move,
    .units_red = S5124RedUnits,
    .units_blue = S5124BlueUnits,
    .event_script_victory = EventScr_S5124_Victory,
};

const EventListScr EventListScr_S5125_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5125_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5125 = {
    .event_list_turn = EventListScr_S5125_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5125_Move,
    .units_red = S5125RedUnits,
    .units_blue = S5125BlueUnits,
    .event_script_victory = EventScr_S5125_Victory,
};

const EventListScr EventListScr_S5131_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5131_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5131 = {
    .event_list_turn = EventListScr_S5131_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5131_Move,
    .units_red = S5131RedUnits,
    .units_blue = S5131BlueUnits,
    .event_script_victory = EventScr_S5131_Victory,
};

const EventListScr EventListScr_S5132_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5132 = {
    .event_list_turn = EventListScr_S5132_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5132_Move,
    .units_red = S5132RedUnits,
    .units_blue = S5132BlueUnits,
    .event_script_victory = EventScr_S5132_Victory,
};

const EventListScr EventListScr_S5133_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5133_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5133 = {
    .event_list_turn = EventListScr_S5133_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5133_Move,
    .units_red = S5133RedUnits,
    .units_blue = S5133BlueUnits,
    .event_script_victory = EventScr_S5133_Victory,
};

const EventListScr EventListScr_S5134_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5134_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5134 = {
    .event_list_turn = EventListScr_S5134_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5134_Move,
    .units_red = S5134RedUnits,
    .units_blue = S5134BlueUnits,
    .event_script_victory = EventScr_S5134_Victory,
};

const EventListScr EventListScr_S5135_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S5135_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S5135 = {
    .event_list_turn = EventListScr_S5135_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S5135_Move,
    .units_red = S5135RedUnits,
    .units_blue = S5135BlueUnits,
    .event_script_victory = EventScr_S5135_Victory,
};

const EventListScr EventListScr_S6011_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6011_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6011 = {
    .event_list_turn = EventListScr_S6011_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6011_Move,
    .units_red = S6011RedUnits,
    .units_blue = S6011BlueUnits,
    .event_script_victory = EventScr_S6011_Victory,
};

const EventListScr EventListScr_S6012_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6012_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6012 = {
    .event_list_turn = EventListScr_S6012_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6012_Move,
    .units_red = S6012RedUnits,
    .units_blue = S6012BlueUnits,
    .event_script_victory = EventScr_S6012_Victory,
};

const EventListScr EventListScr_S6013_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6013_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6013 = {
    .event_list_turn = EventListScr_S6013_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6013_Move,
    .units_red = S6013RedUnits,
    .units_blue = S6013BlueUnits,
    .event_script_victory = EventScr_S6013_Victory,
};

const EventListScr EventListScr_S6014_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6014_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6014 = {
    .event_list_turn = EventListScr_S6014_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6014_Move,
    .units_red = S6014RedUnits,
    .units_blue = S6014BlueUnits,
    .event_script_victory = EventScr_S6014_Victory,
};

const EventListScr EventListScr_S6015_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6015_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6015 = {
    .event_list_turn = EventListScr_S6015_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6015_Move,
    .units_red = S6015RedUnits,
    .units_blue = S6015BlueUnits,
    .event_script_victory = EventScr_S6015_Victory,
};

const EventListScr EventListScr_S6021_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6021_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6021 = {
    .event_list_turn = EventListScr_S6021_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6021_Move,
    .units_red = S6021RedUnits,
    .units_blue = S6021BlueUnits,
    .event_script_victory = EventScr_S6021_Victory,
};

const EventListScr EventListScr_S6022_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6022_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6022 = {
    .event_list_turn = EventListScr_S6022_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6022_Move,
    .units_red = S6022RedUnits,
    .units_blue = S6022BlueUnits,
    .event_script_victory = EventScr_S6022_Victory,
};

const EventListScr EventListScr_S6023_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6023_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6023 = {
    .event_list_turn = EventListScr_S6023_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6023_Move,
    .units_red = S6023RedUnits,
    .units_blue = S6023BlueUnits,
    .event_script_victory = EventScr_S6023_Victory,
};

const EventListScr EventListScr_S6024_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6024_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6024 = {
    .event_list_turn = EventListScr_S6024_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6024_Move,
    .units_red = S6024RedUnits,
    .units_blue = S6024BlueUnits,
    .event_script_victory = EventScr_S6024_Victory,
};

const EventListScr EventListScr_S6025_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6025_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6025 = {
    .event_list_turn = EventListScr_S6025_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6025_Move,
    .units_red = S6025RedUnits,
    .units_blue = S6025BlueUnits,
    .event_script_victory = EventScr_S6025_Victory,
};

const EventListScr EventListScr_S6031_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6031 = {
    .event_list_turn = EventListScr_S6031_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6031_Move,
    .units_red = S6031RedUnits,
    .units_blue = S6031BlueUnits,
    .event_script_victory = EventScr_S6031_Victory,
};

const EventListScr EventListScr_S6032_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6032_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6032 = {
    .event_list_turn = EventListScr_S6032_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6032_Move,
    .units_red = S6032RedUnits,
    .units_blue = S6032BlueUnits,
    .event_script_victory = EventScr_S6032_Victory,
};

const EventListScr EventListScr_S6033_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6033_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6033 = {
    .event_list_turn = EventListScr_S6033_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6033_Move,
    .units_red = S6033RedUnits,
    .units_blue = S6033BlueUnits,
    .event_script_victory = EventScr_S6033_Victory,
};

const EventListScr EventListScr_S6034_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6034_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6034 = {
    .event_list_turn = EventListScr_S6034_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6034_Move,
    .units_red = S6034RedUnits,
    .units_blue = S6034BlueUnits,
    .event_script_victory = EventScr_S6034_Victory,
};

const EventListScr EventListScr_S6035_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6035 = {
    .event_list_turn = EventListScr_S6035_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6035_Move,
    .units_red = S6035RedUnits,
    .units_blue = S6035BlueUnits,
    .event_script_victory = EventScr_S6035_Victory,
};

const EventListScr EventListScr_S6041_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6041_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6041 = {
    .event_list_turn = EventListScr_S6041_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6041_Move,
    .units_red = S6041RedUnits,
    .units_blue = S6041BlueUnits,
    .event_script_victory = EventScr_S6041_Victory,
};

const EventListScr EventListScr_S6042_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6042_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6042 = {
    .event_list_turn = EventListScr_S6042_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6042_Move,
    .units_red = S6042RedUnits,
    .units_blue = S6042BlueUnits,
    .event_script_victory = EventScr_S6042_Victory,
};

const EventListScr EventListScr_S6043_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6043_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6043 = {
    .event_list_turn = EventListScr_S6043_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6043_Move,
    .units_red = S6043RedUnits,
    .units_blue = S6043BlueUnits,
    .event_script_victory = EventScr_S6043_Victory,
};

const EventListScr EventListScr_S6044_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6044_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6044 = {
    .event_list_turn = EventListScr_S6044_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6044_Move,
    .units_red = S6044RedUnits,
    .units_blue = S6044BlueUnits,
    .event_script_victory = EventScr_S6044_Victory,
};

const EventListScr EventListScr_S6045_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6045_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6045 = {
    .event_list_turn = EventListScr_S6045_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6045_Move,
    .units_red = S6045RedUnits,
    .units_blue = S6045BlueUnits,
    .event_script_victory = EventScr_S6045_Victory,
};

const EventListScr EventListScr_S6051_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6051_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6051 = {
    .event_list_turn = EventListScr_S6051_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6051_Move,
    .units_red = S6051RedUnits,
    .units_blue = S6051BlueUnits,
    .event_script_victory = EventScr_S6051_Victory,
};

const EventListScr EventListScr_S6052_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6052_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6052 = {
    .event_list_turn = EventListScr_S6052_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6052_Move,
    .units_red = S6052RedUnits,
    .units_blue = S6052BlueUnits,
    .event_script_victory = EventScr_S6052_Victory,
};

const EventListScr EventListScr_S6053_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6053_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6053 = {
    .event_list_turn = EventListScr_S6053_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6053_Move,
    .units_red = S6053RedUnits,
    .units_blue = S6053BlueUnits,
    .event_script_victory = EventScr_S6053_Victory,
};

const EventListScr EventListScr_S6054_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6054_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6054 = {
    .event_list_turn = EventListScr_S6054_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6054_Move,
    .units_red = S6054RedUnits,
    .units_blue = S6054BlueUnits,
    .event_script_victory = EventScr_S6054_Victory,
};

const EventListScr EventListScr_S6055_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6055_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6055 = {
    .event_list_turn = EventListScr_S6055_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6055_Move,
    .units_red = S6055RedUnits,
    .units_blue = S6055BlueUnits,
    .event_script_victory = EventScr_S6055_Victory,
};

const EventListScr EventListScr_S6061_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6061_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6061 = {
    .event_list_turn = EventListScr_S6061_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6061_Move,
    .units_red = S6061RedUnits,
    .units_blue = S6061BlueUnits,
    .event_script_victory = EventScr_S6061_Victory,
};

const EventListScr EventListScr_S6062_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6062_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6062 = {
    .event_list_turn = EventListScr_S6062_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6062_Move,
    .units_red = S6062RedUnits,
    .units_blue = S6062BlueUnits,
    .event_script_victory = EventScr_S6062_Victory,
};

const EventListScr EventListScr_S6063_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6063_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6063 = {
    .event_list_turn = EventListScr_S6063_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6063_Move,
    .units_red = S6063RedUnits,
    .units_blue = S6063BlueUnits,
    .event_script_victory = EventScr_S6063_Victory,
};

const EventListScr EventListScr_S6064_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6064_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6064 = {
    .event_list_turn = EventListScr_S6064_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6064_Move,
    .units_red = S6064RedUnits,
    .units_blue = S6064BlueUnits,
    .event_script_victory = EventScr_S6064_Victory,
};

const EventListScr EventListScr_S6065_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6065_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6065 = {
    .event_list_turn = EventListScr_S6065_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6065_Move,
    .units_red = S6065RedUnits,
    .units_blue = S6065BlueUnits,
    .event_script_victory = EventScr_S6065_Victory,
};

const EventListScr EventListScr_S6071_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6071_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6071 = {
    .event_list_turn = EventListScr_S6071_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6071_Move,
    .units_red = S6071RedUnits,
    .units_blue = S6071BlueUnits,
    .event_script_victory = EventScr_S6071_Victory,
};

const EventListScr EventListScr_S6072_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6072_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6072 = {
    .event_list_turn = EventListScr_S6072_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6072_Move,
    .units_red = S6072RedUnits,
    .units_blue = S6072BlueUnits,
    .event_script_victory = EventScr_S6072_Victory,
};

const EventListScr EventListScr_S6073_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6073_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6073 = {
    .event_list_turn = EventListScr_S6073_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6073_Move,
    .units_red = S6073RedUnits,
    .units_blue = S6073BlueUnits,
    .event_script_victory = EventScr_S6073_Victory,
};

const EventListScr EventListScr_S6074_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6074_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6074 = {
    .event_list_turn = EventListScr_S6074_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6074_Move,
    .units_red = S6074RedUnits,
    .units_blue = S6074BlueUnits,
    .event_script_victory = EventScr_S6074_Victory,
};

const EventListScr EventListScr_S6075_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6075_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6075 = {
    .event_list_turn = EventListScr_S6075_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6075_Move,
    .units_red = S6075RedUnits,
    .units_blue = S6075BlueUnits,
    .event_script_victory = EventScr_S6075_Victory,
};

const EventListScr EventListScr_S6081_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6081_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6081 = {
    .event_list_turn = EventListScr_S6081_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6081_Move,
    .units_red = S6081RedUnits,
    .units_blue = S6081BlueUnits,
    .event_script_victory = EventScr_S6081_Victory,
};

const EventListScr EventListScr_S6082_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6082_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6082 = {
    .event_list_turn = EventListScr_S6082_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6082_Move,
    .units_red = S6082RedUnits,
    .units_blue = S6082BlueUnits,
    .event_script_victory = EventScr_S6082_Victory,
};

const EventListScr EventListScr_S6083_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6083_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6083 = {
    .event_list_turn = EventListScr_S6083_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6083_Move,
    .units_red = S6083RedUnits,
    .units_blue = S6083BlueUnits,
    .event_script_victory = EventScr_S6083_Victory,
};

const EventListScr EventListScr_S6084_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6084_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6084 = {
    .event_list_turn = EventListScr_S6084_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6084_Move,
    .units_red = S6084RedUnits,
    .units_blue = S6084BlueUnits,
    .event_script_victory = EventScr_S6084_Victory,
};

const EventListScr EventListScr_S6085_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6085_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6085 = {
    .event_list_turn = EventListScr_S6085_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6085_Move,
    .units_red = S6085RedUnits,
    .units_blue = S6085BlueUnits,
    .event_script_victory = EventScr_S6085_Victory,
};

const EventListScr EventListScr_S6091_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6091_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6091 = {
    .event_list_turn = EventListScr_S6091_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6091_Move,
    .units_red = S6091RedUnits,
    .units_blue = S6091BlueUnits,
    .event_script_victory = EventScr_S6091_Victory,
};

const EventListScr EventListScr_S6092_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6092_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6092 = {
    .event_list_turn = EventListScr_S6092_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6092_Move,
    .units_red = S6092RedUnits,
    .units_blue = S6092BlueUnits,
    .event_script_victory = EventScr_S6092_Victory,
};

const EventListScr EventListScr_S6093_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6093_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6093 = {
    .event_list_turn = EventListScr_S6093_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6093_Move,
    .units_red = S6093RedUnits,
    .units_blue = S6093BlueUnits,
    .event_script_victory = EventScr_S6093_Victory,
};

const EventListScr EventListScr_S6094_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6094_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6094 = {
    .event_list_turn = EventListScr_S6094_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6094_Move,
    .units_red = S6094RedUnits,
    .units_blue = S6094BlueUnits,
    .event_script_victory = EventScr_S6094_Victory,
};

const EventListScr EventListScr_S6095_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6095_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6095 = {
    .event_list_turn = EventListScr_S6095_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6095_Move,
    .units_red = S6095RedUnits,
    .units_blue = S6095BlueUnits,
    .event_script_victory = EventScr_S6095_Victory,
};

const EventListScr EventListScr_S6101_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6101_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6101 = {
    .event_list_turn = EventListScr_S6101_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6101_Move,
    .units_red = S6101RedUnits,
    .units_blue = S6101BlueUnits,
    .event_script_victory = EventScr_S6101_Victory,
};

const EventListScr EventListScr_S6102_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6102_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6102 = {
    .event_list_turn = EventListScr_S6102_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6102_Move,
    .units_red = S6102RedUnits,
    .units_blue = S6102BlueUnits,
    .event_script_victory = EventScr_S6102_Victory,
};

const EventListScr EventListScr_S6103_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6103_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6103 = {
    .event_list_turn = EventListScr_S6103_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6103_Move,
    .units_red = S6103RedUnits,
    .units_blue = S6103BlueUnits,
    .event_script_victory = EventScr_S6103_Victory,
};

const EventListScr EventListScr_S6104_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6104_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6104 = {
    .event_list_turn = EventListScr_S6104_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6104_Move,
    .units_red = S6104RedUnits,
    .units_blue = S6104BlueUnits,
    .event_script_victory = EventScr_S6104_Victory,
};

const EventListScr EventListScr_S6105_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6105_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6105 = {
    .event_list_turn = EventListScr_S6105_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6105_Move,
    .units_red = S6105RedUnits,
    .units_blue = S6105BlueUnits,
    .event_script_victory = EventScr_S6105_Victory,
};

const EventListScr EventListScr_S6111_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6111_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6111 = {
    .event_list_turn = EventListScr_S6111_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6111_Move,
    .units_red = S6111RedUnits,
    .units_blue = S6111BlueUnits,
    .event_script_victory = EventScr_S6111_Victory,
};

const EventListScr EventListScr_S6112_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6112_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6112 = {
    .event_list_turn = EventListScr_S6112_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6112_Move,
    .units_red = S6112RedUnits,
    .units_blue = S6112BlueUnits,
    .event_script_victory = EventScr_S6112_Victory,
};

const EventListScr EventListScr_S6113_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6113_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6113 = {
    .event_list_turn = EventListScr_S6113_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6113_Move,
    .units_red = S6113RedUnits,
    .units_blue = S6113BlueUnits,
    .event_script_victory = EventScr_S6113_Victory,
};

const EventListScr EventListScr_S6114_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6114_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6114 = {
    .event_list_turn = EventListScr_S6114_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6114_Move,
    .units_red = S6114RedUnits,
    .units_blue = S6114BlueUnits,
    .event_script_victory = EventScr_S6114_Victory,
};

const EventListScr EventListScr_S6115_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6115_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6115 = {
    .event_list_turn = EventListScr_S6115_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6115_Move,
    .units_red = S6115RedUnits,
    .units_blue = S6115BlueUnits,
    .event_script_victory = EventScr_S6115_Victory,
};

const EventListScr EventListScr_S6121_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6121_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6121 = {
    .event_list_turn = EventListScr_S6121_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6121_Move,
    .units_red = S6121RedUnits,
    .units_blue = S6121BlueUnits,
    .event_script_victory = EventScr_S6121_Victory,
};

const EventListScr EventListScr_S6122_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6122_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6122 = {
    .event_list_turn = EventListScr_S6122_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6122_Move,
    .units_red = S6122RedUnits,
    .units_blue = S6122BlueUnits,
    .event_script_victory = EventScr_S6122_Victory,
};

const EventListScr EventListScr_S6123_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6123_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6123 = {
    .event_list_turn = EventListScr_S6123_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6123_Move,
    .units_red = S6123RedUnits,
    .units_blue = S6123BlueUnits,
    .event_script_victory = EventScr_S6123_Victory,
};

const EventListScr EventListScr_S6124_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6124_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6124 = {
    .event_list_turn = EventListScr_S6124_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6124_Move,
    .units_red = S6124RedUnits,
    .units_blue = S6124BlueUnits,
    .event_script_victory = EventScr_S6124_Victory,
};

const EventListScr EventListScr_S6125_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6125_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6125 = {
    .event_list_turn = EventListScr_S6125_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6125_Move,
    .units_red = S6125RedUnits,
    .units_blue = S6125BlueUnits,
    .event_script_victory = EventScr_S6125_Victory,
};

const EventListScr EventListScr_S6131_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6131_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6131 = {
    .event_list_turn = EventListScr_S6131_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6131_Move,
    .units_red = S6131RedUnits,
    .units_blue = S6131BlueUnits,
    .event_script_victory = EventScr_S6131_Victory,
};

const EventListScr EventListScr_S6132_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6132_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6132 = {
    .event_list_turn = EventListScr_S6132_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6132_Move,
    .units_red = S6132RedUnits,
    .units_blue = S6132BlueUnits,
    .event_script_victory = EventScr_S6132_Victory,
};

const EventListScr EventListScr_S6133_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6133_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6133 = {
    .event_list_turn = EventListScr_S6133_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6133_Move,
    .units_red = S6133RedUnits,
    .units_blue = S6133BlueUnits,
    .event_script_victory = EventScr_S6133_Victory,
};

const EventListScr EventListScr_S6134_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6134_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6134 = {
    .event_list_turn = EventListScr_S6134_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6134_Move,
    .units_red = S6134RedUnits,
    .units_blue = S6134BlueUnits,
    .event_script_victory = EventScr_S6134_Victory,
};

const EventListScr EventListScr_S6135_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S6135_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S6135 = {
    .event_list_turn = EventListScr_S6135_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S6135_Move,
    .units_red = S6135RedUnits,
    .units_blue = S6135BlueUnits,
    .event_script_victory = EventScr_S6135_Victory,
};

const EventListScr EventListScr_S7011_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7011_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7011 = {
    .event_list_turn = EventListScr_S7011_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7011_Move,
    .units_red = S7011RedUnits,
    .units_blue = S7011BlueUnits,
    .event_script_victory = EventScr_S7011_Victory,
};

const EventListScr EventListScr_S7012_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7012_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7012 = {
    .event_list_turn = EventListScr_S7012_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7012_Move,
    .units_red = S7012RedUnits,
    .units_blue = S7012BlueUnits,
    .event_script_victory = EventScr_S7012_Victory,
};

const EventListScr EventListScr_S7013_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7013_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7013 = {
    .event_list_turn = EventListScr_S7013_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7013_Move,
    .units_red = S7013RedUnits,
    .units_blue = S7013BlueUnits,
    .event_script_victory = EventScr_S7013_Victory,
};

const EventListScr EventListScr_S7014_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7014_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7014 = {
    .event_list_turn = EventListScr_S7014_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7014_Move,
    .units_red = S7014RedUnits,
    .units_blue = S7014BlueUnits,
    .event_script_victory = EventScr_S7014_Victory,
};

const EventListScr EventListScr_S7015_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7015_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7015 = {
    .event_list_turn = EventListScr_S7015_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7015_Move,
    .units_red = S7015RedUnits,
    .units_blue = S7015BlueUnits,
    .event_script_victory = EventScr_S7015_Victory,
};

const EventListScr EventListScr_S7021_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7021_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7021 = {
    .event_list_turn = EventListScr_S7021_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7021_Move,
    .units_red = S7021RedUnits,
    .units_blue = S7021BlueUnits,
    .event_script_victory = EventScr_S7021_Victory,
};

const EventListScr EventListScr_S7022_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7022_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7022 = {
    .event_list_turn = EventListScr_S7022_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7022_Move,
    .units_red = S7022RedUnits,
    .units_blue = S7022BlueUnits,
    .event_script_victory = EventScr_S7022_Victory,
};

const EventListScr EventListScr_S7023_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7023_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7023 = {
    .event_list_turn = EventListScr_S7023_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7023_Move,
    .units_red = S7023RedUnits,
    .units_blue = S7023BlueUnits,
    .event_script_victory = EventScr_S7023_Victory,
};

const EventListScr EventListScr_S7024_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7024_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7024 = {
    .event_list_turn = EventListScr_S7024_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7024_Move,
    .units_red = S7024RedUnits,
    .units_blue = S7024BlueUnits,
    .event_script_victory = EventScr_S7024_Victory,
};

const EventListScr EventListScr_S7025_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7025_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7025 = {
    .event_list_turn = EventListScr_S7025_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7025_Move,
    .units_red = S7025RedUnits,
    .units_blue = S7025BlueUnits,
    .event_script_victory = EventScr_S7025_Victory,
};

const EventListScr EventListScr_S7031_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7031_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7031 = {
    .event_list_turn = EventListScr_S7031_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7031_Move,
    .units_red = S7031RedUnits,
    .units_blue = S7031BlueUnits,
    .event_script_victory = EventScr_S7031_Victory,
};

const EventListScr EventListScr_S7032_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7032_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7032 = {
    .event_list_turn = EventListScr_S7032_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7032_Move,
    .units_red = S7032RedUnits,
    .units_blue = S7032BlueUnits,
    .event_script_victory = EventScr_S7032_Victory,
};

const EventListScr EventListScr_S7033_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7033_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7033 = {
    .event_list_turn = EventListScr_S7033_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7033_Move,
    .units_red = S7033RedUnits,
    .units_blue = S7033BlueUnits,
    .event_script_victory = EventScr_S7033_Victory,
};

const EventListScr EventListScr_S7034_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7034_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7034 = {
    .event_list_turn = EventListScr_S7034_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7034_Move,
    .units_red = S7034RedUnits,
    .units_blue = S7034BlueUnits,
    .event_script_victory = EventScr_S7034_Victory,
};

const EventListScr EventListScr_S7035_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7035_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7035 = {
    .event_list_turn = EventListScr_S7035_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7035_Move,
    .units_red = S7035RedUnits,
    .units_blue = S7035BlueUnits,
    .event_script_victory = EventScr_S7035_Victory,
};

const EventListScr EventListScr_S7041_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7041_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7041 = {
    .event_list_turn = EventListScr_S7041_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7041_Move,
    .units_red = S7041RedUnits,
    .units_blue = S7041BlueUnits,
    .event_script_victory = EventScr_S7041_Victory,
};

const EventListScr EventListScr_S7042_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7042_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7042 = {
    .event_list_turn = EventListScr_S7042_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7042_Move,
    .units_red = S7042RedUnits,
    .units_blue = S7042BlueUnits,
    .event_script_victory = EventScr_S7042_Victory,
};

const EventListScr EventListScr_S7043_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7043_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7043 = {
    .event_list_turn = EventListScr_S7043_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7043_Move,
    .units_red = S7043RedUnits,
    .units_blue = S7043BlueUnits,
    .event_script_victory = EventScr_S7043_Victory,
};

const EventListScr EventListScr_S7044_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7044_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7044 = {
    .event_list_turn = EventListScr_S7044_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7044_Move,
    .units_red = S7044RedUnits,
    .units_blue = S7044BlueUnits,
    .event_script_victory = EventScr_S7044_Victory,
};

const EventListScr EventListScr_S7045_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7045_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7045 = {
    .event_list_turn = EventListScr_S7045_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7045_Move,
    .units_red = S7045RedUnits,
    .units_blue = S7045BlueUnits,
    .event_script_victory = EventScr_S7045_Victory,
};

const EventListScr EventListScr_S7051_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7051_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7051 = {
    .event_list_turn = EventListScr_S7051_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7051_Move,
    .units_red = S7051RedUnits,
    .units_blue = S7051BlueUnits,
    .event_script_victory = EventScr_S7051_Victory,
};

const EventListScr EventListScr_S7052_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7052_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7052 = {
    .event_list_turn = EventListScr_S7052_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7052_Move,
    .units_red = S7052RedUnits,
    .units_blue = S7052BlueUnits,
    .event_script_victory = EventScr_S7052_Victory,
};

const EventListScr EventListScr_S7053_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7053_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7053 = {
    .event_list_turn = EventListScr_S7053_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7053_Move,
    .units_red = S7053RedUnits,
    .units_blue = S7053BlueUnits,
    .event_script_victory = EventScr_S7053_Victory,
};

const EventListScr EventListScr_S7054_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7054_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7054 = {
    .event_list_turn = EventListScr_S7054_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7054_Move,
    .units_red = S7054RedUnits,
    .units_blue = S7054BlueUnits,
    .event_script_victory = EventScr_S7054_Victory,
};

const EventListScr EventListScr_S7055_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7055 = {
    .event_list_turn = EventListScr_S7055_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7055_Move,
    .units_red = S7055RedUnits,
    .units_blue = S7055BlueUnits,
    .event_script_victory = EventScr_S7055_Victory,
};

const EventListScr EventListScr_S7061_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7061_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7061 = {
    .event_list_turn = EventListScr_S7061_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7061_Move,
    .units_red = S7061RedUnits,
    .units_blue = S7061BlueUnits,
    .event_script_victory = EventScr_S7061_Victory,
};

const EventListScr EventListScr_S7062_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7062_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7062 = {
    .event_list_turn = EventListScr_S7062_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7062_Move,
    .units_red = S7062RedUnits,
    .units_blue = S7062BlueUnits,
    .event_script_victory = EventScr_S7062_Victory,
};

const EventListScr EventListScr_S7063_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7063_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7063 = {
    .event_list_turn = EventListScr_S7063_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7063_Move,
    .units_red = S7063RedUnits,
    .units_blue = S7063BlueUnits,
    .event_script_victory = EventScr_S7063_Victory,
};

const EventListScr EventListScr_S7064_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7064_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7064 = {
    .event_list_turn = EventListScr_S7064_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7064_Move,
    .units_red = S7064RedUnits,
    .units_blue = S7064BlueUnits,
    .event_script_victory = EventScr_S7064_Victory,
};

const EventListScr EventListScr_S7065_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7065_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7065 = {
    .event_list_turn = EventListScr_S7065_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7065_Move,
    .units_red = S7065RedUnits,
    .units_blue = S7065BlueUnits,
    .event_script_victory = EventScr_S7065_Victory,
};

const EventListScr EventListScr_S7071_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7071_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7071 = {
    .event_list_turn = EventListScr_S7071_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7071_Move,
    .units_red = S7071RedUnits,
    .units_blue = S7071BlueUnits,
    .event_script_victory = EventScr_S7071_Victory,
};

const EventListScr EventListScr_S7072_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7072_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7072 = {
    .event_list_turn = EventListScr_S7072_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7072_Move,
    .units_red = S7072RedUnits,
    .units_blue = S7072BlueUnits,
    .event_script_victory = EventScr_S7072_Victory,
};

const EventListScr EventListScr_S7073_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7073_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7073 = {
    .event_list_turn = EventListScr_S7073_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7073_Move,
    .units_red = S7073RedUnits,
    .units_blue = S7073BlueUnits,
    .event_script_victory = EventScr_S7073_Victory,
};

const EventListScr EventListScr_S7074_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7074_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7074 = {
    .event_list_turn = EventListScr_S7074_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7074_Move,
    .units_red = S7074RedUnits,
    .units_blue = S7074BlueUnits,
    .event_script_victory = EventScr_S7074_Victory,
};

const EventListScr EventListScr_S7075_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7075 = {
    .event_list_turn = EventListScr_S7075_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7075_Move,
    .units_red = S7075RedUnits,
    .units_blue = S7075BlueUnits,
    .event_script_victory = EventScr_S7075_Victory,
};

const EventListScr EventListScr_S7081_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7081_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7081 = {
    .event_list_turn = EventListScr_S7081_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7081_Move,
    .units_red = S7081RedUnits,
    .units_blue = S7081BlueUnits,
    .event_script_victory = EventScr_S7081_Victory,
};

const EventListScr EventListScr_S7082_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7082_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7082 = {
    .event_list_turn = EventListScr_S7082_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7082_Move,
    .units_red = S7082RedUnits,
    .units_blue = S7082BlueUnits,
    .event_script_victory = EventScr_S7082_Victory,
};

const EventListScr EventListScr_S7083_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7083_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7083 = {
    .event_list_turn = EventListScr_S7083_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7083_Move,
    .units_red = S7083RedUnits,
    .units_blue = S7083BlueUnits,
    .event_script_victory = EventScr_S7083_Victory,
};

const EventListScr EventListScr_S7084_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7084_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7084 = {
    .event_list_turn = EventListScr_S7084_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7084_Move,
    .units_red = S7084RedUnits,
    .units_blue = S7084BlueUnits,
    .event_script_victory = EventScr_S7084_Victory,
};

const EventListScr EventListScr_S7085_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7085_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7085 = {
    .event_list_turn = EventListScr_S7085_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7085_Move,
    .units_red = S7085RedUnits,
    .units_blue = S7085BlueUnits,
    .event_script_victory = EventScr_S7085_Victory,
};

const EventListScr EventListScr_S7091_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7091_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7091 = {
    .event_list_turn = EventListScr_S7091_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7091_Move,
    .units_red = S7091RedUnits,
    .units_blue = S7091BlueUnits,
    .event_script_victory = EventScr_S7091_Victory,
};

const EventListScr EventListScr_S7092_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7092_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7092 = {
    .event_list_turn = EventListScr_S7092_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7092_Move,
    .units_red = S7092RedUnits,
    .units_blue = S7092BlueUnits,
    .event_script_victory = EventScr_S7092_Victory,
};

const EventListScr EventListScr_S7093_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7093_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7093 = {
    .event_list_turn = EventListScr_S7093_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7093_Move,
    .units_red = S7093RedUnits,
    .units_blue = S7093BlueUnits,
    .event_script_victory = EventScr_S7093_Victory,
};

const EventListScr EventListScr_S7094_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7094_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7094 = {
    .event_list_turn = EventListScr_S7094_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7094_Move,
    .units_red = S7094RedUnits,
    .units_blue = S7094BlueUnits,
    .event_script_victory = EventScr_S7094_Victory,
};

const EventListScr EventListScr_S7095_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7095_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7095 = {
    .event_list_turn = EventListScr_S7095_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7095_Move,
    .units_red = S7095RedUnits,
    .units_blue = S7095BlueUnits,
    .event_script_victory = EventScr_S7095_Victory,
};

const EventListScr EventListScr_S7101_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7101_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7101 = {
    .event_list_turn = EventListScr_S7101_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7101_Move,
    .units_red = S7101RedUnits,
    .units_blue = S7101BlueUnits,
    .event_script_victory = EventScr_S7101_Victory,
};

const EventListScr EventListScr_S7102_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7102_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7102 = {
    .event_list_turn = EventListScr_S7102_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7102_Move,
    .units_red = S7102RedUnits,
    .units_blue = S7102BlueUnits,
    .event_script_victory = EventScr_S7102_Victory,
};

const EventListScr EventListScr_S7103_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7103_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7103 = {
    .event_list_turn = EventListScr_S7103_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7103_Move,
    .units_red = S7103RedUnits,
    .units_blue = S7103BlueUnits,
    .event_script_victory = EventScr_S7103_Victory,
};

const EventListScr EventListScr_S7104_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7104_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7104 = {
    .event_list_turn = EventListScr_S7104_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7104_Move,
    .units_red = S7104RedUnits,
    .units_blue = S7104BlueUnits,
    .event_script_victory = EventScr_S7104_Victory,
};

const EventListScr EventListScr_S7105_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7105_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7105 = {
    .event_list_turn = EventListScr_S7105_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7105_Move,
    .units_red = S7105RedUnits,
    .units_blue = S7105BlueUnits,
    .event_script_victory = EventScr_S7105_Victory,
};

const EventListScr EventListScr_S7111_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7111_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7111 = {
    .event_list_turn = EventListScr_S7111_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7111_Move,
    .units_red = S7111RedUnits,
    .units_blue = S7111BlueUnits,
    .event_script_victory = EventScr_S7111_Victory,
};

const EventListScr EventListScr_S7112_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7112_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7112 = {
    .event_list_turn = EventListScr_S7112_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7112_Move,
    .units_red = S7112RedUnits,
    .units_blue = S7112BlueUnits,
    .event_script_victory = EventScr_S7112_Victory,
};

const EventListScr EventListScr_S7113_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7113_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7113 = {
    .event_list_turn = EventListScr_S7113_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7113_Move,
    .units_red = S7113RedUnits,
    .units_blue = S7113BlueUnits,
    .event_script_victory = EventScr_S7113_Victory,
};

const EventListScr EventListScr_S7114_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7114_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7114 = {
    .event_list_turn = EventListScr_S7114_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7114_Move,
    .units_red = S7114RedUnits,
    .units_blue = S7114BlueUnits,
    .event_script_victory = EventScr_S7114_Victory,
};

const EventListScr EventListScr_S7115_Move[] = {
    EvtListFlag(0, EventScr_GameOver, FLAG_101)
    EvtListFunc(FLAG_3, EventScr_S7115_Victory, func_fe6_0806C2F8)
    EvtListEnd
};

const struct ChapterEventInfo ChapterEventInfo_S7115 = {
    .event_list_turn = EventListScr_S7115_Turn,
    .event_list_talk = DummyEvent,
    .event_list_tile = DummyEvent,
    .event_list_move = EventListScr_S7115_Move,
    .units_red = S7115RedUnits,
    .units_blue = S7115BlueUnits,
    .event_script_victory = EventScr_S7115_Victory,
};

