
#include "unit.h"
#include "blueunitdefs.h"
#include "redunitdefs.h"
#include "event.h"
#include "eventinfo.h"
#include "eventscript.h"
#include "faction.h"
#include "backgrounds.h"
#include "texts.h"
#include "constants/songs.h"
#include "songsNew.h"
#include "constants/chapters.h"
#include "chapterNew.h"
#include "chapters.h"

const EventScr EventScr_LoadUnits_S0001[] = {
    EvtBackground(BACKGROUND_001_Brave)
    EvtTalk(MID_SCENARIO_OPENING_S0001)
    EvtClearTalk
    EvtLoadUnits(S0001BlueUnits)
    EvtLoadUnits(S0001RedUnits)
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
    EvtBackground(BACKGROUND_001_Brave)
    EvtTalk(MID_SCENARIO_OPENING_S0002)
    EvtClearTalk
    EvtLoadUnits(S0002BlueUnits)
    EvtLoadUnits(S0002RedUnits)
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
    EvtBackground(BACKGROUND_001_BraveForest)
    EvtTalk(MID_SCENARIO_OPENING_S0101)
    EvtClearTalk
    EvtLoadUnits(S0101BlueUnits)
    EvtLoadUnits(S0101RedUnits)
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
    EvtBackground(BACKGROUND_002_PlainForest)
    EvtTalk(MID_SCENARIO_OPENING_S0102)
    EvtClearTalk
    EvtLoadUnits(S0102BlueUnits)
    EvtLoadUnits(S0102RedUnits)
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
    EvtBackground(BACKGROUND_001_Brave)
    EvtTalk(MID_SCENARIO_OPENING_S0103)
    EvtClearTalk
    EvtLoadUnits(S0103BlueUnits)
    EvtLoadUnits(S0103RedUnits)
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
    EvtBackground(BACKGROUND_001_Brave)
    EvtTalk(MID_SCENARIO_OPENING_S0201)
    EvtClearTalk
    EvtLoadUnits(S0201BlueUnits)
    EvtLoadUnits(S0201RedUnits)
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
    EvtLoadUnits(S0202BlueUnits)
    EvtLoadUnits(S0202RedUnits)
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
    EvtLoadUnits(S0203BlueUnits)
    EvtLoadUnits(S0203RedUnits)
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
    EvtLoadUnits(S0204BlueUnits)
    EvtLoadUnits(S0204RedUnits)
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
    EvtLoadUnits(S0205BlueUnits)
    EvtLoadUnits(S0205RedUnits)
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
    EvtLoadUnits(S0301BlueUnits)
    EvtLoadUnits(S0301RedUnits)
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
    EvtLoadUnits(S0302BlueUnits)
    EvtLoadUnits(S0302RedUnits)
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
    EvtLoadUnits(S0303BlueUnits)
    EvtLoadUnits(S0303RedUnits)
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
    EvtLoadUnits(S0304BlueUnits)
    EvtLoadUnits(S0304RedUnits)
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
    EvtLoadUnits(S0305BlueUnits)
    EvtLoadUnits(S0305RedUnits)
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
    EvtLoadUnits(S0401BlueUnits)
    EvtLoadUnits(S0401RedUnits)
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
    EvtLoadUnits(S0402BlueUnits)
    EvtLoadUnits(S0402RedUnits)
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
    EvtLoadUnits(S0403BlueUnits)
    EvtLoadUnits(S0403RedUnits)
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
    EvtLoadUnits(S0404BlueUnits)
    EvtLoadUnits(S0404RedUnits)
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
    EvtLoadUnits(S0405BlueUnits)
    EvtLoadUnits(S0405RedUnits)
    EvtTalk(MID_SCENARIO_MAP_BEGIN_S0405)
    EvtClearTalk
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_S0405_Victory[] = {
    EvtTalk(MID_SCENARIO_MAP_END_S0405)
    EvtClearTalk
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
    EvtLoadUnits(S0501BlueUnits)
    EvtLoadUnits(S0501RedUnits)
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
    EvtLoadUnits(S0502BlueUnits)
    EvtLoadUnits(S0502RedUnits)
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
    EvtLoadUnits(S0503BlueUnits)
    EvtLoadUnits(S0503RedUnits)
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
    EvtLoadUnits(S0504BlueUnits)
    EvtLoadUnits(S0504RedUnits)
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
    EvtLoadUnits(S0505BlueUnits)
    EvtLoadUnits(S0505RedUnits)
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
    EvtLoadUnits(S0601BlueUnits)
    EvtLoadUnits(S0601RedUnits)
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
    EvtLoadUnits(S0602BlueUnits)
    EvtLoadUnits(S0602RedUnits)
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
    EvtLoadUnits(S0603BlueUnits)
    EvtLoadUnits(S0603RedUnits)
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
    EvtLoadUnits(S0604BlueUnits)
    EvtLoadUnits(S0604RedUnits)
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
    EvtLoadUnits(S0605BlueUnits)
    EvtLoadUnits(S0605RedUnits)
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
    EvtLoadUnits(S0701BlueUnits)
    EvtLoadUnits(S0701RedUnits)
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
    EvtLoadUnits(S0702BlueUnits)
    EvtLoadUnits(S0702RedUnits)
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
    EvtLoadUnits(S0703BlueUnits)
    EvtLoadUnits(S0703RedUnits)
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
    EvtLoadUnits(S0704BlueUnits)
    EvtLoadUnits(S0704RedUnits)
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
    EvtLoadUnits(S0705BlueUnits)
    EvtLoadUnits(S0705RedUnits)
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
    EvtLoadUnits(S0801BlueUnits)
    EvtLoadUnits(S0801RedUnits)
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
    EvtLoadUnits(S0802BlueUnits)
    EvtLoadUnits(S0802RedUnits)
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
    EvtLoadUnits(S0803BlueUnits)
    EvtLoadUnits(S0803RedUnits)
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
    EvtLoadUnits(S0804BlueUnits)
    EvtLoadUnits(S0804RedUnits)
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
    EvtLoadUnits(S0805BlueUnits)
    EvtLoadUnits(S0805RedUnits)
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
    EvtLoadUnits(S0901BlueUnits)
    EvtLoadUnits(S0901RedUnits)
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
    EvtLoadUnits(S0902BlueUnits)
    EvtLoadUnits(S0902RedUnits)
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
    EvtLoadUnits(S0903BlueUnits)
    EvtLoadUnits(S0903RedUnits)
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
    EvtLoadUnits(S0904BlueUnits)
    EvtLoadUnits(S0904RedUnits)
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
    EvtLoadUnits(S0905BlueUnits)
    EvtLoadUnits(S0905RedUnits)
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
    EvtBackground(BACKGROUND_001_Brave)
    EvtTalk(MID_SCENARIO_OPENING_S1001)
    EvtClearTalk
    EvtLoadUnits(S1001BlueUnits)
    EvtLoadUnits(S1001RedUnits)
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
    EvtLoadUnits(S1002BlueUnits)
    EvtLoadUnits(S1002RedUnits)
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
    EvtLoadUnits(S1003BlueUnits)
    EvtLoadUnits(S1003RedUnits)
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
    EvtLoadUnits(S1004BlueUnits)
    EvtLoadUnits(S1004RedUnits)
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
    EvtLoadUnits(S1005BlueUnits)
    EvtLoadUnits(S1005RedUnits)
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
    EvtBackground(BACKGROUND_001_Brave)
    EvtTalk(MID_SCENARIO_OPENING_S1101)
    EvtClearTalk
    EvtLoadUnits(S1101BlueUnits)
    EvtLoadUnits(S1101RedUnits)
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
    EvtLoadUnits(S1102BlueUnits)
    EvtLoadUnits(S1102RedUnits)
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
    EvtLoadUnits(S1103BlueUnits)
    EvtLoadUnits(S1103RedUnits)
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
    EvtLoadUnits(S1104BlueUnits)
    EvtLoadUnits(S1104RedUnits)
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
    EvtLoadUnits(S1105BlueUnits)
    EvtLoadUnits(S1105RedUnits)
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
    EvtBackground(BACKGROUND_001_Brave)
    EvtTalk(MID_SCENARIO_OPENING_S1201)
    EvtClearTalk
    EvtLoadUnits(S1201BlueUnits)
    EvtLoadUnits(S1201RedUnits)
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
    EvtLoadUnits(S1202BlueUnits)
    EvtLoadUnits(S1202RedUnits)
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
    EvtBackground(BACKGROUND_001_Brave)
    EvtLoadUnits(S1203BlueUnits)
    EvtLoadUnits(S1203RedUnits)
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
    EvtLoadUnits(S1204BlueUnits)
    EvtLoadUnits(S1204RedUnits)
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
    EvtLoadUnits(S1205BlueUnits)
    EvtLoadUnits(S1205RedUnits)
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
    EvtBackground(BACKGROUND_001_Brave)
    EvtTalk(MID_SCENARIO_OPENING_S1301)
    EvtClearTalk
    EvtLoadUnits(S1301BlueUnits)
    EvtLoadUnits(S1301RedUnits)
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
    EvtLoadUnits(S1302BlueUnits)
    EvtLoadUnits(S1302RedUnits)
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
    EvtLoadUnits(S1303BlueUnits)
    EvtLoadUnits(S1303RedUnits)
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
    EvtLoadUnits(S1304BlueUnits)
    EvtLoadUnits(S1304RedUnits)
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
    EvtLoadUnits(S1305BlueUnits)
    EvtLoadUnits(S1305RedUnits)
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
    EvtBackground(BACKGROUND_001_Brave)
    EvtTalk(MID_SCENARIO_OPENING_S1401)
    EvtClearTalk
    EvtLoadUnits(S1401BlueUnits)
    EvtLoadUnits(S1401RedUnits)
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
    EvtLoadUnits(S1402BlueUnits)
    EvtLoadUnits(S1402RedUnits)
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
    EvtLoadUnits(S1403BlueUnits)
    EvtLoadUnits(S1403RedUnits)
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
    EvtLoadUnits(S1404BlueUnits)
    EvtLoadUnits(S1404RedUnits)
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
    EvtLoadUnits(S1405BlueUnits)
    EvtLoadUnits(S1405RedUnits)
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
    EvtBackground(BACKGROUND_001_Brave)
    EvtTalk(MID_SCENARIO_OPENING_S1501)
    EvtClearTalk
    EvtLoadUnits(S1501BlueUnits)
    EvtLoadUnits(S1501RedUnits)
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
    EvtBackground(BACKGROUND_007_SnowDreaming)
    EvtTalk(MID_SCENARIO_OPENING_S1601)
    EvtClearTalk
    EvtLoadUnits(S1601BlueUnits)
    EvtLoadUnits(S1601RedUnits)
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
    EvtBackground(BACKGROUND_001_Brave)
    EvtTalk(MID_SCENARIO_OPENING_S2011)
    EvtClearTalk
    EvtLoadUnits(S2011BlueUnits)
    EvtLoadUnits(S2011RedUnits)
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
    EvtLoadUnits(S2012BlueUnits)
    EvtLoadUnits(S2012RedUnits)
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
    EvtLoadUnits(S2013BlueUnits)
    EvtLoadUnits(S2013RedUnits)
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
    EvtLoadUnits(S2014BlueUnits)
    EvtLoadUnits(S2014RedUnits)
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
    EvtLoadUnits(S2015BlueUnits)
    EvtLoadUnits(S2015RedUnits)
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
    EvtBackground(BACKGROUND_001_BraveInside)
    EvtTalk(MID_SCENARIO_OPENING_S2021)
    EvtClearTalk
    EvtLoadUnits(S2021BlueUnits)
    EvtLoadUnits(S2021RedUnits)
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
    EvtLoadUnits(S2022BlueUnits)
    EvtLoadUnits(S2022RedUnits)
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
    EvtLoadUnits(S2023BlueUnits)
    EvtLoadUnits(S2023RedUnits)
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
    EvtLoadUnits(S2024BlueUnits)
    EvtLoadUnits(S2024RedUnits)
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
    EvtLoadUnits(S2025BlueUnits)
    EvtLoadUnits(S2025RedUnits)
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
    EvtBackground(BACKGROUND_007_SnowDreaming)
    EvtTalk(MID_SCENARIO_OPENING_S2031)
    EvtClearTalk
    EvtLoadUnits(S2031BlueUnits)
    EvtLoadUnits(S2031RedUnits)
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
    EvtLoadUnits(S2032BlueUnits)
    EvtLoadUnits(S2032RedUnits)
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
    EvtLoadUnits(S2033BlueUnits)
    EvtLoadUnits(S2033RedUnits)
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
    EvtLoadUnits(S2034BlueUnits)
    EvtLoadUnits(S2034RedUnits)
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
    EvtLoadUnits(S2035BlueUnits)
    EvtLoadUnits(S2035RedUnits)
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
    EvtBackground(BACKGROUND_001_BraveForest)
    EvtTalk(MID_SCENARIO_OPENING_S2041)
    EvtClearTalk
    EvtLoadUnits(S2041BlueUnits)
    EvtLoadUnits(S2041RedUnits)
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
    EvtLoadUnits(S2042BlueUnits)
    EvtLoadUnits(S2042RedUnits)
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
    EvtLoadUnits(S2043BlueUnits)
    EvtLoadUnits(S2043RedUnits)
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
    EvtLoadUnits(S2044BlueUnits)
    EvtLoadUnits(S2044RedUnits)
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
    EvtLoadUnits(S2045BlueUnits)
    EvtLoadUnits(S2045RedUnits)
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
    EvtBackground(BACKGROUND_025_NiflPlain)
    EvtTalk(MID_SCENARIO_OPENING_S2051)
    EvtClearTalk
    EvtLoadUnits(S2051BlueUnits)
    EvtLoadUnits(S2051RedUnits)
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
    EvtLoadUnits(S2052BlueUnits)
    EvtLoadUnits(S2052RedUnits)
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
    EvtLoadUnits(S2053BlueUnits)
    EvtLoadUnits(S2053RedUnits)
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
    EvtLoadUnits(S2054BlueUnits)
    EvtLoadUnits(S2054RedUnits)
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
    EvtLoadUnits(S2055BlueUnits)
    EvtLoadUnits(S2055RedUnits)
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
    EvtBackground(BACKGROUND_007_SnowDreaming)
    EvtTalk(MID_SCENARIO_OPENING_S2061)
    EvtClearTalk
    EvtLoadUnits(S2061BlueUnits)
    EvtLoadUnits(S2061RedUnits)
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
    EvtLoadUnits(S2062BlueUnits)
    EvtLoadUnits(S2062RedUnits)
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
    EvtLoadUnits(S2063BlueUnits)
    EvtLoadUnits(S2063RedUnits)
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
    EvtLoadUnits(S2064BlueUnits)
    EvtLoadUnits(S2064RedUnits)
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
    EvtBackground(BACKGROUND_025_NiflPlain)
    EvtTalk(MID_SCENARIO_OPENING_S2065)
    EvtClearTalk
    EvtLoadUnits(S2065BlueUnits)
    EvtLoadUnits(S2065RedUnits)
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
    EvtBackground(BACKGROUND_007_SnowDreaming)
    EvtTalk(MID_SCENARIO_OPENING_S2071)
    EvtClearTalk
    EvtLoadUnits(S2071BlueUnits)
    EvtLoadUnits(S2071RedUnits)
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
    EvtLoadUnits(S2072BlueUnits)
    EvtLoadUnits(S2072RedUnits)
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
    EvtLoadUnits(S2073BlueUnits)
    EvtLoadUnits(S2073RedUnits)
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
    EvtLoadUnits(S2074BlueUnits)
    EvtLoadUnits(S2074RedUnits)
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
    EvtBackground(BACKGROUND_025_NiflPlain)
    EvtTalk(MID_SCENARIO_OPENING_S2075)
    EvtClearTalk
    EvtLoadUnits(S2075BlueUnits)
    EvtLoadUnits(S2075RedUnits)
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
    EvtLoadUnits(S2081BlueUnits)
    EvtLoadUnits(S2081RedUnits)
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
    EvtLoadUnits(S2082BlueUnits)
    EvtLoadUnits(S2082RedUnits)
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
    EvtLoadUnits(S2083BlueUnits)
    EvtLoadUnits(S2083RedUnits)
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
    EvtLoadUnits(S2084BlueUnits)
    EvtLoadUnits(S2084RedUnits)
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
    EvtLoadUnits(S2085BlueUnits)
    EvtLoadUnits(S2085RedUnits)
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
    EvtBackground(BACKGROUND_025_NiflPlain)
    EvtTalk(MID_SCENARIO_OPENING_S2091)
    EvtClearTalk
    EvtLoadUnits(S2091BlueUnits)
    EvtLoadUnits(S2091RedUnits)
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
    EvtLoadUnits(S2092BlueUnits)
    EvtLoadUnits(S2092RedUnits)
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
    EvtLoadUnits(S2093BlueUnits)
    EvtLoadUnits(S2093RedUnits)
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
    EvtLoadUnits(S2094BlueUnits)
    EvtLoadUnits(S2094RedUnits)
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
    EvtBackground(BACKGROUND_026_MuspelCastle)
    EvtTalk(MID_SCENARIO_OPENING_S2095)
    EvtClearTalk
    EvtLoadUnits(S2095BlueUnits)
    EvtLoadUnits(S2095RedUnits)
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
    EvtBackground(BACKGROUND_026_Muspel)
    EvtTalk(MID_SCENARIO_OPENING_S2101)
    EvtClearTalk
    EvtLoadUnits(S2101BlueUnits)
    EvtLoadUnits(S2101RedUnits)
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
    EvtLoadUnits(S2102BlueUnits)
    EvtLoadUnits(S2102RedUnits)
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
    EvtLoadUnits(S2103BlueUnits)
    EvtLoadUnits(S2103RedUnits)
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
    EvtLoadUnits(S2104BlueUnits)
    EvtLoadUnits(S2104RedUnits)
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
    EvtLoadUnits(S2105BlueUnits)
    EvtLoadUnits(S2105RedUnits)
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
    EvtBackground(BACKGROUND_026_Muspel)
    EvtTalk(MID_SCENARIO_OPENING_S2111)
    EvtClearTalk
    EvtLoadUnits(S2111BlueUnits)
    EvtLoadUnits(S2111RedUnits)
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
    EvtLoadUnits(S2112BlueUnits)
    EvtLoadUnits(S2112RedUnits)
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
    EvtLoadUnits(S2113BlueUnits)
    EvtLoadUnits(S2113RedUnits)
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
    EvtLoadUnits(S2114BlueUnits)
    EvtLoadUnits(S2114RedUnits)
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
    EvtBackground(BACKGROUND_026_Muspel)
    EvtTalk(MID_SCENARIO_OPENING_S2115)
    EvtClearTalk
    EvtLoadUnits(S2115BlueUnits)
    EvtLoadUnits(S2115RedUnits)
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
    EvtBackground(BACKGROUND_026_Muspel)
    EvtTalk(MID_SCENARIO_OPENING_S2121)
    EvtClearTalk
    EvtLoadUnits(S2121BlueUnits)
    EvtLoadUnits(S2121RedUnits)
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
    EvtLoadUnits(S2122BlueUnits)
    EvtLoadUnits(S2122RedUnits)
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
    EvtLoadUnits(S2123BlueUnits)
    EvtLoadUnits(S2123RedUnits)
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
    EvtLoadUnits(S2124BlueUnits)
    EvtLoadUnits(S2124RedUnits)
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
    EvtBackground(BACKGROUND_026_MuspelNightForest)
    EvtTalk(MID_SCENARIO_OPENING_S2125)
    EvtClearTalk
    EvtLoadUnits(S2125BlueUnits)
    EvtLoadUnits(S2125RedUnits)
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
    EvtBackground(BACKGROUND_026_MuspelTemple)
    EvtTalk(MID_SCENARIO_OPENING_S2131)
    EvtClearTalk
    EvtLoadUnits(S2131BlueUnits)
    EvtLoadUnits(S2131RedUnits)
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
    EvtLoadUnits(S2132BlueUnits)
    EvtLoadUnits(S2132RedUnits)
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
    EvtLoadUnits(S2133BlueUnits)
    EvtLoadUnits(S2133RedUnits)
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
    EvtBackground(BACKGROUND_026_MuspelTemple)
    EvtTalk(MID_SCENARIO_OPENING_S2134)
    EvtClearTalk
    EvtLoadUnits(S2134BlueUnits)
    EvtLoadUnits(S2134RedUnits)
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
    EvtLoadUnits(S2135BlueUnits)
    EvtLoadUnits(S2135RedUnits)
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
    EvtBackground(BACKGROUND_014_GaidenCastle)
    EvtTalk(MID_SCENARIO_OPENING_S3011)
    EvtClearTalk
    EvtLoadUnits(S3011BlueUnits)
    EvtLoadUnits(S3011RedUnits)
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
    EvtLoadUnits(S3012BlueUnits)
    EvtLoadUnits(S3012RedUnits)
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
    EvtLoadUnits(S3013BlueUnits)
    EvtLoadUnits(S3013RedUnits)
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
    EvtLoadUnits(S3014BlueUnits)
    EvtLoadUnits(S3014RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_BraveHell)
    EvtTalk(MID_SCENARIO_OPENING_S3015)
    EvtClearTalk
    EvtLoadUnits(S3015BlueUnits)
    EvtLoadUnits(S3015RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_Throne_Brave)
    EvtTalk(MID_SCENARIO_OPENING_S3021)
    EvtClearTalk
    EvtLoadUnits(S3021BlueUnits)
    EvtLoadUnits(S3021RedUnits)
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
    EvtLoadUnits(S3022BlueUnits)
    EvtLoadUnits(S3022RedUnits)
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
    EvtLoadUnits(S3023BlueUnits)
    EvtLoadUnits(S3023RedUnits)
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
    EvtLoadUnits(S3024BlueUnits)
    EvtLoadUnits(S3024RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_BraveHell)
    EvtTalk(MID_SCENARIO_OPENING_S3025)
    EvtClearTalk
    EvtLoadUnits(S3025BlueUnits)
    EvtLoadUnits(S3025RedUnits)
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
    EvtBackground(BACKGROUND_001_BraveInside)
    EvtTalk(MID_SCENARIO_OPENING_S3031)
    EvtClearTalk
    EvtLoadUnits(S3031BlueUnits)
    EvtLoadUnits(S3031RedUnits)
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
    EvtLoadUnits(S3032BlueUnits)
    EvtLoadUnits(S3032RedUnits)
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
    EvtLoadUnits(S3033BlueUnits)
    EvtLoadUnits(S3033RedUnits)
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
    EvtLoadUnits(S3034BlueUnits)
    EvtLoadUnits(S3034RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_BraveHell)
    EvtTalk(MID_SCENARIO_OPENING_S3035)
    EvtClearTalk
    EvtLoadUnits(S3035BlueUnits)
    EvtLoadUnits(S3035RedUnits)
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
    EvtBackground(BACKGROUND_001_BraveInside)
    EvtTalk(MID_SCENARIO_OPENING_S3041)
    EvtClearTalk
    EvtLoadUnits(S3041BlueUnits)
    EvtLoadUnits(S3041RedUnits)
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
    EvtLoadUnits(S3042BlueUnits)
    EvtLoadUnits(S3042RedUnits)
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
    EvtLoadUnits(S3043BlueUnits)
    EvtLoadUnits(S3043RedUnits)
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
    EvtLoadUnits(S3044BlueUnits)
    EvtLoadUnits(S3044RedUnits)
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
    EvtBackground(BACKGROUND_001_BraveInside)
    EvtTalk(MID_SCENARIO_OPENING_S3045)
    EvtClearTalk
    EvtLoadUnits(S3045BlueUnits)
    EvtLoadUnits(S3045RedUnits)
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
    EvtBackground(BACKGROUND_001_BraveInside)
    EvtTalk(MID_SCENARIO_OPENING_S3051)
    EvtClearTalk
    EvtLoadUnits(S3051BlueUnits)
    EvtLoadUnits(S3051RedUnits)
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
    EvtLoadUnits(S3052BlueUnits)
    EvtLoadUnits(S3052RedUnits)
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
    EvtLoadUnits(S3053BlueUnits)
    EvtLoadUnits(S3053RedUnits)
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
    EvtLoadUnits(S3054BlueUnits)
    EvtLoadUnits(S3054RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_Chapter3_BraveInside)
    EvtTalk(MID_SCENARIO_OPENING_S3055)
    EvtClearTalk
    EvtLoadUnits(S3055BlueUnits)
    EvtLoadUnits(S3055RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_Chapter3_Hell)
    EvtTalk(MID_SCENARIO_OPENING_S3061)
    EvtClearTalk
    EvtLoadUnits(S3061BlueUnits)
    EvtLoadUnits(S3061RedUnits)
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
    EvtLoadUnits(S3062BlueUnits)
    EvtLoadUnits(S3062RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_Chapter3_Hell)
    EvtTalk(MID_SCENARIO_OPENING_S3063)
    EvtClearTalk
    EvtLoadUnits(S3063BlueUnits)
    EvtLoadUnits(S3063RedUnits)
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
    EvtLoadUnits(S3064BlueUnits)
    EvtLoadUnits(S3064RedUnits)
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
    EvtLoadUnits(S3065BlueUnits)
    EvtLoadUnits(S3065RedUnits)
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
    EvtLoadUnits(S3071BlueUnits)
    EvtLoadUnits(S3071RedUnits)
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
    EvtLoadUnits(S3072BlueUnits)
    EvtLoadUnits(S3072RedUnits)
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
    EvtLoadUnits(S3073BlueUnits)
    EvtLoadUnits(S3073RedUnits)
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
    EvtLoadUnits(S3074BlueUnits)
    EvtLoadUnits(S3074RedUnits)
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
    EvtBackground(BACKGROUND_001_BraveForest)
    EvtTalk(MID_SCENARIO_OPENING_S3075)
    EvtClearTalk
    EvtLoadUnits(S3075BlueUnits)
    EvtLoadUnits(S3075RedUnits)
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
    EvtBackground(BACKGROUND_001_BraveForest)
    EvtTalk(MID_SCENARIO_OPENING_S3081)
    EvtClearTalk
    EvtLoadUnits(S3081BlueUnits)
    EvtLoadUnits(S3081RedUnits)
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
    EvtLoadUnits(S3082BlueUnits)
    EvtLoadUnits(S3082RedUnits)
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
    EvtLoadUnits(S3083BlueUnits)
    EvtLoadUnits(S3083RedUnits)
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
    EvtLoadUnits(S3084BlueUnits)
    EvtLoadUnits(S3084RedUnits)
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
    EvtBackground(BACKGROUND_005_Castle)
    EvtTalk(MID_SCENARIO_OPENING_S3085)
    EvtClearTalk
    EvtLoadUnits(S3085BlueUnits)
    EvtLoadUnits(S3085RedUnits)
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
    EvtBackground(BACKGROUND_001_BraveForest)
    EvtTalk(MID_SCENARIO_OPENING_S3091)
    EvtClearTalk
    EvtLoadUnits(S3091BlueUnits)
    EvtLoadUnits(S3091RedUnits)
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
    EvtLoadUnits(S3092BlueUnits)
    EvtLoadUnits(S3092RedUnits)
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
    EvtLoadUnits(S3093BlueUnits)
    EvtLoadUnits(S3093RedUnits)
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
    EvtLoadUnits(S3094BlueUnits)
    EvtLoadUnits(S3094RedUnits)
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
    EvtBackground(BACKGROUND_005_Castle)
    EvtTalk(MID_SCENARIO_OPENING_S3095)
    EvtClearTalk
    EvtLoadUnits(S3095BlueUnits)
    EvtLoadUnits(S3095RedUnits)
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
    EvtBackground(BACKGROUND_005_Castle)
    EvtTalk(MID_SCENARIO_OPENING_S3101)
    EvtClearTalk
    EvtLoadUnits(S3101BlueUnits)
    EvtLoadUnits(S3101RedUnits)
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
    EvtLoadUnits(S3102BlueUnits)
    EvtLoadUnits(S3102RedUnits)
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
    EvtLoadUnits(S3103BlueUnits)
    EvtLoadUnits(S3103RedUnits)
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
    EvtLoadUnits(S3104BlueUnits)
    EvtLoadUnits(S3104RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_AngrbodaTemple)
    EvtTalk(MID_SCENARIO_OPENING_S3105)
    EvtClearTalk
    EvtLoadUnits(S3105BlueUnits)
    EvtLoadUnits(S3105RedUnits)
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
    EvtBackground(BACKGROUND_001_BraveForest)
    EvtTalk(MID_SCENARIO_OPENING_S3111)
    EvtClearTalk
    EvtLoadUnits(S3111BlueUnits)
    EvtLoadUnits(S3111RedUnits)
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
    EvtLoadUnits(S3112BlueUnits)
    EvtLoadUnits(S3112RedUnits)
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
    EvtLoadUnits(S3113BlueUnits)
    EvtLoadUnits(S3113RedUnits)
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
    EvtLoadUnits(S3114BlueUnits)
    EvtLoadUnits(S3114RedUnits)
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
    EvtBackground(BACKGROUND_001_BraveForest)
    EvtTalk(MID_SCENARIO_OPENING_S3115)
    EvtClearTalk
    EvtLoadUnits(S3115BlueUnits)
    EvtLoadUnits(S3115RedUnits)
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
    EvtBackground(BACKGROUND_001_Brave)
    EvtTalk(MID_SCENARIO_OPENING_S3121)
    EvtClearTalk
    EvtLoadUnits(S3121BlueUnits)
    EvtLoadUnits(S3121RedUnits)
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
    EvtLoadUnits(S3122BlueUnits)
    EvtLoadUnits(S3122RedUnits)
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
    EvtLoadUnits(S3123BlueUnits)
    EvtLoadUnits(S3123RedUnits)
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
    EvtLoadUnits(S3124BlueUnits)
    EvtLoadUnits(S3124RedUnits)
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
    EvtLoadUnits(S3125BlueUnits)
    EvtLoadUnits(S3125RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_Chapter3_Hell)
    EvtTalk(MID_SCENARIO_OPENING_S3131)
    EvtClearTalk
    EvtLoadUnits(S3131BlueUnits)
    EvtLoadUnits(S3131RedUnits)
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
    EvtLoadUnits(S3132BlueUnits)
    EvtLoadUnits(S3132RedUnits)
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
    EvtLoadUnits(S3133BlueUnits)
    EvtLoadUnits(S3133RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_Chapter3_Hell)
    EvtTalk(MID_SCENARIO_OPENING_S3134)
    EvtClearTalk
    EvtLoadUnits(S3134BlueUnits)
    EvtLoadUnits(S3134RedUnits)
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
    EvtLoadUnits(S3135BlueUnits)
    EvtLoadUnits(S3135RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_Throne_Brave)
    EvtTalk(MID_SCENARIO_OPENING_S4011)
    EvtClearTalk
    EvtLoadUnits(S4011BlueUnits)
    EvtLoadUnits(S4011RedUnits)
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
    EvtLoadUnits(S4012BlueUnits)
    EvtLoadUnits(S4012RedUnits)
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
    EvtLoadUnits(S4013BlueUnits)
    EvtLoadUnits(S4013RedUnits)
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
    EvtLoadUnits(S4014BlueUnits)
    EvtLoadUnits(S4014RedUnits)
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
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtTalk(MID_SCENARIO_OPENING_S4015)
    EvtClearTalk
    EvtLoadUnits(S4015BlueUnits)
    EvtLoadUnits(S4015RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_Alfheim)
    EvtTalk(MID_SCENARIO_OPENING_S4021)
    EvtClearTalk
    EvtLoadUnits(S4021BlueUnits)
    EvtLoadUnits(S4021RedUnits)
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
    EvtLoadUnits(S4022BlueUnits)
    EvtLoadUnits(S4022RedUnits)
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
    EvtLoadUnits(S4023BlueUnits)
    EvtLoadUnits(S4023RedUnits)
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
    EvtLoadUnits(S4024BlueUnits)
    EvtLoadUnits(S4024RedUnits)
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
    EvtLoadUnits(S4025BlueUnits)
    EvtLoadUnits(S4025RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_Alfheim_Throne)
    EvtTalk(MID_SCENARIO_OPENING_S4031)
    EvtClearTalk
    EvtLoadUnits(S4031BlueUnits)
    EvtLoadUnits(S4031RedUnits)
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
    EvtLoadUnits(S4032BlueUnits)
    EvtLoadUnits(S4032RedUnits)
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
    EvtLoadUnits(S4033BlueUnits)
    EvtLoadUnits(S4033RedUnits)
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
    EvtLoadUnits(S4034BlueUnits)
    EvtLoadUnits(S4034RedUnits)
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
    EvtLoadUnits(S4035BlueUnits)
    EvtLoadUnits(S4035RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_Alfheim)
    EvtTalk(MID_SCENARIO_OPENING_S4041)
    EvtClearTalk
    EvtLoadUnits(S4041BlueUnits)
    EvtLoadUnits(S4041RedUnits)
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
    EvtLoadUnits(S4042BlueUnits)
    EvtLoadUnits(S4042RedUnits)
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
    EvtLoadUnits(S4043BlueUnits)
    EvtLoadUnits(S4043RedUnits)
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
    EvtLoadUnits(S4044BlueUnits)
    EvtLoadUnits(S4044RedUnits)
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
    EvtLoadUnits(S4045BlueUnits)
    EvtLoadUnits(S4045RedUnits)
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
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtTalk(MID_SCENARIO_OPENING_S4051)
    EvtClearTalk
    EvtLoadUnits(S4051BlueUnits)
    EvtLoadUnits(S4051RedUnits)
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
    EvtLoadUnits(S4052BlueUnits)
    EvtLoadUnits(S4052RedUnits)
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
    EvtLoadUnits(S4053BlueUnits)
    EvtLoadUnits(S4053RedUnits)
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
    EvtLoadUnits(S4054BlueUnits)
    EvtLoadUnits(S4054RedUnits)
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
    EvtLoadUnits(S4055BlueUnits)
    EvtLoadUnits(S4055RedUnits)
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
    EvtBackground(BACKGROUND_001_BraveForest)
    EvtTalk(MID_SCENARIO_OPENING_S4061)
    EvtClearTalk
    EvtLoadUnits(S4061BlueUnits)
    EvtLoadUnits(S4061RedUnits)
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
    EvtLoadUnits(S4062BlueUnits)
    EvtLoadUnits(S4062RedUnits)
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
    EvtLoadUnits(S4063BlueUnits)
    EvtLoadUnits(S4063RedUnits)
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
    EvtLoadUnits(S4064BlueUnits)
    EvtLoadUnits(S4064RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_BraveHell)
    EvtTalk(MID_SCENARIO_OPENING_S4065)
    EvtClearTalk
    EvtLoadUnits(S4065BlueUnits)
    EvtLoadUnits(S4065RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_BraveHell)
    EvtTalk(MID_SCENARIO_OPENING_S4071)
    EvtClearTalk
    EvtLoadUnits(S4071BlueUnits)
    EvtLoadUnits(S4071RedUnits)
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
    EvtLoadUnits(S4072BlueUnits)
    EvtLoadUnits(S4072RedUnits)
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
    EvtLoadUnits(S4073BlueUnits)
    EvtLoadUnits(S4073RedUnits)
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
    EvtLoadUnits(S4074BlueUnits)
    EvtLoadUnits(S4074RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_BraveTwilight)
    EvtTalk(MID_SCENARIO_OPENING_S4075)
    EvtClearTalk
    EvtLoadUnits(S4075BlueUnits)
    EvtLoadUnits(S4075RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_Svartalf)
    EvtTalk(MID_SCENARIO_OPENING_S4081)
    EvtClearTalk
    EvtLoadUnits(S4081BlueUnits)
    EvtLoadUnits(S4081RedUnits)
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
    EvtLoadUnits(S4082BlueUnits)
    EvtLoadUnits(S4082RedUnits)
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
    EvtLoadUnits(S4083BlueUnits)
    EvtLoadUnits(S4083RedUnits)
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
    EvtLoadUnits(S4084BlueUnits)
    EvtLoadUnits(S4084RedUnits)
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
    EvtLoadUnits(S4085BlueUnits)
    EvtLoadUnits(S4085RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_Svartalf)
    EvtTalk(MID_SCENARIO_OPENING_S4091)
    EvtClearTalk
    EvtLoadUnits(S4091BlueUnits)
    EvtLoadUnits(S4091RedUnits)
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
    EvtLoadUnits(S4092BlueUnits)
    EvtLoadUnits(S4092RedUnits)
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
    EvtLoadUnits(S4093BlueUnits)
    EvtLoadUnits(S4093RedUnits)
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
    EvtLoadUnits(S4094BlueUnits)
    EvtLoadUnits(S4094RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_Svartalf)
    EvtTalk(MID_SCENARIO_OPENING_S4095)
    EvtClearTalk
    EvtLoadUnits(S4095BlueUnits)
    EvtLoadUnits(S4095RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_Svartalf)
    EvtTalk(MID_SCENARIO_OPENING_S4101)
    EvtClearTalk
    EvtLoadUnits(S4101BlueUnits)
    EvtLoadUnits(S4101RedUnits)
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
    EvtLoadUnits(S4102BlueUnits)
    EvtLoadUnits(S4102RedUnits)
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
    EvtLoadUnits(S4103BlueUnits)
    EvtLoadUnits(S4103RedUnits)
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
    EvtLoadUnits(S4104BlueUnits)
    EvtLoadUnits(S4104RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_Svartalf)
    EvtTalk(MID_SCENARIO_OPENING_S4105)
    EvtClearTalk
    EvtLoadUnits(S4105BlueUnits)
    EvtLoadUnits(S4105RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_BraveTwilight)
    EvtTalk(MID_SCENARIO_OPENING_S4111)
    EvtClearTalk
    EvtLoadUnits(S4111BlueUnits)
    EvtLoadUnits(S4111RedUnits)
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
    EvtLoadUnits(S4112BlueUnits)
    EvtLoadUnits(S4112RedUnits)
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
    EvtLoadUnits(S4113BlueUnits)
    EvtLoadUnits(S4113RedUnits)
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
    EvtLoadUnits(S4114BlueUnits)
    EvtLoadUnits(S4114RedUnits)
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
    EvtLoadUnits(S4115BlueUnits)
    EvtLoadUnits(S4115RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_Building)
    EvtTalk(MID_SCENARIO_OPENING_S4121)
    EvtClearTalk
    EvtLoadUnits(S4121BlueUnits)
    EvtLoadUnits(S4121RedUnits)
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
    EvtLoadUnits(S4122BlueUnits)
    EvtLoadUnits(S4122RedUnits)
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
    EvtLoadUnits(S4123BlueUnits)
    EvtLoadUnits(S4123RedUnits)
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
    EvtLoadUnits(S4124BlueUnits)
    EvtLoadUnits(S4124RedUnits)
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
    EvtBackground(BACKGROUND_001_Brave)
    EvtTalk(MID_SCENARIO_OPENING_S4125)
    EvtClearTalk
    EvtLoadUnits(S4125BlueUnits)
    EvtLoadUnits(S4125RedUnits)
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
    EvtBackground(BACKGROUND_001_Brave)
    EvtTalk(MID_SCENARIO_OPENING_S4131)
    EvtClearTalk
    EvtLoadUnits(S4131BlueUnits)
    EvtLoadUnits(S4131RedUnits)
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
    EvtLoadUnits(S4132BlueUnits)
    EvtLoadUnits(S4132RedUnits)
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
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtTalk(MID_SCENARIO_OPENING_S4133)
    EvtClearTalk
    EvtLoadUnits(S4133BlueUnits)
    EvtLoadUnits(S4133RedUnits)
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
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtTalk(MID_SCENARIO_OPENING_S4134)
    EvtClearTalk
    EvtLoadUnits(S4134BlueUnits)
    EvtLoadUnits(S4134RedUnits)
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
    EvtBackground(BACKGROUND_005_Castle)
    EvtTalk(MID_SCENARIO_OPENING_S4135)
    EvtClearTalk
    EvtLoadUnits(S4135BlueUnits)
    EvtLoadUnits(S4135RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_Opening)
    EvtTalk(MID_SCENARIO_OPENING_S5011)
    EvtClearTalk
    EvtLoadUnits(S5011BlueUnits)
    EvtLoadUnits(S5011RedUnits)
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
    EvtBackground(BACKGROUND_001_Brave)
    EvtTalk(MID_SCENARIO_OPENING_S5012)
    EvtClearTalk
    EvtLoadUnits(S5012BlueUnits)
    EvtLoadUnits(S5012RedUnits)
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
    EvtBackground(BACKGROUND_001_BraveInside)
    EvtTalk(MID_SCENARIO_OPENING_S5013)
    EvtClearTalk
    EvtLoadUnits(S5013BlueUnits)
    EvtLoadUnits(S5013RedUnits)
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
    EvtLoadUnits(S5014BlueUnits)
    EvtLoadUnits(S5014RedUnits)
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
    EvtLoadUnits(S5015BlueUnits)
    EvtLoadUnits(S5015RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_NisaverilCastle)
    EvtTalk(MID_SCENARIO_OPENING_S5021)
    EvtClearTalk
    EvtLoadUnits(S5021BlueUnits)
    EvtLoadUnits(S5021RedUnits)
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
    EvtLoadUnits(S5022BlueUnits)
    EvtLoadUnits(S5022RedUnits)
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
    EvtLoadUnits(S5023BlueUnits)
    EvtLoadUnits(S5023RedUnits)
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
    EvtLoadUnits(S5024BlueUnits)
    EvtLoadUnits(S5024RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_Nisaveril)
    EvtTalk(MID_SCENARIO_OPENING_S5025)
    EvtClearTalk
    EvtLoadUnits(S5025BlueUnits)
    EvtLoadUnits(S5025RedUnits)
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
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtTalk(MID_SCENARIO_OPENING_S5031)
    EvtClearTalk
    EvtLoadUnits(S5031BlueUnits)
    EvtLoadUnits(S5031RedUnits)
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
    EvtLoadUnits(S5032BlueUnits)
    EvtLoadUnits(S5032RedUnits)
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
    EvtLoadUnits(S5033BlueUnits)
    EvtLoadUnits(S5033RedUnits)
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
    EvtLoadUnits(S5034BlueUnits)
    EvtLoadUnits(S5034RedUnits)
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
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtTalk(MID_SCENARIO_OPENING_S5035)
    EvtClearTalk
    EvtLoadUnits(S5035BlueUnits)
    EvtLoadUnits(S5035RedUnits)
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
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtTalk(MID_SCENARIO_OPENING_S5041)
    EvtClearTalk
    EvtLoadUnits(S5041BlueUnits)
    EvtLoadUnits(S5041RedUnits)
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
    EvtLoadUnits(S5042BlueUnits)
    EvtLoadUnits(S5042RedUnits)
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
    EvtLoadUnits(S5043BlueUnits)
    EvtLoadUnits(S5043RedUnits)
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
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtTalk(MID_SCENARIO_OPENING_S5044)
    EvtClearTalk
    EvtLoadUnits(S5044BlueUnits)
    EvtLoadUnits(S5044RedUnits)
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
    EvtLoadUnits(S5045BlueUnits)
    EvtLoadUnits(S5045RedUnits)
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
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtTalk(MID_SCENARIO_OPENING_S5051)
    EvtClearTalk
    EvtLoadUnits(S5051BlueUnits)
    EvtLoadUnits(S5051RedUnits)
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
    EvtLoadUnits(S5052BlueUnits)
    EvtLoadUnits(S5052RedUnits)
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
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtTalk(MID_SCENARIO_OPENING_S5053)
    EvtClearTalk
    EvtLoadUnits(S5053BlueUnits)
    EvtLoadUnits(S5053RedUnits)
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
    EvtLoadUnits(S5054BlueUnits)
    EvtLoadUnits(S5054RedUnits)
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
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtTalk(MID_SCENARIO_OPENING_S5055)
    EvtClearTalk
    EvtLoadUnits(S5055BlueUnits)
    EvtLoadUnits(S5055RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_Nisaveril)
    EvtTalk(MID_SCENARIO_OPENING_S5061)
    EvtClearTalk
    EvtLoadUnits(S5061BlueUnits)
    EvtLoadUnits(S5061RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_Nisaveril)
    EvtTalk(MID_SCENARIO_OPENING_S5062)
    EvtClearTalk
    EvtLoadUnits(S5062BlueUnits)
    EvtLoadUnits(S5062RedUnits)
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
    EvtLoadUnits(S5063BlueUnits)
    EvtLoadUnits(S5063RedUnits)
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
    EvtLoadUnits(S5064BlueUnits)
    EvtLoadUnits(S5064RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_NisaverilSaintForest)
    EvtTalk(MID_SCENARIO_OPENING_S5065)
    EvtClearTalk
    EvtLoadUnits(S5065BlueUnits)
    EvtLoadUnits(S5065RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_NisaverilSaintForest)
    EvtTalk(MID_SCENARIO_OPENING_S5071)
    EvtClearTalk
    EvtLoadUnits(S5071BlueUnits)
    EvtLoadUnits(S5071RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_NisaverilSaintForest)
    EvtTalk(MID_SCENARIO_OPENING_S5072)
    EvtClearTalk
    EvtLoadUnits(S5072BlueUnits)
    EvtLoadUnits(S5072RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_NisaverilSaintForest)
    EvtTalk(MID_SCENARIO_OPENING_S5073)
    EvtClearTalk
    EvtLoadUnits(S5073BlueUnits)
    EvtLoadUnits(S5073RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_001_BraveGround)
    EvtTalk(MID_SCENARIO_OPENING_S5074)
    EvtClearTalk
    EvtLoadUnits(S5074BlueUnits)
    EvtLoadUnits(S5074RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_001_BraveGround)
    EvtTalk(MID_SCENARIO_OPENING_S5075)
    EvtClearTalk
    EvtLoadUnits(S5075BlueUnits)
    EvtLoadUnits(S5075RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_001_BraveGround)
    EvtTalk(MID_SCENARIO_OPENING_S5081)
    EvtClearTalk
    EvtLoadUnits(S5081BlueUnits)
    EvtLoadUnits(S5081RedUnits)
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
    EvtBackground(BACKGROUND_001_BraveInside)
    EvtTalk(MID_SCENARIO_OPENING_S5082)
    EvtClearTalk
    EvtLoadUnits(S5082BlueUnits)
    EvtLoadUnits(S5082RedUnits)
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
    EvtLoadUnits(S5083BlueUnits)
    EvtLoadUnits(S5083RedUnits)
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
    EvtLoadUnits(S5084BlueUnits)
    EvtLoadUnits(S5084RedUnits)
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
    EvtBackground(BACKGROUND_005_Castle)
    EvtTalk(MID_SCENARIO_OPENING_S5085)
    EvtClearTalk
    EvtLoadUnits(S5085BlueUnits)
    EvtLoadUnits(S5085RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_Nisaveril)
    EvtTalk(MID_SCENARIO_OPENING_S5091)
    EvtClearTalk
    EvtLoadUnits(S5091BlueUnits)
    EvtLoadUnits(S5091RedUnits)
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
    EvtLoadUnits(S5092BlueUnits)
    EvtLoadUnits(S5092RedUnits)
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
    EvtLoadUnits(S5093BlueUnits)
    EvtLoadUnits(S5093RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_NisaverilTower)
    EvtTalk(MID_SCENARIO_OPENING_S5094)
    EvtClearTalk
    EvtLoadUnits(S5094BlueUnits)
    EvtLoadUnits(S5094RedUnits)
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
    EvtLoadUnits(S5095BlueUnits)
    EvtLoadUnits(S5095RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_EmbraOutside)
    EvtTalk(MID_SCENARIO_OPENING_S5101)
    EvtClearTalk
    EvtLoadUnits(S5101BlueUnits)
    EvtLoadUnits(S5101RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_EmbraOutside)
    EvtTalk(MID_SCENARIO_OPENING_S5102)
    EvtClearTalk
    EvtLoadUnits(S5102BlueUnits)
    EvtLoadUnits(S5102RedUnits)
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
    EvtLoadUnits(S5103BlueUnits)
    EvtLoadUnits(S5103RedUnits)
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
    EvtLoadUnits(S5104BlueUnits)
    EvtLoadUnits(S5104RedUnits)
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
    EvtLoadUnits(S5105BlueUnits)
    EvtLoadUnits(S5105RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_EmbraInside)
    EvtTalk(MID_SCENARIO_OPENING_S5111)
    EvtClearTalk
    EvtLoadUnits(S5111BlueUnits)
    EvtLoadUnits(S5111RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_NisaverilOutside)
    EvtTalk(MID_SCENARIO_OPENING_S5112)
    EvtClearTalk
    EvtLoadUnits(S5112BlueUnits)
    EvtLoadUnits(S5112RedUnits)
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
    EvtLoadUnits(S5113BlueUnits)
    EvtLoadUnits(S5113RedUnits)
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
    EvtLoadUnits(S5114BlueUnits)
    EvtLoadUnits(S5114RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_NisaverilOutside)
    EvtTalk(MID_SCENARIO_OPENING_S5115)
    EvtClearTalk
    EvtLoadUnits(S5115BlueUnits)
    EvtLoadUnits(S5115RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_NisaverilCorridor)
    EvtTalk(MID_SCENARIO_OPENING_S5121)
    EvtClearTalk
    EvtLoadUnits(S5121BlueUnits)
    EvtLoadUnits(S5121RedUnits)
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
    EvtLoadUnits(S5122BlueUnits)
    EvtLoadUnits(S5122RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_NisaverilCastle)
    EvtTalk(MID_SCENARIO_OPENING_S5123)
    EvtClearTalk
    EvtLoadUnits(S5123BlueUnits)
    EvtLoadUnits(S5123RedUnits)
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
    EvtLoadUnits(S5124BlueUnits)
    EvtLoadUnits(S5124RedUnits)
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
    EvtLoadUnits(S5125BlueUnits)
    EvtLoadUnits(S5125RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_NisaverilCastle)
    EvtTalk(MID_SCENARIO_OPENING_S5131)
    EvtClearTalk
    EvtLoadUnits(S5131BlueUnits)
    EvtLoadUnits(S5131RedUnits)
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
    EvtLoadUnits(S5132BlueUnits)
    EvtLoadUnits(S5132RedUnits)
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
    EvtLoadUnits(S5133BlueUnits)
    EvtLoadUnits(S5133RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_NisaverilSaintForest)
    EvtTalk(MID_SCENARIO_OPENING_S5134)
    EvtClearTalk
    EvtLoadUnits(S5134BlueUnits)
    EvtLoadUnits(S5134RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_NisaverilShrine)
    EvtTalk(MID_SCENARIO_OPENING_S5135)
    EvtClearTalk
    EvtLoadUnits(S5135BlueUnits)
    EvtLoadUnits(S5135RedUnits)
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
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtTalk(MID_SCENARIO_OPENING_S6011)
    EvtClearTalk
    EvtLoadUnits(S6011BlueUnits)
    EvtLoadUnits(S6011RedUnits)
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
    EvtLoadUnits(S6012BlueUnits)
    EvtLoadUnits(S6012RedUnits)
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
    EvtLoadUnits(S6013BlueUnits)
    EvtLoadUnits(S6013RedUnits)
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
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtTalk(MID_SCENARIO_OPENING_S6014)
    EvtClearTalk
    EvtLoadUnits(S6014BlueUnits)
    EvtLoadUnits(S6014RedUnits)
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
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtTalk(MID_SCENARIO_OPENING_S6015)
    EvtClearTalk
    EvtLoadUnits(S6015BlueUnits)
    EvtLoadUnits(S6015RedUnits)
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
    EvtBackground(BACKGROUND_002_PlainForestInside)
    EvtTalk(MID_SCENARIO_OPENING_S6021)
    EvtClearTalk
    EvtLoadUnits(S6021BlueUnits)
    EvtLoadUnits(S6021RedUnits)
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
    EvtLoadUnits(S6022BlueUnits)
    EvtLoadUnits(S6022RedUnits)
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
    EvtLoadUnits(S6023BlueUnits)
    EvtLoadUnits(S6023RedUnits)
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
    EvtLoadUnits(S6024BlueUnits)
    EvtLoadUnits(S6024RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_EmbraOutsideForest)
    EvtTalk(MID_SCENARIO_OPENING_S6025)
    EvtClearTalk
    EvtLoadUnits(S6025BlueUnits)
    EvtLoadUnits(S6025RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_EmbraOutsideForest)
    EvtTalk(MID_SCENARIO_OPENING_S6031)
    EvtClearTalk
    EvtLoadUnits(S6031BlueUnits)
    EvtLoadUnits(S6031RedUnits)
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
    EvtLoadUnits(S6032BlueUnits)
    EvtLoadUnits(S6032RedUnits)
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
    EvtLoadUnits(S6033BlueUnits)
    EvtLoadUnits(S6033RedUnits)
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
    EvtLoadUnits(S6034BlueUnits)
    EvtLoadUnits(S6034RedUnits)
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
    EvtLoadUnits(S6035BlueUnits)
    EvtLoadUnits(S6035RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_EmbraOutsideForest)
    EvtTalk(MID_SCENARIO_OPENING_S6041)
    EvtClearTalk
    EvtLoadUnits(S6041BlueUnits)
    EvtLoadUnits(S6041RedUnits)
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
    EvtLoadUnits(S6042BlueUnits)
    EvtLoadUnits(S6042RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_EmbraMountain)
    EvtTalk(MID_SCENARIO_OPENING_S6043)
    EvtClearTalk
    EvtLoadUnits(S6043BlueUnits)
    EvtLoadUnits(S6043RedUnits)
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
    EvtLoadUnits(S6044BlueUnits)
    EvtLoadUnits(S6044RedUnits)
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
    EvtLoadUnits(S6045BlueUnits)
    EvtLoadUnits(S6045RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_EmbraOutsideForest)
    EvtTalk(MID_SCENARIO_OPENING_S6051)
    EvtClearTalk
    EvtLoadUnits(S6051BlueUnits)
    EvtLoadUnits(S6051RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_EmbraMountain)
    EvtTalk(MID_SCENARIO_OPENING_S6052)
    EvtClearTalk
    EvtLoadUnits(S6052BlueUnits)
    EvtLoadUnits(S6052RedUnits)
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
    EvtLoadUnits(S6053BlueUnits)
    EvtLoadUnits(S6053RedUnits)
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
    EvtLoadUnits(S6054BlueUnits)
    EvtLoadUnits(S6054RedUnits)
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
    EvtLoadUnits(S6055BlueUnits)
    EvtLoadUnits(S6055RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_EmbraMountain)
    EvtTalk(MID_SCENARIO_OPENING_S6061)
    EvtClearTalk
    EvtLoadUnits(S6061BlueUnits)
    EvtLoadUnits(S6061RedUnits)
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
    EvtLoadUnits(S6062BlueUnits)
    EvtLoadUnits(S6062RedUnits)
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
    EvtLoadUnits(S6063BlueUnits)
    EvtLoadUnits(S6063RedUnits)
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
    EvtLoadUnits(S6064BlueUnits)
    EvtLoadUnits(S6064RedUnits)
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
    EvtLoadUnits(S6065BlueUnits)
    EvtLoadUnits(S6065RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_EmbraOutside)
    EvtTalk(MID_SCENARIO_OPENING_S6071)
    EvtClearTalk
    EvtLoadUnits(S6071BlueUnits)
    EvtLoadUnits(S6071RedUnits)
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
    EvtLoadUnits(S6072BlueUnits)
    EvtLoadUnits(S6072RedUnits)
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
    EvtLoadUnits(S6073BlueUnits)
    EvtLoadUnits(S6073RedUnits)
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
    EvtLoadUnits(S6074BlueUnits)
    EvtLoadUnits(S6074RedUnits)
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
    EvtLoadUnits(S6075BlueUnits)
    EvtLoadUnits(S6075RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_Chapter8_EmbraDark)
    EvtTalk(MID_SCENARIO_OPENING_S6081)
    EvtClearTalk
    EvtLoadUnits(S6081BlueUnits)
    EvtLoadUnits(S6081RedUnits)
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
    EvtLoadUnits(S6082BlueUnits)
    EvtLoadUnits(S6082RedUnits)
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
    EvtLoadUnits(S6083BlueUnits)
    EvtLoadUnits(S6083RedUnits)
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
    EvtLoadUnits(S6084BlueUnits)
    EvtLoadUnits(S6084RedUnits)
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
    EvtLoadUnits(S6085BlueUnits)
    EvtLoadUnits(S6085RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_Chapter8_EmbraDark)
    EvtTalk(MID_SCENARIO_OPENING_S6091)
    EvtClearTalk
    EvtLoadUnits(S6091BlueUnits)
    EvtLoadUnits(S6091RedUnits)
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
    EvtLoadUnits(S6092BlueUnits)
    EvtLoadUnits(S6092RedUnits)
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
    EvtLoadUnits(S6093BlueUnits)
    EvtLoadUnits(S6093RedUnits)
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
    EvtLoadUnits(S6094BlueUnits)
    EvtLoadUnits(S6094RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_Chapter8_EmbraDark)
    EvtTalk(MID_SCENARIO_OPENING_S6095)
    EvtClearTalk
    EvtLoadUnits(S6095BlueUnits)
    EvtLoadUnits(S6095RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_AskAnother)
    EvtTalk(MID_SCENARIO_OPENING_S6101)
    EvtClearTalk
    EvtLoadUnits(S6101BlueUnits)
    EvtLoadUnits(S6101RedUnits)
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
    EvtLoadUnits(S6102BlueUnits)
    EvtLoadUnits(S6102RedUnits)
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
    EvtLoadUnits(S6103BlueUnits)
    EvtLoadUnits(S6103RedUnits)
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
    EvtLoadUnits(S6104BlueUnits)
    EvtLoadUnits(S6104RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_YggdrasillAsk)
    EvtTalk(MID_SCENARIO_OPENING_S6105)
    EvtClearTalk
    EvtLoadUnits(S6105BlueUnits)
    EvtLoadUnits(S6105RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_EmbraDarkOutside2)
    EvtTalk(MID_SCENARIO_OPENING_S6111)
    EvtClearTalk
    EvtLoadUnits(S6111BlueUnits)
    EvtLoadUnits(S6111RedUnits)
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
    EvtLoadUnits(S6112BlueUnits)
    EvtLoadUnits(S6112RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_EmbraDarkOutside2)
    EvtTalk(MID_SCENARIO_OPENING_S6113)
    EvtClearTalk
    EvtLoadUnits(S6113BlueUnits)
    EvtLoadUnits(S6113RedUnits)
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
    EvtLoadUnits(S6114BlueUnits)
    EvtLoadUnits(S6114RedUnits)
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
    EvtLoadUnits(S6115BlueUnits)
    EvtLoadUnits(S6115RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_EmbraDarkOutside2)
    EvtTalk(MID_SCENARIO_OPENING_S6121)
    EvtClearTalk
    EvtLoadUnits(S6121BlueUnits)
    EvtLoadUnits(S6121RedUnits)
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
    EvtLoadUnits(S6122BlueUnits)
    EvtLoadUnits(S6122RedUnits)
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
    EvtLoadUnits(S6123BlueUnits)
    EvtLoadUnits(S6123RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_EmbraDarkOutside2)
    EvtTalk(MID_SCENARIO_OPENING_S6124)
    EvtClearTalk
    EvtLoadUnits(S6124BlueUnits)
    EvtLoadUnits(S6124RedUnits)
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
    EvtLoadUnits(S6125BlueUnits)
    EvtLoadUnits(S6125RedUnits)
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
    EvtBackground(BACKGROUND_BG_Blank_White)
    EvtTalk(MID_SCENARIO_OPENING_S6131)
    EvtClearTalk
    EvtLoadUnits(S6131BlueUnits)
    EvtLoadUnits(S6131RedUnits)
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
    EvtBackground(BACKGROUND_BG_Blank_White)
    EvtTalk(MID_SCENARIO_OPENING_S6132)
    EvtClearTalk
    EvtLoadUnits(S6132BlueUnits)
    EvtLoadUnits(S6132RedUnits)
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
    EvtBackground(BACKGROUND_BG_Blank_White)
    EvtTalk(MID_SCENARIO_OPENING_S6133)
    EvtClearTalk
    EvtLoadUnits(S6133BlueUnits)
    EvtLoadUnits(S6133RedUnits)
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
    EvtBackground(BACKGROUND_BG_Blank_White)
    EvtTalk(MID_SCENARIO_OPENING_S6134)
    EvtClearTalk
    EvtLoadUnits(S6134BlueUnits)
    EvtLoadUnits(S6134RedUnits)
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
    EvtBackground(BACKGROUND_BG_Blank_White)
    EvtTalk(MID_SCENARIO_OPENING_S6135)
    EvtClearTalk
    EvtLoadUnits(S6135BlueUnits)
    EvtLoadUnits(S6135RedUnits)
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
    EvtBackground(BACKGROUND_EvBG_OP_00_v0700a)
    EvtTalk(MID_SCENARIO_OPENING_S7011)
    EvtClearTalk
    EvtLoadUnits(S7011BlueUnits)
    EvtLoadUnits(S7011RedUnits)
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
    EvtLoadUnits(S7012BlueUnits)
    EvtLoadUnits(S7012RedUnits)
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
    EvtLoadUnits(S7013BlueUnits)
    EvtLoadUnits(S7013RedUnits)
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
    EvtLoadUnits(S7014BlueUnits)
    EvtLoadUnits(S7014RedUnits)
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
    EvtLoadUnits(S7015BlueUnits)
    EvtLoadUnits(S7015RedUnits)
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
    EvtBackground(BACKGROUND_001_BraveInside)
    EvtTalk(MID_SCENARIO_OPENING_S7021)
    EvtClearTalk
    EvtLoadUnits(S7021BlueUnits)
    EvtLoadUnits(S7021RedUnits)
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
    EvtLoadUnits(S7022BlueUnits)
    EvtLoadUnits(S7022RedUnits)
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
    EvtLoadUnits(S7023BlueUnits)
    EvtLoadUnits(S7023RedUnits)
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
    EvtLoadUnits(S7024BlueUnits)
    EvtLoadUnits(S7024RedUnits)
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
    EvtLoadUnits(S7025BlueUnits)
    EvtLoadUnits(S7025RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_VanaThrone)
    EvtTalk(MID_SCENARIO_OPENING_S7031)
    EvtClearTalk
    EvtLoadUnits(S7031BlueUnits)
    EvtLoadUnits(S7031RedUnits)
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
    EvtLoadUnits(S7032BlueUnits)
    EvtLoadUnits(S7032RedUnits)
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
    EvtLoadUnits(S7033BlueUnits)
    EvtLoadUnits(S7033RedUnits)
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
    EvtLoadUnits(S7034BlueUnits)
    EvtLoadUnits(S7034RedUnits)
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
    EvtLoadUnits(S7035BlueUnits)
    EvtLoadUnits(S7035RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_VanaThrone)
    EvtTalk(MID_SCENARIO_OPENING_S7041)
    EvtClearTalk
    EvtLoadUnits(S7041BlueUnits)
    EvtLoadUnits(S7041RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_EarthTempleEntrance)
    EvtTalk(MID_SCENARIO_OPENING_S7042)
    EvtClearTalk
    EvtLoadUnits(S7042BlueUnits)
    EvtLoadUnits(S7042RedUnits)
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
    EvtBackground(BACKGROUND_044_EarthTemple)
    EvtTalk(MID_SCENARIO_OPENING_S7043)
    EvtClearTalk
    EvtLoadUnits(S7043BlueUnits)
    EvtLoadUnits(S7043RedUnits)
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
    EvtLoadUnits(S7044BlueUnits)
    EvtLoadUnits(S7044RedUnits)
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
    EvtLoadUnits(S7045BlueUnits)
    EvtLoadUnits(S7045RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_VanaThrone)
    EvtTalk(MID_SCENARIO_OPENING_S7051)
    EvtClearTalk
    EvtLoadUnits(S7051BlueUnits)
    EvtLoadUnits(S7051RedUnits)
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
    EvtLoadUnits(S7052BlueUnits)
    EvtLoadUnits(S7052RedUnits)
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
    EvtLoadUnits(S7053BlueUnits)
    EvtLoadUnits(S7053RedUnits)
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
    EvtLoadUnits(S7054BlueUnits)
    EvtLoadUnits(S7054RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_LightTemple)
    EvtTalk(MID_SCENARIO_OPENING_S7055)
    EvtClearTalk
    EvtLoadUnits(S7055BlueUnits)
    EvtLoadUnits(S7055RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_LightTemplePast)
    EvtTalk(MID_SCENARIO_OPENING_S7061)
    EvtClearTalk
    EvtLoadUnits(S7061BlueUnits)
    EvtLoadUnits(S7061RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_VanaCave)
    EvtTalk(MID_SCENARIO_OPENING_S7062)
    EvtClearTalk
    EvtLoadUnits(S7062BlueUnits)
    EvtLoadUnits(S7062RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_VanaCave)
    EvtTalk(MID_SCENARIO_OPENING_S7063)
    EvtClearTalk
    EvtLoadUnits(S7063BlueUnits)
    EvtLoadUnits(S7063RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_VanaCave)
    EvtTalk(MID_SCENARIO_OPENING_S7064)
    EvtClearTalk
    EvtLoadUnits(S7064BlueUnits)
    EvtLoadUnits(S7064RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_VanaPastAroundCave)
    EvtTalk(MID_SCENARIO_OPENING_S7065)
    EvtClearTalk
    EvtLoadUnits(S7065BlueUnits)
    EvtLoadUnits(S7065RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_VanaPastAroundCave)
    EvtTalk(MID_SCENARIO_OPENING_S7071)
    EvtClearTalk
    EvtLoadUnits(S7071BlueUnits)
    EvtLoadUnits(S7071RedUnits)
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
    EvtLoadUnits(S7072BlueUnits)
    EvtLoadUnits(S7072RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_VanaThronePast)
    EvtTalk(MID_SCENARIO_OPENING_S7073)
    EvtClearTalk
    EvtLoadUnits(S7073BlueUnits)
    EvtLoadUnits(S7073RedUnits)
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
    EvtLoadUnits(S7074BlueUnits)
    EvtLoadUnits(S7074RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_VanaThronePast)
    EvtTalk(MID_SCENARIO_OPENING_S7075)
    EvtClearTalk
    EvtLoadUnits(S7075BlueUnits)
    EvtLoadUnits(S7075RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_GullveigCastleInside)
    EvtTalk(MID_SCENARIO_OPENING_S7081)
    EvtClearTalk
    EvtLoadUnits(S7081BlueUnits)
    EvtLoadUnits(S7081RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_GullveigCastleInside)
    EvtTalk(MID_SCENARIO_OPENING_S7082)
    EvtClearTalk
    EvtLoadUnits(S7082BlueUnits)
    EvtLoadUnits(S7082RedUnits)
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
    EvtLoadUnits(S7083BlueUnits)
    EvtLoadUnits(S7083RedUnits)
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
    EvtLoadUnits(S7084BlueUnits)
    EvtLoadUnits(S7084RedUnits)
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
    EvtLoadUnits(S7085BlueUnits)
    EvtLoadUnits(S7085RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_GoldenThreadUpperRiverPast)
    EvtTalk(MID_SCENARIO_OPENING_S7091)
    EvtClearTalk
    EvtLoadUnits(S7091BlueUnits)
    EvtLoadUnits(S7091RedUnits)
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
    EvtLoadUnits(S7092BlueUnits)
    EvtLoadUnits(S7092RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_VanaNight)
    EvtTalk(MID_SCENARIO_OPENING_S7093)
    EvtClearTalk
    EvtLoadUnits(S7093BlueUnits)
    EvtLoadUnits(S7093RedUnits)
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
    EvtLoadUnits(S7094BlueUnits)
    EvtLoadUnits(S7094RedUnits)
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
    EvtLoadUnits(S7095BlueUnits)
    EvtLoadUnits(S7095RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_VanaFade)
    EvtTalk(MID_SCENARIO_OPENING_S7101)
    EvtClearTalk
    EvtLoadUnits(S7101BlueUnits)
    EvtLoadUnits(S7101RedUnits)
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
    EvtLoadUnits(S7102BlueUnits)
    EvtLoadUnits(S7102RedUnits)
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
    EvtLoadUnits(S7103BlueUnits)
    EvtLoadUnits(S7103RedUnits)
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
    EvtLoadUnits(S7104BlueUnits)
    EvtLoadUnits(S7104RedUnits)
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
    EvtLoadUnits(S7105BlueUnits)
    EvtLoadUnits(S7105RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_VanaFade)
    EvtTalk(MID_SCENARIO_OPENING_S7111)
    EvtClearTalk
    EvtLoadUnits(S7111BlueUnits)
    EvtLoadUnits(S7111RedUnits)
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
    EvtLoadUnits(S7112BlueUnits)
    EvtLoadUnits(S7112RedUnits)
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
    EvtBackground(BACKGROUND_EvBg_VanaFade)
    EvtTalk(MID_SCENARIO_OPENING_S7113)
    EvtClearTalk
    EvtLoadUnits(S7113BlueUnits)
    EvtLoadUnits(S7113RedUnits)
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
    EvtLoadUnits(S7114BlueUnits)
    EvtLoadUnits(S7114RedUnits)
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
    EvtLoadUnits(S7115BlueUnits)
    EvtLoadUnits(S7115RedUnits)
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

