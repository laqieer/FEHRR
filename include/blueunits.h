#pragma once

const struct UnitInfo S0001BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 8, 0, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0001BlueUnits[] = {
    EvtLoadUnits(S0001BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0002BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 8, 0, 8, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 10, 0, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0002BlueUnits[] = {
    EvtLoadUnits(S0002BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0101BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 8, 0, 8, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 8, 2, 8, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 10, 0, 10, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0101BlueUnits[] = {
    EvtLoadUnits(S0101BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0102BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 0, 2, 0, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 0, 4, 0, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 0, 8, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0102BlueUnits[] = {
    EvtLoadUnits(S0102BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0103BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 12, 0, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 14, 0, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0103BlueUnits[] = {
    EvtLoadUnits(S0103BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0201BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 6, 0, 6, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 6, 2, 6, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 8, 0, 8, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 8, 2, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0201BlueUnits[] = {
    EvtLoadUnits(S0201BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0202BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 6, 8, 6, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 8, 10, 8, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 12, 10, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0202BlueUnits[] = {
    EvtLoadUnits(S0202BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0203BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0203BlueUnits[] = {
    EvtLoadUnits(S0203BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0204BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 12, 10, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0204BlueUnits[] = {
    EvtLoadUnits(S0204BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0205BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 0, 8, 0, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 2, 8, 2, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 4, 10, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0205BlueUnits[] = {
    EvtLoadUnits(S0205BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0301BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 8, 10, 8, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 10, 10, 10, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0301BlueUnits[] = {
    EvtLoadUnits(S0301BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0302BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0302BlueUnits[] = {
    EvtLoadUnits(S0302BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0303BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0303BlueUnits[] = {
    EvtLoadUnits(S0303BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0304BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0304BlueUnits[] = {
    EvtLoadUnits(S0304BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0305BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0305BlueUnits[] = {
    EvtLoadUnits(S0305BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0401BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0401BlueUnits[] = {
    EvtLoadUnits(S0401BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0402BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 4, 0, 4, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 6, 0, 6, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 8, 0, 8, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 10, 0, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0402BlueUnits[] = {
    EvtLoadUnits(S0402BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0403BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 8, 0, 8, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 12, 0, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0403BlueUnits[] = {
    EvtLoadUnits(S0403BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0404BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 12, 10, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0404BlueUnits[] = {
    EvtLoadUnits(S0404BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0405BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 12, 10, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 14, 10, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0405BlueUnits[] = {
    EvtLoadUnits(S0405BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0501BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 0, 4, 0, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 0, 6, 0, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 2, 4, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0501BlueUnits[] = {
    EvtLoadUnits(S0501BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0502BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0502BlueUnits[] = {
    EvtLoadUnits(S0502BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0503BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 6, 2, 6, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 6, 6, 6, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 8, 4, 8, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 8, 8, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0503BlueUnits[] = {
    EvtLoadUnits(S0503BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0504BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0504BlueUnits[] = {
    EvtLoadUnits(S0504BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0505BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0505BlueUnits[] = {
    EvtLoadUnits(S0505BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0601BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 12, 10, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0601BlueUnits[] = {
    EvtLoadUnits(S0601BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0602BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 12, 0, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 14, 0, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0602BlueUnits[] = {
    EvtLoadUnits(S0602BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0603BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 6, 6, 6, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 6, 8, 6, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 8, 6, 8, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 8, 8, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0603BlueUnits[] = {
    EvtLoadUnits(S0603BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0604BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0604BlueUnits[] = {
    EvtLoadUnits(S0604BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0605BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 0, 0, 0, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 0, 2, 0, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 0, 6, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0605BlueUnits[] = {
    EvtLoadUnits(S0605BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0701BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 2, 2, 2, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 2, 4, 2, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 6, 2, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0701BlueUnits[] = {
    EvtLoadUnits(S0701BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0702BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 0, 4, 0, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 0, 6, 0, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 2, 6, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0702BlueUnits[] = {
    EvtLoadUnits(S0702BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0703BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0703BlueUnits[] = {
    EvtLoadUnits(S0703BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0704BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 12, 0, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 14, 0, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0704BlueUnits[] = {
    EvtLoadUnits(S0704BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0705BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 4, 6, 4, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 8, 4, 8, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0705BlueUnits[] = {
    EvtLoadUnits(S0705BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0801BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 8, 8, 8, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 8, 10, 8, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 10, 10, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0801BlueUnits[] = {
    EvtLoadUnits(S0801BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0802BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 0, 10, 0, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 2, 8, 2, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 6, 10, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0802BlueUnits[] = {
    EvtLoadUnits(S0802BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0803BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 0, 6, 0, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 0, 8, 0, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 0, 10, 0, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 2, 10, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0803BlueUnits[] = {
    EvtLoadUnits(S0803BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0804BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 0, 8, 0, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 2, 8, 2, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 4, 10, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0804BlueUnits[] = {
    EvtLoadUnits(S0804BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0805BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 6, 6, 6, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 8, 4, 8, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0805BlueUnits[] = {
    EvtLoadUnits(S0805BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0901BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 12, 0, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 14, 0, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0901BlueUnits[] = {
    EvtLoadUnits(S0901BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0902BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 0, 4, 0, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 0, 6, 0, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 2, 4, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0902BlueUnits[] = {
    EvtLoadUnits(S0902BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0903BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0903BlueUnits[] = {
    EvtLoadUnits(S0903BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0904BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 0, 4, 0, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 0, 6, 0, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 2, 6, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0904BlueUnits[] = {
    EvtLoadUnits(S0904BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0905BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0905BlueUnits[] = {
    EvtLoadUnits(S0905BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1001BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 14, 0, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 14, 10, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1001BlueUnits[] = {
    EvtLoadUnits(S1001BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1002BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 0, 0, 0, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 2, 0, 2, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 6, 0, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1002BlueUnits[] = {
    EvtLoadUnits(S1002BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1003BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 14, 0, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1003BlueUnits[] = {
    EvtLoadUnits(S1003BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1004BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 4, 0, 4, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 6, 0, 6, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 8, 0, 8, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 10, 0, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1004BlueUnits[] = {
    EvtLoadUnits(S1004BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1005BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 12, 0, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1005BlueUnits[] = {
    EvtLoadUnits(S1005BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1101BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 2, 4, 2, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 2, 6, 2, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 4, 6, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1101BlueUnits[] = {
    EvtLoadUnits(S1101BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1102BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 0, 2, 0, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 0, 8, 0, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 2, 8, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1102BlueUnits[] = {
    EvtLoadUnits(S1102BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1103BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 2, 2, 2, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 2, 4, 2, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 4, 4, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1103BlueUnits[] = {
    EvtLoadUnits(S1103BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1104BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 6, 4, 6, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 6, 6, 6, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 8, 2, 8, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 8, 8, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1104BlueUnits[] = {
    EvtLoadUnits(S1104BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1105BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 10, 10, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1105BlueUnits[] = {
    EvtLoadUnits(S1105BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1201BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 2, 2, 2, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 2, 4, 2, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 4, 4, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1201BlueUnits[] = {
    EvtLoadUnits(S1201BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1202BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1202BlueUnits[] = {
    EvtLoadUnits(S1202BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1203BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 0, 4, 0, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 0, 6, 0, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 6, 10, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1203BlueUnits[] = {
    EvtLoadUnits(S1203BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1204BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1204BlueUnits[] = {
    EvtLoadUnits(S1204BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1205BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1205BlueUnits[] = {
    EvtLoadUnits(S1205BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1301BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1301BlueUnits[] = {
    EvtLoadUnits(S1301BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1302BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 10, 0, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 12, 0, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1302BlueUnits[] = {
    EvtLoadUnits(S1302BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1303BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1303BlueUnits[] = {
    EvtLoadUnits(S1303BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1304BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 10, 10, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 12, 10, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1304BlueUnits[] = {
    EvtLoadUnits(S1304BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1305BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1305BlueUnits[] = {
    EvtLoadUnits(S1305BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1401BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 10, 10, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 12, 10, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1401BlueUnits[] = {
    EvtLoadUnits(S1401BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1402BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1402BlueUnits[] = {
    EvtLoadUnits(S1402BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1403BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1403BlueUnits[] = {
    EvtLoadUnits(S1403BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1404BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 10, 10, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 12, 10, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1404BlueUnits[] = {
    EvtLoadUnits(S1404BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1405BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1405BlueUnits[] = {
    EvtLoadUnits(S1405BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1501BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1501BlueUnits[] = {
    EvtLoadUnits(S1501BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1601BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1601BlueUnits[] = {
    EvtLoadUnits(S1601BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2011BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2011BlueUnits[] = {
    EvtLoadUnits(S2011BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2012BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2012BlueUnits[] = {
    EvtLoadUnits(S2012BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2013BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2013BlueUnits[] = {
    EvtLoadUnits(S2013BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2014BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 8, 2, 8, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2014BlueUnits[] = {
    EvtLoadUnits(S2014BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2015BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2015BlueUnits[] = {
    EvtLoadUnits(S2015BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2021BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 10, 0, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2021BlueUnits[] = {
    EvtLoadUnits(S2021BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2022BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2022BlueUnits[] = {
    EvtLoadUnits(S2022BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2023BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 8, 0, 8, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 10, 0, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2023BlueUnits[] = {
    EvtLoadUnits(S2023BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2024BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2024BlueUnits[] = {
    EvtLoadUnits(S2024BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2025BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2025BlueUnits[] = {
    EvtLoadUnits(S2025BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2031BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2031BlueUnits[] = {
    EvtLoadUnits(S2031BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2032BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 6, 0, 6, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 6, 2, 6, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 8, 0, 8, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 8, 2, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2032BlueUnits[] = {
    EvtLoadUnits(S2032BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2033BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2033BlueUnits[] = {
    EvtLoadUnits(S2033BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2034BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 4, 2, 4, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 4, 8, 4, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 6, 4, 6, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 6, 6, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2034BlueUnits[] = {
    EvtLoadUnits(S2034BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2035BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2035BlueUnits[] = {
    EvtLoadUnits(S2035BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2041BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 10, 0, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2041BlueUnits[] = {
    EvtLoadUnits(S2041BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2042BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2042BlueUnits[] = {
    EvtLoadUnits(S2042BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2043BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2043BlueUnits[] = {
    EvtLoadUnits(S2043BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2044BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2044BlueUnits[] = {
    EvtLoadUnits(S2044BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2045BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 4, 2, 4, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 4, 4, 4, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 4, 8, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2045BlueUnits[] = {
    EvtLoadUnits(S2045BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2051BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 6, 4, 6, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 6, 6, 6, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 8, 4, 8, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 8, 6, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2051BlueUnits[] = {
    EvtLoadUnits(S2051BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2052BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2052BlueUnits[] = {
    EvtLoadUnits(S2052BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2053BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2053BlueUnits[] = {
    EvtLoadUnits(S2053BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2054BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2054BlueUnits[] = {
    EvtLoadUnits(S2054BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2055BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 2, 2, 2, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 2, 6, 2, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 4, 8, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2055BlueUnits[] = {
    EvtLoadUnits(S2055BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2061BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 6, 8, 6, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 6, 10, 6, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 8, 6, 8, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 8, 8, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2061BlueUnits[] = {
    EvtLoadUnits(S2061BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2062BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 6, 10, 6, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 8, 8, 8, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 8, 10, 8, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 10, 10, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2062BlueUnits[] = {
    EvtLoadUnits(S2062BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2063BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 2, 2, 2, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 2, 8, 2, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 4, 6, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2063BlueUnits[] = {
    EvtLoadUnits(S2063BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2064BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 6, 10, 6, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 8, 8, 8, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 8, 10, 8, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 10, 10, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2064BlueUnits[] = {
    EvtLoadUnits(S2064BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2065BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2065BlueUnits[] = {
    EvtLoadUnits(S2065BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2071BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2071BlueUnits[] = {
    EvtLoadUnits(S2071BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2072BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2072BlueUnits[] = {
    EvtLoadUnits(S2072BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2073BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2073BlueUnits[] = {
    EvtLoadUnits(S2073BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2074BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 2, 10, 2, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 4, 8, 4, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 6, 10, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2074BlueUnits[] = {
    EvtLoadUnits(S2074BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2075BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 4, 2, 4, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 4, 4, 4, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 4, 8, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2075BlueUnits[] = {
    EvtLoadUnits(S2075BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2081BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2081BlueUnits[] = {
    EvtLoadUnits(S2081BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2082BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 10, 0, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2082BlueUnits[] = {
    EvtLoadUnits(S2082BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2083BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2083BlueUnits[] = {
    EvtLoadUnits(S2083BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2084BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2084BlueUnits[] = {
    EvtLoadUnits(S2084BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2085BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2085BlueUnits[] = {
    EvtLoadUnits(S2085BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2091BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 8, 4, 8, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 8, 6, 8, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2091BlueUnits[] = {
    EvtLoadUnits(S2091BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2092BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2092BlueUnits[] = {
    EvtLoadUnits(S2092BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2093BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 6, 10, 6, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 8, 8, 8, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 8, 10, 8, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2093BlueUnits[] = {
    EvtLoadUnits(S2093BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2094BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2094BlueUnits[] = {
    EvtLoadUnits(S2094BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2095BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2095BlueUnits[] = {
    EvtLoadUnits(S2095BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2101BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2101BlueUnits[] = {
    EvtLoadUnits(S2101BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2102BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2102BlueUnits[] = {
    EvtLoadUnits(S2102BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2103BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 2, 10, 2, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 4, 10, 4, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 6, 10, 6, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 8, 10, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2103BlueUnits[] = {
    EvtLoadUnits(S2103BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2104BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 0, 2, 0, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 0, 8, 0, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 2, 6, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2104BlueUnits[] = {
    EvtLoadUnits(S2104BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2105BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2105BlueUnits[] = {
    EvtLoadUnits(S2105BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2111BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 8, 0, 8, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 12, 0, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2111BlueUnits[] = {
    EvtLoadUnits(S2111BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2112BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2112BlueUnits[] = {
    EvtLoadUnits(S2112BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2113BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2113BlueUnits[] = {
    EvtLoadUnits(S2113BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2114BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 10, 10, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2114BlueUnits[] = {
    EvtLoadUnits(S2114BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2115BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 2, 2, 2, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 2, 4, 2, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 2, 8, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2115BlueUnits[] = {
    EvtLoadUnits(S2115BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2121BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2121BlueUnits[] = {
    EvtLoadUnits(S2121BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2122BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 8, 0, 8, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 8, 2, 8, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 10, 0, 10, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2122BlueUnits[] = {
    EvtLoadUnits(S2122BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2123BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2123BlueUnits[] = {
    EvtLoadUnits(S2123BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2124BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2124BlueUnits[] = {
    EvtLoadUnits(S2124BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2125BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 10, 10, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2125BlueUnits[] = {
    EvtLoadUnits(S2125BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2131BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 10, 0, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 12, 0, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2131BlueUnits[] = {
    EvtLoadUnits(S2131BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2132BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2132BlueUnits[] = {
    EvtLoadUnits(S2132BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2133BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 10, 0, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2133BlueUnits[] = {
    EvtLoadUnits(S2133BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2134BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2134BlueUnits[] = {
    EvtLoadUnits(S2134BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2135BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2135BlueUnits[] = {
    EvtLoadUnits(S2135BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3011BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 6, 4, 6, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 6, 6, 6, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 8, 4, 8, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 8, 6, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3011BlueUnits[] = {
    EvtLoadUnits(S3011BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3012BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3012BlueUnits[] = {
    EvtLoadUnits(S3012BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3013BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3013BlueUnits[] = {
    EvtLoadUnits(S3013BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3014BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 10, 0, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3014BlueUnits[] = {
    EvtLoadUnits(S3014BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3015BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 8, 0, 8, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 8, 2, 8, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 10, 0, 10, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3015BlueUnits[] = {
    EvtLoadUnits(S3015BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3021BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 8, 0, 8, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 12, 0, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3021BlueUnits[] = {
    EvtLoadUnits(S3021BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3022BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 4, 0, 4, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 4, 2, 4, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 6, 0, 6, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 6, 2, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3022BlueUnits[] = {
    EvtLoadUnits(S3022BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3023BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 2, 2, 2, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 2, 4, 2, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 4, 4, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3023BlueUnits[] = {
    EvtLoadUnits(S3023BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3024BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 6, 2, 6, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 8, 0, 8, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 8, 2, 8, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3024BlueUnits[] = {
    EvtLoadUnits(S3024BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3025BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 2, 4, 2, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 2, 8, 2, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 4, 6, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3025BlueUnits[] = {
    EvtLoadUnits(S3025BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3031BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3031BlueUnits[] = {
    EvtLoadUnits(S3031BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3032BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3032BlueUnits[] = {
    EvtLoadUnits(S3032BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3033BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3033BlueUnits[] = {
    EvtLoadUnits(S3033BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3034BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 8, 10, 8, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 10, 10, 10, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3034BlueUnits[] = {
    EvtLoadUnits(S3034BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3035BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3035BlueUnits[] = {
    EvtLoadUnits(S3035BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3041BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 2, 4, 2, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 4, 2, 4, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 6, 2, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3041BlueUnits[] = {
    EvtLoadUnits(S3041BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3042BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 10, 10, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 12, 10, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3042BlueUnits[] = {
    EvtLoadUnits(S3042BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3043BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3043BlueUnits[] = {
    EvtLoadUnits(S3043BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3044BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 4, 2, 4, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 4, 4, 4, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 4, 8, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3044BlueUnits[] = {
    EvtLoadUnits(S3044BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3045BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3045BlueUnits[] = {
    EvtLoadUnits(S3045BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3051BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 8, 8, 8, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 8, 10, 8, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3051BlueUnits[] = {
    EvtLoadUnits(S3051BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3052BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3052BlueUnits[] = {
    EvtLoadUnits(S3052BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3053BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3053BlueUnits[] = {
    EvtLoadUnits(S3053BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3054BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3054BlueUnits[] = {
    EvtLoadUnits(S3054BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3055BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3055BlueUnits[] = {
    EvtLoadUnits(S3055BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3061BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3061BlueUnits[] = {
    EvtLoadUnits(S3061BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3062BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3062BlueUnits[] = {
    EvtLoadUnits(S3062BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3063BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 8, 0, 8, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 8, 2, 8, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 10, 0, 10, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3063BlueUnits[] = {
    EvtLoadUnits(S3063BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3064BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3064BlueUnits[] = {
    EvtLoadUnits(S3064BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3065BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3065BlueUnits[] = {
    EvtLoadUnits(S3065BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3071BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 12, 0, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 14, 0, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3071BlueUnits[] = {
    EvtLoadUnits(S3071BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3072BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 8, 0, 8, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 8, 2, 8, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 10, 0, 10, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3072BlueUnits[] = {
    EvtLoadUnits(S3072BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3073BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 6, 4, 6, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 6, 8, 6, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 8, 2, 8, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 8, 6, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3073BlueUnits[] = {
    EvtLoadUnits(S3073BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3074BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 8, 8, 8, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 8, 10, 8, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3074BlueUnits[] = {
    EvtLoadUnits(S3074BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3075BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3075BlueUnits[] = {
    EvtLoadUnits(S3075BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3081BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3081BlueUnits[] = {
    EvtLoadUnits(S3081BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3082BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3082BlueUnits[] = {
    EvtLoadUnits(S3082BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3083BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3083BlueUnits[] = {
    EvtLoadUnits(S3083BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3084BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3084BlueUnits[] = {
    EvtLoadUnits(S3084BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3085BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 10, 0, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3085BlueUnits[] = {
    EvtLoadUnits(S3085BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3091BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3091BlueUnits[] = {
    EvtLoadUnits(S3091BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3092BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3092BlueUnits[] = {
    EvtLoadUnits(S3092BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3093BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3093BlueUnits[] = {
    EvtLoadUnits(S3093BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3094BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 6, 2, 6, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 8, 0, 8, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 8, 2, 8, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 10, 0, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3094BlueUnits[] = {
    EvtLoadUnits(S3094BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3095BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 0, 4, 0, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 0, 6, 0, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 2, 6, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3095BlueUnits[] = {
    EvtLoadUnits(S3095BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3101BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3101BlueUnits[] = {
    EvtLoadUnits(S3101BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3102BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3102BlueUnits[] = {
    EvtLoadUnits(S3102BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3103BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3103BlueUnits[] = {
    EvtLoadUnits(S3103BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3104BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3104BlueUnits[] = {
    EvtLoadUnits(S3104BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3105BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3105BlueUnits[] = {
    EvtLoadUnits(S3105BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3111BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3111BlueUnits[] = {
    EvtLoadUnits(S3111BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3112BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 10, 0, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 12, 0, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3112BlueUnits[] = {
    EvtLoadUnits(S3112BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3113BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 2, 2, 2, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 2, 4, 2, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 2, 8, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3113BlueUnits[] = {
    EvtLoadUnits(S3113BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3114BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3114BlueUnits[] = {
    EvtLoadUnits(S3114BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3115BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3115BlueUnits[] = {
    EvtLoadUnits(S3115BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3121BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 10, 10, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3121BlueUnits[] = {
    EvtLoadUnits(S3121BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3122BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3122BlueUnits[] = {
    EvtLoadUnits(S3122BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3123BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3123BlueUnits[] = {
    EvtLoadUnits(S3123BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3124BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3124BlueUnits[] = {
    EvtLoadUnits(S3124BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3125BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3125BlueUnits[] = {
    EvtLoadUnits(S3125BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3131BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3131BlueUnits[] = {
    EvtLoadUnits(S3131BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3132BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 10, 10, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3132BlueUnits[] = {
    EvtLoadUnits(S3132BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3133BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3133BlueUnits[] = {
    EvtLoadUnits(S3133BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3134BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3134BlueUnits[] = {
    EvtLoadUnits(S3134BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3135BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3135BlueUnits[] = {
    EvtLoadUnits(S3135BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4011BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4011BlueUnits[] = {
    EvtLoadUnits(S4011BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4012BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 8, 0, 8, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 8, 2, 8, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 10, 0, 10, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4012BlueUnits[] = {
    EvtLoadUnits(S4012BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4013BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 10, 10, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4013BlueUnits[] = {
    EvtLoadUnits(S4013BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4014BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4014BlueUnits[] = {
    EvtLoadUnits(S4014BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4015BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4015BlueUnits[] = {
    EvtLoadUnits(S4015BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4021BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4021BlueUnits[] = {
    EvtLoadUnits(S4021BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4022BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 6, 4, 6, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 6, 6, 6, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 8, 4, 8, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 8, 6, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4022BlueUnits[] = {
    EvtLoadUnits(S4022BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4023BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4023BlueUnits[] = {
    EvtLoadUnits(S4023BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4024BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4024BlueUnits[] = {
    EvtLoadUnits(S4024BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4025BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4025BlueUnits[] = {
    EvtLoadUnits(S4025BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4031BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 2, 4, 2, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 2, 6, 2, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 4, 2, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4031BlueUnits[] = {
    EvtLoadUnits(S4031BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4032BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4032BlueUnits[] = {
    EvtLoadUnits(S4032BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4033BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 6, 0, 6, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 6, 2, 6, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 8, 2, 8, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 8, 4, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4033BlueUnits[] = {
    EvtLoadUnits(S4033BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4034BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 12, 10, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4034BlueUnits[] = {
    EvtLoadUnits(S4034BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4035BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 8, 8, 8, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4035BlueUnits[] = {
    EvtLoadUnits(S4035BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4041BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4041BlueUnits[] = {
    EvtLoadUnits(S4041BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4042BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 0, 4, 0, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 0, 6, 0, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 2, 6, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4042BlueUnits[] = {
    EvtLoadUnits(S4042BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4043BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4043BlueUnits[] = {
    EvtLoadUnits(S4043BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4044BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 6, 8, 6, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 6, 10, 6, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 8, 8, 8, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 8, 10, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4044BlueUnits[] = {
    EvtLoadUnits(S4044BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4045BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4045BlueUnits[] = {
    EvtLoadUnits(S4045BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4051BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4051BlueUnits[] = {
    EvtLoadUnits(S4051BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4052BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 10, 10, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4052BlueUnits[] = {
    EvtLoadUnits(S4052BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4053BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4053BlueUnits[] = {
    EvtLoadUnits(S4053BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4054BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4054BlueUnits[] = {
    EvtLoadUnits(S4054BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4055BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4055BlueUnits[] = {
    EvtLoadUnits(S4055BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4061BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 6, 0, 6, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 6, 2, 6, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 8, 0, 8, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 8, 2, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4061BlueUnits[] = {
    EvtLoadUnits(S4061BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4062BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4062BlueUnits[] = {
    EvtLoadUnits(S4062BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4063BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4063BlueUnits[] = {
    EvtLoadUnits(S4063BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4064BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4064BlueUnits[] = {
    EvtLoadUnits(S4064BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4065BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4065BlueUnits[] = {
    EvtLoadUnits(S4065BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4071BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4071BlueUnits[] = {
    EvtLoadUnits(S4071BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4072BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 8, 0, 8, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 8, 2, 8, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 10, 0, 10, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4072BlueUnits[] = {
    EvtLoadUnits(S4072BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4073BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4073BlueUnits[] = {
    EvtLoadUnits(S4073BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4074BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 0, 4, 0, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 2, 4, 2, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 4, 4, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4074BlueUnits[] = {
    EvtLoadUnits(S4074BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4075BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4075BlueUnits[] = {
    EvtLoadUnits(S4075BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4081BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4081BlueUnits[] = {
    EvtLoadUnits(S4081BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4082BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4082BlueUnits[] = {
    EvtLoadUnits(S4082BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4083BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4083BlueUnits[] = {
    EvtLoadUnits(S4083BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4084BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4084BlueUnits[] = {
    EvtLoadUnits(S4084BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4085BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4085BlueUnits[] = {
    EvtLoadUnits(S4085BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4091BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4091BlueUnits[] = {
    EvtLoadUnits(S4091BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4092BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4092BlueUnits[] = {
    EvtLoadUnits(S4092BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4093BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 12, 10, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4093BlueUnits[] = {
    EvtLoadUnits(S4093BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4094BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 6, 10, 6, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 8, 8, 8, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 8, 10, 8, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 10, 10, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4094BlueUnits[] = {
    EvtLoadUnits(S4094BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4095BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 6, 4, 6, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 6, 6, 6, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 8, 4, 8, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 8, 6, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4095BlueUnits[] = {
    EvtLoadUnits(S4095BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4101BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4101BlueUnits[] = {
    EvtLoadUnits(S4101BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4102BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4102BlueUnits[] = {
    EvtLoadUnits(S4102BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4103BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4103BlueUnits[] = {
    EvtLoadUnits(S4103BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4104BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 2, 0, 2, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 4, 0, 4, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 8, 0, 8, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 10, 0, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4104BlueUnits[] = {
    EvtLoadUnits(S4104BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4105BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4105BlueUnits[] = {
    EvtLoadUnits(S4105BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4111BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 2, 2, 2, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 2, 4, 2, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 4, 4, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4111BlueUnits[] = {
    EvtLoadUnits(S4111BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4112BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4112BlueUnits[] = {
    EvtLoadUnits(S4112BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4113BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 8, 0, 8, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 10, 0, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 12, 0, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4113BlueUnits[] = {
    EvtLoadUnits(S4113BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4114BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4114BlueUnits[] = {
    EvtLoadUnits(S4114BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4115BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4115BlueUnits[] = {
    EvtLoadUnits(S4115BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4121BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 6, 0, 6, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 6, 2, 6, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 8, 0, 8, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 8, 2, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4121BlueUnits[] = {
    EvtLoadUnits(S4121BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4122BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4122BlueUnits[] = {
    EvtLoadUnits(S4122BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4123BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 10, 0, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4123BlueUnits[] = {
    EvtLoadUnits(S4123BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4124BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 4, 0, 4, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 4, 2, 4, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 6, 0, 6, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 6, 2, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4124BlueUnits[] = {
    EvtLoadUnits(S4124BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4125BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 0, 4, 0, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 0, 6, 0, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 2, 6, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4125BlueUnits[] = {
    EvtLoadUnits(S4125BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4131BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4131BlueUnits[] = {
    EvtLoadUnits(S4131BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4132BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 12, 0, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4132BlueUnits[] = {
    EvtLoadUnits(S4132BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4133BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 8, 4, 8, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 10, 10, 10, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4133BlueUnits[] = {
    EvtLoadUnits(S4133BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4134BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 8, 2, 8, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4134BlueUnits[] = {
    EvtLoadUnits(S4134BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4135BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4135BlueUnits[] = {
    EvtLoadUnits(S4135BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5011BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 6, 0, 6, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 6, 2, 6, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 8, 0, 8, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 8, 2, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5011BlueUnits[] = {
    EvtLoadUnits(S5011BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5012BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 10, 10, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 12, 10, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5012BlueUnits[] = {
    EvtLoadUnits(S5012BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5013BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5013BlueUnits[] = {
    EvtLoadUnits(S5013BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5014BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5014BlueUnits[] = {
    EvtLoadUnits(S5014BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5015BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5015BlueUnits[] = {
    EvtLoadUnits(S5015BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5021BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5021BlueUnits[] = {
    EvtLoadUnits(S5021BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5022BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5022BlueUnits[] = {
    EvtLoadUnits(S5022BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5023BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 10, 10, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5023BlueUnits[] = {
    EvtLoadUnits(S5023BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5024BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 4, 10, 4, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 6, 10, 6, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 8, 10, 8, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 10, 10, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5024BlueUnits[] = {
    EvtLoadUnits(S5024BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5025BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5025BlueUnits[] = {
    EvtLoadUnits(S5025BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5031BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5031BlueUnits[] = {
    EvtLoadUnits(S5031BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5032BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 6, 0, 6, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 6, 2, 6, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 8, 0, 8, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 8, 2, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5032BlueUnits[] = {
    EvtLoadUnits(S5032BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5033BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5033BlueUnits[] = {
    EvtLoadUnits(S5033BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5034BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5034BlueUnits[] = {
    EvtLoadUnits(S5034BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5035BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5035BlueUnits[] = {
    EvtLoadUnits(S5035BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5041BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 0, 4, 0, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 0, 6, 0, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 2, 6, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5041BlueUnits[] = {
    EvtLoadUnits(S5041BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5042BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5042BlueUnits[] = {
    EvtLoadUnits(S5042BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5043BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5043BlueUnits[] = {
    EvtLoadUnits(S5043BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5044BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 8, 0, 8, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 10, 0, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 12, 0, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5044BlueUnits[] = {
    EvtLoadUnits(S5044BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5045BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5045BlueUnits[] = {
    EvtLoadUnits(S5045BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5051BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 0, 4, 0, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 0, 6, 0, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 2, 6, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5051BlueUnits[] = {
    EvtLoadUnits(S5051BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5052BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 8, 0, 8, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 10, 0, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 12, 0, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5052BlueUnits[] = {
    EvtLoadUnits(S5052BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5053BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5053BlueUnits[] = {
    EvtLoadUnits(S5053BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5054BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5054BlueUnits[] = {
    EvtLoadUnits(S5054BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5055BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5055BlueUnits[] = {
    EvtLoadUnits(S5055BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5061BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5061BlueUnits[] = {
    EvtLoadUnits(S5061BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5062BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5062BlueUnits[] = {
    EvtLoadUnits(S5062BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5063BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 2, 2, 2, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 2, 4, 2, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 2, 8, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5063BlueUnits[] = {
    EvtLoadUnits(S5063BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5064BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 4, 10, 4, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 6, 10, 6, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 8, 10, 8, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 10, 10, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5064BlueUnits[] = {
    EvtLoadUnits(S5064BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5065BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5065BlueUnits[] = {
    EvtLoadUnits(S5065BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5071BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5071BlueUnits[] = {
    EvtLoadUnits(S5071BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5072BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5072BlueUnits[] = {
    EvtLoadUnits(S5072BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5073BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5073BlueUnits[] = {
    EvtLoadUnits(S5073BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5074BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 4, 10, 4, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 6, 10, 6, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 8, 10, 8, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 10, 10, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5074BlueUnits[] = {
    EvtLoadUnits(S5074BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5075BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 0, 2, 0, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 0, 6, 0, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 2, 8, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5075BlueUnits[] = {
    EvtLoadUnits(S5075BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5081BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5081BlueUnits[] = {
    EvtLoadUnits(S5081BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5082BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5082BlueUnits[] = {
    EvtLoadUnits(S5082BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5083BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5083BlueUnits[] = {
    EvtLoadUnits(S5083BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5084BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5084BlueUnits[] = {
    EvtLoadUnits(S5084BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5085BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 2, 0, 2, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 4, 0, 4, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 6, 0, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5085BlueUnits[] = {
    EvtLoadUnits(S5085BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5091BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5091BlueUnits[] = {
    EvtLoadUnits(S5091BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5092BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5092BlueUnits[] = {
    EvtLoadUnits(S5092BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5093BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5093BlueUnits[] = {
    EvtLoadUnits(S5093BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5094BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5094BlueUnits[] = {
    EvtLoadUnits(S5094BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5095BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 2, 4, 2, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 2, 6, 2, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 4, 6, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5095BlueUnits[] = {
    EvtLoadUnits(S5095BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5101BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5101BlueUnits[] = {
    EvtLoadUnits(S5101BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5102BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 10, 0, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 10, 10, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5102BlueUnits[] = {
    EvtLoadUnits(S5102BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5103BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5103BlueUnits[] = {
    EvtLoadUnits(S5103BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5104BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 10, 10, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 12, 10, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5104BlueUnits[] = {
    EvtLoadUnits(S5104BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5105BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 0, 4, 0, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 0, 6, 0, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 2, 6, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5105BlueUnits[] = {
    EvtLoadUnits(S5105BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5111BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5111BlueUnits[] = {
    EvtLoadUnits(S5111BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5112BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5112BlueUnits[] = {
    EvtLoadUnits(S5112BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5113BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5113BlueUnits[] = {
    EvtLoadUnits(S5113BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5114BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 12, 10, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5114BlueUnits[] = {
    EvtLoadUnits(S5114BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5115BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5115BlueUnits[] = {
    EvtLoadUnits(S5115BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5121BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5121BlueUnits[] = {
    EvtLoadUnits(S5121BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5122BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5122BlueUnits[] = {
    EvtLoadUnits(S5122BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5123BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 6, 0, 6, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 6, 4, 6, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 6, 6, 6, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 6, 10, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5123BlueUnits[] = {
    EvtLoadUnits(S5123BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5124BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5124BlueUnits[] = {
    EvtLoadUnits(S5124BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5125BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5125BlueUnits[] = {
    EvtLoadUnits(S5125BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5131BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5131BlueUnits[] = {
    EvtLoadUnits(S5131BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5132BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5132BlueUnits[] = {
    EvtLoadUnits(S5132BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5133BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5133BlueUnits[] = {
    EvtLoadUnits(S5133BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5134BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5134BlueUnits[] = {
    EvtLoadUnits(S5134BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5135BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5135BlueUnits[] = {
    EvtLoadUnits(S5135BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6011BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6011BlueUnits[] = {
    EvtLoadUnits(S6011BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6012BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 6, 4, 6, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 6, 6, 6, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 8, 4, 8, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 8, 6, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6012BlueUnits[] = {
    EvtLoadUnits(S6012BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6013BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6013BlueUnits[] = {
    EvtLoadUnits(S6013BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6014BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6014BlueUnits[] = {
    EvtLoadUnits(S6014BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6015BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 8, 0, 8, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 10, 0, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6015BlueUnits[] = {
    EvtLoadUnits(S6015BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6021BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6021BlueUnits[] = {
    EvtLoadUnits(S6021BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6022BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 8, 0, 8, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 8, 2, 8, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 10, 0, 10, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6022BlueUnits[] = {
    EvtLoadUnits(S6022BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6023BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 10, 10, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6023BlueUnits[] = {
    EvtLoadUnits(S6023BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6024BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6024BlueUnits[] = {
    EvtLoadUnits(S6024BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6025BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 0, 4, 0, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 0, 6, 0, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 2, 6, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6025BlueUnits[] = {
    EvtLoadUnits(S6025BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6031BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 6, 4, 6, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 6, 6, 6, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 8, 2, 8, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 8, 4, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6031BlueUnits[] = {
    EvtLoadUnits(S6031BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6032BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 8, 8, 8, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 8, 10, 8, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 10, 10, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6032BlueUnits[] = {
    EvtLoadUnits(S6032BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6033BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6033BlueUnits[] = {
    EvtLoadUnits(S6033BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6034BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6034BlueUnits[] = {
    EvtLoadUnits(S6034BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6035BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 4, 0, 4, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 4, 2, 4, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 6, 4, 6, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 6, 6, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6035BlueUnits[] = {
    EvtLoadUnits(S6035BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6041BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6041BlueUnits[] = {
    EvtLoadUnits(S6041BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6042BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6042BlueUnits[] = {
    EvtLoadUnits(S6042BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6043BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 8, 0, 8, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 10, 0, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 12, 0, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6043BlueUnits[] = {
    EvtLoadUnits(S6043BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6044BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6044BlueUnits[] = {
    EvtLoadUnits(S6044BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6045BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6045BlueUnits[] = {
    EvtLoadUnits(S6045BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6051BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6051BlueUnits[] = {
    EvtLoadUnits(S6051BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6052BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6052BlueUnits[] = {
    EvtLoadUnits(S6052BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6053BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6053BlueUnits[] = {
    EvtLoadUnits(S6053BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6054BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 10, 10, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 12, 10, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6054BlueUnits[] = {
    EvtLoadUnits(S6054BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6055BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6055BlueUnits[] = {
    EvtLoadUnits(S6055BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6061BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6061BlueUnits[] = {
    EvtLoadUnits(S6061BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6062BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 2, 0, 2, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 2, 2, 2, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 4, 2, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6062BlueUnits[] = {
    EvtLoadUnits(S6062BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6063BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 10, 0, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 10, 2, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6063BlueUnits[] = {
    EvtLoadUnits(S6063BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6064BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6064BlueUnits[] = {
    EvtLoadUnits(S6064BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6065BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6065BlueUnits[] = {
    EvtLoadUnits(S6065BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6071BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6071BlueUnits[] = {
    EvtLoadUnits(S6071BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6072BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6072BlueUnits[] = {
    EvtLoadUnits(S6072BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6073BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6073BlueUnits[] = {
    EvtLoadUnits(S6073BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6074BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6074BlueUnits[] = {
    EvtLoadUnits(S6074BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6075BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6075BlueUnits[] = {
    EvtLoadUnits(S6075BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6081BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 10, 10, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 12, 10, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6081BlueUnits[] = {
    EvtLoadUnits(S6081BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6082BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6082BlueUnits[] = {
    EvtLoadUnits(S6082BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6083BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 14, 0, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6083BlueUnits[] = {
    EvtLoadUnits(S6083BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6084BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 12, 10, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6084BlueUnits[] = {
    EvtLoadUnits(S6084BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6085BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6085BlueUnits[] = {
    EvtLoadUnits(S6085BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6091BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6091BlueUnits[] = {
    EvtLoadUnits(S6091BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6092BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6092BlueUnits[] = {
    EvtLoadUnits(S6092BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6093BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6093BlueUnits[] = {
    EvtLoadUnits(S6093BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6094BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6094BlueUnits[] = {
    EvtLoadUnits(S6094BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6095BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6095BlueUnits[] = {
    EvtLoadUnits(S6095BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6101BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6101BlueUnits[] = {
    EvtLoadUnits(S6101BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6102BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6102BlueUnits[] = {
    EvtLoadUnits(S6102BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6103BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6103BlueUnits[] = {
    EvtLoadUnits(S6103BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6104BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6104BlueUnits[] = {
    EvtLoadUnits(S6104BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6105BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6105BlueUnits[] = {
    EvtLoadUnits(S6105BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6111BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6111BlueUnits[] = {
    EvtLoadUnits(S6111BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6112BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6112BlueUnits[] = {
    EvtLoadUnits(S6112BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6113BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6113BlueUnits[] = {
    EvtLoadUnits(S6113BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6114BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6114BlueUnits[] = {
    EvtLoadUnits(S6114BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6115BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 12, 10, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6115BlueUnits[] = {
    EvtLoadUnits(S6115BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6121BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 8, 10, 8, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 10, 10, 10, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 12, 10, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6121BlueUnits[] = {
    EvtLoadUnits(S6121BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6122BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6122BlueUnits[] = {
    EvtLoadUnits(S6122BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6123BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6123BlueUnits[] = {
    EvtLoadUnits(S6123BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6124BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6124BlueUnits[] = {
    EvtLoadUnits(S6124BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6125BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6125BlueUnits[] = {
    EvtLoadUnits(S6125BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6131BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6131BlueUnits[] = {
    EvtLoadUnits(S6131BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6132BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 14, 0, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6132BlueUnits[] = {
    EvtLoadUnits(S6132BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6133BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6133BlueUnits[] = {
    EvtLoadUnits(S6133BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6134BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6134BlueUnits[] = {
    EvtLoadUnits(S6134BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6135BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6135BlueUnits[] = {
    EvtLoadUnits(S6135BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7011BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7011BlueUnits[] = {
    EvtLoadUnits(S7011BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7012BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7012BlueUnits[] = {
    EvtLoadUnits(S7012BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7013BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7013BlueUnits[] = {
    EvtLoadUnits(S7013BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7014BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 4, 10, 4, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 6, 10, 6, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 8, 10, 8, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 10, 10, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7014BlueUnits[] = {
    EvtLoadUnits(S7014BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7015BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7015BlueUnits[] = {
    EvtLoadUnits(S7015BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7021BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 0, 6, 0, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 2, 4, 2, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 2, 8, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7021BlueUnits[] = {
    EvtLoadUnits(S7021BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7022BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7022BlueUnits[] = {
    EvtLoadUnits(S7022BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7023BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7023BlueUnits[] = {
    EvtLoadUnits(S7023BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7024BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 12, 10, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 14, 10, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7024BlueUnits[] = {
    EvtLoadUnits(S7024BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7025BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 8, 4, 8, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 8, 6, 8, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 10, 4, 10, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7025BlueUnits[] = {
    EvtLoadUnits(S7025BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7031BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7031BlueUnits[] = {
    EvtLoadUnits(S7031BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7032BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7032BlueUnits[] = {
    EvtLoadUnits(S7032BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7033BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7033BlueUnits[] = {
    EvtLoadUnits(S7033BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7034BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7034BlueUnits[] = {
    EvtLoadUnits(S7034BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7035BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 6, 10, 6, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 8, 8, 8, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 8, 10, 8, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 10, 10, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7035BlueUnits[] = {
    EvtLoadUnits(S7035BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7041BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7041BlueUnits[] = {
    EvtLoadUnits(S7041BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7042BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7042BlueUnits[] = {
    EvtLoadUnits(S7042BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7043BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7043BlueUnits[] = {
    EvtLoadUnits(S7043BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7044BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 10, 10, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7044BlueUnits[] = {
    EvtLoadUnits(S7044BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7045BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7045BlueUnits[] = {
    EvtLoadUnits(S7045BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7051BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7051BlueUnits[] = {
    EvtLoadUnits(S7051BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7052BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7052BlueUnits[] = {
    EvtLoadUnits(S7052BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7053BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 10, 8, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 10, 10, 10, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 12, 10, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7053BlueUnits[] = {
    EvtLoadUnits(S7053BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7054BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 12, 10, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7054BlueUnits[] = {
    EvtLoadUnits(S7054BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7055BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 0, 2, 0, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 0, 4, 0, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 0, 8, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7055BlueUnits[] = {
    EvtLoadUnits(S7055BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7061BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7061BlueUnits[] = {
    EvtLoadUnits(S7061BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7062BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7062BlueUnits[] = {
    EvtLoadUnits(S7062BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7063BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 10, 6, 10, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7063BlueUnits[] = {
    EvtLoadUnits(S7063BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7064BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7064BlueUnits[] = {
    EvtLoadUnits(S7064BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7065BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7065BlueUnits[] = {
    EvtLoadUnits(S7065BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7071BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7071BlueUnits[] = {
    EvtLoadUnits(S7071BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7072BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7072BlueUnits[] = {
    EvtLoadUnits(S7072BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7073BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7073BlueUnits[] = {
    EvtLoadUnits(S7073BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7074BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 6, 0, 6, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 6, 2, 6, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 8, 0, 8, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 8, 2, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7074BlueUnits[] = {
    EvtLoadUnits(S7074BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7075BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 0, 2, 0, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 0, 8, 0, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 2, 6, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7075BlueUnits[] = {
    EvtLoadUnits(S7075BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7081BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7081BlueUnits[] = {
    EvtLoadUnits(S7081BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7082BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7082BlueUnits[] = {
    EvtLoadUnits(S7082BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7083BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7083BlueUnits[] = {
    EvtLoadUnits(S7083BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7084BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7084BlueUnits[] = {
    EvtLoadUnits(S7084BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7085BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7085BlueUnits[] = {
    EvtLoadUnits(S7085BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7091BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7091BlueUnits[] = {
    EvtLoadUnits(S7091BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7092BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7092BlueUnits[] = {
    EvtLoadUnits(S7092BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7093BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7093BlueUnits[] = {
    EvtLoadUnits(S7093BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7094BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7094BlueUnits[] = {
    EvtLoadUnits(S7094BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7095BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7095BlueUnits[] = {
    EvtLoadUnits(S7095BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7101BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7101BlueUnits[] = {
    EvtLoadUnits(S7101BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7102BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7102BlueUnits[] = {
    EvtLoadUnits(S7102BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7103BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7103BlueUnits[] = {
    EvtLoadUnits(S7103BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7104BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7104BlueUnits[] = {
    EvtLoadUnits(S7104BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7105BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7105BlueUnits[] = {
    EvtLoadUnits(S7105BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7111BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 12, 10, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7111BlueUnits[] = {
    EvtLoadUnits(S7111BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7112BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7112BlueUnits[] = {
    EvtLoadUnits(S7112BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7113BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 0, 14, 0, 14, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 14, 2, 14, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 14, 8, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 10, 14, 10, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7113BlueUnits[] = {
    EvtLoadUnits(S7113BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7114BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 2, 12, 2, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 8, 12, 8, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7114BlueUnits[] = {
    EvtLoadUnits(S7114BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7115BlueUnits[] = {
    { PID_アルフォンス, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 12, 4, 12, { 0 }, { 0 } },
    { PID_シャロン, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 12, 6, 12, { 0 }, { 0 } },
    { PID_アンナ, 0, 0, TRUE, FACTION_ID_BLUE, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フード, 0, 0, TRUE, FACTION_ID_BLUE, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7115BlueUnits[] = {
    EvtLoadUnits(S7115BlueUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

