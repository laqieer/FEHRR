
#include "unit.h"
#include "blueunitdefs.h"
#include "redunitdefs.h"
#include "event.h"
#include "eventinfo.h"
#include "eventfunctions.h"
#include "eventscript.h"
#include "faction.h"
#include "backgrounds.h"
#include "texts.h"
#include "heroes.h"
#include "constants/pids.h"
#include "constants/iids.h"
#include "constants/jids.h"
#include "constants/songs.h"
#include "songsNew.h"
#include "constants/chapters.h"
#include "chapterNew.h"
#include "chapters.h"

const EventScr EventScr_LoadUnits_S0001[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_Brave)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S0001)
    EvtClearTalk
    EvtLoadUnits(S0001RedUnits)
    EvtLoadUnits(S0001BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0001_Victory[] = {
    EvtSetBgm(S0001_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_Brave)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S0001)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0002)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0001_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0001, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0002[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_Brave)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S0002)
    EvtClearTalk
    EvtLoadUnits(S0002RedUnits)
    EvtLoadUnits(S0002BlueUnits)
    EvtSetBgm(S0002_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S0002)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0002_Victory[] = {
    EvtSetBgm(S0002_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_Brave)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S0002)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0101)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0002_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0002, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0101[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_BraveForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S0101)
    EvtClearTalk
    EvtLoadUnits(S0101RedUnits)
    EvtLoadUnits(S0101BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0101_Victory[] = {
    EvtSetBgm(S0101_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_PlainSea)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S0101)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0102)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0101_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0101, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0102[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_PlainForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S0102)
    EvtClearTalk
    EvtLoadUnits(S0102RedUnits)
    EvtLoadUnits(S0102BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S0102)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0102_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S0102)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_PlainForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S0102)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0103)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0102_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0102, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0103[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_Brave)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S0103)
    EvtClearTalk
    EvtLoadUnits(S0103RedUnits)
    EvtLoadUnits(S0103BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0103_Victory[] = {
    EvtSetBgm(S0103_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_Brave)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S0103)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0201)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0103_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0103, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0201[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_Brave)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S0201)
    EvtClearTalk
    EvtLoadUnits(S0201RedUnits)
    EvtLoadUnits(S0201BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S0201)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0201_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S0201)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0202)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0201_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0201, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0202[] = {
    EvtLoadUnits(S0202RedUnits)
    EvtLoadUnits(S0202BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0202_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0203)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0202_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0202, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0203[] = {
    EvtLoadUnits(S0203RedUnits)
    EvtLoadUnits(S0203BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0203_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0204)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0203_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0203, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0204[] = {
    EvtLoadUnits(S0204RedUnits)
    EvtLoadUnits(S0204BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0204_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0205)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0204_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0204, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0205[] = {
    EvtLoadUnits(S0205RedUnits)
    EvtLoadUnits(S0205BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S0205)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0205_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S0205)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_PlainSea)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S0205)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0301)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0205_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0205, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0301[] = {
    EvtLoadUnits(S0301RedUnits)
    EvtLoadUnits(S0301BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S0301)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0301_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S0301)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0302)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0301_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0301, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0302[] = {
    EvtLoadUnits(S0302RedUnits)
    EvtLoadUnits(S0302BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0302_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0303)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0302_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0302, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0303[] = {
    EvtLoadUnits(S0303RedUnits)
    EvtLoadUnits(S0303BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0303_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0304)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0303_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0303, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0304[] = {
    EvtLoadUnits(S0304RedUnits)
    EvtLoadUnits(S0304BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0304_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0305)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0304_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0304, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0305[] = {
    EvtLoadUnits(S0305RedUnits)
    EvtLoadUnits(S0305BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S0305)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0305_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S0305)
    EvtClearTalk
    EvtSetBgm(S0305_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_005_Castle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S0305)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0401)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0305_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0305, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0401[] = {
    EvtLoadUnits(S0401RedUnits)
    EvtLoadUnits(S0401BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S0401)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0401_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S0401)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0402)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0401_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0401, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0402[] = {
    EvtLoadUnits(S0402RedUnits)
    EvtLoadUnits(S0402BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0402_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0403)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0402_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0402, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0403[] = {
    EvtLoadUnits(S0403RedUnits)
    EvtLoadUnits(S0403BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0403_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0404)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0403_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0403, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0404[] = {
    EvtLoadUnits(S0404RedUnits)
    EvtLoadUnits(S0404BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0404_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0405)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0404_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0404, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0405[] = {
    EvtLoadUnits(S0405RedUnits)
    EvtLoadUnits(S0405BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S0405)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0405_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S0405)
    EvtClearTalk
    EvtNoSkip
    EvtSleep(60 * 1)
    EvtFunc(func_fe6_0806D0E4)
    EvtSleep(60 * 16)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_003_Volcano)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S0405)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0501)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0405_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0405, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0501[] = {
    EvtLoadUnits(S0501RedUnits)
    EvtLoadUnits(S0501BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S0501)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0501_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S0501)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0502)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0501_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0501, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0502[] = {
    EvtLoadUnits(S0502RedUnits)
    EvtLoadUnits(S0502BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0502_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0503)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0502_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0502, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0503[] = {
    EvtLoadUnits(S0503RedUnits)
    EvtLoadUnits(S0503BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0503_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0504)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0503_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0503, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0504[] = {
    EvtLoadUnits(S0504RedUnits)
    EvtLoadUnits(S0504BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0504_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0505)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0504_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0504, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0505[] = {
    EvtLoadUnits(S0505RedUnits)
    EvtLoadUnits(S0505BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S0505)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0505_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S0505)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_PlainForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S0505)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0601)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0505_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0505, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0601[] = {
    EvtLoadUnits(S0601RedUnits)
    EvtLoadUnits(S0601BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S0601)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0601_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S0601)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0602)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0601_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0601, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0602[] = {
    EvtLoadUnits(S0602RedUnits)
    EvtLoadUnits(S0602BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0602_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0603)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0602_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0602, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0603[] = {
    EvtLoadUnits(S0603RedUnits)
    EvtLoadUnits(S0603BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0603_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0604)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0603_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0603, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0604[] = {
    EvtLoadUnits(S0604RedUnits)
    EvtLoadUnits(S0604BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0604_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0605)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0604_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0604, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0605[] = {
    EvtLoadUnits(S0605RedUnits)
    EvtLoadUnits(S0605BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S0605)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0605_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S0605)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_PlainForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S0605)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0701)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0605_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0605, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0701[] = {
    EvtLoadUnits(S0701RedUnits)
    EvtLoadUnits(S0701BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S0701)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0701_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S0701)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0702)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0701_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0701, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0702[] = {
    EvtLoadUnits(S0702RedUnits)
    EvtLoadUnits(S0702BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0702_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0703)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0702_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0702, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0703[] = {
    EvtLoadUnits(S0703RedUnits)
    EvtLoadUnits(S0703BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0703_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0704)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0703_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0703, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0704[] = {
    EvtLoadUnits(S0704RedUnits)
    EvtLoadUnits(S0704BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0704_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0705)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0704_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0704, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0705[] = {
    EvtLoadUnits(S0705RedUnits)
    EvtLoadUnits(S0705BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S0705)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0705_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S0705)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_005_CastleJP)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S0705)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0801)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0705_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0705, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0801[] = {
    EvtLoadUnits(S0801RedUnits)
    EvtLoadUnits(S0801BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S0801)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0801_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S0801)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0802)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0801_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0801, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0802[] = {
    EvtLoadUnits(S0802RedUnits)
    EvtLoadUnits(S0802BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0802_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0803)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0802_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0802, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0803[] = {
    EvtLoadUnits(S0803RedUnits)
    EvtLoadUnits(S0803BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0803_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0804)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0803_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0803, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0804[] = {
    EvtLoadUnits(S0804RedUnits)
    EvtLoadUnits(S0804BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0804_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0805)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0804_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0804, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0805[] = {
    EvtLoadUnits(S0805RedUnits)
    EvtLoadUnits(S0805BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S0805)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0805_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S0805)
    EvtClearTalk
    EvtSetBgm(S0805_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_PlainForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S0805)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0901)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0805_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0805, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0901[] = {
    EvtLoadUnits(S0901RedUnits)
    EvtLoadUnits(S0901BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S0901)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0901_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S0901)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0902)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0901_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0901, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0902[] = {
    EvtLoadUnits(S0902RedUnits)
    EvtLoadUnits(S0902BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0902_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0903)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0902_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0902, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0903[] = {
    EvtLoadUnits(S0903RedUnits)
    EvtLoadUnits(S0903BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0903_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0904)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0903_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0903, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0904[] = {
    EvtLoadUnits(S0904RedUnits)
    EvtLoadUnits(S0904BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0904_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0905)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0904_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0904, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0905[] = {
    EvtLoadUnits(S0905RedUnits)
    EvtLoadUnits(S0905BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S0905)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0905_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S0905)
    EvtClearTalk
    EvtSetBgm(S0905_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_PlainForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S0905)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S1001)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0905_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0905, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1001[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_Brave)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S1001)
    EvtClearTalk
    EvtLoadUnits(S1001RedUnits)
    EvtLoadUnits(S1001BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S1001)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S1001_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S1001)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S1002)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S1001_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1001, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1002[] = {
    EvtLoadUnits(S1002RedUnits)
    EvtLoadUnits(S1002BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S1002_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S1003)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S1002_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1002, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1003[] = {
    EvtLoadUnits(S1003RedUnits)
    EvtLoadUnits(S1003BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S1003_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S1004)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S1003_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1003, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1004[] = {
    EvtLoadUnits(S1004RedUnits)
    EvtLoadUnits(S1004BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S1004)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S1004_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S1004)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S1005)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S1004_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1004, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1005[] = {
    EvtLoadUnits(S1005RedUnits)
    EvtLoadUnits(S1005BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S1005)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S1005_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S1005)
    EvtClearTalk
    EvtSetBgm(S1005_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_Brave)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S1005)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S1101)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S1005_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1005, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1101[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_Brave)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S1101)
    EvtClearTalk
    EvtLoadUnits(S1101RedUnits)
    EvtLoadUnits(S1101BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S1101)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S1101RedUnits_Turn_1_3[] = {
    EvtLoadUnits(S1101RedUnits_Turn_1_3)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S1101RedUnits_Turn_3_5[] = {
    EvtLoadUnits(S1101RedUnits_Turn_3_5)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S1101_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S1101)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_Brave)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S1101)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S1102)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S1101_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1101, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S1101RedUnits_Turn_3_5, 1, 3, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S1101RedUnits_Turn_3_5, 3, 5, FACTION_RED)
    EvtListTurn(0, EventScr_S1101_Victory, 6 + 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1102[] = {
    EvtLoadUnits(S1102RedUnits)
    EvtLoadUnits(S1102BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S1102_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S1103)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S1102_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1102, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1103[] = {
    EvtLoadUnits(S1103RedUnits)
    EvtLoadUnits(S1103BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S1103)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S1103RedUnits_Turn_4_6[] = {
    EvtLoadUnits(S1103RedUnits_Turn_4_6)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S1103_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S1103)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S1104)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S1103_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1103, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S1103RedUnits_Turn_4_6, 4, 6, FACTION_RED)
    EvtListTurn(0, EventScr_S1103_Victory, 6 + 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1104[] = {
    EvtLoadUnits(S1104RedUnits)
    EvtLoadUnits(S1104BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S1104RedUnits_Turn_1_1[] = {
    EvtLoadUnits(S1104RedUnits_Turn_1_1)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S1104RedUnits_Turn_4_5[] = {
    EvtLoadUnits(S1104RedUnits_Turn_4_5)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S1104RedUnits_Turn_4_4[] = {
    EvtLoadUnits(S1104RedUnits_Turn_4_4)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S1104RedUnits_Turn_6_6[] = {
    EvtLoadUnits(S1104RedUnits_Turn_6_6)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S1104_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S1104)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S1105)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S1104_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1104, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S1104RedUnits_Turn_6_6, 1, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S1104RedUnits_Turn_6_6, 4, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S1104RedUnits_Turn_6_6, 4, 5, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S1104RedUnits_Turn_6_6, 6, 0, FACTION_RED)
    EvtListTurn(0, EventScr_S1104_Victory, 6 + 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1105[] = {
    EvtLoadUnits(S1105RedUnits)
    EvtLoadUnits(S1105BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S1105)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S1105_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S1105)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_ForestNight)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S1105)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S1201)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S1105_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1105, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_S1105_Victory, 6 + 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1201[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_Brave)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S1201)
    EvtClearTalk
    EvtLoadUnits(S1201RedUnits)
    EvtLoadUnits(S1201BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S1201)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S1201_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S1201)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S1202)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S1201_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1201, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1202[] = {
    EvtLoadUnits(S1202RedUnits)
    EvtLoadUnits(S1202BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S1202_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S1203)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S1202_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1202, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1203[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_Brave)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtLoadUnits(S1203RedUnits)
    EvtLoadUnits(S1203BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S1203)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S1203RedUnits_Turn_2_2[] = {
    EvtLoadUnits(S1203RedUnits_Turn_2_2)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S1203RedUnits_Turn_3_3[] = {
    EvtLoadUnits(S1203RedUnits_Turn_3_3)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S1203RedUnits_Turn_4_4[] = {
    EvtLoadUnits(S1203RedUnits_Turn_4_4)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S1203_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S1204)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S1203_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1203, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S1203RedUnits_Turn_4_4, 2, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S1203RedUnits_Turn_4_4, 3, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S1203RedUnits_Turn_4_4, 4, 0, FACTION_RED)
    EvtListTurn(0, EventScr_S1203_Victory, 6 + 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1204[] = {
    EvtLoadUnits(S1204RedUnits)
    EvtLoadUnits(S1204BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S1204_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S1205)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S1204_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1204, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1205[] = {
    EvtLoadUnits(S1205RedUnits)
    EvtLoadUnits(S1205BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S1205)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S1205_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S1205)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_005_Castle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S1205)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S1301)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S1205_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1205, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_S1205_Victory, 6 + 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1301[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_Brave)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S1301)
    EvtClearTalk
    EvtLoadUnits(S1301RedUnits)
    EvtLoadUnits(S1301BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S1301)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S1301_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S1301)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S1302)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S1301_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1301, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1302[] = {
    EvtLoadUnits(S1302RedUnits)
    EvtLoadUnits(S1302BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S1302_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S1303)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S1302_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1302, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_S1302_Victory, 4 + 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1303[] = {
    EvtLoadUnits(S1303RedUnits)
    EvtLoadUnits(S1303BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S1303_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S1304)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S1303_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1303, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_S1303_Victory, 4 + 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1304[] = {
    EvtLoadUnits(S1304RedUnits)
    EvtLoadUnits(S1304BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S1304_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S1305)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S1304_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1304, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_S1304_Victory, 5 + 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1305[] = {
    EvtLoadUnits(S1305RedUnits)
    EvtLoadUnits(S1305BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S1305)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S1305_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S1305)
    EvtClearTalk
    EvtSetBgm(S1305_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_005_Castle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S1305)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S1401)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S1305_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1305, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1401[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_Brave)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S1401)
    EvtClearTalk
    EvtLoadUnits(S1401RedUnits)
    EvtLoadUnits(S1401BlueUnits)
    EvtSetBgm(S1401_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S1401)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S1401_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S1401)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S1402)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S1401_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1401, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1402[] = {
    EvtLoadUnits(S1402RedUnits)
    EvtLoadUnits(S1402BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S1402_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S1403)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S1402_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1402, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1403[] = {
    EvtLoadUnits(S1403RedUnits)
    EvtLoadUnits(S1403BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S1403)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S1403RedUnits_Turn_4_4[] = {
    EvtLoadUnits(S1403RedUnits_Turn_4_4)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S1403RedUnits_Turn_3_3[] = {
    EvtLoadUnits(S1403RedUnits_Turn_3_3)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S1403RedUnits_Turn_2_2[] = {
    EvtLoadUnits(S1403RedUnits_Turn_2_2)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S1403RedUnits_Turn_5_5[] = {
    EvtLoadUnits(S1403RedUnits_Turn_5_5)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S1403RedUnits_Turn_6_6[] = {
    EvtLoadUnits(S1403RedUnits_Turn_6_6)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S1403_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S1404)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S1403_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1403, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S1403RedUnits_Turn_6_6, 2, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S1403RedUnits_Turn_6_6, 3, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S1403RedUnits_Turn_6_6, 4, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S1403RedUnits_Turn_6_6, 5, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S1403RedUnits_Turn_6_6, 6, 0, FACTION_RED)
    EvtListTurn(0, EventScr_S1403_Victory, 7 + 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1404[] = {
    EvtLoadUnits(S1404RedUnits)
    EvtLoadUnits(S1404BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S1404_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S1405)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S1404_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1404, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1405[] = {
    EvtLoadUnits(S1405RedUnits)
    EvtLoadUnits(S1405BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S1405)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S1405_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S1405)
    EvtClearTalk
    EvtSetBgm(S1405_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_005_Castle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S1405)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S1501)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S1405_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1405, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1501[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_Brave)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S1501)
    EvtClearTalk
    EvtLoadUnits(S1501RedUnits)
    EvtLoadUnits(S1501BlueUnits)
    EvtSetBgm(S1501_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S1501)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S1501_Victory[] = {
    EvtSetBgm(S1501_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_005_Castle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S1501)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S1601)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S1501_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1501, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1601[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_007_SnowDreaming)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S1601)
    EvtClearTalk
    EvtLoadUnits(S1601RedUnits)
    EvtLoadUnits(S1601BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S1601)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S1601_Victory[] = {
    EvtSetBgm(S1601_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_005_Castle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S1601)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2011)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S1601_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1601, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2011[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_Brave)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S2011)
    EvtClearTalk
    EvtLoadUnits(S2011RedUnits)
    EvtLoadUnits(S2011BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2011)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2011_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S2011)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2012)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2011_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2011, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2012[] = {
    EvtLoadUnits(S2012RedUnits)
    EvtLoadUnits(S2012BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2012_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2013)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2012_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2012, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2013[] = {
    EvtLoadUnits(S2013RedUnits)
    EvtLoadUnits(S2013BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2013_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2014)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2013_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2013, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2014[] = {
    EvtLoadUnits(S2014RedUnits)
    EvtLoadUnits(S2014BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2014_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S2014)
    EvtClearTalk
    EvtSetBgm(S2014_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_BraveAttack)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S2014)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2015)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2014_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2014, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2015[] = {
    EvtLoadUnits(S2015RedUnits)
    EvtLoadUnits(S2015BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2015)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2015_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S2015)
    EvtClearTalk
    EvtSetBgm(S2015_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_BraveAttack)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S2015)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2021)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2015_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2015, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2021[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_BraveInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S2021)
    EvtClearTalk
    EvtLoadUnits(S2021RedUnits)
    EvtLoadUnits(S2021BlueUnits)
    EvtSetBgm(S2021_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2021)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2021_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S2021)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2022)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2021_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2021, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2022[] = {
    EvtLoadUnits(S2022RedUnits)
    EvtLoadUnits(S2022BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2022_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2023)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2022_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2022, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2023[] = {
    EvtLoadUnits(S2023RedUnits)
    EvtLoadUnits(S2023BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2023_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2024)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2023_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2023, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2024[] = {
    EvtLoadUnits(S2024RedUnits)
    EvtLoadUnits(S2024BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2024_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2025)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2024_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2024, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2025[] = {
    EvtLoadUnits(S2025RedUnits)
    EvtLoadUnits(S2025BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2025)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S2025RedUnits_Turn_2_2[] = {
    EvtLoadUnits(S2025RedUnits_Turn_2_2)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S2025RedUnits_Turn_3_3[] = {
    EvtLoadUnits(S2025RedUnits_Turn_3_3)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S2025RedUnits_Turn_4_4[] = {
    EvtLoadUnits(S2025RedUnits_Turn_4_4)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2025_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S2025)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2031)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2025_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2025, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S2025RedUnits_Turn_4_4, 2, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S2025RedUnits_Turn_4_4, 3, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S2025RedUnits_Turn_4_4, 4, 0, FACTION_RED)
    EvtListTurn(0, EventScr_S2025_Victory, 6 + 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2031[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_007_SnowDreaming)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S2031)
    EvtClearTalk
    EvtLoadUnits(S2031RedUnits)
    EvtLoadUnits(S2031BlueUnits)
    EvtSetBgm(S2031_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2031)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2031_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S2031)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2032)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2031_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2031, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2032[] = {
    EvtLoadUnits(S2032RedUnits)
    EvtLoadUnits(S2032BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2032)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2032_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2033)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2032_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2032, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2033[] = {
    EvtLoadUnits(S2033RedUnits)
    EvtLoadUnits(S2033BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2033)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2033_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2034)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2033_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2033, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2034[] = {
    EvtLoadUnits(S2034RedUnits)
    EvtLoadUnits(S2034BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2034)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2034_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S2034)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_BraveForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2035)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2034_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2034, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2035[] = {
    EvtLoadUnits(S2035RedUnits)
    EvtLoadUnits(S2035BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2035)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2035_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S2035)
    EvtClearTalk
    EvtSetBgm(S2035_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_005_Castle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S2035)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2041)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2035_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2035, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_S2035_Victory, 4 + 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2041[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_BraveForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S2041)
    EvtClearTalk
    EvtLoadUnits(S2041RedUnits)
    EvtLoadUnits(S2041BlueUnits)
    EvtSetBgm(S2041_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2041)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2041_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S2041)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2042)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2041_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2041, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2042[] = {
    EvtLoadUnits(S2042RedUnits)
    EvtLoadUnits(S2042BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2042)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2042_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2043)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2042_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2042, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2043[] = {
    EvtLoadUnits(S2043RedUnits)
    EvtLoadUnits(S2043BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2043)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2043_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2044)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2043_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2043, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2044[] = {
    EvtLoadUnits(S2044RedUnits)
    EvtLoadUnits(S2044BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2044)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2044_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S2044)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_BraveForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S2044)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2045)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2044_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2044, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2045[] = {
    EvtLoadUnits(S2045RedUnits)
    EvtLoadUnits(S2045BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2045)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S2045RedUnits_Turn_2_2[] = {
    EvtLoadUnits(S2045RedUnits_Turn_2_2)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S2045RedUnits_Turn_3_3[] = {
    EvtLoadUnits(S2045RedUnits_Turn_3_3)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S2045RedUnits_Turn_4_4[] = {
    EvtLoadUnits(S2045RedUnits_Turn_4_4)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2045_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S2045)
    EvtClearTalk
    EvtSetBgm(S2045_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_BraveForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S2045)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2051)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2045_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2045, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S2045RedUnits_Turn_4_4, 2, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S2045RedUnits_Turn_4_4, 3, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S2045RedUnits_Turn_4_4, 4, 0, FACTION_RED)
    EvtListTurn(0, EventScr_S2045_Victory, 6 + 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2051[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_025_NiflPlain)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S2051)
    EvtClearTalk
    EvtLoadUnits(S2051RedUnits)
    EvtLoadUnits(S2051BlueUnits)
    EvtSetBgm(S2051_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2051)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2051_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S2051)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_025_NiflPlain)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S2051)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2052)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2051_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2051, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2052[] = {
    EvtLoadUnits(S2052RedUnits)
    EvtLoadUnits(S2052BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2052)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S2052RedUnits_Turn_2_2[] = {
    EvtLoadUnits(S2052RedUnits_Turn_2_2)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S2052RedUnits_Turn_3_3[] = {
    EvtLoadUnits(S2052RedUnits_Turn_3_3)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S2052RedUnits_Turn_4_4[] = {
    EvtLoadUnits(S2052RedUnits_Turn_4_4)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S2052RedUnits_Turn_5_5[] = {
    EvtLoadUnits(S2052RedUnits_Turn_5_5)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2052_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S2052)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2053)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2052_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2052, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S2052RedUnits_Turn_5_5, 2, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S2052RedUnits_Turn_5_5, 3, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S2052RedUnits_Turn_5_5, 4, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S2052RedUnits_Turn_5_5, 5, 0, FACTION_RED)
    EvtListTurn(0, EventScr_S2052_Victory, 6 + 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2053[] = {
    EvtLoadUnits(S2053RedUnits)
    EvtLoadUnits(S2053BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2053)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2053_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2054)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2053_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2053, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_S2053_Victory, 4 + 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2054[] = {
    EvtLoadUnits(S2054RedUnits)
    EvtLoadUnits(S2054BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2054)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2054_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2055)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2054_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2054, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2055[] = {
    EvtLoadUnits(S2055RedUnits)
    EvtLoadUnits(S2055BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2055)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2055_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S2055)
    EvtClearTalk
    EvtSetBgm(S2055_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_025_NiflPlain)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S2055)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2061)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2055_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2055, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2061[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_007_SnowDreaming)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S2061)
    EvtClearTalk
    EvtLoadUnits(S2061RedUnits)
    EvtLoadUnits(S2061BlueUnits)
    EvtSetBgm(S2061_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2061)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2061_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S2061)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2062)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2061_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2061, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2062[] = {
    EvtLoadUnits(S2062RedUnits)
    EvtLoadUnits(S2062BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2062)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2062_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2063)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2062_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2062, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2063[] = {
    EvtLoadUnits(S2063RedUnits)
    EvtLoadUnits(S2063BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2063)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2063_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2064)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2063_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2063, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2064[] = {
    EvtLoadUnits(S2064RedUnits)
    EvtLoadUnits(S2064BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2064)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2064_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S2064)
    EvtClearTalk
    EvtSetBgm(S2064_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_025_NiflPlain)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S2064)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2065)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2064_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2064, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2065[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_025_NiflPlain)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S2065)
    EvtClearTalk
    EvtLoadUnits(S2065RedUnits)
    EvtLoadUnits(S2065BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2065)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2065_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S2065)
    EvtClearTalk
    EvtSetBgm(S2065_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_005_Castle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S2065)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2071)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2065_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2065, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2071[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_007_SnowDreaming)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S2071)
    EvtClearTalk
    EvtLoadUnits(S2071RedUnits)
    EvtLoadUnits(S2071BlueUnits)
    EvtSetBgm(S2071_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2071)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2071_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S2071)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2072)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2071_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2071, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2072[] = {
    EvtLoadUnits(S2072RedUnits)
    EvtLoadUnits(S2072BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2072)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2072_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2073)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2072_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2072, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2073[] = {
    EvtLoadUnits(S2073RedUnits)
    EvtLoadUnits(S2073BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2073)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2073_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2074)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2073_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2073, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2074[] = {
    EvtLoadUnits(S2074RedUnits)
    EvtLoadUnits(S2074BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2074)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2074_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2075)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2074_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2074, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2075[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_025_NiflPlain)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S2075)
    EvtClearTalk
    EvtLoadUnits(S2075RedUnits)
    EvtLoadUnits(S2075BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S2075RedUnits_Turn_3_3[] = {
    EvtLoadUnits(S2075RedUnits_Turn_3_3)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S2075RedUnits_Turn_2_2[] = {
    EvtLoadUnits(S2075RedUnits_Turn_2_2)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S2075RedUnits_Turn_4_4[] = {
    EvtLoadUnits(S2075RedUnits_Turn_4_4)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S2075RedUnits_Turn_5_5[] = {
    EvtLoadUnits(S2075RedUnits_Turn_5_5)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2075_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S2075)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_025_NiflPlain)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S2075)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2081)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2075_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2075, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S2075RedUnits_Turn_5_5, 2, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S2075RedUnits_Turn_5_5, 3, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S2075RedUnits_Turn_5_5, 4, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S2075RedUnits_Turn_5_5, 5, 0, FACTION_RED)
    EvtListTurn(0, EventScr_S2075_Victory, 6 + 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2081[] = {
    EvtLoadUnits(S2081RedUnits)
    EvtLoadUnits(S2081BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2081)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2081_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S2081)
    EvtClearTalk
    EvtSetBgm(S2081_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_005_Castle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S2081)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2082)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2081_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2081, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2082[] = {
    EvtLoadUnits(S2082RedUnits)
    EvtLoadUnits(S2082BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2082)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2082_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2083)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2082_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2082, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2083[] = {
    EvtLoadUnits(S2083RedUnits)
    EvtLoadUnits(S2083BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2083)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2083_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2084)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2083_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2083, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2084[] = {
    EvtLoadUnits(S2084RedUnits)
    EvtLoadUnits(S2084BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2084)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2084_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2085)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2084_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2084, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2085[] = {
    EvtLoadUnits(S2085RedUnits)
    EvtLoadUnits(S2085BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2085)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2085_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S2085)
    EvtClearTalk
    EvtSetBgm(S2085_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_005_Castle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S2085)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2091)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2085_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2085, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2091[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_025_NiflPlain)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S2091)
    EvtClearTalk
    EvtLoadUnits(S2091RedUnits)
    EvtLoadUnits(S2091BlueUnits)
    EvtSetBgm(S2091_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2091)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2091_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S2091)
    EvtClearTalk
    EvtSetBgm(S2091_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_026_MuspelCastle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S2091)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2092)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2091_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2091, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2092[] = {
    EvtLoadUnits(S2092RedUnits)
    EvtLoadUnits(S2092BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2092)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2092_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2093)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2092_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2092, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2093[] = {
    EvtLoadUnits(S2093RedUnits)
    EvtLoadUnits(S2093BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2093)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2093_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2094)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2093_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2093, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2094[] = {
    EvtLoadUnits(S2094RedUnits)
    EvtLoadUnits(S2094BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2094)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2094_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2095)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2094_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2094, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2095[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_026_MuspelCastle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S2095)
    EvtClearTalk
    EvtLoadUnits(S2095RedUnits)
    EvtLoadUnits(S2095BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2095)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S2095RedUnits_Turn_3_3[] = {
    EvtLoadUnits(S2095RedUnits_Turn_3_3)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S2095RedUnits_Turn_2_2[] = {
    EvtLoadUnits(S2095RedUnits_Turn_2_2)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S2095RedUnits_Turn_4_4[] = {
    EvtLoadUnits(S2095RedUnits_Turn_4_4)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2095_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S2095)
    EvtClearTalk
    EvtSetBgm(S2095_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_026_Muspel)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S2095)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2101)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2095_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2095, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S2095RedUnits_Turn_4_4, 2, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S2095RedUnits_Turn_4_4, 3, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S2095RedUnits_Turn_4_4, 4, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2101[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_026_Muspel)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S2101)
    EvtClearTalk
    EvtLoadUnits(S2101RedUnits)
    EvtLoadUnits(S2101BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2101)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2101_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S2101)
    EvtClearTalk
    EvtSetBgm(S2101_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_026_MuspelCastle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S2101)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2102)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2101_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2101, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2102[] = {
    EvtLoadUnits(S2102RedUnits)
    EvtLoadUnits(S2102BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2102)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2102_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2103)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2102_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2102, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2103[] = {
    EvtLoadUnits(S2103RedUnits)
    EvtLoadUnits(S2103BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2103)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2103_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2104)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2103_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2103, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2104[] = {
    EvtLoadUnits(S2104RedUnits)
    EvtLoadUnits(S2104BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2104)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2104_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2105)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2104_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2104, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2105[] = {
    EvtLoadUnits(S2105RedUnits)
    EvtLoadUnits(S2105BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2105)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S2105RedUnits_Turn_1_1[] = {
    EvtLoadUnits(S2105RedUnits_Turn_1_1)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2105_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S2105)
    EvtClearTalk
    EvtSetBgm(S2105_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_026_Muspel)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S2105)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2111)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2105_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2105, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S2105RedUnits_Turn_1_1, 1, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2111[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_026_Muspel)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S2111)
    EvtClearTalk
    EvtLoadUnits(S2111RedUnits)
    EvtLoadUnits(S2111BlueUnits)
    EvtSetBgm(S2111_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2111)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2111_Victory[] = {
    EvtSetBgm(S2111_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_026_Muspel)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S2111)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2112)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2111_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2111, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_S2111_Victory, 4 + 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2112[] = {
    EvtLoadUnits(S2112RedUnits)
    EvtLoadUnits(S2112BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2112)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2112_Victory[] = {
    EvtSetBgm(S2112_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_026_Muspel)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S2112)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2113)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2112_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2112, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2113[] = {
    EvtLoadUnits(S2113RedUnits)
    EvtLoadUnits(S2113BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2113)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2113_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S2113)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2114)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2113_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2113, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2114[] = {
    EvtLoadUnits(S2114RedUnits)
    EvtLoadUnits(S2114BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2114)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2114_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2115)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2114_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2114, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2115[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_026_Muspel)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S2115)
    EvtClearTalk
    EvtLoadUnits(S2115RedUnits)
    EvtLoadUnits(S2115BlueUnits)
    EvtSetBgm(S2115_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2115)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2115_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S2115)
    EvtClearTalk
    EvtSetBgm(S2115_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_026_Muspel)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S2115)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2121)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2115_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2115, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_S2115_Victory, 5 + 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2121[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_026_Muspel)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S2121)
    EvtClearTalk
    EvtLoadUnits(S2121RedUnits)
    EvtLoadUnits(S2121BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2121)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2121_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S2121)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2122)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2121_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2121, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2122[] = {
    EvtLoadUnits(S2122RedUnits)
    EvtLoadUnits(S2122BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2122)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2122_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2123)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2122_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2122, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2123[] = {
    EvtLoadUnits(S2123RedUnits)
    EvtLoadUnits(S2123BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2123)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2123_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S2123)
    EvtClearTalk
    EvtSetBgm(S2123_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_026_Muspel)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S2123)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2124)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2123_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2123, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2124[] = {
    EvtLoadUnits(S2124RedUnits)
    EvtLoadUnits(S2124BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2124)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2124_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S2124)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_026_MuspelNightForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S2124)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2125)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2124_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2124, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2125[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_026_MuspelNightForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S2125)
    EvtClearTalk
    EvtLoadUnits(S2125RedUnits)
    EvtLoadUnits(S2125BlueUnits)
    EvtSetBgm(S2125_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2125)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S2125RedUnits_Turn_1_1[] = {
    EvtLoadUnits(S2125RedUnits_Turn_1_1)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2125_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S2125)
    EvtClearTalk
    EvtSetBgm(S2125_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_026_MuspelNightForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S2125)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2131)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2125_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2125, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S2125RedUnits_Turn_1_1, 1, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2131[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_026_MuspelTemple)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S2131)
    EvtClearTalk
    EvtLoadUnits(S2131RedUnits)
    EvtLoadUnits(S2131BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2131)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2131_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S2131)
    EvtClearTalk
    EvtSetBgm(S2131_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_026_MuspelTemple)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S2131)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2132)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2131_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2131, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2132[] = {
    EvtLoadUnits(S2132RedUnits)
    EvtLoadUnits(S2132BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2132)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2132_Victory[] = {
    EvtSetBgm(S2132_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_026_MuspelTemple)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S2132)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2133)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2132_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2132, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2133[] = {
    EvtLoadUnits(S2133RedUnits)
    EvtLoadUnits(S2133BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2133)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2133_Victory[] = {
    EvtSetBgm(S2133_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_026_MuspelTemple)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S2133)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2134)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2133_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2133, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2134[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_026_MuspelTemple)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S2134)
    EvtClearTalk
    EvtLoadUnits(S2134RedUnits)
    EvtLoadUnits(S2134BlueUnits)
    EvtSetBgm(S2134_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2134)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2134_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S2134)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_026_MuspelTemple)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S2134)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S2135)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2134_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2134, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2135[] = {
    EvtLoadUnits(S2135RedUnits)
    EvtLoadUnits(S2135BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S2135)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S2135RedUnits_Turn_2_2[] = {
    EvtLoadUnits(S2135RedUnits_Turn_2_2)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S2135RedUnits_Turn_3_3[] = {
    EvtLoadUnits(S2135RedUnits_Turn_3_3)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S2135_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S2135)
    EvtClearTalk
    EvtSetBgm(S2135_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_025_NiflPlain)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S2135)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3011)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2135_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2135, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S2135RedUnits_Turn_3_3, 2, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S2135RedUnits_Turn_3_3, 3, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3011[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_014_GaidenCastle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S3011)
    EvtClearTalk
    EvtLoadUnits(S3011RedUnits)
    EvtLoadUnits(S3011BlueUnits)
    EvtSetBgm(S3011_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3011)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3011_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S3011)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3012)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3011_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3011, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3012[] = {
    EvtLoadUnits(S3012RedUnits)
    EvtLoadUnits(S3012BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3012_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3013)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3012_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3012, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3013[] = {
    EvtLoadUnits(S3013RedUnits)
    EvtLoadUnits(S3013BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3013)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3013_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S3013)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3014)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3013_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3013, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3014[] = {
    EvtLoadUnits(S3014RedUnits)
    EvtLoadUnits(S3014BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3014)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3014_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S3014)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3015)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3014_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3014, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3015[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_BraveHell)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S3015)
    EvtClearTalk
    EvtLoadUnits(S3015RedUnits)
    EvtLoadUnits(S3015BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3015)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3015_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S3015)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_005_Castle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S3015)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3021)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3015_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3015, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3021[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Throne_Brave)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S3021)
    EvtClearTalk
    EvtLoadUnits(S3021RedUnits)
    EvtLoadUnits(S3021BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3021)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3021_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S3021)
    EvtClearTalk
    EvtSetBgm(S3021_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_005_Castle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S3021)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3022)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3021_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3021, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3022[] = {
    EvtLoadUnits(S3022RedUnits)
    EvtLoadUnits(S3022BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3022_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3023)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3022_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3022, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3023[] = {
    EvtLoadUnits(S3023RedUnits)
    EvtLoadUnits(S3023BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3023_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3024)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3023_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3023, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3024[] = {
    EvtLoadUnits(S3024RedUnits)
    EvtLoadUnits(S3024BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3024_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S3024)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3025)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3024_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3024, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3025[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_BraveHell)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S3025)
    EvtClearTalk
    EvtLoadUnits(S3025RedUnits)
    EvtLoadUnits(S3025BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3025)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S3025RedUnits_Turn_2_2[] = {
    EvtLoadUnits(S3025RedUnits_Turn_2_2)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S3025RedUnits_Turn_3_3[] = {
    EvtLoadUnits(S3025RedUnits_Turn_3_3)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S3025RedUnits_Turn_4_4[] = {
    EvtLoadUnits(S3025RedUnits_Turn_4_4)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3025_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S3025)
    EvtClearTalk
    EvtSetBgm(S3025_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_BraveInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S3025)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3031)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3025_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3025, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S3025RedUnits_Turn_4_4, 2, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S3025RedUnits_Turn_4_4, 3, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S3025RedUnits_Turn_4_4, 4, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3031[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_BraveInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S3031)
    EvtClearTalk
    EvtLoadUnits(S3031RedUnits)
    EvtLoadUnits(S3031BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3031)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3031_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S3031)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3032)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3031_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3031, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3032[] = {
    EvtLoadUnits(S3032RedUnits)
    EvtLoadUnits(S3032BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3032)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3032_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3033)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3032_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3032, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3033[] = {
    EvtLoadUnits(S3033RedUnits)
    EvtLoadUnits(S3033BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3033)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3033_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3034)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3033_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3033, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3034[] = {
    EvtLoadUnits(S3034RedUnits)
    EvtLoadUnits(S3034BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3034)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3034_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3035)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3034_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3034, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3035[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_BraveHell)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S3035)
    EvtClearTalk
    EvtLoadUnits(S3035RedUnits)
    EvtLoadUnits(S3035BlueUnits)
    EvtSetBgm(S3035_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3035)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3035_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S3035)
    EvtClearTalk
    EvtSetBgm(S3035_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_BraveHell)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S3035)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3041)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3035_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3035, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3041[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_BraveInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S3041)
    EvtClearTalk
    EvtLoadUnits(S3041RedUnits)
    EvtLoadUnits(S3041BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3041)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3041_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S3041)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3042)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3041_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3041, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3042[] = {
    EvtLoadUnits(S3042RedUnits)
    EvtLoadUnits(S3042BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3042)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3042_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3043)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3042_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3042, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3043[] = {
    EvtLoadUnits(S3043RedUnits)
    EvtLoadUnits(S3043BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3043)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3043_Victory[] = {
    EvtSetBgm(S3043_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_BraveInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S3043)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3044)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3043_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3043, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3044[] = {
    EvtLoadUnits(S3044RedUnits)
    EvtLoadUnits(S3044BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3044)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3044_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S3044)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3045)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3044_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3044, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3045[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_BraveInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S3045)
    EvtClearTalk
    EvtLoadUnits(S3045RedUnits)
    EvtLoadUnits(S3045BlueUnits)
    EvtSetBgm(S3045_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3045)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3045_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S3045)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_BraveHell)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S3045)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3051)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3045_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3045, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3051[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_BraveInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S3051)
    EvtClearTalk
    EvtLoadUnits(S3051RedUnits)
    EvtLoadUnits(S3051BlueUnits)
    EvtSetBgm(S3051_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3051)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3051_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S3051)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_BraveHell)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S3051)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3052)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3051_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3051, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3052[] = {
    EvtLoadUnits(S3052RedUnits)
    EvtLoadUnits(S3052BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3052)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3052_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3053)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3052_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3052, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3053[] = {
    EvtLoadUnits(S3053RedUnits)
    EvtLoadUnits(S3053BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3053)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3053_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3054)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3053_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3053, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3054[] = {
    EvtLoadUnits(S3054RedUnits)
    EvtLoadUnits(S3054BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3054)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3054_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3055)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3054_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3054, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3055[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Chapter3_BraveInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S3055)
    EvtClearTalk
    EvtLoadUnits(S3055RedUnits)
    EvtLoadUnits(S3055BlueUnits)
    EvtSetBgm(S3055_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3055)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S3055RedUnits_Turn_2_2[] = {
    EvtLoadUnits(S3055RedUnits_Turn_2_2)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S3055RedUnits_Turn_3_3[] = {
    EvtLoadUnits(S3055RedUnits_Turn_3_3)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3055_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S3055)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Chapter3_BraveHellGate)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S3055)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3061)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3055_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3055, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S3055RedUnits_Turn_3_3, 2, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S3055RedUnits_Turn_3_3, 3, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3061[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Chapter3_Hell)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S3061)
    EvtClearTalk
    EvtLoadUnits(S3061RedUnits)
    EvtLoadUnits(S3061BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3061)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3061_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S3061)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Chapter3_Hell)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S3061)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3062)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3061_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3061, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3062[] = {
    EvtLoadUnits(S3062RedUnits)
    EvtLoadUnits(S3062BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3062)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3062_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3063)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3062_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3062, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3063[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Chapter3_Hell)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S3063)
    EvtClearTalk
    EvtLoadUnits(S3063RedUnits)
    EvtLoadUnits(S3063BlueUnits)
    EvtSetBgm(S3063_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3063)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3063_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S3063)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Chapter3_Hell)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S3063)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3064)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3063_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3063, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3064[] = {
    EvtLoadUnits(S3064RedUnits)
    EvtLoadUnits(S3064BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3064)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3064_Victory[] = {
    EvtSetBgm(S3064_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Chapter3_Hell)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S3064)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3065)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3064_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3064, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3065[] = {
    EvtLoadUnits(S3065RedUnits)
    EvtLoadUnits(S3065BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3065)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3065_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S3065)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Chapter3_HellDoor)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S3065)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3071)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3065_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3065, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3071[] = {
    EvtLoadUnits(S3071RedUnits)
    EvtLoadUnits(S3071BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3071)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3071_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S3071)
    EvtClearTalk
    EvtSetBgm(S3071_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_005_Castle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S3071)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3072)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3071_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3071, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3072[] = {
    EvtLoadUnits(S3072RedUnits)
    EvtLoadUnits(S3072BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3072)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3072_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3073)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3072_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3072, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3073[] = {
    EvtLoadUnits(S3073RedUnits)
    EvtLoadUnits(S3073BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3073)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3073_Victory[] = {
    EvtSetBgm(S3073_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_BraveHell)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S3073)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3074)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3073_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3073, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3074[] = {
    EvtLoadUnits(S3074RedUnits)
    EvtLoadUnits(S3074BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3074)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3074_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3075)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3074_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3074, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3075[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_BraveForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S3075)
    EvtClearTalk
    EvtLoadUnits(S3075RedUnits)
    EvtLoadUnits(S3075BlueUnits)
    EvtSetBgm(S3075_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3075)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3075_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S3075)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3081)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3075_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3075, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3081[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_BraveForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S3081)
    EvtClearTalk
    EvtLoadUnits(S3081RedUnits)
    EvtLoadUnits(S3081BlueUnits)
    EvtSetBgm(S3081_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3081)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3081_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S3081)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_ForestNight)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S3081)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3082)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3081_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3081, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3082[] = {
    EvtLoadUnits(S3082RedUnits)
    EvtLoadUnits(S3082BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3082)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3082_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3083)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3082_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3082, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3083[] = {
    EvtLoadUnits(S3083RedUnits)
    EvtLoadUnits(S3083BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3083)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3083_Victory[] = {
    EvtSetBgm(S3083_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_ForestNight)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S3083)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3084)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3083_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3083, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3084[] = {
    EvtLoadUnits(S3084RedUnits)
    EvtLoadUnits(S3084BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3084)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3084_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3085)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3084_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3084, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3085[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_005_Castle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S3085)
    EvtClearTalk
    EvtLoadUnits(S3085RedUnits)
    EvtLoadUnits(S3085BlueUnits)
    EvtSetBgm(S3085_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3085)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3085_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S3085)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3091)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3085_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3085, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3091[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_BraveForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S3091)
    EvtClearTalk
    EvtLoadUnits(S3091RedUnits)
    EvtLoadUnits(S3091BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3091)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3091_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S3091)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3092)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3091_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3091, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3092[] = {
    EvtLoadUnits(S3092RedUnits)
    EvtLoadUnits(S3092BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3092)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3092_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3093)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3092_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3092, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3093[] = {
    EvtLoadUnits(S3093RedUnits)
    EvtLoadUnits(S3093BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3093)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3093_Victory[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_BraveForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S3093)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3094)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3093_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3093, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3094[] = {
    EvtLoadUnits(S3094RedUnits)
    EvtLoadUnits(S3094BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3094)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3094_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3095)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3094_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3094, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3095[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_005_Castle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S3095)
    EvtClearTalk
    EvtLoadUnits(S3095RedUnits)
    EvtLoadUnits(S3095BlueUnits)
    EvtSetBgm(S3095_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3095)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3095_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S3095)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_005_Castle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S3095)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3101)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3095_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3095, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3101[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_005_Castle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S3101)
    EvtClearTalk
    EvtLoadUnits(S3101RedUnits)
    EvtLoadUnits(S3101BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3101)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3101_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S3101)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3102)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3101_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3101, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3102[] = {
    EvtLoadUnits(S3102RedUnits)
    EvtLoadUnits(S3102BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3102)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3102_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3103)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3102_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3102, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3103[] = {
    EvtLoadUnits(S3103RedUnits)
    EvtLoadUnits(S3103BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3103)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3103_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3104)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3103_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3103, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3104[] = {
    EvtLoadUnits(S3104RedUnits)
    EvtLoadUnits(S3104BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3104)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3104_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3105)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3104_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3104, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3105[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_AngrbodaTemple)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S3105)
    EvtClearTalk
    EvtLoadUnits(S3105RedUnits)
    EvtLoadUnits(S3105BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3105)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S3105RedUnits_Turn_2_2[] = {
    EvtLoadUnits(S3105RedUnits_Turn_2_2)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3105_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S3105)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3111)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3105_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3105, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S3105RedUnits_Turn_2_2, 2, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3111[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_BraveForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S3111)
    EvtClearTalk
    EvtLoadUnits(S3111RedUnits)
    EvtLoadUnits(S3111BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3111)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3111_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S3111)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_BraveForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S3111)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3112)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3111_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3111, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3112[] = {
    EvtLoadUnits(S3112RedUnits)
    EvtLoadUnits(S3112BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3112)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3112_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3113)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3112_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3112, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3113[] = {
    EvtLoadUnits(S3113RedUnits)
    EvtLoadUnits(S3113BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3113)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3113_Victory[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_BraveForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S3113)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3114)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3113_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3113, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3114[] = {
    EvtLoadUnits(S3114RedUnits)
    EvtLoadUnits(S3114BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3114)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3114_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3115)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3114_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3114, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3115[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_BraveForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S3115)
    EvtClearTalk
    EvtLoadUnits(S3115RedUnits)
    EvtLoadUnits(S3115BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3115)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3115_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S3115)
    EvtClearTalk
    EvtSetBgm(S3115_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_005_Castle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S3115)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3121)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3115_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3115, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3121[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_Brave)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S3121)
    EvtClearTalk
    EvtLoadUnits(S3121RedUnits)
    EvtLoadUnits(S3121BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3121)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3121_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S3121)
    EvtClearTalk
    EvtSetBgm(S3121_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_Brave)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S3121)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3122)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3121_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3121, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3122[] = {
    EvtLoadUnits(S3122RedUnits)
    EvtLoadUnits(S3122BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3122)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3122_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3123)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3122_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3122, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3123[] = {
    EvtLoadUnits(S3123RedUnits)
    EvtLoadUnits(S3123BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3123)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3123_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3124)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3123_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3123, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3124[] = {
    EvtLoadUnits(S3124RedUnits)
    EvtLoadUnits(S3124BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3124)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3124_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3125)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3124_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3124, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3125[] = {
    EvtLoadUnits(S3125RedUnits)
    EvtLoadUnits(S3125BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3125)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S3125RedUnits_Turn_2_2[] = {
    EvtLoadUnits(S3125RedUnits_Turn_2_2)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3125_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S3125)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_BraveForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S3125)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3131)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3125_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3125, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S3125RedUnits_Turn_2_2, 2, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3131[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Chapter3_Hell)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S3131)
    EvtClearTalk
    EvtLoadUnits(S3131RedUnits)
    EvtLoadUnits(S3131BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3131)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3131_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S3131)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3132)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3131_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3131, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3132[] = {
    EvtLoadUnits(S3132RedUnits)
    EvtLoadUnits(S3132BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3132)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3132_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S3132)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Chapter3_Hell)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S3132)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3133)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3132_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3132, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3133[] = {
    EvtLoadUnits(S3133RedUnits)
    EvtLoadUnits(S3133BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3133)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3133_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S3133)
    EvtClearTalk
    EvtSetBgm(S3133_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Chapter3_Hell)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S3133)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3134)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3133_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3133, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3134[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Chapter3_Hell)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S3134)
    EvtClearTalk
    EvtLoadUnits(S3134RedUnits)
    EvtLoadUnits(S3134BlueUnits)
    EvtSetBgm(S3134_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3134)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3134_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S3134)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S3135)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3134_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3134, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3135[] = {
    EvtLoadUnits(S3135RedUnits)
    EvtLoadUnits(S3135BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S3135)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S3135RedUnits_Turn_2_2[] = {
    EvtLoadUnits(S3135RedUnits_Turn_2_2)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S3135RedUnits_Turn_3_3[] = {
    EvtLoadUnits(S3135RedUnits_Turn_3_3)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S3135_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S3135)
    EvtClearTalk
    EvtSetBgm(S3135_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Chapter3_Hell)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S3135)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4011)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3135_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3135, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S3135RedUnits_Turn_3_3, 2, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S3135RedUnits_Turn_3_3, 3, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4011[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Throne_Brave)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S4011)
    EvtClearTalk
    EvtLoadUnits(S4011RedUnits)
    EvtLoadUnits(S4011BlueUnits)
    EvtSetBgm(S4011_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4011)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4011_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S4011)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4012)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4011_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4011, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4012[] = {
    EvtLoadUnits(S4012RedUnits)
    EvtLoadUnits(S4012BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4012_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4013)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4012_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4012, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4013[] = {
    EvtLoadUnits(S4013RedUnits)
    EvtLoadUnits(S4013BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4013_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4014)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4013_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4013, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4014[] = {
    EvtLoadUnits(S4014RedUnits)
    EvtLoadUnits(S4014BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4014_Victory[] = {
    EvtSetBgm(S4014_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4014)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4015)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4014_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4014, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4015[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S4015)
    EvtClearTalk
    EvtLoadUnits(S4015RedUnits)
    EvtLoadUnits(S4015BlueUnits)
    EvtSetBgm(S4015_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4015)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4015_Victory[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Alfheim)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4015)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4021)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4015_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4015, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4021[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Alfheim)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S4021)
    EvtClearTalk
    EvtLoadUnits(S4021RedUnits)
    EvtLoadUnits(S4021BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4021)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4021_Victory[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Alfheim)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4021)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4022)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4021_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4021, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4022[] = {
    EvtLoadUnits(S4022RedUnits)
    EvtLoadUnits(S4022BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4022)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4022_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4023)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4022_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4022, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4023[] = {
    EvtLoadUnits(S4023RedUnits)
    EvtLoadUnits(S4023BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4023)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4023_Victory[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Alfheim)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4023)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4024)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4023_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4023, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4024[] = {
    EvtLoadUnits(S4024RedUnits)
    EvtLoadUnits(S4024BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4024)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4024_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4025)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4024_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4024, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4025[] = {
    EvtLoadUnits(S4025RedUnits)
    EvtLoadUnits(S4025BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4025)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4025_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S4025)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Alfheim)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4025)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4031)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4025_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4025, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4031[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Alfheim_Throne)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S4031)
    EvtClearTalk
    EvtLoadUnits(S4031RedUnits)
    EvtLoadUnits(S4031BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4031)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4031_Victory[] = {
    EvtSetBgm(S4031_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Alfheim)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4031)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4032)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4031_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4031, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4032[] = {
    EvtLoadUnits(S4032RedUnits)
    EvtLoadUnits(S4032BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4032)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4032_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4033)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4032_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4032, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4033[] = {
    EvtLoadUnits(S4033RedUnits)
    EvtLoadUnits(S4033BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4033)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4033_Victory[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Alfheim)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4033)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4034)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4033_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4033, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4034[] = {
    EvtLoadUnits(S4034RedUnits)
    EvtLoadUnits(S4034BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4034)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4034_Victory[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Alfheim)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4034)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4035)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4034_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4034, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4035[] = {
    EvtLoadUnits(S4035RedUnits)
    EvtLoadUnits(S4035BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4035)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4035_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S4035)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Alfheim)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4035)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4041)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4035_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4035, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4041[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Alfheim)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S4041)
    EvtClearTalk
    EvtLoadUnits(S4041RedUnits)
    EvtLoadUnits(S4041BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4041)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4041_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S4041)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4042)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4041_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4041, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4042[] = {
    EvtLoadUnits(S4042RedUnits)
    EvtLoadUnits(S4042BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4042)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4042_Victory[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Alfheim)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4042)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4043)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4042_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4042, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4043[] = {
    EvtLoadUnits(S4043RedUnits)
    EvtLoadUnits(S4043BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4043)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4043_Victory[] = {
    EvtSetBgm(S4043_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Alfheim)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4043)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4044)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4043_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4043, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4044[] = {
    EvtLoadUnits(S4044RedUnits)
    EvtLoadUnits(S4044BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4044)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4044_Victory[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Alfheim)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4044)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4045)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4044_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4044, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4045[] = {
    EvtLoadUnits(S4045RedUnits)
    EvtLoadUnits(S4045BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4045)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4045_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S4045)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Alfheim)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4045)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4051)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4045_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4045, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4051[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S4051)
    EvtClearTalk
    EvtLoadUnits(S4051RedUnits)
    EvtLoadUnits(S4051BlueUnits)
    EvtSetBgm(S4051_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4051)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4051_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S4051)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4051)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4052)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4051_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4051, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4052[] = {
    EvtLoadUnits(S4052RedUnits)
    EvtLoadUnits(S4052BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4052)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4052_Victory[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4052)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4053)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4052_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4052, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4053[] = {
    EvtLoadUnits(S4053RedUnits)
    EvtLoadUnits(S4053BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4053)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4053_Victory[] = {
    EvtSetBgm(S4053_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4053)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4054)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4053_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4053, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4054[] = {
    EvtLoadUnits(S4054RedUnits)
    EvtLoadUnits(S4054BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4054)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4054_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4055)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4054_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4054, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4055[] = {
    EvtLoadUnits(S4055RedUnits)
    EvtLoadUnits(S4055BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4055)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4055_Victory[] = {
    EvtSetBgm(S4055_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4055)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4061)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4055_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4055, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4061[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_BraveForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S4061)
    EvtClearTalk
    EvtLoadUnits(S4061RedUnits)
    EvtLoadUnits(S4061BlueUnits)
    EvtSetBgm(S4061_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4061)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4061_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S4061)
    EvtClearTalk
    EvtSetBgm(S4061_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_BraveForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4061)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4062)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4061_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4061, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4062[] = {
    EvtLoadUnits(S4062RedUnits)
    EvtLoadUnits(S4062BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4062)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4062_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4063)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4062_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4062, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4063[] = {
    EvtLoadUnits(S4063RedUnits)
    EvtLoadUnits(S4063BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4063)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4063_Victory[] = {
    EvtSetBgm(S4063_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_BraveForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4063)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4064)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4063_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4063, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4064[] = {
    EvtLoadUnits(S4064RedUnits)
    EvtLoadUnits(S4064BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4064)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4064_Victory[] = {
    EvtSetBgm(S4064_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_BraveHell)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4064)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4065)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4064_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4064, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4065[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_BraveHell)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S4065)
    EvtClearTalk
    EvtLoadUnits(S4065RedUnits)
    EvtLoadUnits(S4065BlueUnits)
    EvtSetBgm(S4065_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4065)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4065_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S4065)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_BraveHell)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4065)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4071)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4065_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4065, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4071[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_BraveHell)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S4071)
    EvtClearTalk
    EvtLoadUnits(S4071RedUnits)
    EvtLoadUnits(S4071BlueUnits)
    EvtSetBgm(S4071_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4071)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4071_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S4071)
    EvtClearTalk
    EvtSetBgm(S4071_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_BraveHell)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4071)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4072)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4071_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4071, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4072[] = {
    EvtLoadUnits(S4072RedUnits)
    EvtLoadUnits(S4072BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4072)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4072_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4073)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4072_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4072, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4073[] = {
    EvtLoadUnits(S4073RedUnits)
    EvtLoadUnits(S4073BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4073)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4073_Victory[] = {
    EvtSetBgm(S4073_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_BraveHell)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4073)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4074)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4073_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4073, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4074[] = {
    EvtLoadUnits(S4074RedUnits)
    EvtLoadUnits(S4074BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4074)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4074_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4075)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4074_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4074, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4075[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_BraveTwilight)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S4075)
    EvtClearTalk
    EvtLoadUnits(S4075RedUnits)
    EvtLoadUnits(S4075BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4075)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4075_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S4075)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Alfheim)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4075)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4081)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4075_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4075, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4081[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Svartalf)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S4081)
    EvtClearTalk
    EvtLoadUnits(S4081RedUnits)
    EvtLoadUnits(S4081BlueUnits)
    EvtSetBgm(S4081_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4081)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4081_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S4081)
    EvtClearTalk
    EvtSetBgm(S4081_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Svartalf)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4081)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4082)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4081_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4081, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4082[] = {
    EvtLoadUnits(S4082RedUnits)
    EvtLoadUnits(S4082BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4082)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4082_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4083)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4082_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4082, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4083[] = {
    EvtLoadUnits(S4083RedUnits)
    EvtLoadUnits(S4083BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4083)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4083_Victory[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Svartalf)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4083)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4084)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4083_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4083, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4084[] = {
    EvtLoadUnits(S4084RedUnits)
    EvtLoadUnits(S4084BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4084)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4084_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4085)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4084_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4084, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4085[] = {
    EvtLoadUnits(S4085RedUnits)
    EvtLoadUnits(S4085BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4085)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4085_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S4085)
    EvtClearTalk
    EvtSetBgm(S4085_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Svartalf)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4085)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4091)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4085_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4085, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4091[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Svartalf)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S4091)
    EvtClearTalk
    EvtLoadUnits(S4091RedUnits)
    EvtLoadUnits(S4091BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4091)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4091_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S4091)
    EvtClearTalk
    EvtSetBgm(S4091_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Svartalf)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4091)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4092)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4091_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4091, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4092[] = {
    EvtLoadUnits(S4092RedUnits)
    EvtLoadUnits(S4092BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4092)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4092_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4093)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4092_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4092, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4093[] = {
    EvtLoadUnits(S4093RedUnits)
    EvtLoadUnits(S4093BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4093)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4093_Victory[] = {
    EvtSetBgm(S4093_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Svartalf)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4093)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4094)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4093_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4093, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4094[] = {
    EvtLoadUnits(S4094RedUnits)
    EvtLoadUnits(S4094BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4094)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4094_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S4094)
    EvtClearTalk
    EvtSetBgm(S4094_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Svartalf)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4094)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4095)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4094_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4094, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4095[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Svartalf)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S4095)
    EvtClearTalk
    EvtLoadUnits(S4095RedUnits)
    EvtLoadUnits(S4095BlueUnits)
    EvtSetBgm(S4095_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4095)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S4095RedUnits_Turn_1_1[] = {
    EvtLoadUnits(S4095RedUnits_Turn_1_1)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S4095RedUnits_Turn_2_2[] = {
    EvtLoadUnits(S4095RedUnits_Turn_2_2)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S4095RedUnits_Turn_3_3[] = {
    EvtLoadUnits(S4095RedUnits_Turn_3_3)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S4095RedUnits_Turn_4_4[] = {
    EvtLoadUnits(S4095RedUnits_Turn_4_4)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4095_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S4095)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Svartalf)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4095)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4101)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4095_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4095, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S4095RedUnits_Turn_4_4, 1, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S4095RedUnits_Turn_4_4, 2, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S4095RedUnits_Turn_4_4, 3, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S4095RedUnits_Turn_4_4, 4, 0, FACTION_RED)
    EvtListTurn(0, EventScr_S4095_Victory, 6 + 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4101[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Svartalf)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S4101)
    EvtClearTalk
    EvtLoadUnits(S4101RedUnits)
    EvtLoadUnits(S4101BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4101)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4101_Victory[] = {
    EvtSetBgm(S4101_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Svartalf)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4101)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4102)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4101_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4101, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4102[] = {
    EvtLoadUnits(S4102RedUnits)
    EvtLoadUnits(S4102BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4102)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4102_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4103)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4102_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4102, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4103[] = {
    EvtLoadUnits(S4103RedUnits)
    EvtLoadUnits(S4103BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4103)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4103_Victory[] = {
    EvtSetBgm(S4103_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Svartalf)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4103)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4104)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4103_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4103, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4104[] = {
    EvtLoadUnits(S4104RedUnits)
    EvtLoadUnits(S4104BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4104)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4104_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4105)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4104_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4104, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4105[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Svartalf)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S4105)
    EvtClearTalk
    EvtLoadUnits(S4105RedUnits)
    EvtLoadUnits(S4105BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4105)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4105_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S4105)
    EvtClearTalk
    EvtSetBgm(S4105_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Svartalf)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4105)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4111)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4105_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4105, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_S4105_Victory, 3 + 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4111[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_BraveTwilight)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S4111)
    EvtClearTalk
    EvtLoadUnits(S4111RedUnits)
    EvtLoadUnits(S4111BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4111)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4111_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S4111)
    EvtClearTalk
    EvtSetBgm(S4111_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_BraveTwilight)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4111)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4112)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4111_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4111, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4112[] = {
    EvtLoadUnits(S4112RedUnits)
    EvtLoadUnits(S4112BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4112)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4112_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S4112)
    EvtClearTalk
    EvtSetBgm(S4112_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4112)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4113)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4112_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4112, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4113[] = {
    EvtLoadUnits(S4113RedUnits)
    EvtLoadUnits(S4113BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4113)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4113_Victory[] = {
    EvtSetBgm(S4113_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_005_Castle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4113)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4114)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4113_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4113, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4114[] = {
    EvtLoadUnits(S4114RedUnits)
    EvtLoadUnits(S4114BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4114)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4114_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S4114)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Alfheim)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4114)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4115)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4114_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4114, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4115[] = {
    EvtLoadUnits(S4115RedUnits)
    EvtLoadUnits(S4115BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4115)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4115_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S4115)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_005_Castle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4115)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4121)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4115_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4115, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4121[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Building)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S4121)
    EvtClearTalk
    EvtLoadUnits(S4121RedUnits)
    EvtLoadUnits(S4121BlueUnits)
    EvtSetBgm(S4121_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4121)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4121_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S4121)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4122)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4121_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4121, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4122[] = {
    EvtLoadUnits(S4122RedUnits)
    EvtLoadUnits(S4122BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4122)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4122_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4123)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4122_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4122, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4123[] = {
    EvtLoadUnits(S4123RedUnits)
    EvtLoadUnits(S4123BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4123)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4123_Victory[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_005_Castle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4123)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4124)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4123_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4123, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4124[] = {
    EvtLoadUnits(S4124RedUnits)
    EvtLoadUnits(S4124BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4124)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4124_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S4124)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Alfheim)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4124)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4125)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4124_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4124, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4125[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_Brave)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S4125)
    EvtClearTalk
    EvtLoadUnits(S4125RedUnits)
    EvtLoadUnits(S4125BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4125)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4125_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S4125)
    EvtClearTalk
    EvtSetBgm(S4125_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Hood)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4125)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4131)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4125_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4125, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4131[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_Brave)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S4131)
    EvtClearTalk
    EvtLoadUnits(S4131RedUnits)
    EvtLoadUnits(S4131BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4131)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4131_Victory[] = {
    EvtSetBgm(S4131_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_Brave)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4131)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4132)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4131_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4131, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4132[] = {
    EvtLoadUnits(S4132RedUnits)
    EvtLoadUnits(S4132BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4132)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4132_Victory[] = {
    EvtSetBgm(S4132_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_005_Castle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4132)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4133)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4132_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4132, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4133[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S4133)
    EvtClearTalk
    EvtLoadUnits(S4133RedUnits)
    EvtLoadUnits(S4133BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4133)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4133_Victory[] = {
    EvtSetBgm(S4133_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_005_Castle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4133)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4134)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4133_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4133, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4134[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S4134)
    EvtClearTalk
    EvtLoadUnits(S4134RedUnits)
    EvtLoadUnits(S4134BlueUnits)
    EvtSetBgm(S4134_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4134)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S4134RedUnits_Turn_2_2[] = {
    EvtLoadUnits(S4134RedUnits_Turn_2_2)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S4134RedUnits_Turn_3_3[] = {
    EvtLoadUnits(S4134RedUnits_Turn_3_3)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4134_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S4134)
    EvtClearTalk
    EvtSetBgm(S4134_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4134)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S4135)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4134_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4134, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S4134RedUnits_Turn_3_3, 2, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S4134RedUnits_Turn_3_3, 3, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4135[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_005_Castle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S4135)
    EvtClearTalk
    EvtLoadUnits(S4135RedUnits)
    EvtLoadUnits(S4135BlueUnits)
    EvtSetBgm(S4135_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S4135)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S4135_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S4135)
    EvtClearTalk
    EvtSetBgm(S4135_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Svartalf)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S4135)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5011)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4135_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4135, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5011[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Opening)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S5011)
    EvtClearTalk
    EvtLoadUnits(S5011RedUnits)
    EvtLoadUnits(S5011BlueUnits)
    EvtSetBgm(S5011_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5011)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5011_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S5011)
    EvtClearTalk
    EvtSetBgm(S5011_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_Brave)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S5011)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5012)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5011_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5011, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5012[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_Brave)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S5012)
    EvtClearTalk
    EvtLoadUnits(S5012RedUnits)
    EvtLoadUnits(S5012BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5012_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5013)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5012_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5012, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5013[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_BraveInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S5013)
    EvtClearTalk
    EvtLoadUnits(S5013RedUnits)
    EvtLoadUnits(S5013BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5013_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5014)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5013_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5013, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5014[] = {
    EvtLoadUnits(S5014RedUnits)
    EvtLoadUnits(S5014BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5014_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5015)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5014_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5014, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5015[] = {
    EvtLoadUnits(S5015RedUnits)
    EvtLoadUnits(S5015BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5015)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5015_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S5015)
    EvtClearTalk
    EvtSetBgm(S5015_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_Brave)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S5015)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5021)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5015_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5015, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5021[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_NisaverilCastle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S5021)
    EvtClearTalk
    EvtLoadUnits(S5021RedUnits)
    EvtLoadUnits(S5021BlueUnits)
    EvtSetBgm(S5021_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5021)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5021_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S5021)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5022)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5021_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5021, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5022[] = {
    EvtLoadUnits(S5022RedUnits)
    EvtLoadUnits(S5022BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5022)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5022_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5023)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5022_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5022, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5023[] = {
    EvtLoadUnits(S5023RedUnits)
    EvtLoadUnits(S5023BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5023)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5023_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5024)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5023_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5023, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5024[] = {
    EvtLoadUnits(S5024RedUnits)
    EvtLoadUnits(S5024BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5024)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5024_Victory[] = {
    EvtSetBgm(S5024_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_NisaverilCastle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S5024)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5025)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5024_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5024, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5025[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Nisaveril)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S5025)
    EvtClearTalk
    EvtLoadUnits(S5025RedUnits)
    EvtLoadUnits(S5025BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5025)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5025_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S5025)
    EvtClearTalk
    EvtSetBgm(S5025_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Nisaveril)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S5025)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5031)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5025_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5025, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5031[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S5031)
    EvtClearTalk
    EvtLoadUnits(S5031RedUnits)
    EvtLoadUnits(S5031BlueUnits)
    EvtSetBgm(S5031_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5031)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5031_Victory[] = {
    EvtSetBgm(S5031_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_NisaverilCastle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S5031)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5032)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5031_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5031, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5032[] = {
    EvtLoadUnits(S5032RedUnits)
    EvtLoadUnits(S5032BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5032)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5032_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5033)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5032_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5032, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5033[] = {
    EvtLoadUnits(S5033RedUnits)
    EvtLoadUnits(S5033BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5033)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5033_Victory[] = {
    EvtSetBgm(S5033_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Opening)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S5033)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5034)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5033_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5033, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5034[] = {
    EvtLoadUnits(S5034RedUnits)
    EvtLoadUnits(S5034BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5034)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5034_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5035)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5034_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5034, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5035[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S5035)
    EvtClearTalk
    EvtLoadUnits(S5035RedUnits)
    EvtLoadUnits(S5035BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5035)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S5035RedUnits_Turn_3_3[] = {
    EvtLoadUnits(S5035RedUnits_Turn_3_3)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S5035RedUnits_Turn_2_2[] = {
    EvtLoadUnits(S5035RedUnits_Turn_2_2)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S5035RedUnits_Turn_4_4[] = {
    EvtLoadUnits(S5035RedUnits_Turn_4_4)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5035_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S5035)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S5035)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5041)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5035_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5035, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S5035RedUnits_Turn_4_4, 2, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S5035RedUnits_Turn_4_4, 3, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S5035RedUnits_Turn_4_4, 4, 0, FACTION_RED)
    EvtListTurn(0, EventScr_S5035_Victory, 5 + 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5041[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S5041)
    EvtClearTalk
    EvtLoadUnits(S5041RedUnits)
    EvtLoadUnits(S5041BlueUnits)
    EvtSetBgm(S5041_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5041)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5041_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5042)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5041_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5041, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5042[] = {
    EvtLoadUnits(S5042RedUnits)
    EvtLoadUnits(S5042BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5042)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5042_Victory[] = {
    EvtSetBgm(S5042_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S5042)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5043)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5042_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5042, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5043[] = {
    EvtLoadUnits(S5043RedUnits)
    EvtLoadUnits(S5043BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5043)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5043_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5044)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5043_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5043, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5044[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S5044)
    EvtClearTalk
    EvtLoadUnits(S5044RedUnits)
    EvtLoadUnits(S5044BlueUnits)
    EvtSetBgm(S5044_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5044)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5044_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S5044)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5045)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5044_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5044, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5045[] = {
    EvtLoadUnits(S5045RedUnits)
    EvtLoadUnits(S5045BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5045)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5045_Victory[] = {
    EvtSetBgm(S5045_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S5045)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5051)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5045_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5045, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5051[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S5051)
    EvtClearTalk
    EvtLoadUnits(S5051RedUnits)
    EvtLoadUnits(S5051BlueUnits)
    EvtSetBgm(S5051_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5051)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5051_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5052)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5051_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5051, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5052[] = {
    EvtLoadUnits(S5052RedUnits)
    EvtLoadUnits(S5052BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5052)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5052_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S5052)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_005_Castle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S5052)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5053)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5052_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5052, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5053[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S5053)
    EvtClearTalk
    EvtLoadUnits(S5053RedUnits)
    EvtLoadUnits(S5053BlueUnits)
    EvtSetBgm(S5053_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5053)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5053_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5054)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5053_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5053, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5054[] = {
    EvtLoadUnits(S5054RedUnits)
    EvtLoadUnits(S5054BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5054)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5054_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5055)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5054_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5054, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5055[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S5055)
    EvtClearTalk
    EvtLoadUnits(S5055RedUnits)
    EvtLoadUnits(S5055BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5055)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5055_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S5055)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_005_Castle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S5055)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5061)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5055_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5055, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5061[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Nisaveril)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S5061)
    EvtClearTalk
    EvtLoadUnits(S5061RedUnits)
    EvtLoadUnits(S5061BlueUnits)
    EvtSetBgm(S5061_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5061)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5061_Victory[] = {
    EvtSetBgm(S5061_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Nisaveril)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S5061)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5062)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5061_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5061, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5062[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Nisaveril)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S5062)
    EvtClearTalk
    EvtLoadUnits(S5062RedUnits)
    EvtLoadUnits(S5062BlueUnits)
    EvtSetBgm(S5062_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5062)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5062_Victory[] = {
    EvtSetBgm(S5062_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_NisaverilSaintForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S5062)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5063)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5062_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5062, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5063[] = {
    EvtLoadUnits(S5063RedUnits)
    EvtLoadUnits(S5063BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5063)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5063_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S5063)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5064)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5063_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5063, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5064[] = {
    EvtLoadUnits(S5064RedUnits)
    EvtLoadUnits(S5064BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5064)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5064_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5065)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5064_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5064, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5065[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_NisaverilSaintForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S5065)
    EvtClearTalk
    EvtLoadUnits(S5065RedUnits)
    EvtLoadUnits(S5065BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5065)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5065_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S5065)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_NisaverilCastle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S5065)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5071)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5065_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5065, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5071[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_NisaverilSaintForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S5071)
    EvtClearTalk
    EvtLoadUnits(S5071RedUnits)
    EvtLoadUnits(S5071BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5071)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5071_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5072)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5071_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5071, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5072[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_NisaverilSaintForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S5072)
    EvtClearTalk
    EvtLoadUnits(S5072RedUnits)
    EvtLoadUnits(S5072BlueUnits)
    EvtSetBgm(S5072_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5072)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5072_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5073)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5072_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5072, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5073[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_NisaverilSaintForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S5073)
    EvtClearTalk
    EvtLoadUnits(S5073RedUnits)
    EvtLoadUnits(S5073BlueUnits)
    EvtSetBgm(S5073_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5073)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5073_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S5073)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_NisaverilSaintForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S5073)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5074)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5073_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5073, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5074[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_001_BraveGround)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S5074)
    EvtClearTalk
    EvtLoadUnits(S5074RedUnits)
    EvtLoadUnits(S5074BlueUnits)
    EvtSetBgm(S5074_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5074)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5074_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5075)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5074_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5074, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5075[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_001_BraveGround)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S5075)
    EvtClearTalk
    EvtLoadUnits(S5075RedUnits)
    EvtLoadUnits(S5075BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5075)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S5075RedUnits_Turn_2_2[] = {
    EvtLoadUnits(S5075RedUnits_Turn_2_2)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S5075RedUnits_Turn_3_3[] = {
    EvtLoadUnits(S5075RedUnits_Turn_3_3)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5075_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S5075)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5081)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5075_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5075, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S5075RedUnits_Turn_3_3, 2, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S5075RedUnits_Turn_3_3, 3, 0, FACTION_RED)
    EvtListTurn(0, EventScr_S5075_Victory, 5 + 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5081[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_001_BraveGround)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S5081)
    EvtClearTalk
    EvtLoadUnits(S5081RedUnits)
    EvtLoadUnits(S5081BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5081)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5081_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S5081)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5082)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5081_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5081, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5082[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_BraveInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S5082)
    EvtClearTalk
    EvtLoadUnits(S5082RedUnits)
    EvtLoadUnits(S5082BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5082)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5082_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5083)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5082_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5082, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5083[] = {
    EvtLoadUnits(S5083RedUnits)
    EvtLoadUnits(S5083BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5083)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5083_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5084)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5083_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5083, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5084[] = {
    EvtLoadUnits(S5084RedUnits)
    EvtLoadUnits(S5084BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5084)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5084_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S5084)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_ForestNight)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S5084)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5085)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5084_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5084, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5085[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_005_Castle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S5085)
    EvtClearTalk
    EvtLoadUnits(S5085RedUnits)
    EvtLoadUnits(S5085BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5085)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5085_Victory[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_UndergroundPrison_Brave)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S5085)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5091)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5085_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5085, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5091[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Nisaveril)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S5091)
    EvtClearTalk
    EvtLoadUnits(S5091RedUnits)
    EvtLoadUnits(S5091BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5091)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5091_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S5091)
    EvtClearTalk
    EvtSetBgm(S5091_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_NisaverilCastle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S5091)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5092)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5091_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5091, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5092[] = {
    EvtLoadUnits(S5092RedUnits)
    EvtLoadUnits(S5092BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5092)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5092_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5093)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5092_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5092, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5093[] = {
    EvtLoadUnits(S5093RedUnits)
    EvtLoadUnits(S5093BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5093)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5093_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S5093)
    EvtClearTalk
    EvtSetBgm(S5093_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Nisaveril)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S5093)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5094)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5093_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5093, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5094[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_NisaverilTower)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S5094)
    EvtClearTalk
    EvtLoadUnits(S5094RedUnits)
    EvtLoadUnits(S5094BlueUnits)
    EvtSetBgm(S5094_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5094)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5094_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S5094)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5095)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5094_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5094, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5095[] = {
    EvtLoadUnits(S5095RedUnits)
    EvtLoadUnits(S5095BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5095)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S5095RedUnits_Turn_3_3[] = {
    EvtLoadUnits(S5095RedUnits_Turn_3_3)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S5095RedUnits_Turn_2_2[] = {
    EvtLoadUnits(S5095RedUnits_Turn_2_2)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5095_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S5095)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Nisaveril)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S5095)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5101)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5095_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5095, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S5095RedUnits_Turn_2_2, 2, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S5095RedUnits_Turn_2_2, 3, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5101[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraOutside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S5101)
    EvtClearTalk
    EvtLoadUnits(S5101RedUnits)
    EvtLoadUnits(S5101BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5101)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5101_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5102)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5101_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5101, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5102[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraOutside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S5102)
    EvtClearTalk
    EvtLoadUnits(S5102RedUnits)
    EvtLoadUnits(S5102BlueUnits)
    EvtSetBgm(S5102_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5102)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5102_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S5102)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5103)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5102_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5102, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5103[] = {
    EvtLoadUnits(S5103RedUnits)
    EvtLoadUnits(S5103BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5103)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5103_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5104)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5103_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5103, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5104[] = {
    EvtLoadUnits(S5104RedUnits)
    EvtLoadUnits(S5104BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5104)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5104_Victory[] = {
    EvtSetBgm(S5104_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_AngrbodaTemple)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S5104)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5105)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5104_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5104, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5105[] = {
    EvtLoadUnits(S5105RedUnits)
    EvtLoadUnits(S5105BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5105)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5105_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S5105)
    EvtClearTalk
    EvtSetBgm(S5105_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_NisaverilSaintForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S5105)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5111)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5105_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5105, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5111[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S5111)
    EvtClearTalk
    EvtLoadUnits(S5111RedUnits)
    EvtLoadUnits(S5111BlueUnits)
    EvtSetBgm(S5111_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5111)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5111_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S5111)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5112)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5111_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5111, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5112[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_NisaverilOutside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S5112)
    EvtClearTalk
    EvtLoadUnits(S5112RedUnits)
    EvtLoadUnits(S5112BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5112_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S5112)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5113)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5112_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5112, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5113[] = {
    EvtLoadUnits(S5113RedUnits)
    EvtLoadUnits(S5113BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5113)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5113_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5114)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5113_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5113, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5114[] = {
    EvtLoadUnits(S5114RedUnits)
    EvtLoadUnits(S5114BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5114)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5114_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5115)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5114_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5114, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5115[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_NisaverilOutside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S5115)
    EvtClearTalk
    EvtLoadUnits(S5115RedUnits)
    EvtLoadUnits(S5115BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5115)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5115_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S5115)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_NisaverilCastle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S5115)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5121)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5115_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5115, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5121[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_NisaverilCorridor)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S5121)
    EvtClearTalk
    EvtLoadUnits(S5121RedUnits)
    EvtLoadUnits(S5121BlueUnits)
    EvtSetBgm(S5121_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5121)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5121_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5122)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5121_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5121, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5122[] = {
    EvtLoadUnits(S5122RedUnits)
    EvtLoadUnits(S5122BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5122)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5122_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5123)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5122_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5122, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5123[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_NisaverilCastle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S5123)
    EvtClearTalk
    EvtLoadUnits(S5123RedUnits)
    EvtLoadUnits(S5123BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5123_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S5123)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_NisaverilCastle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S5123)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5124)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5123_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5123, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5124[] = {
    EvtLoadUnits(S5124RedUnits)
    EvtLoadUnits(S5124BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5124)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5124_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5125)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5124_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5124, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5125[] = {
    EvtLoadUnits(S5125RedUnits)
    EvtLoadUnits(S5125BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5125)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S5125RedUnits_Turn_2_2[] = {
    EvtLoadUnits(S5125RedUnits_Turn_2_2)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5125_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S5125)
    EvtClearTalk
    EvtSetBgm(S5125_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_NisaverilCastle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S5125)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5131)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5125_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5125, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S5125RedUnits_Turn_2_2, 2, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5131[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_NisaverilCastle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S5131)
    EvtClearTalk
    EvtLoadUnits(S5131RedUnits)
    EvtLoadUnits(S5131BlueUnits)
    EvtSetBgm(S5131_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5131)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5131_Victory[] = {
    EvtSetBgm(S5131_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_NisaverilSaintForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S5131)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5132)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5131_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5131, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5132[] = {
    EvtLoadUnits(S5132RedUnits)
    EvtLoadUnits(S5132BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5132)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S5132RedUnits_Turn_2_2[] = {
    EvtLoadUnits(S5132RedUnits_Turn_2_2)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S5132RedUnits_Turn_3_3[] = {
    EvtLoadUnits(S5132RedUnits_Turn_3_3)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5132_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S5132)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_NisaverilSaintForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S5132)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5133)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5132_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5132, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S5132RedUnits_Turn_3_3, 2, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S5132RedUnits_Turn_3_3, 3, 0, FACTION_RED)
    EvtListTurn(0, EventScr_S5132_Victory, 4 + 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5133[] = {
    EvtLoadUnits(S5133RedUnits)
    EvtLoadUnits(S5133BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5133)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5133_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5134)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5133_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5133, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5134[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_NisaverilSaintForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S5134)
    EvtClearTalk
    EvtLoadUnits(S5134RedUnits)
    EvtLoadUnits(S5134BlueUnits)
    EvtSetBgm(S5134_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S5134)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5134_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S5134)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S5135)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5134_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5134, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5135[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_NisaverilShrine)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S5135)
    EvtClearTalk
    EvtLoadUnits(S5135RedUnits)
    EvtLoadUnits(S5135BlueUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S5135RedUnits_Turn_2_2[] = {
    EvtLoadUnits(S5135RedUnits_Turn_2_2)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S5135_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S5135)
    EvtClearTalk
    EvtSetBgm(S5135_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Nisaveril)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S5135)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6011)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5135_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5135, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S5135RedUnits_Turn_2_2, 2, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6011[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S6011)
    EvtClearTalk
    EvtLoadUnits(S6011RedUnits)
    EvtLoadUnits(S6011BlueUnits)
    EvtSetBgm(S6011_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6011)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6011_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S6011)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6011)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6012)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6011_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6011, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6012[] = {
    EvtLoadUnits(S6012RedUnits)
    EvtLoadUnits(S6012BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6012)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6012_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6013)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6012_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6012, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6013[] = {
    EvtLoadUnits(S6013RedUnits)
    EvtLoadUnits(S6013BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6013)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6013_Victory[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6013)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6014)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6013_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6013, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6014[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S6014)
    EvtClearTalk
    EvtLoadUnits(S6014RedUnits)
    EvtLoadUnits(S6014BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6014)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6014_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6015)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6014_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6014, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6015[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S6015)
    EvtClearTalk
    EvtLoadUnits(S6015RedUnits)
    EvtLoadUnits(S6015BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6015)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6015_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S6015)
    EvtClearTalk
    EvtSetBgm(S6015_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6015)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6021)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6015_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6015, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6021[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S6021)
    EvtClearTalk
    EvtLoadUnits(S6021RedUnits)
    EvtLoadUnits(S6021BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6021)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6021_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6022)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6021_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6021, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6022[] = {
    EvtLoadUnits(S6022RedUnits)
    EvtLoadUnits(S6022BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6022)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6022_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6023)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6022_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6022, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6023[] = {
    EvtLoadUnits(S6023RedUnits)
    EvtLoadUnits(S6023BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6023)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6023_Victory[] = {
    EvtSetBgm(S6023_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6023)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6024)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6023_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6023, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6024[] = {
    EvtLoadUnits(S6024RedUnits)
    EvtLoadUnits(S6024BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6024)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6024_Victory[] = {
    EvtSetBgm(S6024_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6024)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6025)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6024_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6024, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6025[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraOutsideForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S6025)
    EvtClearTalk
    EvtLoadUnits(S6025RedUnits)
    EvtLoadUnits(S6025BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6025)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6025_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S6025)
    EvtClearTalk
    EvtSetBgm(S6025_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraOutsideForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6025)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6031)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6025_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6025, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6031[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraOutsideForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S6031)
    EvtClearTalk
    EvtLoadUnits(S6031RedUnits)
    EvtLoadUnits(S6031BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6031)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6031_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S6031)
    EvtClearTalk
    EvtSetBgm(S6031_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraOutsideForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6031)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6032)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6031_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6031, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_S6031_Victory, 4 + 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6032[] = {
    EvtLoadUnits(S6032RedUnits)
    EvtLoadUnits(S6032BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6032)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6032_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6033)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6032_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6032, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6033[] = {
    EvtLoadUnits(S6033RedUnits)
    EvtLoadUnits(S6033BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6033)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6033_Victory[] = {
    EvtSetBgm(S6033_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_002_ForestNight)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6033)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6034)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6033_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6033, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6034[] = {
    EvtLoadUnits(S6034RedUnits)
    EvtLoadUnits(S6034BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6034)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6034_Victory[] = {
    EvtSetBgm(S6034_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraOutsideForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6034)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6035)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6034_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6034, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6035[] = {
    EvtLoadUnits(S6035RedUnits)
    EvtLoadUnits(S6035BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6035)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S6035RedUnits_Turn_2_2[] = {
    EvtLoadUnits(S6035RedUnits_Turn_2_2)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6035_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S6035)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraOutsideForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6035)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6041)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6035_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6035, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S6035RedUnits_Turn_2_2, 2, 0, FACTION_RED)
    EvtListTurn(0, EventScr_S6035_Victory, 4 + 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6041[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraOutsideForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S6041)
    EvtClearTalk
    EvtLoadUnits(S6041RedUnits)
    EvtLoadUnits(S6041BlueUnits)
    EvtSetBgm(S6041_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6041)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6041_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S6041)
    EvtClearTalk
    EvtSetBgm(S6041_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraMountain)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6041)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6042)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6041_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6041, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6042[] = {
    EvtLoadUnits(S6042RedUnits)
    EvtLoadUnits(S6042BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6042)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6042_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6043)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6042_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6042, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6043[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraMountain)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S6043)
    EvtClearTalk
    EvtLoadUnits(S6043RedUnits)
    EvtLoadUnits(S6043BlueUnits)
    EvtSetBgm(S6043_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6043)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6043_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S6043)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraMountain)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6043)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6044)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6043_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6043, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6044[] = {
    EvtLoadUnits(S6044RedUnits)
    EvtLoadUnits(S6044BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6044)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6044_Victory[] = {
    EvtSetBgm(S6044_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraOutsideForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6044)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6045)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6044_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6044, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6045[] = {
    EvtLoadUnits(S6045RedUnits)
    EvtLoadUnits(S6045BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6045)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6045_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S6045)
    EvtClearTalk
    EvtSetBgm(S6045_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraMountain)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6045)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6051)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6045_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6045, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6051[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraOutsideForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S6051)
    EvtClearTalk
    EvtLoadUnits(S6051RedUnits)
    EvtLoadUnits(S6051BlueUnits)
    EvtSetBgm(S6051_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6051)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6051_Victory[] = {
    EvtSetBgm(S6051_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraOutsideForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6051)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6052)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6051_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6051, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6052[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraMountain)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S6052)
    EvtClearTalk
    EvtLoadUnits(S6052RedUnits)
    EvtLoadUnits(S6052BlueUnits)
    EvtSetBgm(S6052_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6052)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6052_Victory[] = {
    EvtSetBgm(S6052_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraMountain)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6052)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6053)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6052_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6052, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6053[] = {
    EvtLoadUnits(S6053RedUnits)
    EvtLoadUnits(S6053BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6053)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6053_Victory[] = {
    EvtSetBgm(S6053_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraMountain)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6053)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6054)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6053_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6053, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6054[] = {
    EvtLoadUnits(S6054RedUnits)
    EvtLoadUnits(S6054BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6054)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6054_Victory[] = {
    EvtSetBgm(S6054_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_BraveCamp)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6054)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6055)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6054_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6054, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6055[] = {
    EvtLoadUnits(S6055RedUnits)
    EvtLoadUnits(S6055BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6055)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6055_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S6055)
    EvtClearTalk
    EvtSetBgm(S6055_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraMountain)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6055)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6061)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6055_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6055, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6061[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraMountain)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S6061)
    EvtClearTalk
    EvtLoadUnits(S6061RedUnits)
    EvtLoadUnits(S6061BlueUnits)
    EvtSetBgm(S6061_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6061)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6061_Victory[] = {
    EvtSetBgm(S6061_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraOutsideForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6061)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6062)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6061_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6061, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6062[] = {
    EvtLoadUnits(S6062RedUnits)
    EvtLoadUnits(S6062BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6062)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6062_Victory[] = {
    EvtSetBgm(S6062_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_UndergroundPrison_Brave)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6062)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6063)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6062_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6062, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6063[] = {
    EvtLoadUnits(S6063RedUnits)
    EvtLoadUnits(S6063BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6063)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6063_Victory[] = {
    EvtSetBgm(S6063_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraOutsideForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6063)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6064)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6063_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6063, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6064[] = {
    EvtLoadUnits(S6064RedUnits)
    EvtLoadUnits(S6064BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6064)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6064_Victory[] = {
    EvtSetBgm(S6064_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_UndergroundPrison_Brave)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6064)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6065)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6064_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6064, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6065[] = {
    EvtLoadUnits(S6065RedUnits)
    EvtLoadUnits(S6065BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6065)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6065_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S6065)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraOutsideForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6065)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6071)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6065_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6065, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6071[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraOutside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S6071)
    EvtClearTalk
    EvtLoadUnits(S6071RedUnits)
    EvtLoadUnits(S6071BlueUnits)
    EvtSetBgm(S6071_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6071)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6071_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S6071)
    EvtClearTalk
    EvtSetBgm(S6071_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraOutside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6071)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6072)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6071_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6071, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6072[] = {
    EvtLoadUnits(S6072RedUnits)
    EvtLoadUnits(S6072BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6072)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6072_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6073)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6072_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6072, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6073[] = {
    EvtLoadUnits(S6073RedUnits)
    EvtLoadUnits(S6073BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6073)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6073_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6074)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6073_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6073, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6074[] = {
    EvtLoadUnits(S6074RedUnits)
    EvtLoadUnits(S6074BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6074)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6074_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S6074)
    EvtClearTalk
    EvtSetBgm(S6074_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraOutside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6074)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6075)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6074_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6074, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6075[] = {
    EvtLoadUnits(S6075RedUnits)
    EvtLoadUnits(S6075BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6075)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6075_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S6075)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraGoingDark)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6075)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6081)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6075_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6075, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6081[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Chapter8_EmbraDark)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S6081)
    EvtClearTalk
    EvtLoadUnits(S6081RedUnits)
    EvtLoadUnits(S6081BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6081)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6081_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S6081)
    EvtClearTalk
    EvtSetBgm(S6081_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Chapter8_EmbraDark)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6081)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6082)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6081_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6081, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6082[] = {
    EvtLoadUnits(S6082RedUnits)
    EvtLoadUnits(S6082BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6082)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6082_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6083)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6082_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6082, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6083[] = {
    EvtLoadUnits(S6083RedUnits)
    EvtLoadUnits(S6083BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6083)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6083_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6084)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6083_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6083, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6084[] = {
    EvtLoadUnits(S6084RedUnits)
    EvtLoadUnits(S6084BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6084)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6084_Victory[] = {
    EvtSetBgm(S6084_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Chapter8_EmbraDark)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6084)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6085)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6084_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6084, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6085[] = {
    EvtLoadUnits(S6085RedUnits)
    EvtLoadUnits(S6085BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6085)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6085_Victory[] = {
    EvtSetBgm(S6085_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Chapter8_EmbraDark)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6085)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6091)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6085_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6085, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6091[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Chapter8_EmbraDark)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S6091)
    EvtClearTalk
    EvtLoadUnits(S6091RedUnits)
    EvtLoadUnits(S6091BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6091)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6091_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S6091)
    EvtClearTalk
    EvtSetBgm(S6091_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Chapter8_EmbraDark)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6091)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6092)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6091_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6091, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6092[] = {
    EvtLoadUnits(S6092RedUnits)
    EvtLoadUnits(S6092BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6092)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6092_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6093)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6092_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6092, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6093[] = {
    EvtLoadUnits(S6093RedUnits)
    EvtLoadUnits(S6093BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6093)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6093_Victory[] = {
    EvtSetBgm(S6093_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Chapter8_EmbraDark)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6093)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6094)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6093_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6093, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6094[] = {
    EvtLoadUnits(S6094RedUnits)
    EvtLoadUnits(S6094BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6094)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6094_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S6094)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6095)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6094_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6094, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6095[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Chapter8_EmbraDark)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S6095)
    EvtClearTalk
    EvtLoadUnits(S6095RedUnits)
    EvtLoadUnits(S6095BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6095)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6095_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S6095)
    EvtClearTalk
    EvtSetBgm(S6095_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_Chapter8_EmbraDark)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6095)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6101)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6095_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6095, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6101[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_AskAnother)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S6101)
    EvtClearTalk
    EvtLoadUnits(S6101RedUnits)
    EvtLoadUnits(S6101BlueUnits)
    EvtSetBgm(S6101_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6101)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6101_Victory[] = {
    EvtSetBgm(S6101_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_AskAnother)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6101)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6102)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6101_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6101, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6102[] = {
    EvtLoadUnits(S6102RedUnits)
    EvtLoadUnits(S6102BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6102)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6102_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6103)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6102_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6102, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6103[] = {
    EvtLoadUnits(S6103RedUnits)
    EvtLoadUnits(S6103BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6103)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6103_Victory[] = {
    EvtSetBgm(S6103_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_AskAnother)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6103)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6104)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6103_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6103, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6104[] = {
    EvtLoadUnits(S6104RedUnits)
    EvtLoadUnits(S6104BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6104)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6104_Victory[] = {
    EvtSetBgm(S6104_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_AskAnother)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6104)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6105)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6104_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6104, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6105[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_YggdrasillAsk)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S6105)
    EvtClearTalk
    EvtLoadUnits(S6105RedUnits)
    EvtLoadUnits(S6105BlueUnits)
    EvtSetBgm(S6105_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6105)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6105_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S6105)
    EvtClearTalk
    EvtSetBgm(S6105_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_YggdrasillAsk)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6105)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6111)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6105_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6105, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6111[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraDarkOutside2)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S6111)
    EvtClearTalk
    EvtLoadUnits(S6111RedUnits)
    EvtLoadUnits(S6111BlueUnits)
    EvtSetBgm(S6111_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6111)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6111_Victory[] = {
    EvtSetBgm(S6111_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraDarkOutside2)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6111)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6112)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6111_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6111, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6112[] = {
    EvtLoadUnits(S6112RedUnits)
    EvtLoadUnits(S6112BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6112)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6112_Victory[] = {
    EvtSetBgm(S6112_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraDarkOutside2)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6112)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6113)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6112_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6112, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6113[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraDarkOutside2)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S6113)
    EvtClearTalk
    EvtLoadUnits(S6113RedUnits)
    EvtLoadUnits(S6113BlueUnits)
    EvtSetBgm(S6113_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6113)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6113_Victory[] = {
    EvtSetBgm(S6113_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraDarkOutside2)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6113)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6114)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6113_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6113, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6114[] = {
    EvtLoadUnits(S6114RedUnits)
    EvtLoadUnits(S6114BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6114)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6114_Victory[] = {
    EvtSetBgm(S6114_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraDarkOutside2)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6114)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6115)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6114_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6114, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6115[] = {
    EvtLoadUnits(S6115RedUnits)
    EvtLoadUnits(S6115BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6115)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S6115RedUnits_Turn_3_3[] = {
    EvtLoadUnits(S6115RedUnits_Turn_3_3)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6115_Victory[] = {
    EvtSetBgm(S6115_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraDarkOutside2)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6115)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6121)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6115_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6115, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S6115RedUnits_Turn_3_3, 3, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6121[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraDarkOutside2)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S6121)
    EvtClearTalk
    EvtLoadUnits(S6121RedUnits)
    EvtLoadUnits(S6121BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6121)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6121_Victory[] = {
    EvtSetBgm(S6121_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraDarkOutside2)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6121)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6122)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6121_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6121, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6122[] = {
    EvtLoadUnits(S6122RedUnits)
    EvtLoadUnits(S6122BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6122)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6122_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6123)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6122_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6122, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6123[] = {
    EvtLoadUnits(S6123RedUnits)
    EvtLoadUnits(S6123BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6123)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6123_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6124)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6123_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6123, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6124[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraDarkOutside2)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S6124)
    EvtClearTalk
    EvtLoadUnits(S6124RedUnits)
    EvtLoadUnits(S6124BlueUnits)
    EvtSetBgm(S6124_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6124)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6124_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6125)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6124_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6124, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6125[] = {
    EvtLoadUnits(S6125RedUnits)
    EvtLoadUnits(S6125BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6125)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S6125RedUnits_Turn_2_2[] = {
    EvtLoadUnits(S6125RedUnits_Turn_2_2)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S6125RedUnits_Turn_3_3[] = {
    EvtLoadUnits(S6125RedUnits_Turn_3_3)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S6125RedUnits_Turn_4_4[] = {
    EvtLoadUnits(S6125RedUnits_Turn_4_4)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6125_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S6125)
    EvtClearTalk
    EvtSetBgm(S6125_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraDarkOutside2)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6125)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6131)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6125_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6125, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S6125RedUnits_Turn_4_4, 2, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S6125RedUnits_Turn_4_4, 3, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S6125RedUnits_Turn_4_4, 4, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6131[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_BG_Blank_White)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S6131)
    EvtClearTalk
    EvtLoadUnits(S6131RedUnits)
    EvtLoadUnits(S6131BlueUnits)
    EvtSetBgm(S6131_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6131)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6131_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S6131)
    EvtClearTalk
    EvtSetBgm(S6131_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_BG_Blank_White)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6131)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6132)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6131_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6131, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6132[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_BG_Blank_White)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S6132)
    EvtClearTalk
    EvtLoadUnits(S6132RedUnits)
    EvtLoadUnits(S6132BlueUnits)
    EvtSetBgm(S6132_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6132)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6132_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6133)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6132_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6132, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6133[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_BG_Blank_White)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S6133)
    EvtClearTalk
    EvtLoadUnits(S6133RedUnits)
    EvtLoadUnits(S6133BlueUnits)
    EvtSetBgm(S6133_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6133)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6133_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6134)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6133_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6133, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6134[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_BG_Blank_White)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S6134)
    EvtClearTalk
    EvtLoadUnits(S6134RedUnits)
    EvtLoadUnits(S6134BlueUnits)
    EvtSetBgm(S6134_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6134)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6134_Victory[] = {
    EvtSetBgm(S6134_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraAnotherCastle)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6134)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S6135)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6134_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6134, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6135[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_BG_Blank_White)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S6135)
    EvtClearTalk
    EvtLoadUnits(S6135RedUnits)
    EvtLoadUnits(S6135BlueUnits)
    EvtSetBgm(S6135_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S6135)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S6135RedUnits_Turn_2_2[] = {
    EvtLoadUnits(S6135RedUnits_Turn_2_2)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S6135_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S6135)
    EvtClearTalk
    EvtSetBgm(S6135_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraAnotherThrone_after)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S6135)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7011)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6135_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6135, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S6135RedUnits_Turn_2_2, 2, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7011[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBG_OP_00_v0700a)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S7011)
    EvtClearTalk
    EvtLoadUnits(S7011RedUnits)
    EvtLoadUnits(S7011BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7011)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7011_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S7011)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7012)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7011_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7011, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7012[] = {
    EvtLoadUnits(S7012RedUnits)
    EvtLoadUnits(S7012BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7012)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7012_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7013)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7012_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7012, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7013[] = {
    EvtLoadUnits(S7013RedUnits)
    EvtLoadUnits(S7013BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7013)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7013_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7014)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7013_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7013, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7014[] = {
    EvtLoadUnits(S7014RedUnits)
    EvtLoadUnits(S7014BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7014)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7014_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7015)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7014_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7014, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7015[] = {
    EvtLoadUnits(S7015RedUnits)
    EvtLoadUnits(S7015BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7015)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7015_Victory[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_GullveigCastleInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S7015)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7021)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7015_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7015, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7021[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_BraveInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S7021)
    EvtClearTalk
    EvtLoadUnits(S7021RedUnits)
    EvtLoadUnits(S7021BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7021)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7021_Victory[] = {
    EvtSetBgm(S7021_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_BraveCastleNeighborhood)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S7021)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7022)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7021_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7021, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7022[] = {
    EvtLoadUnits(S7022RedUnits)
    EvtLoadUnits(S7022BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7022)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7022_Victory[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_001_BraveForest)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S7022)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7023)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7022_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7022, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7023[] = {
    EvtLoadUnits(S7023RedUnits)
    EvtLoadUnits(S7023BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7023)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7023_Victory[] = {
    EvtSetBgm(S7023_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_BraveHaloGate)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S7023)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7024)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7023_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7023, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7024[] = {
    EvtLoadUnits(S7024RedUnits)
    EvtLoadUnits(S7024BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7024)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7024_Victory[] = {
    EvtSetBgm(S7024_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraOutside2)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S7024)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7025)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7024_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7024, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7025[] = {
    EvtLoadUnits(S7025RedUnits)
    EvtLoadUnits(S7025BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7025)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7025_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S7025)
    EvtClearTalk
    EvtSetBgm(S7025_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EmbraOutside2)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S7025)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7031)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7025_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7025, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7031[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_VanaThrone)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S7031)
    EvtClearTalk
    EvtLoadUnits(S7031RedUnits)
    EvtLoadUnits(S7031BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7031)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7031_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7032)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7031_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7031, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7032[] = {
    EvtLoadUnits(S7032RedUnits)
    EvtLoadUnits(S7032BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7032)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7032_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7033)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7032_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7032, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7033[] = {
    EvtLoadUnits(S7033RedUnits)
    EvtLoadUnits(S7033BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7033)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7033_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7034)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7033_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7033, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7034[] = {
    EvtLoadUnits(S7034RedUnits)
    EvtLoadUnits(S7034BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7034)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7034_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7035)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7034_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7034, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7035[] = {
    EvtLoadUnits(S7035RedUnits)
    EvtLoadUnits(S7035BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7035)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7035_Victory[] = {
    EvtSetBgm(S7035_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_GoldenThreadRiver)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S7035)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7041)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7035_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7035, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7041[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_VanaThrone)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S7041)
    EvtClearTalk
    EvtLoadUnits(S7041RedUnits)
    EvtLoadUnits(S7041BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7041)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7041_Victory[] = {
    EvtSetBgm(S7041_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_BraveCamp)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S7041)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7042)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7041_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7041, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7042[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_EarthTempleEntrance)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S7042)
    EvtClearTalk
    EvtLoadUnits(S7042RedUnits)
    EvtLoadUnits(S7042BlueUnits)
    EvtSetBgm(S7042_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7042)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7042_Victory[] = {
    EvtSetBgm(S7042_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_BraveCamp)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S7042)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7043)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7042_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7042, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7043[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_044_EarthTemple)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S7043)
    EvtClearTalk
    EvtLoadUnits(S7043RedUnits)
    EvtLoadUnits(S7043BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7043)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7043_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S7043)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7044)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7043_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7043, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7044[] = {
    EvtLoadUnits(S7044RedUnits)
    EvtLoadUnits(S7044BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7044)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7044_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7045)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7044_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7044, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7045[] = {
    EvtLoadUnits(S7045RedUnits)
    EvtLoadUnits(S7045BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7045)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7045_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S7045)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_044_EarthTempleBoss)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S7045)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7051)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7045_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7045, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7051[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_VanaThrone)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S7051)
    EvtClearTalk
    EvtLoadUnits(S7051RedUnits)
    EvtLoadUnits(S7051BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7051)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7051_Victory[] = {
    EvtSetBgm(S7051_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_BraveCamp)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S7051)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7052)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7051_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7051, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7052[] = {
    EvtLoadUnits(S7052RedUnits)
    EvtLoadUnits(S7052BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7052)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7052_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7053)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7052_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7052, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7053[] = {
    EvtLoadUnits(S7053RedUnits)
    EvtLoadUnits(S7053BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7053)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7053_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7054)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7053_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7053, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7054[] = {
    EvtLoadUnits(S7054RedUnits)
    EvtLoadUnits(S7054BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7054)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7054_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7055)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7054_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7054, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7055[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_LightTemple)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S7055)
    EvtClearTalk
    EvtLoadUnits(S7055RedUnits)
    EvtLoadUnits(S7055BlueUnits)
    EvtSetBgm(S7055_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7055)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S7055RedUnits_Turn_2_2[] = {
    EvtLoadUnits(S7055RedUnits_Turn_2_2)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S7055RedUnits_Turn_3_3[] = {
    EvtLoadUnits(S7055RedUnits_Turn_3_3)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7055_Victory[] = {
    EvtSetBgm(S7055_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_LightTemple)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S7055)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7061)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7055_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7055, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S7055RedUnits_Turn_3_3, 2, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S7055RedUnits_Turn_3_3, 3, 0, FACTION_RED)
    EvtListTurn(0, EventScr_S7055_Victory, 4 + 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7061[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_LightTemplePast)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S7061)
    EvtClearTalk
    EvtLoadUnits(S7061RedUnits)
    EvtLoadUnits(S7061BlueUnits)
    EvtSetBgm(S7061_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7061)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7061_Victory[] = {
    EvtSetBgm(S7061_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_BG_Blank_Black)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S7061)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7062)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7061_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7061, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7062[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_VanaCave)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S7062)
    EvtClearTalk
    EvtLoadUnits(S7062RedUnits)
    EvtLoadUnits(S7062BlueUnits)
    EvtSetBgm(S7062_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7062)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7062_Victory[] = {
    EvtSetBgm(S7062_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_VanaCave)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S7062)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7063)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7062_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7062, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7063[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_VanaCave)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S7063)
    EvtClearTalk
    EvtLoadUnits(S7063RedUnits)
    EvtLoadUnits(S7063BlueUnits)
    EvtSetBgm(S7063_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7063)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7063_Victory[] = {
    EvtSetBgm(S7063_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_VanaCave)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S7063)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7064)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7063_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7063, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7064[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_VanaCave)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S7064)
    EvtClearTalk
    EvtLoadUnits(S7064RedUnits)
    EvtLoadUnits(S7064BlueUnits)
    EvtSetBgm(S7064_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7064)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7064_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7065)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7064_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7064, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7065[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_VanaPastAroundCave)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S7065)
    EvtClearTalk
    EvtLoadUnits(S7065RedUnits)
    EvtLoadUnits(S7065BlueUnits)
    EvtSetBgm(S7065_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7065)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7065_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S7065)
    EvtClearTalk
    EvtSetBgm(S7065_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_044_EarthTempleBoss)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S7065)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7071)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7065_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7065, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7071[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_VanaPastAroundCave)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S7071)
    EvtClearTalk
    EvtLoadUnits(S7071RedUnits)
    EvtLoadUnits(S7071BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7071)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7071_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S7071)
    EvtClearTalk
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_VanaPastAroundCave)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S7071)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7072)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7071_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7071, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7072[] = {
    EvtLoadUnits(S7072RedUnits)
    EvtLoadUnits(S7072BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7072)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7072_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7073)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7072_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7072, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7073[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_VanaThronePast)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S7073)
    EvtClearTalk
    EvtLoadUnits(S7073RedUnits)
    EvtLoadUnits(S7073BlueUnits)
    EvtSetBgm(S7073_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7073)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7073_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7074)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7073_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7073, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7074[] = {
    EvtLoadUnits(S7074RedUnits)
    EvtLoadUnits(S7074BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7074)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7074_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7075)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7074_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7074, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7075[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_VanaThronePast)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S7075)
    EvtClearTalk
    EvtLoadUnits(S7075RedUnits)
    EvtLoadUnits(S7075BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7075)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7075_Victory[] = {
    EvtSetBgm(S7075_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_VanaPast)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S7075)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7081)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7075_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7075, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_S7075_Victory, 4 + 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7081[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_GullveigCastleInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S7081)
    EvtClearTalk
    EvtLoadUnits(S7081RedUnits)
    EvtLoadUnits(S7081BlueUnits)
    EvtSetBgm(S7081_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7081)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7081_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S7081)
    EvtClearTalk
    EvtSetBgm(S7081_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_VanaPast)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S7081)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7082)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7081_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7081, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7082[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_GullveigCastleInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S7082)
    EvtClearTalk
    EvtLoadUnits(S7082RedUnits)
    EvtLoadUnits(S7082BlueUnits)
    EvtSetBgm(S7082_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7082)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7082_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7083)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7082_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7082, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7083[] = {
    EvtLoadUnits(S7083RedUnits)
    EvtLoadUnits(S7083BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7083)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7083_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S7083)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7084)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7083_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7083, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7084[] = {
    EvtLoadUnits(S7084RedUnits)
    EvtLoadUnits(S7084BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7084)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7084_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7085)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7084_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7084, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7085[] = {
    EvtLoadUnits(S7085RedUnits)
    EvtLoadUnits(S7085BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7085)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7085_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S7085)
    EvtClearTalk
    EvtSetBgm(S7085_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_GoldenThreadUpperRiverPast)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S7085)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7091)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7085_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7085, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7091[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_GoldenThreadUpperRiverPast)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S7091)
    EvtClearTalk
    EvtLoadUnits(S7091RedUnits)
    EvtLoadUnits(S7091BlueUnits)
    EvtSetBgm(S7091_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7091)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7091_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S7091)
    EvtClearTalk
    EvtSetBgm(S7091_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_GoldenThreadRiver)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S7091)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7092)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7091_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7091, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7092[] = {
    EvtLoadUnits(S7092RedUnits)
    EvtLoadUnits(S7092BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7092)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7092_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7093)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7092_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7092, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7093[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_VanaNight)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S7093)
    EvtClearTalk
    EvtLoadUnits(S7093RedUnits)
    EvtLoadUnits(S7093BlueUnits)
    EvtSetBgm(S7093_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7093)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7093_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7094)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7093_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7093, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7094[] = {
    EvtLoadUnits(S7094RedUnits)
    EvtLoadUnits(S7094BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7094)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7094_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7095)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7094_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7094, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7095[] = {
    EvtLoadUnits(S7095RedUnits)
    EvtLoadUnits(S7095BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7095)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7095_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S7095)
    EvtClearTalk
    EvtSetBgm(S7095_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_VanaCastleThroneNight)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S7095)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7101)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7095_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7095, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7101[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_VanaFade)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S7101)
    EvtClearTalk
    EvtLoadUnits(S7101RedUnits)
    EvtLoadUnits(S7101BlueUnits)
    EvtSetBgm(S7101_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7101)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7101_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S7101)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7102)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7101_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7101, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7102[] = {
    EvtLoadUnits(S7102RedUnits)
    EvtLoadUnits(S7102BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7102)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7102_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7103)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7102_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7102, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7103[] = {
    EvtLoadUnits(S7103RedUnits)
    EvtLoadUnits(S7103BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7103)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7103_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7104)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7103_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7103, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7104[] = {
    EvtLoadUnits(S7104RedUnits)
    EvtLoadUnits(S7104BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7104)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7104_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7105)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7104_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7104, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7105[] = {
    EvtLoadUnits(S7105RedUnits)
    EvtLoadUnits(S7105BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7105)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7105_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S7105)
    EvtClearTalk
    EvtSetBgm(S7105_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_LightTempleFade)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S7105)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7111)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7105_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7105, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7111[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_VanaFade)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S7111)
    EvtClearTalk
    EvtLoadUnits(S7111RedUnits)
    EvtLoadUnits(S7111BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7111)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7111_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S7111)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 1)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7112)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7111_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7111, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7112[] = {
    EvtLoadUnits(S7112RedUnits)
    EvtLoadUnits(S7112BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7112)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7112_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 2)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7113)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7112_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7112, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7113[] = {
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_VanaFade)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_OPENING_S7113)
    EvtClearTalk
    EvtLoadUnits(S7113RedUnits)
    EvtLoadUnits(S7113BlueUnits)
    EvtSetBgm(S7113_MID_SCENARIO_MAP_BEGIN_BGM)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7113)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7113_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 3)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7114)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7113_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7113, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7114[] = {
    EvtLoadUnits(S7114RedUnits)
    EvtLoadUnits(S7114BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7114)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7114_Victory[] = {
    EvtNoSkip
    EvtGiveMoney(100 * 4)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S7115)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7114_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7114, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7115[] = {
    EvtLoadUnits(S7115RedUnits)
    EvtLoadUnits(S7115BlueUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S7115)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S7115_Victory[] = {
    EvtSetBgm(S7115_MID_SCENARIO_ENDING_BGM)
    EvtFadeToBlack(16)
    EvtExitMap
    EvtBackground(BACKGROUND_EvBg_NjordSanctuaryInside)
    EvtFadeFromBlack(16)
    EvtEnterMap
    EvtTalk(MID_SCENARIO_ENDING_S7115)
    EvtClearTalk
    EvtNoSkip
    EvtGiveMoney(100 * 5)
    EvtSleep(64)
    EvtNextChapter(CHAPTER_CH_S0001)
    EvtSleep(1)
    EvtKill
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7115_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7115, 1, 0, FACTION_BLUE)
    EvtListEnd
};
