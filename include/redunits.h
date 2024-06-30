#pragma once

const struct UnitInfo S0001RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 1, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0001RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0001RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0002RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 2, 6, 8, 6, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 2, 10, 10, 10, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0002RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0002RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0101RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ランスファイター, 0, TRUE, FACTION_ID_RED, 3, 0, 0, 0, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 3, 10, 14, 10, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター, 0, TRUE, FACTION_ID_RED, 3, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0101RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0101RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0102RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ミネルバ, 0, TRUE, FACTION_ID_RED, 4, 10, 12, 10, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_パオラ, 0, TRUE, FACTION_ID_RED, 4, 6, 14, 6, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_カチュア, 0, TRUE, FACTION_ID_RED, 4, 8, 14, 8, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_4, JID_マリア, 0, TRUE, FACTION_ID_RED, 4, 10, 10, 10, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0102RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0102RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0103RedUnits[] = {
    { PID_マークス, JID_マークス, 0, TRUE, FACTION_ID_RED, 5, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 5, 8, 6, 8, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ロッドナイト, 0, TRUE, FACTION_ID_RED, 5, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター, 0, TRUE, FACTION_ID_RED, 5, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0103RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0103RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0201RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_マルス, 0, TRUE, FACTION_ID_RED, 6, 10, 8, 10, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ジェイガン, 0, TRUE, FACTION_ID_RED, 6, 8, 6, 8, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_シーダ, 0, TRUE, FACTION_ID_RED, 6, 10, 10, 10, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0201RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0201RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0202RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 7, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_オグマ, 0, TRUE, FACTION_ID_RED, 7, 4, 12, 4, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 7, 2, 8, 2, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0202RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0202RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0203RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 8, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_リンダ, 0, TRUE, FACTION_ID_RED, 8, 0, 4, 0, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_マリク, 0, TRUE, FACTION_ID_RED, 8, 8, 2, 8, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0203RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0203RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0204RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_カイン, 0, TRUE, FACTION_ID_RED, 9, 0, 2, 0, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_アベル, 0, TRUE, FACTION_ID_RED, 9, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ゴードン, 0, TRUE, FACTION_ID_RED, 9, 0, 6, 0, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 9, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0204RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0204RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0205RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ゴードン, 0, TRUE, FACTION_ID_RED, 10, 6, 8, 6, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_マルス, 0, TRUE, FACTION_ID_RED, 10, 4, 8, 4, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_マリク, 0, TRUE, FACTION_ID_RED, 10, 4, 6, 4, 6, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_4, JID_シーダ, 0, TRUE, FACTION_ID_RED, 10, 4, 10, 4, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0205RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0205RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0301RedUnits[] = {
    { PID_マークス, JID_マークス, 0, TRUE, FACTION_ID_RED, 11, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_カミラ, 0, TRUE, FACTION_ID_RED, 11, 2, 8, 2, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_レオン, 0, TRUE, FACTION_ID_RED, 11, 0, 10, 0, 10, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_3, JID_エリーゼ, 0, TRUE, FACTION_ID_RED, 11, 0, 6, 0, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0301RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0301RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0302RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_エリーゼ, 0, TRUE, FACTION_ID_RED, 12, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ハロルド, 0, TRUE, FACTION_ID_RED, 12, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_エルフィ, 0, TRUE, FACTION_ID_RED, 12, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ロッドナイト, 0, TRUE, FACTION_ID_RED, 12, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0302RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0302RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0303RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_レオン, 0, TRUE, FACTION_ID_RED, 13, 6, 2, 6, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ゼロ, 0, TRUE, FACTION_ID_RED, 13, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_オーディン, 0, TRUE, FACTION_ID_RED, 13, 4, 4, 4, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 13, 0, 4, 0, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0303RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0303RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0304RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_カミラ, 0, TRUE, FACTION_ID_RED, 14, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ベルカ, 0, TRUE, FACTION_ID_RED, 14, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ルーナ, 0, TRUE, FACTION_ID_RED, 14, 8, 6, 8, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 14, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0304RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0304RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0305RedUnits[] = {
    { PID_マークス, JID_マークス, 0, TRUE, FACTION_ID_RED, 15, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ピエリ, 0, TRUE, FACTION_ID_RED, 15, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ラズワルド, 0, TRUE, FACTION_ID_RED, 15, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト, 0, TRUE, FACTION_ID_RED, 15, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0305RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0305RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0401RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ロイ, 0, TRUE, FACTION_ID_RED, 16, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト, 0, TRUE, FACTION_ID_RED, 16, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 16, 2, 6, 2, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 16, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0401RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0401RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0402RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ランスナイト, 0, TRUE, FACTION_ID_RED, 17, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト, 0, TRUE, FACTION_ID_RED, 17, 10, 12, 10, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_クラリーネ, 0, TRUE, FACTION_ID_RED, 17, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_セシリア, 0, TRUE, FACTION_ID_RED, 17, 10, 10, 10, 10, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0402RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0402RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0403RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ファ, 0, TRUE, FACTION_ID_RED, 18, 0, 0, 0, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ソフィーヤ, 0, TRUE, FACTION_ID_RED, 18, 10, 6, 10, 6, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 18, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_レイ, 0, TRUE, FACTION_ID_RED, 18, 4, 4, 4, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0403RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0403RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0404RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_フィル, 0, TRUE, FACTION_ID_RED, 19, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_バアトル, 0, TRUE, FACTION_ID_RED, 19, 2, 6, 2, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_シャニー, 0, TRUE, FACTION_ID_RED, 19, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 19, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0404RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0404RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0405RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ロイ, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_リリーナ, 0, TRUE, FACTION_ID_RED, 20, 2, 6, 2, 6, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ウェンディ, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ロッドナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0405RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0405RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0501RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_クロム, 0, TRUE, FACTION_ID_RED, 20, 6, 14, 6, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_フレデリク, 0, TRUE, FACTION_ID_RED, 20, 2, 14, 2, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_リズ, 0, TRUE, FACTION_ID_RED, 20, 8, 14, 8, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0501RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0501RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0502RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ロンクー, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_オリヴィエ, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー, 0, TRUE, FACTION_ID_RED, 20, 10, 8, 10, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0502RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0502RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0503RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 20, 0, 0, 0, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス, 0, TRUE, FACTION_ID_RED, 20, 0, 14, 0, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスペガサス, 0, TRUE, FACTION_ID_RED, 20, 10, 0, 10, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ティアモ, 0, TRUE, FACTION_ID_RED, 20, 10, 14, 10, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0503RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0503RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0504RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ロッドナイト, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト, 0, TRUE, FACTION_ID_RED, 20, 2, 6, 2, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ルフレ女, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ドニ, 0, TRUE, FACTION_ID_RED, 20, 6, 8, 6, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0504RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0504RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0505RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_クロム, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ルフレ女, 0, TRUE, FACTION_ID_RED, 20, 10, 10, 10, 10, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ソール, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_4, JID_ソワレ, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0505RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0505RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0601RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ナバール, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_リフ, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ, 0, TRUE, FACTION_ID_RED, 20, 10, 0, 10, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ, 0, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0601RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0601RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0602RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_マリア, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ミネルバ, 0, TRUE, FACTION_ID_RED, 20, 4, 6, 4, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー, 0, TRUE, FACTION_ID_RED, 20, 6, 8, 6, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0602RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0602RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0603RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ジョルジュ, 0, TRUE, FACTION_ID_RED, 20, 10, 0, 10, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_バーツ, 0, TRUE, FACTION_ID_RED, 20, 4, 14, 4, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 6, 14, 6, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0603RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0603RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0604RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_カチュア, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_パオラ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_エスト, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0604RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0604RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0605RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_シーフ, 0, TRUE, FACTION_ID_RED, 20, 8, 8, 8, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_チキ, 0, TRUE, FACTION_ID_RED, 20, 2, 12, 2, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ミネルバ, 0, TRUE, FACTION_ID_RED, 20, 6, 12, 6, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスファイター, 0, TRUE, FACTION_ID_RED, 20, 10, 10, 10, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0605RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0605RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0701RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_リョウマ, 0, TRUE, FACTION_ID_RED, 20, 10, 6, 10, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_タクミ, 0, TRUE, FACTION_ID_RED, 20, 8, 8, 8, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_サクラ, 0, TRUE, FACTION_ID_RED, 20, 10, 10, 10, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_4, JID_ヒノカ, 0, TRUE, FACTION_ID_RED, 20, 4, 14, 4, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0701RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0701RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0702RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_タクミ, 0, TRUE, FACTION_ID_RED, 20, 0, 12, 0, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_オボロ, 0, TRUE, FACTION_ID_RED, 20, 4, 10, 4, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ヒナタ, 0, TRUE, FACTION_ID_RED, 20, 0, 10, 0, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_4, JID_サイゾウ, 0, TRUE, FACTION_ID_RED, 20, 10, 10, 10, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0702RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0702RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0703RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ヒノカ, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_アサマ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_セツナ, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_4, JID_ツバキ, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0703RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0703RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0704RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_サクラ, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_カザハナ, 0, TRUE, FACTION_ID_RED, 20, 10, 12, 10, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ツバキ, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_4, JID_カゲロウ, 0, TRUE, FACTION_ID_RED, 20, 4, 6, 4, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0704RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0704RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0705RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_リョウマ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_サイゾウ, 0, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_カゲロウ, 0, TRUE, FACTION_ID_RED, 20, 10, 14, 10, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_4, JID_オボロ, 0, TRUE, FACTION_ID_RED, 20, 10, 6, 10, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_5, JID_ヒナタ, 0, TRUE, FACTION_ID_RED, 20, 0, 14, 0, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0705RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0705RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0801RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_マシュー, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_セーラ, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ, 0, TRUE, FACTION_ID_RED, 20, 0, 14, 0, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ, 0, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0801RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0801RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0802RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_エリウッド, 0, TRUE, FACTION_ID_RED, 20, 2, 14, 2, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンナイト, 0, TRUE, FACTION_ID_RED, 20, 4, 14, 4, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ヘクトル, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 0, 0, 0, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0802RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0802RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0803RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ソードファイター, 0, TRUE, FACTION_ID_RED, 20, 2, 12, 2, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_レイヴァン, 0, TRUE, FACTION_ID_RED, 20, 10, 12, 10, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ニノ, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 6, 12, 6, 12, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 6, 8, 6, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0803RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0803RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0804RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_グリーンマージ, 0, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ホークアイ, 0, TRUE, FACTION_ID_RED, 20, 2, 10, 2, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_リン, 0, TRUE, FACTION_ID_RED, 20, 6, 12, 6, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_フロリーナ, 0, TRUE, FACTION_ID_RED, 20, 4, 12, 4, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0804RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0804RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0805RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_エリウッド, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ヘクトル, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_リン, 0, TRUE, FACTION_ID_RED, 20, 0, 14, 0, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 10, 12, 10, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0805RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0805RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0901RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ルフレ男, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_サーリャ, 0, TRUE, FACTION_ID_RED, 20, 8, 6, 8, 6, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 6, 8, 6, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0901RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0901RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0902RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ノノ, 0, TRUE, FACTION_ID_RED, 20, 6, 14, 6, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ヘンリー, 0, TRUE, FACTION_ID_RED, 20, 4, 14, 4, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ, 0, TRUE, FACTION_ID_RED, 20, 10, 10, 10, 10, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 0, 8, 0, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0902RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0902RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0903RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ヴィオール, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_セルジュ, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー, 0, TRUE, FACTION_ID_RED, 20, 10, 8, 10, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス, 0, TRUE, FACTION_ID_RED, 20, 0, 0, 0, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0903RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0903RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0904RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_チキ覚醒, 0, TRUE, FACTION_ID_RED, 20, 6, 12, 6, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ルキナ, 0, TRUE, FACTION_ID_RED, 20, 10, 10, 10, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト, 0, TRUE, FACTION_ID_RED, 20, 2, 8, 2, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンナイト, 0, TRUE, FACTION_ID_RED, 20, 4, 14, 4, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 12, 0, 12, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0904RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0904RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S0905RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ルフレ男, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ルキナ, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ガイア, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ロッドナイト, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S0905RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S0905RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1001RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ミシェイル, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_カミュ, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドナイト, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1001RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1001RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1002RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ゼフィール, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ナーシェン, 0, TRUE, FACTION_ID_RED, 20, 2, 14, 2, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1002RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1002RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1003RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ウルスラ, 0, TRUE, FACTION_ID_RED, 20, 10, 0, 10, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンナイト, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー, 0, TRUE, FACTION_ID_RED, 20, 10, 8, 10, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1003RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1003RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1004RedUnits[] = {
    { EID_ブルーノ, JID_ブルーノ, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト, 0, TRUE, FACTION_ID_RED, 20, 8, 10, 8, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー, 0, TRUE, FACTION_ID_RED, 20, 10, 6, 10, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 10, 10, 10, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1004RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1004RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1005RedUnits[] = {
    { EID_ヴェロニカ, JID_ヴェロニカ, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { PID_マークス, JID_マークス, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ロッドナイト, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 10, 0, 10, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1005RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1005RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1101RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_アイク, 0, TRUE, FACTION_ID_RED, 20, 4, 14, 4, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_セネリオ, 0, TRUE, FACTION_ID_RED, 20, 6, 14, 6, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスファイター, 0, TRUE, FACTION_ID_RED, 20, 0, 10, 0, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 6, 10, 6, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト, 0, TRUE, FACTION_ID_RED, 20, 2, 14, 2, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 10, 14, 10, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1101RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1101RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1101RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_アクスナイト, 0, TRUE, FACTION_ID_RED, 20, 2, 14, 2, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 8, 14, 8, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1101RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1101RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1101RedUnits_Turn_3_5[] = {
    { EID_ENEMY_GENERIC, JID_ランスナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 14, 0, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 10, 14, 10, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1101RedUnits_Turn_3_5[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1101RedUnits_Turn_3_5)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1102RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ティアマト, 0, TRUE, FACTION_ID_RED, 20, 0, 12, 0, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ミスト, 0, TRUE, FACTION_ID_RED, 20, 2, 14, 2, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 10, 12, 10, 12, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 20, 10, 10, 10, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 20, 0, 14, 0, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1102RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1102RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1103RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ティアマト, 0, TRUE, FACTION_ID_RED, 20, 6, 8, 6, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ブルーノ, JID_ブルーノ, 0, TRUE, FACTION_ID_RED, 20, 6, 10, 6, 10, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_セネリオ, 0, TRUE, FACTION_ID_RED, 20, 10, 8, 10, 8, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ミスト, 0, TRUE, FACTION_ID_RED, 20, 8, 10, 8, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 20, 10, 0, 10, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス, 0, TRUE, FACTION_ID_RED, 20, 0, 12, 0, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1103RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1103RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1103RedUnits_Turn_4_6[] = {
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 20, 10, 12, 10, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス, 0, TRUE, FACTION_ID_RED, 20, 0, 14, 0, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1103RedUnits_Turn_4_6[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1103RedUnits_Turn_4_6)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1104RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_アイク, 0, TRUE, FACTION_ID_RED, 20, 4, 14, 4, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ティアマト, 0, TRUE, FACTION_ID_RED, 20, 0, 0, 0, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_セネリオ, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーナイト, 0, TRUE, FACTION_ID_RED, 20, 6, 14, 6, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1104RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1104RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1104RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 10, 0, 10, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1104RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1104RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1104RedUnits_Turn_4_5[] = {
    { EID_ENEMY_GENERIC, JID_ランスナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 14, 0, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 14, 10, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1104RedUnits_Turn_4_5[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1104RedUnits_Turn_4_5)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1104RedUnits_Turn_4_4[] = {
    { EID_ENEMY_GENERIC, JID_アクスペガサス, 0, TRUE, FACTION_ID_RED, 20, 0, 0, 0, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1104RedUnits_Turn_4_4[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1104RedUnits_Turn_4_4)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1104RedUnits_Turn_6_6[] = {
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 0, 10, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ, 0, TRUE, FACTION_ID_RED, 20, 0, 0, 0, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1104RedUnits_Turn_6_6[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1104RedUnits_Turn_6_6)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1105RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_アイク, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ミスト, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ティアマト, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_4, JID_セネリオ, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1105RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1105RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1201RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_セリカ, 0, TRUE, FACTION_ID_RED, 20, 10, 10, 10, 10, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ジェニー, 0, TRUE, FACTION_ID_RED, 20, 10, 12, 10, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター, 0, TRUE, FACTION_ID_RED, 20, 6, 14, 6, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 4, 12, 4, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_エスト, 0, TRUE, FACTION_ID_RED, 20, 0, 14, 0, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1201RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1201RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1202RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_メイ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ボーイ, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1202RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1202RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1203RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_セリカ, 0, TRUE, FACTION_ID_RED, 20, 0, 14, 0, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_メイ, 0, TRUE, FACTION_ID_RED, 20, 4, 12, 4, 12, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ジェニー, 0, TRUE, FACTION_ID_RED, 20, 2, 12, 2, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_4, JID_パオラ, 0, TRUE, FACTION_ID_RED, 20, 8, 14, 8, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 10, 0, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1203RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1203RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1203RedUnits_Turn_2_2[] = {
    { EID_ENEMY_GENERIC, JID_アクスペガサス, 0, TRUE, FACTION_ID_RED, 20, 0, 14, 0, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1203RedUnits_Turn_2_2[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1203RedUnits_Turn_2_2)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1203RedUnits_Turn_3_3[] = {
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 10, 0, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 0, 12, 0, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1203RedUnits_Turn_3_3[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1203RedUnits_Turn_3_3)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1203RedUnits_Turn_4_4[] = {
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 2, 14, 2, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1203RedUnits_Turn_4_4[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1203RedUnits_Turn_4_4)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1204RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_メイ, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ボーイ, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ジェニー, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_4, JID_カチュア, 0, TRUE, FACTION_ID_RED, 20, 10, 6, 10, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1204RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1204RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1205RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_セリカ, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ボーイ, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_3, JID_メイ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_4, JID_ジェニー, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ブルーノ, JID_ブルーノ, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1205RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1205RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1301RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_デューテ, 0, TRUE, FACTION_ID_RED, 20, 8, 6, 8, 6, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス, 0, TRUE, FACTION_ID_RED, 20, 10, 6, 10, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 20, 0, 0, 0, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1301RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1301RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1302RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_セーバー, 0, TRUE, FACTION_ID_RED, 20, 10, 12, 10, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ソニア, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_3, JID_レオ, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 20, 6, 6, 6, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1302RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1302RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1303RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_クレーベ, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_マチルダ, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_グレイ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_4, JID_ロビン, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1303RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1303RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1304RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_セーバー, 0, TRUE, FACTION_ID_RED, 20, 2, 6, 2, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ソニア, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_3, JID_レオ, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 20, 0, 8, 0, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドナイト, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1304RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1304RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1305RedUnits[] = {
    { EID_ブルーノ, JID_ブルーノ, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_1, JID_グレイ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ロビン, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_クレーベ, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_4, JID_マチルダ, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_5, JID_ソニア, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1305RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1305RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1401RedUnits[] = {
    { EID_ブルーノ, JID_ブルーノ, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 10, 0, 10, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ, 0, TRUE, FACTION_ID_RED, 20, 0, 8, 0, 8, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター, 0, TRUE, FACTION_ID_RED, 20, 4, 6, 4, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1401RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1401RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1402RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_エリンシア, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ネフェニー, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスペガサス, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー, 0, TRUE, FACTION_ID_RED, 20, 10, 6, 10, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1402RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1402RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1403RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_オスカー, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ, 0, TRUE, FACTION_ID_RED, 20, 0, 0, 0, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター, 0, TRUE, FACTION_ID_RED, 20, 0, 8, 0, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスペガサス, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1403RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1403RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1403RedUnits_Turn_4_4[] = {
    { EID_ENEMY_HERO_2, JID_漆黒の騎士, 0, TRUE, FACTION_ID_RED, 20, 6, 6, 6, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1403RedUnits_Turn_4_4[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1403RedUnits_Turn_4_4)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1403RedUnits_Turn_3_3[] = {
    { EID_ENEMY_GENERIC, JID_アクスペガサス, 0, TRUE, FACTION_ID_RED, 20, 10, 14, 10, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 10, 0, 10, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1403RedUnits_Turn_3_3[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1403RedUnits_Turn_3_3)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1403RedUnits_Turn_2_2[] = {
    { EID_ENEMY_GENERIC, JID_ランスナイト, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1403RedUnits_Turn_2_2[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1403RedUnits_Turn_2_2)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1403RedUnits_Turn_5_5[] = {
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 0, 0, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 0, 10, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1403RedUnits_Turn_5_5[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1403RedUnits_Turn_5_5)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1403RedUnits_Turn_6_6[] = {
    { EID_ENEMY_GENERIC, JID_グリーンマージ, 0, TRUE, FACTION_ID_RED, 20, 2, 8, 2, 8, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1403RedUnits_Turn_6_6[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1403RedUnits_Turn_6_6)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1404RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ネフェニー, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_オスカー, 0, TRUE, FACTION_ID_RED, 20, 0, 8, 0, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 2, 6, 2, 6, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスペガサス, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_エリンシア, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1404RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1404RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1405RedUnits[] = {
    { EID_ブルーノ, JID_ブルーノ, 0, TRUE, FACTION_ID_RED, 20, 0, 0, 0, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_1, JID_エリンシア, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_漆黒の騎士, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_総選挙アイク, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_4, JID_オスカー, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1405RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1405RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1501RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_アルム, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ユリア, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ゼロ, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_4, JID_ネフェニー, 0, TRUE, FACTION_ID_RED, 20, 10, 6, 10, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1501RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1501RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S1601RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_セリス, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_リンダ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_3, JID_マリク, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_4, JID_ユリア, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_5, JID_エリウッド, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S1601RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S1601RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2011RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_アクスドラゴン, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2011RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2011RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2012RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2012RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2012RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2013RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2013RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2013RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2014RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ランスドラゴン, 0, TRUE, FACTION_ID_RED, 20, 0, 0, 0, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター, 0, TRUE, FACTION_ID_RED, 20, 10, 6, 10, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2014RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2014RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2015RedUnits[] = {
    { EID_ロキ, JID_ロキ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2015RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2015RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2021RedUnits[] = {
    { EID_ヴェロニカ, JID_ヴェロニカ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 10, 8, 10, 8, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター, 0, TRUE, FACTION_ID_RED, 20, 10, 14, 10, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2021RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2021RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2022RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_シノノメ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_シャラ, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 0, 0, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2022RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2022RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2023RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ジークベルト, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ソレイユ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2023RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2023RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2024RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_シノノメ, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ジークベルト, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2024RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2024RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2025RedUnits[] = {
    { EID_スルト, JID_スルト, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ロキ, JID_ロキ, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_レーヴァテイン, JID_レーヴァテイン, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーマムクート, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2025RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2025RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2025RedUnits_Turn_2_2[] = {
    { EID_ENEMY_GENERIC, JID_アクスドラゴン, 0, TRUE, FACTION_ID_RED, 20, 10, 14, 10, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2025RedUnits_Turn_2_2[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2025RedUnits_Turn_2_2)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2025RedUnits_Turn_3_3[] = {
    { EID_ENEMY_GENERIC, JID_ランスナイト, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2025RedUnits_Turn_3_3[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2025RedUnits_Turn_3_3)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2025RedUnits_Turn_4_4[] = {
    { EID_ENEMY_GENERIC, JID_ソードドラゴン, 0, TRUE, FACTION_ID_RED, 20, 0, 0, 0, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンマムクート, 0, TRUE, FACTION_ID_RED, 20, 10, 0, 10, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2025RedUnits_Turn_4_4[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2025RedUnits_Turn_4_4)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2031RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_サザ, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2031RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2031RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2032RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_サザ, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ミカヤ, 0, TRUE, FACTION_ID_RED, 20, 10, 10, 10, 10, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスペガサス, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー, 0, TRUE, FACTION_ID_RED, 20, 8, 12, 8, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2032RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2032RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2033RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_オリヴァー, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンマムクート, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター, 0, TRUE, FACTION_ID_RED, 20, 10, 6, 10, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2033RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2033RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2034RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_サザ, 0, TRUE, FACTION_ID_RED, 20, 0, 12, 0, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ミカヤ, 0, TRUE, FACTION_ID_RED, 20, 4, 14, 4, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ゼルギウス, 0, TRUE, FACTION_ID_RED, 20, 6, 14, 6, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン, 0, TRUE, FACTION_ID_RED, 20, 10, 14, 10, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2034RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2034RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2035RedUnits[] = {
    { EID_レーヴァテイン, JID_レーヴァテイン, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーマムクート, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2035RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2035RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2041RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_エイリーク2, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスファイター, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン, 0, TRUE, FACTION_ID_RED, 20, 10, 6, 10, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2041RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2041RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2042RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_マリカ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2042RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2042RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2043RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_エイリーク2, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ラーチェル, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー, 0, TRUE, FACTION_ID_RED, 20, 8, 6, 8, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2043RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2043RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2044RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ミルラ, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーマムクート, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2044RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2044RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2045RedUnits[] = {
    { EID_ロキ, JID_ロキ, 0, TRUE, FACTION_ID_RED, 20, 4, 14, 4, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_レーヴァテイン, JID_レーヴァテイン, 0, TRUE, FACTION_ID_RED, 20, 6, 14, 6, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト, 0, TRUE, FACTION_ID_RED, 20, 8, 14, 8, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードドラゴン, 0, TRUE, FACTION_ID_RED, 20, 2, 14, 2, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2045RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2045RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2045RedUnits_Turn_2_2[] = {
    { EID_ENEMY_GENERIC, JID_グリーンマージ, 0, TRUE, FACTION_ID_RED, 20, 0, 14, 0, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2045RedUnits_Turn_2_2[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2045RedUnits_Turn_2_2)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2045RedUnits_Turn_3_3[] = {
    { EID_ENEMY_GENERIC, JID_ランスナイト, 0, TRUE, FACTION_ID_RED, 20, 2, 14, 2, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 14, 10, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2045RedUnits_Turn_3_3[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2045RedUnits_Turn_3_3)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2045RedUnits_Turn_4_4[] = {
    { EID_スルト, JID_スルト, 0, TRUE, FACTION_ID_RED, 20, 4, 14, 4, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー, 0, TRUE, FACTION_ID_RED, 20, 2, 14, 2, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2045RedUnits_Turn_4_4[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2045RedUnits_Turn_4_4)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2051RedUnits[] = {
    { EID_レーヴァテイン, JID_レーヴァテイン, 0, TRUE, FACTION_ID_RED, 20, 4, 14, 4, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンナイト, 0, TRUE, FACTION_ID_RED, 20, 8, 14, 8, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードドラゴン, 0, TRUE, FACTION_ID_RED, 20, 10, 12, 10, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 6, 14, 6, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2051RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2051RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2052RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_魔女セリカ, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 10, 6, 10, 6, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2052RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2052RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2052RedUnits_Turn_2_2[] = {
    { EID_ENEMY_GENERIC, JID_アクスナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 14, 10, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2052RedUnits_Turn_2_2[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2052RedUnits_Turn_2_2)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2052RedUnits_Turn_3_3[] = {
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 0, 14, 0, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2052RedUnits_Turn_3_3[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2052RedUnits_Turn_3_3)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2052RedUnits_Turn_4_4[] = {
    { EID_ENEMY_GENERIC, JID_アクスペガサス, 0, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 14, 0, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2052RedUnits_Turn_4_4[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2052RedUnits_Turn_4_4)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2052RedUnits_Turn_5_5[] = {
    { EID_ENEMY_GENERIC, JID_レッドナイト, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 14, 10, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2052RedUnits_Turn_5_5[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2052RedUnits_Turn_5_5)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2053RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_邪竜ルフレ男, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーマムクート, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2053RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2053RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2054RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_暗黒ハーディン, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2054RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2054RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2055RedUnits[] = {
    { EID_レーギャルン, JID_レーギャルン, 0, TRUE, FACTION_ID_RED, 20, 4, 14, 4, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_レーヴァテイン, JID_レーヴァテイン, 0, TRUE, FACTION_ID_RED, 20, 6, 12, 6, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_暗黒ハーディン, 0, TRUE, FACTION_ID_RED, 20, 6, 10, 6, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_邪竜ルフレ男, 0, TRUE, FACTION_ID_RED, 20, 4, 10, 4, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンナイト, 0, TRUE, FACTION_ID_RED, 20, 8, 14, 8, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2055RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2055RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2061RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_マーク女, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 2, 14, 2, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 8, 14, 8, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2061RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2061RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2062RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_クロム2, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 2, 14, 2, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンマムクート, 0, TRUE, FACTION_ID_RED, 20, 0, 8, 0, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2062RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2062RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2063RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_マーク女, 0, TRUE, FACTION_ID_RED, 20, 6, 14, 6, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ジェローム, 0, TRUE, FACTION_ID_RED, 20, 2, 12, 2, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードドラゴン, 0, TRUE, FACTION_ID_RED, 20, 4, 14, 4, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 20, 0, 10, 0, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2063RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2063RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2064RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_マーク男, 0, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー, 0, TRUE, FACTION_ID_RED, 20, 2, 10, 2, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーマムクート, 0, TRUE, FACTION_ID_RED, 20, 0, 10, 0, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2064RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2064RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2065RedUnits[] = {
    { EID_レーギャルン, JID_レーギャルン, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_クロム2, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ジェローム, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_マーク女, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2065RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2065RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2071RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_フィン, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2071RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2071RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2072RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ラインハルト2, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ナンナ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2072RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2072RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2073RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_リーフ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ナンナ, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_フィン, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンマムクート, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2073RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2073RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2074RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ラインハルト2, 0, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_オルエン2, 0, TRUE, FACTION_ID_RED, 20, 4, 14, 4, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト, 0, TRUE, FACTION_ID_RED, 20, 2, 14, 2, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト, 0, TRUE, FACTION_ID_RED, 20, 2, 10, 2, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2074RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2074RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2075RedUnits[] = {
    { EID_スルト, JID_スルト, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 2, 8, 2, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_リーフ, 0, TRUE, FACTION_ID_RED, 20, 6, 12, 6, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ナンナ, 0, TRUE, FACTION_ID_RED, 20, 10, 10, 10, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン, 0, TRUE, FACTION_ID_RED, 20, 2, 14, 2, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2075RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2075RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2075RedUnits_Turn_3_3[] = {
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 8, 14, 8, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2075RedUnits_Turn_3_3[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2075RedUnits_Turn_3_3)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2075RedUnits_Turn_2_2[] = {
    { EID_ENEMY_HERO_3, JID_ラインハルト2, 0, TRUE, FACTION_ID_RED, 20, 0, 12, 0, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2075RedUnits_Turn_2_2[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2075RedUnits_Turn_2_2)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2075RedUnits_Turn_4_4[] = {
    { EID_ENEMY_HERO_4, JID_フィン, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン, 0, TRUE, FACTION_ID_RED, 20, 4, 14, 4, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2075RedUnits_Turn_4_4[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2075RedUnits_Turn_4_4)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2075RedUnits_Turn_5_5[] = {
    { EID_ENEMY_HERO_5, JID_オルエン2, 0, TRUE, FACTION_ID_RED, 20, 10, 14, 10, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2075RedUnits_Turn_5_5[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2075RedUnits_Turn_5_5)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2081RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_カンナ女, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2081RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2081RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2082RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_スズカゼ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ, 0, TRUE, FACTION_ID_RED, 20, 10, 6, 10, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーナイト, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2082RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2082RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2083RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ヒノカ2, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_シグレ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2083RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2083RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2084RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_カンナ女, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_カンナ男, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 0, 0, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2084RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2084RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2085RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_カンナ女, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_カンナ男, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ヒノカ2, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_4, JID_シグレ, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_5, JID_スズカゼ, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2085RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2085RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2091RedUnits[] = {
    { EID_ヘルビンディ, JID_ヘルビンディ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーマムクート, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 10, 0, 10, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2091RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2091RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2092RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_アレス, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ロッドナイト, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2092RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2092RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2093RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_イシュタル, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 0, 8, 0, 8, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2093RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2093RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2094RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_アレス, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンナイト, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンマムクート, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_リーン, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2094RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2094RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2095RedUnits[] = {
    { EID_ヘルビンディ, JID_ヘルビンディ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_リーン, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_イシュタル, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2095RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2095RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2095RedUnits_Turn_3_3[] = {
    { EID_ENEMY_HERO_3, JID_アレス, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2095RedUnits_Turn_3_3[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2095RedUnits_Turn_3_3)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2095RedUnits_Turn_2_2[] = {
    { EID_ENEMY_GENERIC, JID_グリーンマージ, 0, TRUE, FACTION_ID_RED, 20, 0, 0, 0, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2095RedUnits_Turn_2_2[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2095RedUnits_Turn_2_2)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2095RedUnits_Turn_4_4[] = {
    { EID_ENEMY_GENERIC, JID_ランスナイト, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2095RedUnits_Turn_4_4[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2095RedUnits_Turn_4_4)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2101RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ラガルト, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2101RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2101RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2102RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_カナス, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー, 0, TRUE, FACTION_ID_RED, 20, 4, 6, 4, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンナイト, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスドラゴン, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2102RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2102RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2103RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ニノ2, 0, TRUE, FACTION_ID_RED, 20, 0, 8, 0, 8, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ライナス, 0, TRUE, FACTION_ID_RED, 20, 2, 6, 2, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ロイド, 0, TRUE, FACTION_ID_RED, 20, 2, 8, 2, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 4, 14, 4, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 20, 4, 12, 4, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2103RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2103RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2104RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_カアラ, 0, TRUE, FACTION_ID_RED, 20, 4, 12, 4, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン, 0, TRUE, FACTION_ID_RED, 20, 0, 10, 0, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 4, 14, 4, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ロッドナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 12, 10, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンマムクート, 0, TRUE, FACTION_ID_RED, 20, 6, 12, 6, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2104RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2104RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2105RedUnits[] = {
    { EID_スルト, JID_スルト, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ラガルト, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ニノ2, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ウルスラ, 0, TRUE, FACTION_ID_RED, 20, 0, 0, 0, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_4, JID_カナス, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2105RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2105RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2105RedUnits[] = {
    { EID_ENEMY_HERO_5, JID_ジャファル, 0, TRUE, FACTION_ID_RED, 20, 10, 14, 10, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_6, JID_ライナス, 0, TRUE, FACTION_ID_RED, 20, 6, 14, 6, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_7, JID_ロイド, 0, TRUE, FACTION_ID_RED, 20, 4, 14, 4, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2105RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2105RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2111RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 8, 8, 8, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ, 0, TRUE, FACTION_ID_RED, 20, 10, 6, 10, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2111RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2111RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2112RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_スミア, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2112RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2112RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2113RedUnits[] = {
    { EID_ヘルビンディ, JID_ヘルビンディ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_マリアベル, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスファイター, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2113RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2113RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2114RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_オリヴィエ2, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_リベラ, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー, 0, TRUE, FACTION_ID_RED, 20, 0, 12, 0, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2114RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2114RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2115RedUnits[] = {
    { EID_レーヴァテイン, JID_レーヴァテイン, 0, TRUE, FACTION_ID_RED, 20, 4, 12, 4, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_レーギャルン, JID_レーギャルン, 0, TRUE, FACTION_ID_RED, 20, 6, 12, 6, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_マリアベル, 0, TRUE, FACTION_ID_RED, 20, 2, 14, 2, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_リベラ, 0, TRUE, FACTION_ID_RED, 20, 10, 12, 10, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_スミア, 0, TRUE, FACTION_ID_RED, 20, 8, 10, 8, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2115RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2115RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2121RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ジャムカ, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_キュアン, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードドラゴン, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2121RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2121RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2122RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_キュアン, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_エスリン, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ, 0, TRUE, FACTION_ID_RED, 20, 0, 0, 0, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2122RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2122RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2123RedUnits[] = {
    { EID_ヘルビンディ, JID_ヘルビンディ, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ジャムカ, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスファイター, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 0, 0, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2123RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2123RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2124RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_レヴィン, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_シルヴィア, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2124RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2124RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2125RedUnits[] = {
    { EID_ロキ, JID_ロキ, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_シルヴィア, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスドラゴン, 0, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_レヴィン, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2125RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2125RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2125RedUnits[] = {
    { EID_ENEMY_HERO_3, JID_キュアン, 0, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_4, JID_エスリン, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_5, JID_ジャムカ, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2125RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2125RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2131RedUnits[] = {
    { EID_レーギャルン, JID_レーギャルン, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_サイラス, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2131RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2131RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2132RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_エポニーヌ, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーナイト, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2132RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2132RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2133RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_オフェリア, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドナイト, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_フローラ, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2133RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2133RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2134RedUnits[] = {
    { EID_レーヴァテイン, JID_レーヴァテイン, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_オフェリア, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_エポニーヌ, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2134RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2134RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2135RedUnits[] = {
    { EID_スルト, JID_スルト, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_サイラス, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_フローラ, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンマムクート, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2135RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2135RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2135RedUnits_Turn_2_2[] = {
    { EID_ENEMY_GENERIC, JID_ブルーナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 14, 0, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター, 0, TRUE, FACTION_ID_RED, 20, 6, 14, 6, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2135RedUnits_Turn_2_2[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2135RedUnits_Turn_2_2)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S2135RedUnits_Turn_3_3[] = {
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S2135RedUnits_Turn_3_3[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S2135RedUnits_Turn_3_3)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3011RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ランスファイター, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン, 0, TRUE, FACTION_ID_RED, 20, 10, 12, 10, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドペガサス, 0, TRUE, FACTION_ID_RED, 20, 0, 14, 0, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3011RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3011RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3012RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_グリーンシーフ, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドボウ, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 6, 6, 6, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3012RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3012RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3013RedUnits[] = {
    { EID_リーヴ, JID_リーヴ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスファイター, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー, 0, TRUE, FACTION_ID_RED, 20, 2, 6, 2, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3013RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3013RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3014RedUnits[] = {
    { EID_スラシル, JID_スラシル, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3014RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3014RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3015RedUnits[] = {
    { PID_神階エイル, JID_神階エイル, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 14, 10, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンファヴニル, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 10, 10, 10, 10, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3015RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3015RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3021RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 20, 10, 10, 10, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドペガサス, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 14, 10, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3021RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3021RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3022RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_グルンマムクート, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 10, 8, 10, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター, 0, TRUE, FACTION_ID_RED, 20, 8, 12, 8, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスドラゴン, 0, TRUE, FACTION_ID_RED, 20, 4, 14, 4, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3022RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3022RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3023RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 2, 12, 2, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト, 0, TRUE, FACTION_ID_RED, 20, 4, 14, 4, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト, 0, TRUE, FACTION_ID_RED, 20, 6, 14, 6, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 10, 10, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3023RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3023RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3024RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 6, 14, 6, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーシーフ, 0, TRUE, FACTION_ID_RED, 20, 8, 12, 8, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3024RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3024RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3025RedUnits[] = {
    { EID_スラシル, JID_スラシル, 0, TRUE, FACTION_ID_RED, 20, 4, 14, 4, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト, 0, TRUE, FACTION_ID_RED, 20, 8, 14, 8, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 2, 12, 2, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアファヴニル, 0, TRUE, FACTION_ID_RED, 20, 6, 14, 6, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3025RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3025RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3025RedUnits_Turn_2_2[] = {
    { EID_ENEMY_GENERIC, JID_ロッドナイト, 0, TRUE, FACTION_ID_RED, 20, 2, 14, 2, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3025RedUnits_Turn_2_2[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3025RedUnits_Turn_2_2)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3025RedUnits_Turn_3_3[] = {
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 8, 14, 8, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3025RedUnits_Turn_3_3[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3025RedUnits_Turn_3_3)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3025RedUnits_Turn_4_4[] = {
    { EID_ENEMY_GENERIC, JID_ブルーペガサス, 0, TRUE, FACTION_ID_RED, 20, 4, 14, 4, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3025RedUnits_Turn_4_4[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3025RedUnits_Turn_4_4)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3031RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_リュシオン, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_リアーネ, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3031RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3031RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3032RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ネサラ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_リアーネ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3032RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3032RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3033RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ニケ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3033RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3033RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3034RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ティバーン, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_リュシオン, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 2, 8, 2, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3034RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3034RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3035RedUnits[] = {
    { EID_ヘル, JID_ヘル, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_リアーネ, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ティバーン, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ニケ, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3035RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3035RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3041RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ベルベット, 0, TRUE, FACTION_ID_RED, 20, 8, 12, 8, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 10, 10, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンファヴニル, 0, TRUE, FACTION_ID_RED, 20, 8, 10, 8, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 6, 14, 6, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3041RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3041RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3042RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_キヌ, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ニシキ, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート, 0, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3042RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3042RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3043RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ベロア, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_フランネル, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーボウ, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3043RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3043RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3044RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ベロア, 0, TRUE, FACTION_ID_RED, 20, 4, 12, 4, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_キヌ, 0, TRUE, FACTION_ID_RED, 20, 6, 12, 6, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドボウ, 0, TRUE, FACTION_ID_RED, 20, 8, 14, 8, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ, 0, TRUE, FACTION_ID_RED, 20, 2, 14, 2, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3044RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3044RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3045RedUnits[] = {
    { EID_リーヴ, JID_リーヴ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ニシキ, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_フランネル, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ベルベット, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3045RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3045RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3051RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ルゥ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3051RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3051RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3052RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ティト, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンペガサス, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウペガサス, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3052RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3052RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3053RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ルトガー, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_スー, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3053RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3053RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3054RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_イドゥン, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーマムクート, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンファヴニル, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアファヴニル, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3054RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3054RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3055RedUnits[] = {
    { EID_グスタフ, JID_グスタフ, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_スー, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ティト, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3055RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3055RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3055RedUnits_Turn_2_2[] = {
    { EID_ENEMY_GENERIC, JID_ブルーナイト, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ルトガー, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3055RedUnits_Turn_2_2[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3055RedUnits_Turn_2_2)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3055RedUnits_Turn_3_3[] = {
    { EID_ENEMY_GENERIC, JID_ボウペガサス, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3055RedUnits_Turn_3_3[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3055RedUnits_Turn_3_3)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3061RedUnits[] = {
    { EID_リーヴ, JID_リーヴ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_レテ, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3061RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3061RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3062RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_モゥディ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ライ, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3062RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3062RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3063RedUnits[] = {
    { EID_ヘル, JID_ヘル, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスドラゴン, 0, TRUE, FACTION_ID_RED, 20, 10, 6, 10, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアファヴニル, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3063RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3063RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3064RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_カイネギス, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ライ, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウペガサス, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3064RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3064RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3065RedUnits[] = {
    { EID_リーヴ, JID_リーヴ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_スラシル, JID_スラシル, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_1, JID_モゥディ, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_レテ, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3065RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3065RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3071RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 20, 10, 6, 10, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_1, JID_魔剣マリータ, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3071RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3071RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3072RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_暴走カムイ女, 0, TRUE, FACTION_ID_RED, 20, 10, 6, 10, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 10, 14, 10, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3072RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3072RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3073RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_魔剣マリータ, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_催眠チキ, 0, TRUE, FACTION_ID_RED, 20, 4, 14, 4, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 10, 0, 10, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 0, 0, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3073RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3073RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3074RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_闇ベルクト, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドナイト, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー, 0, TRUE, FACTION_ID_RED, 20, 2, 8, 2, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3074RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3074RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3075RedUnits[] = {
    { EID_リーヴ, JID_リーヴ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_暴走カムイ女, 0, TRUE, FACTION_ID_RED, 20, 10, 6, 10, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_催眠チキ, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_闇ベルクト, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_4, JID_魔剣マリータ, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3075RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3075RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3081RedUnits[] = {
    { EID_スラシル, JID_スラシル, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_1, JID_シンシア, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3081RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3081RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3082RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ブレディ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_シャンブレー, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3082RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3082RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3083RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_デジェル, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスドラゴン, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3083RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3083RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3084RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ンン, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_シンシア, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーマムクート, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスペガサス, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3084RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3084RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3085RedUnits[] = {
    { EID_リーヴ, JID_リーヴ, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ンン, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_デジェル, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ブレディ, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_4, JID_シャンブレー, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3085RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3085RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3091RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ベレス, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウペガサス, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3091RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3091RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3092RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ディミトリ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター, 0, TRUE, FACTION_ID_RED, 20, 2, 6, 2, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 0, 0, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3092RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3092RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3093RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_クロード, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 0, 10, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3093RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3093RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3094RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_エーデルガルト, 0, TRUE, FACTION_ID_RED, 20, 10, 6, 10, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーペガサス, 0, TRUE, FACTION_ID_RED, 20, 10, 12, 10, 12, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードドラゴン, 0, TRUE, FACTION_ID_RED, 20, 6, 14, 6, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3094RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3094RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3095RedUnits[] = {
    { EID_リーヴ, JID_リーヴ, 0, TRUE, FACTION_ID_RED, 20, 2, 10, 2, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ベレス, 0, TRUE, FACTION_ID_RED, 20, 6, 14, 6, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ディミトリ, 0, TRUE, FACTION_ID_RED, 20, 0, 10, 0, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_エーデルガルト, 0, TRUE, FACTION_ID_RED, 20, 10, 8, 10, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_4, JID_クロード, 0, TRUE, FACTION_ID_RED, 20, 10, 14, 10, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3095RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3095RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3101RedUnits[] = {
    { EID_スラシル, JID_スラシル, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ペトラ, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウペガサス, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3101RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3101RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3102RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ヒルダ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 0, 0, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアファヴニル, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_メルセデス, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3102RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3102RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3103RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ヒューベルト, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ペトラ, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンペガサス, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3103RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3103RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3104RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_死神騎士, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンマムクート, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3104RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3104RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3105RedUnits[] = {
    { EID_スラシル, JID_スラシル, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ペトラ, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ヒルダ, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_メルセデス, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3105RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3105RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3105RedUnits_Turn_2_2[] = {
    { EID_ENEMY_HERO_4, JID_ヒューベルト, 0, TRUE, FACTION_ID_RED, 20, 0, 12, 0, 12, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_5, JID_死神騎士, 0, TRUE, FACTION_ID_RED, 20, 6, 14, 6, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 20, 0, 10, 0, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3105RedUnits_Turn_2_2[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3105RedUnits_Turn_2_2)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3111RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ノルン, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_フィーナ, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーナイト, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3111RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3111RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3112RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_シリウス, 0, TRUE, FACTION_ID_RED, 20, 10, 8, 10, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンファヴニル, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3112RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3112RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3113RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_アストリア, 0, TRUE, FACTION_ID_RED, 20, 2, 12, 2, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_フィーナ, 0, TRUE, FACTION_ID_RED, 20, 4, 10, 4, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ロッドナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 14, 0, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーボウ, 0, TRUE, FACTION_ID_RED, 20, 4, 14, 4, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンシーフ, 0, TRUE, FACTION_ID_RED, 20, 6, 14, 6, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3113RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3113RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3114RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_バヌトゥ, 0, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ナギ, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3114RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3114RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3115RedUnits[] = {
    { EID_リーヴ, JID_リーヴ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ノルン, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_フィーナ, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ナギ, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_4, JID_シリウス, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3115RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3115RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3121RedUnits[] = {
    { EID_リーヴ, JID_リーヴ, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_バルボ, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスドラゴン, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3121RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3121RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3122RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_バルボ, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_シルク, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 0, 10, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3122RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3122RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3123RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_フォルス, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_パイソン, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_シルク, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3123RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3123RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3124RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_外伝カチュア, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_コンラート, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンマムクート, 0, TRUE, FACTION_ID_RED, 20, 2, 6, 2, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3124RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3124RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3125RedUnits[] = {
    { EID_リーヴ, JID_リーヴ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_外伝カチュア, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_フォルス, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_パイソン, 0, TRUE, FACTION_ID_RED, 20, 10, 0, 10, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_4, JID_シルク, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3125RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3125RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3125RedUnits_Turn_2_2[] = {
    { EID_ENEMY_HERO_5, JID_バルボ, 0, TRUE, FACTION_ID_RED, 20, 2, 14, 2, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_6, JID_コンラート, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_7, JID_レオ, 0, TRUE, FACTION_ID_RED, 20, 0, 14, 0, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3125RedUnits_Turn_2_2[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3125RedUnits_Turn_2_2)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3131RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ロス, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ユアン, 0, TRUE, FACTION_ID_RED, 20, 10, 6, 10, 6, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 10, 10, 10, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3131RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3131RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3132RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ジスト, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_テティス, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3132RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3132RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3133RedUnits[] = {
    { EID_リーヴ, JID_リーヴ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_スラシル, JID_スラシル, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 0, 0, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスドラゴン, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3133RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3133RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3134RedUnits[] = {
    { EID_ヘル, JID_ヘル, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_比翼エフラム, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーペガサス, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3134RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3134RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3135RedUnits[] = {
    { EID_ヘル, JID_ヘル, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_比翼エフラム, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ジスト, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_テティス, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドペガサス, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3135RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3135RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3135RedUnits_Turn_2_2[] = {
    { EID_ENEMY_HERO_4, JID_クーガー, 0, TRUE, FACTION_ID_RED, 20, 0, 8, 0, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3135RedUnits_Turn_2_2[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3135RedUnits_Turn_2_2)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S3135RedUnits_Turn_3_3[] = {
    { EID_ENEMY_GENERIC, JID_ラウアファヴニル, 0, TRUE, FACTION_ID_RED, 20, 10, 14, 10, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S3135RedUnits_Turn_3_3[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S3135RedUnits_Turn_3_3)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4011RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_レッドシーフ, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ロキ, JID_ロキ, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4011RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4011RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4012RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ブルーペガサス, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー, 0, TRUE, FACTION_ID_RED, 20, 8, 6, 8, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 20, 8, 10, 8, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4012RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4012RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4013RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 8, 0, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4013RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4013RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4014RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ラウアファヴニル, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーボウ, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4014RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4014RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4015RedUnits[] = {
    { EID_ブルーノ, JID_ブルーノ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ヴェロニカ, JID_ヴェロニカ, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4015RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4015RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4021RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_タニア, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_オーシン, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスファイター, 0, TRUE, FACTION_ID_RED, 20, 10, 6, 10, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター, 0, TRUE, FACTION_ID_RED, 20, 10, 10, 10, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4021RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4021RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4022RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ケンプフ, 0, TRUE, FACTION_ID_RED, 20, 0, 0, 0, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンボウ, 0, TRUE, FACTION_ID_RED, 20, 0, 14, 0, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 10, 14, 10, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4022RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4022RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4023RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_マリータ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4023RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4023RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4024RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_エーヴェル, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_オーシン, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_タニア, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4024RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4024RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4025RedUnits[] = {
    { EID_スカビオサ, JID_スカビオサ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_1, JID_エーヴェル, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_マリータ, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4025RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4025RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4031RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_シャナン, 0, TRUE, FACTION_ID_RED, 20, 6, 10, 6, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 4, 14, 4, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンボウ, 0, TRUE, FACTION_ID_RED, 20, 10, 10, 10, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス, 0, TRUE, FACTION_ID_RED, 20, 2, 12, 2, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4031RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4031RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4032RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_アルテナ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードドラゴン, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4032RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4032RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4033RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ラクチェ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_シャナン, 0, TRUE, FACTION_ID_RED, 20, 6, 14, 6, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 20, 0, 14, 0, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4033RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4033RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4034RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_セティ, 0, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 4, 6, 4, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4034RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4034RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4035RedUnits[] = {
    { EID_プルメリア, JID_プルメリア, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_1, JID_アルテナ, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ラクチェ, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_セティ, 0, TRUE, FACTION_ID_RED, 20, 10, 0, 10, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4035RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4035RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4041RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ラス, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ヒース, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4041RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4041RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4042RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ニルス, 0, TRUE, FACTION_ID_RED, 20, 2, 14, 2, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート, 0, TRUE, FACTION_ID_RED, 20, 4, 14, 4, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 20, 8, 10, 8, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 10, 12, 10, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4042RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4042RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4043RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_フィオーラ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4043RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4043RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4044RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_レイラ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドボウ, 0, TRUE, FACTION_ID_RED, 20, 10, 14, 10, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ラス, 0, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーペガサス, 0, TRUE, FACTION_ID_RED, 20, 4, 14, 4, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4044RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4044RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4045RedUnits[] = {
    { EID_スカビオサ, JID_スカビオサ, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ニルス, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_フィオーラ, 0, TRUE, FACTION_ID_RED, 20, 10, 6, 10, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_レイラ, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4045RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4045RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4051RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードドラゴン, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_スルト, JID_スルト, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4051RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4051RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4052RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_アネット, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター, 0, TRUE, FACTION_ID_RED, 20, 2, 8, 2, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4052RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4052RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4053RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_リシテア, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 4, 6, 4, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー, 0, TRUE, FACTION_ID_RED, 20, 6, 6, 6, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ロッドナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4053RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4053RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4054RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_フェルディナント, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ベルナデッタ, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアファヴニル, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4054RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4054RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4055RedUnits[] = {
    { EID_ヘルビンディ, JID_ヘルビンディ, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_炎帝, 0, TRUE, FACTION_ID_RED, 20, 2, 6, 2, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_リシテア, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_3, JID_フェルディナント, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4055RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4055RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4061RedUnits[] = {
    { EID_ヴェロニカ, JID_ヴェロニカ, 0, TRUE, FACTION_ID_RED, 20, 8, 12, 8, 12, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル, 0, TRUE, FACTION_ID_RED, 20, 6, 14, 6, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー, 0, TRUE, FACTION_ID_RED, 20, 10, 8, 10, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 20, 4, 14, 4, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4061RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4061RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4062RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_リンカ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4062RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4062RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4063RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_リリス, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアファヴニル, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンマムクート, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4063RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4063RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4064RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_フォレオ, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ミドリコ, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスファイター, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスペガサス, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4064RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4064RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4065RedUnits[] = {
    { EID_ブルーノ, JID_ブルーノ, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { PID_マークス, JID_マークス, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_マクベス, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_フォレオ, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4065RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4065RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4071RedUnits[] = {
    { EID_スカビオサ, JID_スカビオサ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ヘル, JID_ヘル, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーマムクート, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4071RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4071RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4072RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_催眠ユリア, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスファイター, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスペガサス, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードドラゴン, 0, TRUE, FACTION_ID_RED, 20, 10, 12, 10, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4072RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4072RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4073RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_魔王リオン, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーペガサス, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ロッドナイト, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドボウ, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4073RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4073RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4074RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_暴走アイク, 0, TRUE, FACTION_ID_RED, 20, 6, 10, 6, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーナイト, 0, TRUE, FACTION_ID_RED, 20, 2, 14, 2, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト, 0, TRUE, FACTION_ID_RED, 20, 8, 10, 8, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 10, 10, 10, 10, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4074RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4074RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4075RedUnits[] = {
    { EID_スカビオサ, JID_スカビオサ, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_1, JID_暴走アイク, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_暴走カムイ男, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_催眠ユリア, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4075RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4075RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4081RedUnits[] = {
    { EID_プルメリア, JID_プルメリア, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_1, JID_エメリナ, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンペガサス, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4081RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4081RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4082RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_覚醒アンナ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_エメリナ, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスペガサス, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4082RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4082RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4083RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_サイリ, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ロッドナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 20, 8, 6, 8, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスドラゴン, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4083RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4083RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4084RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ギャンレル, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ムスタファー, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアファヴニル, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4084RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4084RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4085RedUnits[] = {
    { EID_プルメリア, JID_プルメリア, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ギャンレル, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_サイリ, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_覚醒アンナ, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_4, JID_ムスタファー, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4085RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4085RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4091RedUnits[] = {
    { EID_スカビオサ, JID_スカビオサ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_1, JID_クリス男, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4091RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4091RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4092RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ジュリアン, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_レナ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 2, 8, 2, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4092RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4092RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4093RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_クリス女, 0, TRUE, FACTION_ID_RED, 20, 4, 6, 4, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンシーフ, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4093RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4093RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4094RedUnits[] = {
    { EID_スカビオサ, JID_スカビオサ, 0, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_1, JID_エレミヤ, 0, TRUE, FACTION_ID_RED, 20, 0, 10, 0, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 20, 4, 12, 4, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4094RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4094RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4095RedUnits[] = {
    { EID_フレイヤ, JID_フレイヤ, 0, TRUE, FACTION_ID_RED, 20, 0, 14, 0, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_フレイヤ, JID_フレイヤ, 0, TRUE, FACTION_ID_RED, 20, 10, 14, 10, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_フレイヤ, JID_フレイヤ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_クリス男, 0, TRUE, FACTION_ID_RED, 20, 2, 12, 2, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_クリス女, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4095RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4095RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4095RedUnits[] = {
    { EID_フレイヤ, JID_フレイヤ, 0, TRUE, FACTION_ID_RED, 20, 0, 0, 0, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_フレイヤ, JID_フレイヤ, 0, TRUE, FACTION_ID_RED, 20, 10, 0, 10, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_フレイヤ, JID_フレイヤ, 0, TRUE, FACTION_ID_RED, 20, 4, 14, 4, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_フレイヤ, JID_フレイヤ, 0, TRUE, FACTION_ID_RED, 20, 0, 14, 0, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_フレイヤ, JID_フレイヤ, 0, TRUE, FACTION_ID_RED, 20, 10, 14, 10, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_フレイヤ, JID_フレイヤ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4095RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4095RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4095RedUnits_Turn_2_2[] = {
    { EID_ENEMY_HERO_3, JID_エレミヤ, 0, TRUE, FACTION_ID_RED, 20, 8, 14, 8, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4095RedUnits_Turn_2_2[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4095RedUnits_Turn_2_2)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4095RedUnits_Turn_3_3[] = {
    { EID_ENEMY_HERO_4, JID_レナ, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4095RedUnits_Turn_3_3[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4095RedUnits_Turn_3_3)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4095RedUnits_Turn_4_4[] = {
    { EID_ENEMY_HERO_5, JID_ジュリアン, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4095RedUnits_Turn_4_4[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4095RedUnits_Turn_4_4)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4101RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_総選挙リシテア, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン, 0, TRUE, FACTION_ID_RED, 20, 2, 6, 2, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4101RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4101RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4102RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_総選挙ディミトリ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウペガサス, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4102RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4102RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4103RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_総選挙クロード, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 0, 10, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4103RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4103RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4104RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_総選挙エーデル, 0, TRUE, FACTION_ID_RED, 20, 8, 8, 8, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 10, 10, 10, 10, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 6, 6, 6, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 12, 10, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードドラゴン, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4104RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4104RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4105RedUnits[] = {
    { EID_フロージ, JID_フロージ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_総選挙リシテア, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_総選挙ディミトリ, 0, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_総選挙クロード, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_4, JID_総選挙エーデル, 0, TRUE, FACTION_ID_RED, 20, 10, 6, 10, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4105RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4105RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4111RedUnits[] = {
    { EID_フレイヤ, JID_フレイヤ, 0, TRUE, FACTION_ID_RED, 20, 6, 12, 6, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_イレース, 0, TRUE, FACTION_ID_RED, 20, 2, 12, 2, 12, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 12, 0, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 12, 10, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル, 0, TRUE, FACTION_ID_RED, 20, 6, 10, 6, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4111RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4111RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4112RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_シノン, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ジル, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスドラゴン, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドペガサス, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンシーフ, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4112RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4112RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4113RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_シノン, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ガトリー, 0, TRUE, FACTION_ID_RED, 20, 8, 6, 8, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー, 0, TRUE, FACTION_ID_RED, 20, 8, 8, 8, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ, 0, TRUE, FACTION_ID_RED, 20, 10, 14, 10, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4113RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4113RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4114RedUnits[] = {
    { EID_プルメリア, JID_プルメリア, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_1, JID_プラハ, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4114RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4114RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4115RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_シノン, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ガトリー, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_フレイヤ, JID_フレイヤ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドナイト, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ジル, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4115RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4115RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4121RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_カトリーヌ, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 10, 10, 10, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウペガサス, 0, TRUE, FACTION_ID_RED, 20, 6, 14, 6, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 14, 10, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4121RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4121RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4122RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_フレン, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンマムクート, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスペガサス, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4122RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4122RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4123RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_セテス, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードドラゴン, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_フレン, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 8, 6, 8, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4123RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4123RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4124RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_カトリーヌ, 0, TRUE, FACTION_ID_RED, 20, 10, 8, 10, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_シャミア, 0, TRUE, FACTION_ID_RED, 20, 4, 14, 4, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 10, 10, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_スカビオサ, JID_スカビオサ, 0, TRUE, FACTION_ID_RED, 20, 8, 12, 8, 12, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4124RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4124RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4125RedUnits[] = {
    { EID_フード, JID_フード, 0, TRUE, FACTION_ID_RED, 20, 6, 12, 6, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_カトリーヌ, 0, TRUE, FACTION_ID_RED, 20, 10, 8, 10, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_シャミア, 0, TRUE, FACTION_ID_RED, 20, 0, 10, 0, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_セテス, 0, TRUE, FACTION_ID_RED, 20, 8, 10, 8, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_4, JID_フレン, 0, TRUE, FACTION_ID_RED, 20, 4, 12, 4, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4125RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4125RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4131RedUnits[] = {
    { EID_フレイヤ, JID_フレイヤ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ゲイル, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4131RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4131RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4132RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ディーク, 0, TRUE, FACTION_ID_RED, 20, 6, 6, 6, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_マリナス, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 8, 6, 8, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4132RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4132RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4133RedUnits[] = {
    { EID_フレイヤ, JID_フレイヤ, 0, TRUE, FACTION_ID_RED, 20, 0, 14, 0, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ギネヴィア, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ミレディ, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードドラゴン, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4133RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4133RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4134RedUnits[] = {
    { EID_フレイヤ, JID_フレイヤ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ディーク, 0, TRUE, FACTION_ID_RED, 20, 10, 10, 10, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ギネヴィア, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ミレディ, 0, TRUE, FACTION_ID_RED, 20, 10, 6, 10, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアファヴニル, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4134RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4134RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4134RedUnits_Turn_2_2[] = {
    { EID_ENEMY_HERO_4, JID_マリナス, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4134RedUnits_Turn_2_2[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4134RedUnits_Turn_2_2)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4134RedUnits_Turn_3_3[] = {
    { EID_ENEMY_HERO_5, JID_ゲイル, 0, TRUE, FACTION_ID_RED, 20, 2, 14, 2, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードドラゴン, 0, TRUE, FACTION_ID_RED, 20, 0, 14, 0, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4134RedUnits_Turn_3_3[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4134RedUnits_Turn_3_3)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S4135RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_レッドシーフ, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ロキ, JID_ロキ, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーナイト, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S4135RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S4135RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5011RedUnits[] = {
    { PID_レギン, JID_レギン, 0, TRUE, FACTION_ID_RED, 20, 10, 10, 10, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 6, 14, 6, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5011RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5011RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5012RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウペガサス, 0, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドペガサス, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5012RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5012RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5013RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ラウアマムクート, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーシーフ, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5013RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5013RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5014RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ランスファイター, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 0, 10, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5014RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5014RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5015RedUnits[] = {
    { PID_レギン, JID_レギン, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーペガサス, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5015RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5015RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5021RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ナターシャ, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ノール, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5021RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5021RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5022RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ケセルダ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスドラゴン, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5022RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5022RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5023RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_セライナ, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5023RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5023RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5024RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_デュッセル, 0, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドペガサス, 0, TRUE, FACTION_ID_RED, 20, 4, 14, 4, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアファヴニル, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 10, 0, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5024RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5024RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5025RedUnits[] = {
    { EID_オッテル, JID_オッテル, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ケセルダ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_デュッセル, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_セライナ, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5025RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5025RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5031RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ロナン, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ロッドナイト, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5031RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5031RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5032RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ミランダ, 0, TRUE, FACTION_ID_RED, 20, 10, 10, 10, 10, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 8, 6, 8, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスペガサス, 0, TRUE, FACTION_ID_RED, 20, 10, 8, 10, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーペガサス, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5032RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5032RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5033RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_サラ, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンペガサス, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーボウ, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5033RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5033RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5034RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_アスベル, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーマムクート, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5034RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5034RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5035RedUnits[] = {
    { EID_ファフニール, JID_ファフニール, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ミランダ, 0, TRUE, FACTION_ID_RED, 20, 10, 0, 10, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_サラ, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5035RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5035RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5035RedUnits_Turn_3_3[] = {
    { EID_ENEMY_HERO_3, JID_ロナン, 0, TRUE, FACTION_ID_RED, 20, 0, 14, 0, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5035RedUnits_Turn_3_3[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5035RedUnits_Turn_3_3)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5035RedUnits_Turn_2_2[] = {
    { EID_ENEMY_HERO_4, JID_アスベル, 0, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5035RedUnits_Turn_2_2[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5035RedUnits_Turn_2_2)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5035RedUnits_Turn_4_4[] = {
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 20, 10, 14, 10, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5035RedUnits_Turn_4_4[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5035RedUnits_Turn_4_4)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5041RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_アゼル, 0, TRUE, FACTION_ID_RED, 20, 2, 10, 2, 10, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 10, 10, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 0, 8, 0, 8, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンマムクート, 0, TRUE, FACTION_ID_RED, 20, 6, 12, 6, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5041RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5041RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5042RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_マーニャ, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンペガサス, 0, TRUE, FACTION_ID_RED, 20, 0, 0, 0, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドペガサス, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5042RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5042RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5043RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_フュリー, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ロッドナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5043RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5043RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5044RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_アゼル, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_レックス, 0, TRUE, FACTION_ID_RED, 20, 10, 6, 10, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーペガサス, 0, TRUE, FACTION_ID_RED, 20, 10, 10, 10, 10, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 8, 14, 8, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5044RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5044RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5045RedUnits[] = {
    { EID_ダグ, JID_ダグ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_フュリー, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_マーニャ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_アゼル, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5045RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5045RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5051RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ドゥドゥ, 0, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 8, 10, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス, 0, TRUE, FACTION_ID_RED, 20, 6, 10, 6, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 0, 8, 0, 8, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5051RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5051RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5052RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_イングリット, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 14, 10, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ, 0, TRUE, FACTION_ID_RED, 20, 10, 8, 10, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5052RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5052RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5053RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_リンハルト, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドペガサス, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーマムクート, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5053RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5053RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5054RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_マリアンヌ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5054RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5054RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5055RedUnits[] = {
    { EID_ノート, JID_ノート, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアファヴニル, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ドゥドゥ, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_マリアンヌ, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5055RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5055RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5061RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_エルク, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 20, 0, 8, 0, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスペガサス, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5061RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5061RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5062RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ファリナ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート, 0, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンファヴニル, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ロッドナイト, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5062RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5062RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5063RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ソーニャ, 0, TRUE, FACTION_ID_RED, 20, 4, 12, 4, 12, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドボウ, 0, TRUE, FACTION_ID_RED, 20, 2, 10, 2, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドペガサス, 0, TRUE, FACTION_ID_RED, 20, 10, 10, 10, 10, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_オッテル, JID_オッテル, 0, TRUE, FACTION_ID_RED, 20, 6, 12, 6, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5063RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5063RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5064RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_パント, 0, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ルイーズ, 0, TRUE, FACTION_ID_RED, 20, 0, 10, 0, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_エルク, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 4, 10, 4, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5064RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5064RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5065RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_フード無印, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_フード無印, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_パント, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ファリナ, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5065RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5065RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5071RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_闇マーク男, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンファヴニル, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5071RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5071RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5072RedUnits[] = {
    { EID_オッテル, JID_オッテル, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_闇マーク女, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドペガサス, 0, TRUE, FACTION_ID_RED, 20, 10, 0, 10, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5072RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5072RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5073RedUnits[] = {
    { EID_オッテル, JID_オッテル, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_闇ディミトリ, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5073RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5073RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5074RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_覇骸エーデルガルト, 0, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンファヴニル, 0, TRUE, FACTION_ID_RED, 20, 0, 12, 0, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーマムクート, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5074RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5074RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5075RedUnits[] = {
    { EID_ファフニール, JID_ファフニール, 0, TRUE, FACTION_ID_RED, 20, 4, 12, 4, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_闇マーク女, 0, TRUE, FACTION_ID_RED, 20, 0, 10, 0, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_闇マーク男, 0, TRUE, FACTION_ID_RED, 20, 8, 14, 8, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーナイト, 0, TRUE, FACTION_ID_RED, 20, 2, 14, 2, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5075RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5075RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5075RedUnits_Turn_2_2[] = {
    { EID_ENEMY_HERO_3, JID_闇ディミトリ, 0, TRUE, FACTION_ID_RED, 20, 0, 12, 0, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ロッドナイト, 0, TRUE, FACTION_ID_RED, 20, 6, 14, 6, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5075RedUnits_Turn_2_2[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5075RedUnits_Turn_2_2)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5075RedUnits_Turn_3_3[] = {
    { EID_ENEMY_HERO_4, JID_覇骸エーデルガルト, 0, TRUE, FACTION_ID_RED, 20, 8, 14, 8, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5075RedUnits_Turn_3_3[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5075RedUnits_Turn_3_3)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5081RedUnits[] = {
    { EID_ファフニール, JID_ファフニール, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードスチーム, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクススチーム, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ティータ, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5081RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5081RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5082RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_リュート, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードスチーム, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーボウ, 0, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5082RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5082RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5083RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ティータ, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ジーク, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクススチーム, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウペガサス, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5083RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5083RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5084RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_外伝パオラ, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスドラゴン, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンペガサス, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5084RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5084RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5085RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_外伝パオラ, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_リュート, 0, TRUE, FACTION_ID_RED, 20, 10, 0, 10, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ティータ, 0, TRUE, FACTION_ID_RED, 20, 8, 14, 8, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_4, JID_ジーク, 0, TRUE, FACTION_ID_RED, 20, 6, 12, 6, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクススチーム, 0, TRUE, FACTION_ID_RED, 20, 10, 8, 10, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5085RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5085RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5091RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ブノワ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5091RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5091RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5092RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_オロチ, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_シェンメイ, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター, 0, TRUE, FACTION_ID_RED, 20, 10, 6, 10, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5092RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5092RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5093RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ニュクス, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ロッドナイト, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンペガサス, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5093RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5093RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5094RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_シャーロッテ, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ニュクス, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 6, 10, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル, 0, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウペガサス, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5094RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5094RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5095RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ブノワ, 0, TRUE, FACTION_ID_RED, 20, 4, 12, 4, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_オロチ, 0, TRUE, FACTION_ID_RED, 20, 10, 12, 10, 12, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_3, JID_シェンメイ, 0, TRUE, FACTION_ID_RED, 20, 0, 14, 0, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン, 0, TRUE, FACTION_ID_RED, 20, 6, 14, 6, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーボウ, 0, TRUE, FACTION_ID_RED, 20, 8, 14, 8, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5095RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5095RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5095RedUnits_Turn_3_3[] = {
    { EID_ENEMY_HERO_4, JID_シャーロッテ, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5095RedUnits_Turn_3_3[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5095RedUnits_Turn_3_3)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5095RedUnits_Turn_2_2[] = {
    { EID_ENEMY_HERO_5, JID_ニュクス, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスファイター, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5095RedUnits_Turn_2_2[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5095RedUnits_Turn_2_2)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5101RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_総選挙マルス, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5101RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5101RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5102RedUnits[] = {
    { EID_オッテル, JID_オッテル, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_総選挙マリアンヌ, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランススチーム, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードスチーム, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 0, 0, 0, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5102RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5102RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5103RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_総選挙エイリーク, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウペガサス, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドペガサス, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 20, 10, 8, 10, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5103RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5103RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5104RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_総選挙マリアンヌ, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_総選挙門番, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 8, 0, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 4, 6, 4, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5104RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5104RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5105RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_総選挙マルス, 0, TRUE, FACTION_ID_RED, 20, 4, 12, 4, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_総選挙マリアンヌ, 0, TRUE, FACTION_ID_RED, 20, 2, 12, 2, 12, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_3, JID_総選挙門番, 0, TRUE, FACTION_ID_RED, 20, 6, 14, 6, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_4, JID_総選挙エイリーク, 0, TRUE, FACTION_ID_RED, 20, 8, 10, 8, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー, 0, TRUE, FACTION_ID_RED, 20, 0, 8, 0, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5105RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5105RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5111RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ファフニール2, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_バルタザール, 0, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5111RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5111RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5112RedUnits[] = {
    { EID_オッテル, JID_オッテル, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ハピ, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンマムクート, 0, TRUE, FACTION_ID_RED, 20, 10, 6, 10, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドシーフ, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5112RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5112RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5113RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_コンスタンツェ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスペガサス, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ハピ, 0, TRUE, FACTION_ID_RED, 20, 10, 0, 10, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5113RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5113RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5114RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ユーリス, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_バルタザール, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドペガサス, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5114RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5114RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5115RedUnits[] = {
    { EID_オッテル, JID_オッテル, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ユーリス, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ハピ, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_3, JID_バルタザール, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_4, JID_コンスタンツェ, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5115RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5115RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5121RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_マリス, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクススチーム, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードドラゴン, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5121RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5121RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5122RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ファフニール2, 0, TRUE, FACTION_ID_RED, 20, 2, 6, 2, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ビラク, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ロシェ, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 10, 6, 10, 6, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウペガサス, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5122RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5122RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5123RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ファフニール2, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ウルフ, 0, TRUE, FACTION_ID_RED, 20, 0, 14, 0, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ザガロ, 0, TRUE, FACTION_ID_RED, 20, 10, 14, 10, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアファヴニル, 0, TRUE, FACTION_ID_RED, 20, 6, 14, 6, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5123RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5123RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5124RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ビラク, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ロシェ, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ウルフ, 0, TRUE, FACTION_ID_RED, 20, 10, 0, 10, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_4, JID_ザガロ, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドナイト, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5124RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5124RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5125RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ファフニール2, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ビラク, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ロシェ, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_4, JID_マリス, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランススチーム, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5125RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5125RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5125RedUnits_Turn_2_2[] = {
    { EID_ENEMY_HERO_5, JID_ウルフ, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_6, JID_ザガロ, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5125RedUnits_Turn_2_2[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5125RedUnits_Turn_2_2)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5131RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ベウフォレス, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランススチーム, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクススチーム, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーペガサス, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート, 0, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5131RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5131RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5132RedUnits[] = {
    { EID_エイトリ, JID_エイトリ, 0, TRUE, FACTION_ID_RED, 20, 10, 0, 10, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_タニス, 0, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランススチーム, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5132RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5132RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5132RedUnits_Turn_2_2[] = {
    { EID_ENEMY_GENERIC, JID_アクスアーマー, 0, TRUE, FACTION_ID_RED, 20, 0, 14, 0, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランススチーム, 0, TRUE, FACTION_ID_RED, 20, 0, 0, 0, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5132RedUnits_Turn_2_2[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5132RedUnits_Turn_2_2)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5132RedUnits_Turn_3_3[] = {
    { EID_ENEMY_GENERIC, JID_ソードスチーム, 0, TRUE, FACTION_ID_RED, 20, 10, 12, 10, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5132RedUnits_Turn_3_3[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5132RedUnits_Turn_3_3)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5133RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ステラ, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードスチーム, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウペガサス, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 10, 6, 10, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5133RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5133RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5134RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_フォルカ, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_フード無印, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5134RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5134RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5135RedUnits[] = {
    { EID_エイトリ, JID_エイトリ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ステラ, 0, TRUE, FACTION_ID_RED, 20, 10, 0, 10, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_フォルカ, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_タニス, 0, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランススチーム, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5135RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5135RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S5135RedUnits_Turn_2_2[] = {
    { EID_ENEMY_HERO_4, JID_マーシャ, 0, TRUE, FACTION_ID_RED, 20, 10, 14, 10, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンファヴニル, 0, TRUE, FACTION_ID_RED, 20, 0, 14, 0, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S5135RedUnits_Turn_2_2[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S5135RedUnits_Turn_2_2)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6011RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ソードファイター, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスドラゴン, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6011RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6011RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6012RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_レッドペガサス, 0, TRUE, FACTION_ID_RED, 20, 10, 14, 10, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 14, 0, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6012RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6012RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6013RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーシーフ, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6013RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6013RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6014RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ブルーボウ, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンナイト, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウペガサス, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6014RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6014RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6015RedUnits[] = {
    { EID_エルム, JID_エルム, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 20, 10, 14, 10, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート, 0, TRUE, FACTION_ID_RED, 20, 10, 8, 10, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6015RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6015RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6021RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_フラヴィア, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6021RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6021RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6022RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ミリエル, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス, 0, TRUE, FACTION_ID_RED, 20, 10, 6, 10, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンファヴニル, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ロッドナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 12, 10, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6022RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6022RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6023RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_パリス, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスドラゴン, 0, TRUE, FACTION_ID_RED, 20, 0, 8, 0, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンペガサス, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6023RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6023RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6024RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_フラヴィア, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_バジーリオ, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6024RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6024RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6025RedUnits[] = {
    { EID_エルム, JID_エルム, 0, TRUE, FACTION_ID_RED, 20, 2, 14, 2, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_パリス, 0, TRUE, FACTION_ID_RED, 20, 10, 10, 10, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ミリエル, 0, TRUE, FACTION_ID_RED, 20, 8, 14, 8, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_3, JID_バジーリオ, 0, TRUE, FACTION_ID_RED, 20, 6, 14, 6, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6025RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6025RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6031RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ヴェロニカ洗脳, 0, TRUE, FACTION_ID_RED, 20, 10, 12, 10, 12, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_コーマ, 0, TRUE, FACTION_ID_RED, 20, 10, 0, 10, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 14, 10, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6031RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6031RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6032RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_レナック, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター, 0, TRUE, FACTION_ID_RED, 20, 0, 8, 0, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウペガサス, 0, TRUE, FACTION_ID_RED, 20, 0, 14, 0, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6032RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6032RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6033RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_コーマ, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ネイミー, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 0, 0, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6033RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6033RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6034RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_開花ヨシュア, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンマムクート, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6034RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6034RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6035RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ヴェロニカ洗脳, 0, TRUE, FACTION_ID_RED, 20, 2, 14, 2, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_開花ヨシュア, 0, TRUE, FACTION_ID_RED, 20, 10, 0, 10, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_アーヴ, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_4, JID_コーマ, 0, TRUE, FACTION_ID_RED, 20, 0, 14, 0, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6035RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6035RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6035RedUnits_Turn_2_2[] = {
    { EID_ENEMY_HERO_5, JID_レナック, 0, TRUE, FACTION_ID_RED, 20, 10, 12, 10, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_6, JID_ネイミー, 0, TRUE, FACTION_ID_RED, 20, 0, 12, 0, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6035RedUnits_Turn_2_2[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6035RedUnits_Turn_2_2)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6041RedUnits[] = {
    { EID_レティシア, JID_レティシア, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ゴンザレス, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーペガサス, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドシーフ, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6041RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6041RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6042RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ヒュウ, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ニイメ, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウペガサス, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6042RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6042RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6043RedUnits[] = {
    { EID_レティシア, JID_レティシア, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_1, JID_キャス, 0, TRUE, FACTION_ID_RED, 20, 10, 12, 10, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 14, 10, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー, 0, TRUE, FACTION_ID_RED, 20, 6, 6, 6, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6043RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6043RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6044RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_開花イドゥン, 0, TRUE, FACTION_ID_RED, 20, 6, 6, 6, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート, 0, TRUE, FACTION_ID_RED, 20, 10, 8, 10, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンファヴニル, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンペガサス, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6044RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6044RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6045RedUnits[] = {
    { EID_レティシア, JID_レティシア, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_1, JID_開花イドゥン, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ヒュウ, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ニイメ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6045RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6045RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6051RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ガルザス, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーペガサス, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー, 0, TRUE, FACTION_ID_RED, 20, 8, 6, 8, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6051RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6051RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6052RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_アウグスト, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_カリン, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドボウ, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6052RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6052RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6053RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_セイラム, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンペガサス, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアファヴニル, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6053RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6053RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6054RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_開花マリータ, 0, TRUE, FACTION_ID_RED, 20, 0, 12, 0, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードドラゴン, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6054RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6054RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6055RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ガルザス, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_開花マリータ, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_レティシア, JID_レティシア, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_3, JID_カリン, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6055RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6055RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6061RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_スカサハ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6061RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6061RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6062RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ティニー, 0, TRUE, FACTION_ID_RED, 20, 6, 14, 6, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス, 0, TRUE, FACTION_ID_RED, 20, 10, 10, 10, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスファイター, 0, TRUE, FACTION_ID_RED, 20, 2, 14, 2, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 14, 10, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6062RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6062RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6063RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_アーサー, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードドラゴン, 0, TRUE, FACTION_ID_RED, 20, 10, 6, 10, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6063RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6063RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6064RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_開花イシュタル, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6064RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6064RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6065RedUnits[] = {
    { EID_レティシア, JID_レティシア, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_1, JID_開花イシュタル, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_アーサー, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_3, JID_スカサハ, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6065RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6065RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6071RedUnits[] = {
    { EID_レティシア, JID_レティシア, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_1, JID_闇リリス, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスファイター, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6071RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6071RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6072RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_暴走レア, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーマムクート, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_闇リリス, 0, TRUE, FACTION_ID_RED, 20, 2, 6, 2, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6072RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6072RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6073RedUnits[] = {
    { EID_グスタフ, JID_グスタフ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドペガサス, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6073RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6073RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6074RedUnits[] = {
    { EID_レティシア, JID_レティシア, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_1, JID_暴走レア, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6074RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6074RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6075RedUnits[] = {
    { EID_レティシア, JID_レティシア, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_1, JID_催眠ニニアン, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_闇リリス, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_グスタフ, JID_グスタフ, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6075RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6075RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6081RedUnits[] = {
    { EID_エルム, JID_エルム, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーバット, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンバット, 0, TRUE, FACTION_ID_RED, 20, 0, 8, 0, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 2, 14, 2, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6081RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6081RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6082RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ケント, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_セイン, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 20, 4, 6, 4, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6082RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6082RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6083RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ギィ, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーシーフ, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 0, 0, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンファヴニル, 0, TRUE, FACTION_ID_RED, 20, 10, 8, 10, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアバット, 0, TRUE, FACTION_ID_RED, 20, 10, 6, 10, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6083RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6083RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6084RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_開花フロリーナ, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ギィ, 0, TRUE, FACTION_ID_RED, 20, 2, 6, 2, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 4, 6, 4, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンバット, 0, TRUE, FACTION_ID_RED, 20, 0, 8, 0, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6084RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6084RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6085RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_レティシア洗脳, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_開花フロリーナ, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_セイン, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_4, JID_ケント, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_5, JID_リムステラ, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6085RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6085RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6091RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ブルーノ洗脳, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_外伝カムイ, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_アトラス, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6091RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6091RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6092RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_外伝エスト, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドペガサス, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 0, 10, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6092RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6092RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6093RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_開花セリカ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンシーフ, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーペガサス, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6093RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6093RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6094RedUnits[] = {
    { EID_エルム, JID_エルム, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_外伝エスト, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_アトラス, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーバット, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンバット, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6094RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6094RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6095RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ヴェロニカ洗脳2, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_外伝エスト, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_開花セリカ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_4, JID_外伝カムイ, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_5, JID_アトラス, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6095RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6095RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6101RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_総選挙ベレス, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ロッドナイト, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードドラゴン, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6101RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6101RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6102RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_総選挙セリス, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 10, 6, 10, 6, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6102RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6102RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6103RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ラウアマムクート, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウペガサス, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_総選挙クロム, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6103RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6103RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6104RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_総選挙覚醒チキ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンシーフ, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6104RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6104RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6105RedUnits[] = {
    { EID_エルム, JID_エルム, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_総選挙ベレス, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_総選挙セリス, 0, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_総選挙クロム, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_4, JID_総選挙覚醒チキ, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6105RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6105RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6111RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_モニカ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンシーフ, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアファヴニル, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6111RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6111RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6112RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_開花ヒルダ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードドラゴン, 0, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーペガサス, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーバット, 0, TRUE, FACTION_ID_RED, 20, 10, 0, 10, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6112RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6112RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6113RedUnits[] = {
    { EID_エルム, JID_エルム, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーバット, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_シェズ女, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6113RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6113RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6114RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ブルーノ素顔, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_開花ヒルダ, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ホルスト, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンペガサス, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6114RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6114RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6115RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ブルーノ素顔, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_開花ヒルダ, 0, TRUE, FACTION_ID_RED, 20, 4, 6, 4, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_モニカ, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー, 0, TRUE, FACTION_ID_RED, 20, 2, 6, 2, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドボウ, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6115RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6115RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6115RedUnits_Turn_3_3[] = {
    { EID_ENEMY_HERO_4, JID_シェズ女, 0, TRUE, FACTION_ID_RED, 20, 6, 6, 6, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_5, JID_シェズ男, 0, TRUE, FACTION_ID_RED, 20, 2, 8, 2, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6115RedUnits_Turn_3_3[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6115RedUnits_Turn_3_3)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6121RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_フィレイン, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードドラゴン, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ, 0, TRUE, FACTION_ID_RED, 20, 0, 12, 0, 12, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー, 0, TRUE, FACTION_ID_RED, 20, 0, 8, 0, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンファヴニル, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6121RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6121RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6122RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_セルバンテス, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンボウ, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドナイト, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6122RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6122RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6123RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_グレゴ, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_リヒト, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスファイター, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6123RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6123RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6124RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_魔器ルフレ女, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンペガサス, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアファヴニル, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6124RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6124RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6125RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ヴェロニカ2, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_魔器ルフレ女, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_グレゴ, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_4, JID_リヒト, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6125RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6125RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6125RedUnits_Turn_2_2[] = {
    { EID_ENEMY_GENERIC, JID_シーフ, 0, TRUE, FACTION_ID_RED, 20, 0, 8, 0, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6125RedUnits_Turn_2_2[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6125RedUnits_Turn_2_2)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6125RedUnits_Turn_3_3[] = {
    { EID_ENEMY_GENERIC, JID_グルンマムクート, 0, TRUE, FACTION_ID_RED, 20, 10, 8, 10, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6125RedUnits_Turn_3_3[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6125RedUnits_Turn_3_3)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6125RedUnits_Turn_4_4[] = {
    { EID_ENEMY_GENERIC, JID_グルンファヴニル, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_5, JID_フィレイン, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6125RedUnits_Turn_4_4[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6125RedUnits_Turn_4_4)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6131RedUnits[] = {
    { EID_エンブラ, JID_エンブラ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーバット, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ニーナ, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6131RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6131RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6132RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ハーディン, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンペガサス, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンファヴニル, 0, TRUE, FACTION_ID_RED, 20, 10, 6, 10, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6132RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6132RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6133RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_エリス, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_マチス, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンペガサス, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドボウ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー, 0, TRUE, FACTION_ID_RED, 20, 2, 6, 2, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6133RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6133RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6134RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_開花チキ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンボウ, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_エリス, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6134RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6134RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6135RedUnits[] = {
    { EID_エンブラ, JID_エンブラ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_開花チキ, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーマムクート, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンナイト, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ハーディン, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6135RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6135RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S6135RedUnits_Turn_2_2[] = {
    { EID_ENEMY_GENERIC, JID_ラウアバット, 0, TRUE, FACTION_ID_RED, 20, 10, 6, 10, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアファヴニル, 0, TRUE, FACTION_ID_RED, 20, 0, 8, 0, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S6135RedUnits_Turn_2_2[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S6135RedUnits_Turn_2_2)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7011RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ガンズ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7011RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7011RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7012RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_キサラギ, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ディーア, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンペガサス, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7012RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7012RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7013RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_マトイ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_キサラギ, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7013RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7013RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7014RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_魔器オフェリア, 0, TRUE, FACTION_ID_RED, 20, 0, 12, 0, 12, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ディーア, 0, TRUE, FACTION_ID_RED, 20, 0, 8, 0, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーシーフ, 0, TRUE, FACTION_ID_RED, 20, 0, 0, 0, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7014RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7014RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7015RedUnits[] = {
    { EID_グルヴェイグ, JID_グルヴェイグ, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_1, JID_魔器オフェリア, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ガンズ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_マトイ, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7015RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7015RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7021RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_グリーンマージ, 0, TRUE, FACTION_ID_RED, 20, 2, 10, 2, 10, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドシーフ, 0, TRUE, FACTION_ID_RED, 20, 8, 14, 8, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーペガサス, 0, TRUE, FACTION_ID_RED, 20, 10, 10, 10, 10, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7021RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7021RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7022RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンボウ, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7022RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7022RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7023RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_グルンマムクート, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアファヴニル, 0, TRUE, FACTION_ID_RED, 20, 10, 6, 10, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7023RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7023RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7024RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_レッドナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 0, 10, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 20, 0, 8, 0, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウペガサス, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーマムクート, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7024RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7024RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7025RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_レッドシーフ, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 20, 0, 14, 0, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 10, 14, 10, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7025RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7025RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7031RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_セリーヌ, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7031RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7031RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7032RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_クロエ, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドナイト, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7032RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7032RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7033RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_リュール女, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンペガサス, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ, 0, TRUE, FACTION_ID_RED, 20, 10, 6, 10, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7033RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7033RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7034RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_エーティエ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_魔器アルフレッド, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7034RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7034RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7035RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_セリーヌ, 0, TRUE, FACTION_ID_RED, 20, 2, 12, 2, 12, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_クロエ, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_リュール女, 0, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_4, JID_魔器アルフレッド, 0, TRUE, FACTION_ID_RED, 20, 0, 10, 0, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7035RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7035RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7041RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ユリシーズ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーペガサス, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7041RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7041RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7042RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ルキノ, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ユリシーズ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 4, 6, 4, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7042RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7042RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7043RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ジョフレ, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンナイト, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7043RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7043RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7044RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_開花エリンシア, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ジョフレ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドペガサス, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7044RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7044RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7045RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_開花エリンシア, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ルキノ, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ネルトゥス, JID_ネルトゥス, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ユリシーズ, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7045RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7045RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7051RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ヴァネッサ, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドペガサス, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ, 0, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7051RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7051RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7052RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ヴァネッサ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_シレーネ, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンファヴニル, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ロッドナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 0, 10, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7052RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7052RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7053RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ギリアム, 0, TRUE, FACTION_ID_RED, 20, 2, 6, 2, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_シレーネ, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウペガサス, 0, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7053RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7053RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7054RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ギリアム, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_魔器ターナ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンシーフ, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7054RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7054RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7055RedUnits[] = {
    { EID_グルヴェイグ, JID_グルヴェイグ, 0, TRUE, FACTION_ID_RED, 20, 4, 14, 4, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ギリアム, 0, TRUE, FACTION_ID_RED, 20, 6, 12, 6, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_シレーネ, 0, TRUE, FACTION_ID_RED, 20, 6, 10, 6, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ, 0, TRUE, FACTION_ID_RED, 20, 8, 10, 8, 10, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7055RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7055RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7055RedUnits_Turn_2_2[] = {
    { EID_ENEMY_HERO_3, JID_ヴァネッサ, 0, TRUE, FACTION_ID_RED, 20, 10, 6, 10, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 14, 0, 14, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7055RedUnits_Turn_2_2[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7055RedUnits_Turn_2_2)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7055RedUnits_Turn_3_3[] = {
    { EID_ENEMY_HERO_4, JID_魔器ターナ, 0, TRUE, FACTION_ID_RED, 20, 0, 12, 0, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7055RedUnits_Turn_3_3[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7055RedUnits_Turn_3_3)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7061RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_フェリクス, 0, TRUE, FACTION_ID_RED, 20, 8, 6, 8, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンシーフ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーペガサス, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7061RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7061RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7062RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_フェリクス, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_シルヴァン, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7062RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7062RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7063RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_魔器イングリット, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードドラゴン, 0, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 0, 10, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7063RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7063RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7064RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_レア, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7064RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7064RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7065RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_魔器イングリット, 0, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_フェリクス, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_シルヴァン, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_4, JID_レア, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7065RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7065RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7071RedUnits[] = {
    { EID_ネルトゥス, JID_ネルトゥス, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_闇ライナス, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドペガサス, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7071RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7071RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7072RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_闇マリア, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7072RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7072RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7073RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_闇ハイドラ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンシーフ, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ロッドナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 0, 10, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7073RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7073RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7074RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_闇ベレス, 0, TRUE, FACTION_ID_RED, 20, 10, 12, 10, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンファヴニル, 0, TRUE, FACTION_ID_RED, 20, 10, 8, 10, 8, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7074RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7074RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7075RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_魔器闇クロム, 0, TRUE, FACTION_ID_RED, 20, 2, 12, 2, 12, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_闇ベレス, 0, TRUE, FACTION_ID_RED, 20, 8, 10, 8, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_闇マリア, 0, TRUE, FACTION_ID_RED, 20, 6, 14, 6, 14, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_4, JID_闇ハイドラ, 0, TRUE, FACTION_ID_RED, 20, 6, 10, 6, 10, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7075RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7075RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7081RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ノア, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7081RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7081RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7082RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ドロシー, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドボウ, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンペガサス, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7082RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7082RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7083RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ドロシー, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_サウル, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンナイト, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7083RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7083RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7084RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ノア, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_開花フィル, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 0, 10, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7084RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7084RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7085RedUnits[] = {
    { EID_クワシル, JID_クワシル, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_1, JID_マードック, 0, TRUE, FACTION_ID_RED, 20, 4, 6, 4, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_サウル, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ノア, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_4, JID_開花フィル, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7085RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7085RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7091RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ヘイズ敵0, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_リュール男, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーペガサス, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスファイター, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7091RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7091RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7092RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ディアマンド, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー, 0, TRUE, FACTION_ID_RED, 20, 6, 6, 6, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 0, 10, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7092RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7092RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7093RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ラピス, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_シトリニカ, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウペガサス, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7093RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7093RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7094RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_魔器スタルーク, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ディアマンド, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_シトリニカ, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー, 0, TRUE, FACTION_ID_RED, 20, 6, 6, 6, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7094RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7094RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7095RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ヘイズ敵, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_魔器スタルーク, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_リュール男, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_4, JID_シトリニカ, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7095RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7095RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7101RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_総選挙セネリオ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーナイト, 0, TRUE, FACTION_ID_RED, 20, 0, 0, 0, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7101RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7101RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7102RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ランスファイター, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト, 0, TRUE, FACTION_ID_RED, 20, 10, 0, 10, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_1, JID_総選挙ルフレ男, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7102RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7102RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7103RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_総選挙カムイ女, 0, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスファイター, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンマムクート, 0, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7103RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7103RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7104RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_総選挙グルヴェイグ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスファイター, 0, TRUE, FACTION_ID_RED, 20, 10, 6, 10, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7104RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7104RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7105RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_総選挙グルヴェイグ, 0, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_総選挙カムイ女, 0, TRUE, FACTION_ID_RED, 20, 2, 6, 2, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_総選挙ルフレ男, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_4, JID_総選挙セネリオ, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_5, JID_ツィリル, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7105RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7105RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7111RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_フィー, 0, TRUE, FACTION_ID_RED, 20, 2, 6, 2, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーナイト, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7111RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7111RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7112RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_パティ, 0, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ファバル, 0, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー, 0, TRUE, FACTION_ID_RED, 20, 6, 6, 6, 6, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドペガサス, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7112RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7112RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7113RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_アリオーン, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン, 0, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドペガサス, 0, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト, 0, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7113RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7113RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7114RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_開花セティ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ, 0, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター, 0, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスファイター, 0, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7114RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7114RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

const struct UnitInfo S7115RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_開花セティ, 0, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_HERO_2, JID_アリオーン, 0, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ, 0, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { IID_FIRE, IID_LIGHTNING, IID_FLUX, IID_HEALSTAFF }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアファヴニル, 0, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ファバル, 0, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { IID_IRONSWORD, IID_IRONLANCE, IID_IRONAXE, IID_IRONBOW }, { 0 } },
    { 0 }, // end
};

const EventScr EventScr_LoadUnits_S7115RedUnits[] = {
    EvtUnitCameraOff
    EvtNoSkip
    EvtLoadUnits(S7115RedUnits)
    EvtMoveWait
    EvtClearSkip
    EvtEnd
};

