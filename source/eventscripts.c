
#include "unit.h"
#include "blueunitdefs.h"
#include "redunitdefs.h"
#include "event.h"
#include "eventinfo.h"
#include "eventscript.h"
#include "faction.h"

const EventScr EventScr_LoadUnits_S0001[] = {
    EvtLoadUnits(S0001BlueUnits)
    EvtLoadUnits(S0001RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0001_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0001, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0002[] = {
    EvtLoadUnits(S0002BlueUnits)
    EvtLoadUnits(S0002RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0002_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0002, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0101[] = {
    EvtLoadUnits(S0101BlueUnits)
    EvtLoadUnits(S0101RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0101_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0101, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0102[] = {
    EvtLoadUnits(S0102BlueUnits)
    EvtLoadUnits(S0102RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0102_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0102, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0103[] = {
    EvtLoadUnits(S0103BlueUnits)
    EvtLoadUnits(S0103RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0103_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0103, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0201[] = {
    EvtLoadUnits(S0201BlueUnits)
    EvtLoadUnits(S0201RedUnits)
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

const EventListScr EventListScr_S0204_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0204, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0205[] = {
    EvtLoadUnits(S0205BlueUnits)
    EvtLoadUnits(S0205RedUnits)
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

const EventListScr EventListScr_S0304_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0304, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0305[] = {
    EvtLoadUnits(S0305BlueUnits)
    EvtLoadUnits(S0305RedUnits)
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

const EventListScr EventListScr_S0404_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0404, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0405[] = {
    EvtLoadUnits(S0405BlueUnits)
    EvtLoadUnits(S0405RedUnits)
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

const EventListScr EventListScr_S0504_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0504, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0505[] = {
    EvtLoadUnits(S0505BlueUnits)
    EvtLoadUnits(S0505RedUnits)
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

const EventListScr EventListScr_S0604_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0604, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0605[] = {
    EvtLoadUnits(S0605BlueUnits)
    EvtLoadUnits(S0605RedUnits)
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

const EventListScr EventListScr_S0704_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0704, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0705[] = {
    EvtLoadUnits(S0705BlueUnits)
    EvtLoadUnits(S0705RedUnits)
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

const EventListScr EventListScr_S0804_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0804, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0805[] = {
    EvtLoadUnits(S0805BlueUnits)
    EvtLoadUnits(S0805RedUnits)
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

const EventListScr EventListScr_S0904_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0904, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S0905[] = {
    EvtLoadUnits(S0905BlueUnits)
    EvtLoadUnits(S0905RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S0905_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S0905, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1001[] = {
    EvtLoadUnits(S1001BlueUnits)
    EvtLoadUnits(S1001RedUnits)
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

const EventListScr EventListScr_S1003_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1003, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1004[] = {
    EvtLoadUnits(S1004BlueUnits)
    EvtLoadUnits(S1004RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S1005_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1005, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1101[] = {
    EvtLoadUnits(S1101BlueUnits)
    EvtLoadUnits(S1101RedUnits)
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

const EventListScr EventListScr_S1101_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1101, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S1101RedUnits_Turn_3_5, 1, 3, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S1101RedUnits_Turn_3_5, 3, 5, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1102[] = {
    EvtLoadUnits(S1102BlueUnits)
    EvtLoadUnits(S1102RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S1103RedUnits_Turn_4_6[] = {
    EvtLoadUnits(S1103RedUnits_Turn_4_6)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S1103_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1103, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S1103RedUnits_Turn_4_6, 4, 6, FACTION_RED)
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

const EventListScr EventListScr_S1104_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1104, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S1104RedUnits_Turn_6_6, 1, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S1104RedUnits_Turn_6_6, 4, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S1104RedUnits_Turn_6_6, 4, 5, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S1104RedUnits_Turn_6_6, 6, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1105[] = {
    EvtLoadUnits(S1105BlueUnits)
    EvtLoadUnits(S1105RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S1105_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1105, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1201[] = {
    EvtLoadUnits(S1201BlueUnits)
    EvtLoadUnits(S1201RedUnits)
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

const EventListScr EventListScr_S1202_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1202, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1203[] = {
    EvtLoadUnits(S1203BlueUnits)
    EvtLoadUnits(S1203RedUnits)
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

const EventListScr EventListScr_S1203_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1203, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S1203RedUnits_Turn_4_4, 2, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S1203RedUnits_Turn_4_4, 3, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S1203RedUnits_Turn_4_4, 4, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1204[] = {
    EvtLoadUnits(S1204BlueUnits)
    EvtLoadUnits(S1204RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S1205_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1205, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1301[] = {
    EvtLoadUnits(S1301BlueUnits)
    EvtLoadUnits(S1301RedUnits)
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

const EventListScr EventListScr_S1302_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1302, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1303[] = {
    EvtLoadUnits(S1303BlueUnits)
    EvtLoadUnits(S1303RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S1303_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1303, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1304[] = {
    EvtLoadUnits(S1304BlueUnits)
    EvtLoadUnits(S1304RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S1304_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1304, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1305[] = {
    EvtLoadUnits(S1305BlueUnits)
    EvtLoadUnits(S1305RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S1305_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1305, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1401[] = {
    EvtLoadUnits(S1401BlueUnits)
    EvtLoadUnits(S1401RedUnits)
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

const EventListScr EventListScr_S1402_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1402, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1403[] = {
    EvtLoadUnits(S1403BlueUnits)
    EvtLoadUnits(S1403RedUnits)
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

const EventListScr EventListScr_S1403_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1403, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S1403RedUnits_Turn_6_6, 2, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S1403RedUnits_Turn_6_6, 3, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S1403RedUnits_Turn_6_6, 4, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S1403RedUnits_Turn_6_6, 5, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S1403RedUnits_Turn_6_6, 6, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1404[] = {
    EvtLoadUnits(S1404BlueUnits)
    EvtLoadUnits(S1404RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S1405_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1405, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1501[] = {
    EvtLoadUnits(S1501BlueUnits)
    EvtLoadUnits(S1501RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S1501_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1501, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S1601[] = {
    EvtLoadUnits(S1601BlueUnits)
    EvtLoadUnits(S1601RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S1601_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S1601, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2011[] = {
    EvtLoadUnits(S2011BlueUnits)
    EvtLoadUnits(S2011RedUnits)
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

const EventListScr EventListScr_S2014_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2014, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2015[] = {
    EvtLoadUnits(S2015BlueUnits)
    EvtLoadUnits(S2015RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2015_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2015, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2021[] = {
    EvtLoadUnits(S2021BlueUnits)
    EvtLoadUnits(S2021RedUnits)
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

const EventListScr EventListScr_S2024_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2024, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2025[] = {
    EvtLoadUnits(S2025BlueUnits)
    EvtLoadUnits(S2025RedUnits)
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

const EventListScr EventListScr_S2025_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2025, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S2025RedUnits_Turn_4_4, 2, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S2025RedUnits_Turn_4_4, 3, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S2025RedUnits_Turn_4_4, 4, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2031[] = {
    EvtLoadUnits(S2031BlueUnits)
    EvtLoadUnits(S2031RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2035_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2035, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2041[] = {
    EvtLoadUnits(S2041BlueUnits)
    EvtLoadUnits(S2041RedUnits)
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

const EventListScr EventListScr_S2045_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2045, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S2045RedUnits_Turn_4_4, 2, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S2045RedUnits_Turn_4_4, 3, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S2045RedUnits_Turn_4_4, 4, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2051[] = {
    EvtLoadUnits(S2051BlueUnits)
    EvtLoadUnits(S2051RedUnits)
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

const EventListScr EventListScr_S2052_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2052, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S2052RedUnits_Turn_5_5, 2, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S2052RedUnits_Turn_5_5, 3, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S2052RedUnits_Turn_5_5, 4, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S2052RedUnits_Turn_5_5, 5, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2053[] = {
    EvtLoadUnits(S2053BlueUnits)
    EvtLoadUnits(S2053RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2053_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2053, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2054[] = {
    EvtLoadUnits(S2054BlueUnits)
    EvtLoadUnits(S2054RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2055_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2055, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2061[] = {
    EvtLoadUnits(S2061BlueUnits)
    EvtLoadUnits(S2061RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2064_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2064, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2065[] = {
    EvtLoadUnits(S2065BlueUnits)
    EvtLoadUnits(S2065RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2065_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2065, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2071[] = {
    EvtLoadUnits(S2071BlueUnits)
    EvtLoadUnits(S2071RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2074_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2074, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2075[] = {
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

const EventListScr EventListScr_S2075_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2075, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S2075RedUnits_Turn_5_5, 2, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S2075RedUnits_Turn_5_5, 3, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S2075RedUnits_Turn_5_5, 4, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S2075RedUnits_Turn_5_5, 5, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2081[] = {
    EvtLoadUnits(S2081BlueUnits)
    EvtLoadUnits(S2081RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2085_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2085, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2091[] = {
    EvtLoadUnits(S2091BlueUnits)
    EvtLoadUnits(S2091RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2094_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2094, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2095[] = {
    EvtLoadUnits(S2095BlueUnits)
    EvtLoadUnits(S2095RedUnits)
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

const EventListScr EventListScr_S2095_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2095, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S2095RedUnits_Turn_4_4, 2, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S2095RedUnits_Turn_4_4, 3, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S2095RedUnits_Turn_4_4, 4, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2101[] = {
    EvtLoadUnits(S2101BlueUnits)
    EvtLoadUnits(S2101RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S2105RedUnits_Turn_1_1[] = {
    EvtLoadUnits(S2105RedUnits_Turn_1_1)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2105_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2105, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S2105RedUnits_Turn_1_1, 1, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2111[] = {
    EvtLoadUnits(S2111BlueUnits)
    EvtLoadUnits(S2111RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2111_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2111, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2112[] = {
    EvtLoadUnits(S2112BlueUnits)
    EvtLoadUnits(S2112RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2114_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2114, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2115[] = {
    EvtLoadUnits(S2115BlueUnits)
    EvtLoadUnits(S2115RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2115_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2115, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2121[] = {
    EvtLoadUnits(S2121BlueUnits)
    EvtLoadUnits(S2121RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2124_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2124, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2125[] = {
    EvtLoadUnits(S2125BlueUnits)
    EvtLoadUnits(S2125RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S2125RedUnits_Turn_1_1[] = {
    EvtLoadUnits(S2125RedUnits_Turn_1_1)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2125_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2125, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S2125RedUnits_Turn_1_1, 1, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2131[] = {
    EvtLoadUnits(S2131BlueUnits)
    EvtLoadUnits(S2131RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S2133_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2133, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S2134[] = {
    EvtLoadUnits(S2134BlueUnits)
    EvtLoadUnits(S2134RedUnits)
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

const EventListScr EventListScr_S2135_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S2135, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S2135RedUnits_Turn_3_3, 2, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S2135RedUnits_Turn_3_3, 3, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3011[] = {
    EvtLoadUnits(S3011BlueUnits)
    EvtLoadUnits(S3011RedUnits)
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

const EventListScr EventListScr_S3012_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3012, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3013[] = {
    EvtLoadUnits(S3013BlueUnits)
    EvtLoadUnits(S3013RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3014_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3014, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3015[] = {
    EvtLoadUnits(S3015BlueUnits)
    EvtLoadUnits(S3015RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3015_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3015, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3021[] = {
    EvtLoadUnits(S3021BlueUnits)
    EvtLoadUnits(S3021RedUnits)
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

const EventListScr EventListScr_S3024_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3024, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3025[] = {
    EvtLoadUnits(S3025BlueUnits)
    EvtLoadUnits(S3025RedUnits)
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

const EventListScr EventListScr_S3025_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3025, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S3025RedUnits_Turn_4_4, 2, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S3025RedUnits_Turn_4_4, 3, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S3025RedUnits_Turn_4_4, 4, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3031[] = {
    EvtLoadUnits(S3031BlueUnits)
    EvtLoadUnits(S3031RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3034_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3034, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3035[] = {
    EvtLoadUnits(S3035BlueUnits)
    EvtLoadUnits(S3035RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3035_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3035, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3041[] = {
    EvtLoadUnits(S3041BlueUnits)
    EvtLoadUnits(S3041RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3044_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3044, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3045[] = {
    EvtLoadUnits(S3045BlueUnits)
    EvtLoadUnits(S3045RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3045_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3045, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3051[] = {
    EvtLoadUnits(S3051BlueUnits)
    EvtLoadUnits(S3051RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3054_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3054, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3055[] = {
    EvtLoadUnits(S3055BlueUnits)
    EvtLoadUnits(S3055RedUnits)
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

const EventListScr EventListScr_S3055_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3055, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S3055RedUnits_Turn_3_3, 2, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S3055RedUnits_Turn_3_3, 3, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3061[] = {
    EvtLoadUnits(S3061BlueUnits)
    EvtLoadUnits(S3061RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3062_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3062, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3063[] = {
    EvtLoadUnits(S3063BlueUnits)
    EvtLoadUnits(S3063RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3074_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3074, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3075[] = {
    EvtLoadUnits(S3075BlueUnits)
    EvtLoadUnits(S3075RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3075_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3075, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3081[] = {
    EvtLoadUnits(S3081BlueUnits)
    EvtLoadUnits(S3081RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3084_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3084, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3085[] = {
    EvtLoadUnits(S3085BlueUnits)
    EvtLoadUnits(S3085RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3085_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3085, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3091[] = {
    EvtLoadUnits(S3091BlueUnits)
    EvtLoadUnits(S3091RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3094_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3094, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3095[] = {
    EvtLoadUnits(S3095BlueUnits)
    EvtLoadUnits(S3095RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3095_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3095, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3101[] = {
    EvtLoadUnits(S3101BlueUnits)
    EvtLoadUnits(S3101RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3104_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3104, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3105[] = {
    EvtLoadUnits(S3105BlueUnits)
    EvtLoadUnits(S3105RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S3105RedUnits_Turn_2_2[] = {
    EvtLoadUnits(S3105RedUnits_Turn_2_2)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3105_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3105, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S3105RedUnits_Turn_2_2, 2, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3111[] = {
    EvtLoadUnits(S3111BlueUnits)
    EvtLoadUnits(S3111RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3114_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3114, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3115[] = {
    EvtLoadUnits(S3115BlueUnits)
    EvtLoadUnits(S3115RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3115_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3115, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3121[] = {
    EvtLoadUnits(S3121BlueUnits)
    EvtLoadUnits(S3121RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S3125RedUnits_Turn_2_2[] = {
    EvtLoadUnits(S3125RedUnits_Turn_2_2)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3125_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3125, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S3125RedUnits_Turn_2_2, 2, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3131[] = {
    EvtLoadUnits(S3131BlueUnits)
    EvtLoadUnits(S3131RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S3133_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3133, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S3134[] = {
    EvtLoadUnits(S3134BlueUnits)
    EvtLoadUnits(S3134RedUnits)
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

const EventListScr EventListScr_S3135_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S3135, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S3135RedUnits_Turn_3_3, 2, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S3135RedUnits_Turn_3_3, 3, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4011[] = {
    EvtLoadUnits(S4011BlueUnits)
    EvtLoadUnits(S4011RedUnits)
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

const EventListScr EventListScr_S4014_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4014, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4015[] = {
    EvtLoadUnits(S4015BlueUnits)
    EvtLoadUnits(S4015RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4015_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4015, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4021[] = {
    EvtLoadUnits(S4021BlueUnits)
    EvtLoadUnits(S4021RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4025_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4025, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4031[] = {
    EvtLoadUnits(S4031BlueUnits)
    EvtLoadUnits(S4031RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4035_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4035, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4041[] = {
    EvtLoadUnits(S4041BlueUnits)
    EvtLoadUnits(S4041RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4045_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4045, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4051[] = {
    EvtLoadUnits(S4051BlueUnits)
    EvtLoadUnits(S4051RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4055_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4055, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4061[] = {
    EvtLoadUnits(S4061BlueUnits)
    EvtLoadUnits(S4061RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4064_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4064, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4065[] = {
    EvtLoadUnits(S4065BlueUnits)
    EvtLoadUnits(S4065RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4065_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4065, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4071[] = {
    EvtLoadUnits(S4071BlueUnits)
    EvtLoadUnits(S4071RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4074_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4074, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4075[] = {
    EvtLoadUnits(S4075BlueUnits)
    EvtLoadUnits(S4075RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4075_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4075, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4081[] = {
    EvtLoadUnits(S4081BlueUnits)
    EvtLoadUnits(S4081RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4085_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4085, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4091[] = {
    EvtLoadUnits(S4091BlueUnits)
    EvtLoadUnits(S4091RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4094_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4094, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4095[] = {
    EvtLoadUnits(S4095BlueUnits)
    EvtLoadUnits(S4095RedUnits)
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

const EventListScr EventListScr_S4095_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4095, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S4095RedUnits_Turn_4_4, 1, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S4095RedUnits_Turn_4_4, 2, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S4095RedUnits_Turn_4_4, 3, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S4095RedUnits_Turn_4_4, 4, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4101[] = {
    EvtLoadUnits(S4101BlueUnits)
    EvtLoadUnits(S4101RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4104_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4104, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4105[] = {
    EvtLoadUnits(S4105BlueUnits)
    EvtLoadUnits(S4105RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4105_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4105, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4111[] = {
    EvtLoadUnits(S4111BlueUnits)
    EvtLoadUnits(S4111RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4115_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4115, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4121[] = {
    EvtLoadUnits(S4121BlueUnits)
    EvtLoadUnits(S4121RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4124_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4124, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4125[] = {
    EvtLoadUnits(S4125BlueUnits)
    EvtLoadUnits(S4125RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4125_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4125, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4131[] = {
    EvtLoadUnits(S4131BlueUnits)
    EvtLoadUnits(S4131RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4132_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4132, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4133[] = {
    EvtLoadUnits(S4133BlueUnits)
    EvtLoadUnits(S4133RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4133_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4133, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4134[] = {
    EvtLoadUnits(S4134BlueUnits)
    EvtLoadUnits(S4134RedUnits)
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

const EventListScr EventListScr_S4134_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4134, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S4134RedUnits_Turn_3_3, 2, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S4134RedUnits_Turn_3_3, 3, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S4135[] = {
    EvtLoadUnits(S4135BlueUnits)
    EvtLoadUnits(S4135RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S4135_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S4135, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5011[] = {
    EvtLoadUnits(S5011BlueUnits)
    EvtLoadUnits(S5011RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5011_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5011, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5012[] = {
    EvtLoadUnits(S5012BlueUnits)
    EvtLoadUnits(S5012RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5012_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5012, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5013[] = {
    EvtLoadUnits(S5013BlueUnits)
    EvtLoadUnits(S5013RedUnits)
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

const EventListScr EventListScr_S5014_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5014, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5015[] = {
    EvtLoadUnits(S5015BlueUnits)
    EvtLoadUnits(S5015RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5015_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5015, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5021[] = {
    EvtLoadUnits(S5021BlueUnits)
    EvtLoadUnits(S5021RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5024_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5024, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5025[] = {
    EvtLoadUnits(S5025BlueUnits)
    EvtLoadUnits(S5025RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5025_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5025, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5031[] = {
    EvtLoadUnits(S5031BlueUnits)
    EvtLoadUnits(S5031RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5034_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5034, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5035[] = {
    EvtLoadUnits(S5035BlueUnits)
    EvtLoadUnits(S5035RedUnits)
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

const EventListScr EventListScr_S5035_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5035, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S5035RedUnits_Turn_4_4, 2, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S5035RedUnits_Turn_4_4, 3, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S5035RedUnits_Turn_4_4, 4, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5041[] = {
    EvtLoadUnits(S5041BlueUnits)
    EvtLoadUnits(S5041RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5043_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5043, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5044[] = {
    EvtLoadUnits(S5044BlueUnits)
    EvtLoadUnits(S5044RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5045_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5045, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5051[] = {
    EvtLoadUnits(S5051BlueUnits)
    EvtLoadUnits(S5051RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5052_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5052, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5053[] = {
    EvtLoadUnits(S5053BlueUnits)
    EvtLoadUnits(S5053RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5054_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5054, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5055[] = {
    EvtLoadUnits(S5055BlueUnits)
    EvtLoadUnits(S5055RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5055_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5055, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5061[] = {
    EvtLoadUnits(S5061BlueUnits)
    EvtLoadUnits(S5061RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5061_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5061, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5062[] = {
    EvtLoadUnits(S5062BlueUnits)
    EvtLoadUnits(S5062RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5064_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5064, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5065[] = {
    EvtLoadUnits(S5065BlueUnits)
    EvtLoadUnits(S5065RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5065_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5065, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5071[] = {
    EvtLoadUnits(S5071BlueUnits)
    EvtLoadUnits(S5071RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5071_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5071, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5072[] = {
    EvtLoadUnits(S5072BlueUnits)
    EvtLoadUnits(S5072RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5072_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5072, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5073[] = {
    EvtLoadUnits(S5073BlueUnits)
    EvtLoadUnits(S5073RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5073_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5073, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5074[] = {
    EvtLoadUnits(S5074BlueUnits)
    EvtLoadUnits(S5074RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5074_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5074, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5075[] = {
    EvtLoadUnits(S5075BlueUnits)
    EvtLoadUnits(S5075RedUnits)
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

const EventListScr EventListScr_S5075_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5075, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S5075RedUnits_Turn_3_3, 2, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S5075RedUnits_Turn_3_3, 3, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5081[] = {
    EvtLoadUnits(S5081BlueUnits)
    EvtLoadUnits(S5081RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5081_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5081, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5082[] = {
    EvtLoadUnits(S5082BlueUnits)
    EvtLoadUnits(S5082RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5084_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5084, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5085[] = {
    EvtLoadUnits(S5085BlueUnits)
    EvtLoadUnits(S5085RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5085_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5085, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5091[] = {
    EvtLoadUnits(S5091BlueUnits)
    EvtLoadUnits(S5091RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5093_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5093, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5094[] = {
    EvtLoadUnits(S5094BlueUnits)
    EvtLoadUnits(S5094RedUnits)
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

const EventListScr EventListScr_S5095_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5095, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S5095RedUnits_Turn_2_2, 2, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S5095RedUnits_Turn_2_2, 3, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5101[] = {
    EvtLoadUnits(S5101BlueUnits)
    EvtLoadUnits(S5101RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5101_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5101, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5102[] = {
    EvtLoadUnits(S5102BlueUnits)
    EvtLoadUnits(S5102RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5105_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5105, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5111[] = {
    EvtLoadUnits(S5111BlueUnits)
    EvtLoadUnits(S5111RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5111_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5111, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5112[] = {
    EvtLoadUnits(S5112BlueUnits)
    EvtLoadUnits(S5112RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5114_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5114, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5115[] = {
    EvtLoadUnits(S5115BlueUnits)
    EvtLoadUnits(S5115RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5115_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5115, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5121[] = {
    EvtLoadUnits(S5121BlueUnits)
    EvtLoadUnits(S5121RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5122_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5122, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5123[] = {
    EvtLoadUnits(S5123BlueUnits)
    EvtLoadUnits(S5123RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S5125RedUnits_Turn_2_2[] = {
    EvtLoadUnits(S5125RedUnits_Turn_2_2)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5125_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5125, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S5125RedUnits_Turn_2_2, 2, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5131[] = {
    EvtLoadUnits(S5131BlueUnits)
    EvtLoadUnits(S5131RedUnits)
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

const EventListScr EventListScr_S5132_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5132, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S5132RedUnits_Turn_3_3, 2, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S5132RedUnits_Turn_3_3, 3, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5133[] = {
    EvtLoadUnits(S5133BlueUnits)
    EvtLoadUnits(S5133RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5133_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5133, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5134[] = {
    EvtLoadUnits(S5134BlueUnits)
    EvtLoadUnits(S5134RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S5134_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5134, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S5135[] = {
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

const EventListScr EventListScr_S5135_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S5135, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S5135RedUnits_Turn_2_2, 2, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6011[] = {
    EvtLoadUnits(S6011BlueUnits)
    EvtLoadUnits(S6011RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6013_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6013, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6014[] = {
    EvtLoadUnits(S6014BlueUnits)
    EvtLoadUnits(S6014RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6014_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6014, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6015[] = {
    EvtLoadUnits(S6015BlueUnits)
    EvtLoadUnits(S6015RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6015_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6015, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6021[] = {
    EvtLoadUnits(S6021BlueUnits)
    EvtLoadUnits(S6021RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6024_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6024, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6025[] = {
    EvtLoadUnits(S6025BlueUnits)
    EvtLoadUnits(S6025RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6025_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6025, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6031[] = {
    EvtLoadUnits(S6031BlueUnits)
    EvtLoadUnits(S6031RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6031_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6031, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6032[] = {
    EvtLoadUnits(S6032BlueUnits)
    EvtLoadUnits(S6032RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S6035RedUnits_Turn_2_2[] = {
    EvtLoadUnits(S6035RedUnits_Turn_2_2)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6035_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6035, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S6035RedUnits_Turn_2_2, 2, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6041[] = {
    EvtLoadUnits(S6041BlueUnits)
    EvtLoadUnits(S6041RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6042_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6042, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6043[] = {
    EvtLoadUnits(S6043BlueUnits)
    EvtLoadUnits(S6043RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6045_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6045, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6051[] = {
    EvtLoadUnits(S6051BlueUnits)
    EvtLoadUnits(S6051RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6051_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6051, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6052[] = {
    EvtLoadUnits(S6052BlueUnits)
    EvtLoadUnits(S6052RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6055_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6055, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6061[] = {
    EvtLoadUnits(S6061BlueUnits)
    EvtLoadUnits(S6061RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6065_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6065, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6071[] = {
    EvtLoadUnits(S6071BlueUnits)
    EvtLoadUnits(S6071RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6075_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6075, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6081[] = {
    EvtLoadUnits(S6081BlueUnits)
    EvtLoadUnits(S6081RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6085_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6085, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6091[] = {
    EvtLoadUnits(S6091BlueUnits)
    EvtLoadUnits(S6091RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6094_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6094, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6095[] = {
    EvtLoadUnits(S6095BlueUnits)
    EvtLoadUnits(S6095RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6095_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6095, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6101[] = {
    EvtLoadUnits(S6101BlueUnits)
    EvtLoadUnits(S6101RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6104_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6104, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6105[] = {
    EvtLoadUnits(S6105BlueUnits)
    EvtLoadUnits(S6105RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6105_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6105, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6111[] = {
    EvtLoadUnits(S6111BlueUnits)
    EvtLoadUnits(S6111RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6112_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6112, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6113[] = {
    EvtLoadUnits(S6113BlueUnits)
    EvtLoadUnits(S6113RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S6115RedUnits_Turn_3_3[] = {
    EvtLoadUnits(S6115RedUnits_Turn_3_3)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6115_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6115, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S6115RedUnits_Turn_3_3, 3, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6121[] = {
    EvtLoadUnits(S6121BlueUnits)
    EvtLoadUnits(S6121RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6123_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6123, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6124[] = {
    EvtLoadUnits(S6124BlueUnits)
    EvtLoadUnits(S6124RedUnits)
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

const EventListScr EventListScr_S6125_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6125, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S6125RedUnits_Turn_4_4, 2, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S6125RedUnits_Turn_4_4, 3, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S6125RedUnits_Turn_4_4, 4, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6131[] = {
    EvtLoadUnits(S6131BlueUnits)
    EvtLoadUnits(S6131RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6131_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6131, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6132[] = {
    EvtLoadUnits(S6132BlueUnits)
    EvtLoadUnits(S6132RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6132_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6132, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6133[] = {
    EvtLoadUnits(S6133BlueUnits)
    EvtLoadUnits(S6133RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6133_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6133, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6134[] = {
    EvtLoadUnits(S6134BlueUnits)
    EvtLoadUnits(S6134RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6134_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6134, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S6135[] = {
    EvtLoadUnits(S6135BlueUnits)
    EvtLoadUnits(S6135RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventScr EventScr_LoadUnits_S6135RedUnits_Turn_2_2[] = {
    EvtLoadUnits(S6135RedUnits_Turn_2_2)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S6135_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S6135, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S6135RedUnits_Turn_2_2, 2, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7011[] = {
    EvtLoadUnits(S7011BlueUnits)
    EvtLoadUnits(S7011RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7015_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7015, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7021[] = {
    EvtLoadUnits(S7021BlueUnits)
    EvtLoadUnits(S7021RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7025_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7025, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7031[] = {
    EvtLoadUnits(S7031BlueUnits)
    EvtLoadUnits(S7031RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7035_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7035, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7041[] = {
    EvtLoadUnits(S7041BlueUnits)
    EvtLoadUnits(S7041RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7041_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7041, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7042[] = {
    EvtLoadUnits(S7042BlueUnits)
    EvtLoadUnits(S7042RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7042_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7042, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7043[] = {
    EvtLoadUnits(S7043BlueUnits)
    EvtLoadUnits(S7043RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7045_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7045, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7051[] = {
    EvtLoadUnits(S7051BlueUnits)
    EvtLoadUnits(S7051RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7054_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7054, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7055[] = {
    EvtLoadUnits(S7055BlueUnits)
    EvtLoadUnits(S7055RedUnits)
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

const EventListScr EventListScr_S7055_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7055, 1, 0, FACTION_BLUE)
    EvtListTurn(0, EventScr_LoadUnits_S7055RedUnits_Turn_3_3, 2, 0, FACTION_RED)
    EvtListTurn(0, EventScr_LoadUnits_S7055RedUnits_Turn_3_3, 3, 0, FACTION_RED)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7061[] = {
    EvtLoadUnits(S7061BlueUnits)
    EvtLoadUnits(S7061RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7061_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7061, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7062[] = {
    EvtLoadUnits(S7062BlueUnits)
    EvtLoadUnits(S7062RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7062_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7062, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7063[] = {
    EvtLoadUnits(S7063BlueUnits)
    EvtLoadUnits(S7063RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7063_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7063, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7064[] = {
    EvtLoadUnits(S7064BlueUnits)
    EvtLoadUnits(S7064RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7064_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7064, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7065[] = {
    EvtLoadUnits(S7065BlueUnits)
    EvtLoadUnits(S7065RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7065_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7065, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7071[] = {
    EvtLoadUnits(S7071BlueUnits)
    EvtLoadUnits(S7071RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7072_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7072, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7073[] = {
    EvtLoadUnits(S7073BlueUnits)
    EvtLoadUnits(S7073RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7074_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7074, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7075[] = {
    EvtLoadUnits(S7075BlueUnits)
    EvtLoadUnits(S7075RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7075_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7075, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7081[] = {
    EvtLoadUnits(S7081BlueUnits)
    EvtLoadUnits(S7081RedUnits)
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7081_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7081, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7082[] = {
    EvtLoadUnits(S7082BlueUnits)
    EvtLoadUnits(S7082RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7085_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7085, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7091[] = {
    EvtLoadUnits(S7091BlueUnits)
    EvtLoadUnits(S7091RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7092_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7092, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7093[] = {
    EvtLoadUnits(S7093BlueUnits)
    EvtLoadUnits(S7093RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7095_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7095, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7101[] = {
    EvtLoadUnits(S7101BlueUnits)
    EvtLoadUnits(S7101RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7105_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7105, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7111[] = {
    EvtLoadUnits(S7111BlueUnits)
    EvtLoadUnits(S7111RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7112_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7112, 1, 0, FACTION_BLUE)
    EvtListEnd
};

const EventScr EventScr_LoadUnits_S7113[] = {
    EvtLoadUnits(S7113BlueUnits)
    EvtLoadUnits(S7113RedUnits)
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
    EvtClearSkip
    EvtEnd
};

const EventListScr EventListScr_S7115_Turn[] = {
    EvtListTurn(0, EventScr_LoadUnits_S7115, 1, 0, FACTION_BLUE)
    EvtListEnd
};

