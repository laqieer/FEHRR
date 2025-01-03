#pragma once

const struct UnitInfo S0001RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_アクスファイター_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 1, 10, 4, 10, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0002RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_アクスファイター_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 2, 6, 8, 6, 8, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 2, 10, 10, 10, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0101RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ランスファイター_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 3, 0, 0, 0, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 3, 10, 14, 10, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 3, 10, 4, 10, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0102RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ミネルバ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 4, 10, 12, 10, 12, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_パオラ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 4, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_カチュア_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 4, 8, 14, 8, 14, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_マリア_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 4, 10, 10, 10, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0103RedUnits[] = {
    { PID_マークス, JID_マークス, PID_NONE, TRUE, FACTION_ID_RED, 5, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_UNPROMOTED, PID_マークス, TRUE, FACTION_ID_RED, 5, 8, 6, 8, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ロッドナイト_UNPROMOTED, PID_マークス, TRUE, FACTION_ID_RED, 5, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター_UNPROMOTED, PID_マークス, TRUE, FACTION_ID_RED, 5, 6, 2, 6, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0201RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_マルス_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 6, 10, 8, 10, 8, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ジェイガン_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 6, 8, 6, 8, 6, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_シーダ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 6, 10, 10, 10, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0202RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_アクスファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 7, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_オグマ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 7, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 7, 2, 8, 2, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0203RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_シスター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 8, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_リンダ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 8, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_マリク_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 8, 8, 2, 8, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0204RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_カイン_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 9, 0, 2, 0, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_アベル_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 9, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ゴードン_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 9, 0, 6, 0, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 9, 10, 4, 10, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0205RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ゴードン_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 10, 6, 8, 6, 8, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_マルス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 10, 4, 8, 4, 8, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_マリク_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 10, 4, 6, 4, 6, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_シーダ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 10, 4, 10, 4, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0301RedUnits[] = {
    { PID_マークス, JID_マークス, PID_NONE, TRUE, FACTION_ID_RED, 11, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_カミラ_UNPROMOTED, PID_マークス, TRUE, FACTION_ID_RED, 11, 2, 8, 2, 8, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_レオン_UNPROMOTED, PID_マークス, TRUE, FACTION_ID_RED, 11, 0, 10, 0, 10, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_エリーゼ_UNPROMOTED, PID_マークス, TRUE, FACTION_ID_RED, 11, 0, 6, 0, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0302RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_エリーゼ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 12, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ハロルド_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_エルフィ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ロッドナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 8, 0, 8, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0303RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_レオン_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 13, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ゼロ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_オーディン_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 0, 4, 0, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0304RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_カミラ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 14, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ベルカ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 14, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ルーナ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 14, 8, 6, 8, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 14, 6, 2, 6, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0305RedUnits[] = {
    { PID_マークス, JID_マークス, PID_NONE, TRUE, FACTION_ID_RED, 15, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ピエリ_UNPROMOTED, PID_マークス, TRUE, FACTION_ID_RED, 15, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ラズワルド_UNPROMOTED, PID_マークス, TRUE, FACTION_ID_RED, 15, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト_UNPROMOTED, PID_マークス, TRUE, FACTION_ID_RED, 15, 8, 2, 8, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0401RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ロイ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 16, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 16, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 16, 2, 6, 2, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 16, 4, 4, 4, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0402RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ランスナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 10, 12, 10, 12, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_クラリーネ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 17, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_セシリア_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 10, 10, 10, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0403RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ファ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 18, 0, 0, 0, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ソフィーヤ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 10, 6, 10, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_レイ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 4, 4, 4, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0404RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_フィル_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 19, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_バアトル_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 19, 2, 6, 2, 6, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_シャニー_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 19, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 19, 2, 4, 2, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0405RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ロイ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_リリーナ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 20, 2, 6, 2, 6, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ウェンディ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ロッドナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0501RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_クロム_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 21, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_フレデリク_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 21, 2, 14, 2, 14, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_リズ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 21, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0502RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ロンクー_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 22, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_オリヴィエ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 10, 8, 10, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0503RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ランスペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 0, 0, 0, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 0, 14, 0, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 10, 0, 10, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ティアモ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 23, 10, 14, 10, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0504RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ロッドナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 2, 6, 2, 6, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ルフレ女_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 24, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ドニ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 6, 8, 6, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0505RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_クロム_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 25, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ルフレ女_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 25, 10, 10, 10, 10, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ソール_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 25, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_ソワレ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 25, 0, 2, 0, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0601RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ナバール_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 26, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_リフ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 26, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 26, 10, 0, 10, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 26, 0, 6, 0, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0602RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_マリア_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 27, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ミネルバ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 4, 6, 4, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 6, 8, 6, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0603RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ジョルジュ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 28, 10, 0, 10, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_バーツ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 28, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 28, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 28, 6, 0, 6, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0604RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_カチュア_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 29, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_パオラ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 29, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_エスト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 29, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 29, 4, 2, 4, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0605RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_シーフ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 8, 8, 8, 8, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_チキ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 2, 12, 2, 12, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ミネルバ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 10, 10, 10, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0701RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_リョウマ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 1, 10, 6, 10, 6, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_タクミ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 1, 8, 8, 8, 8, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_サクラ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 1, 10, 10, 10, 10, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_ヒノカ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 1, 4, 14, 4, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0702RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_タクミ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 2, 0, 12, 0, 12, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_オボロ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 2, 4, 10, 4, 10, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ヒナタ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 2, 0, 10, 0, 10, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_サイゾウ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 2, 10, 10, 10, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0703RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ヒノカ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 3, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_アサマ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 3, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_セツナ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 3, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_ツバキ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 3, 6, 2, 6, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0704RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_サクラ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 4, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_カザハナ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 4, 10, 12, 10, 12, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ツバキ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 4, 0, 2, 0, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_カゲロウ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 4, 4, 6, 4, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0705RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_リョウマ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 5, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_サイゾウ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 5, 0, 6, 0, 6, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_カゲロウ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 5, 10, 14, 10, 14, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_オボロ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 5, 10, 6, 10, 6, { 0 }, { 0 } },
    { EID_ENEMY_HERO_5, JID_ヒナタ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 5, 0, 14, 0, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0801RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_マシュー_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 6, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_セーラ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 6, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 6, 0, 14, 0, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 6, 0, 6, 0, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0802RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_エリウッド_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 7, 2, 14, 2, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 7, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ヘクトル_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 7, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 7, 0, 0, 0, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0803RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ソードファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 8, 2, 12, 2, 12, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_レイヴァン_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 8, 10, 12, 10, 12, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ニノ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 8, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 8, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 8, 6, 8, 6, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0804RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_グリーンマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 9, 0, 6, 0, 6, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ホークアイ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 9, 2, 10, 2, 10, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_リン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 9, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_フロリーナ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 9, 4, 12, 4, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0805RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_エリウッド_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 10, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ヘクトル_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 10, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_リン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 10, 0, 14, 0, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 10, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 10, 10, 12, 10, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0901RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ルフレ男_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 11, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_サーリャ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 11, 8, 6, 8, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 11, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 11, 6, 8, 6, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0902RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ノノ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ヘンリー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 10, 10, 10, 10, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 0, 8, 0, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0903RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ヴィオール_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 13, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_セルジュ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 10, 8, 10, 8, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 0, 0, 0, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0904RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_チキ覚醒_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ルキナ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 14, 10, 10, 10, 10, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 14, 2, 8, 2, 8, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 14, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 14, 0, 12, 0, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S0905RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ルフレ男_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 15, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ルキナ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 15, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ガイア_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 15, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 15, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ロッドナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 15, 6, 0, 6, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1001RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ミシェイル_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 16, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_カミュ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 16, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 16, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 16, 6, 4, 6, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1002RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ランスアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ゼフィール_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 17, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ナーシェン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 2, 14, 2, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1003RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ウルスラ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 18, 10, 0, 10, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 10, 8, 10, 8, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 0, 4, 0, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1004RedUnits[] = {
    { EID_ブルーノ, JID_ブルーノ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 19, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト_PROMOTED, EID_ブルーノ, TRUE, FACTION_ID_RED, 19, 8, 10, 8, 10, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー_PROMOTED, EID_ブルーノ, TRUE, FACTION_ID_RED, 19, 10, 6, 10, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_PROMOTED, EID_ブルーノ, TRUE, FACTION_ID_RED, 19, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_PROMOTED, EID_ブルーノ, TRUE, FACTION_ID_RED, 19, 10, 10, 10, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1005RedUnits[] = {
    { EID_ヴェロニカ, JID_ヴェロニカ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { 0 }, { 0 } },
    { PID_マークス, JID_マークス_PROMOTED, EID_ヴェロニカ, TRUE, FACTION_ID_RED, 20, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ロッドナイト_PROMOTED, EID_ヴェロニカ, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター_PROMOTED, EID_ヴェロニカ, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_PROMOTED, EID_ヴェロニカ, TRUE, FACTION_ID_RED, 20, 10, 0, 10, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1101RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_アイク_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 21, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_セネリオ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 21, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 21, 0, 10, 0, 10, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 21, 6, 10, 6, 10, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 21, 2, 14, 2, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 21, 10, 14, 10, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1101RedUnits_Turn_1_3[] = {
    { EID_ENEMY_GENERIC, JID_アクスナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 21, 2, 14, 2, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 21, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1101RedUnits_Turn_3_5[] = {
    { EID_ENEMY_GENERIC, JID_ランスナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 21, 0, 14, 0, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 21, 10, 14, 10, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1102RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ティアマト_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 22, 0, 12, 0, 12, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ミスト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 2, 14, 2, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 10, 12, 10, 12, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 10, 10, 10, 10, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 0, 14, 0, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1103RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ティアマト_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 23, 6, 8, 6, 8, { 0 }, { 0 } },
    { EID_ブルーノ, JID_ブルーノ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 6, 10, 6, 10, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_セネリオ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 10, 8, 10, 8, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ミスト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 8, 10, 8, 10, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 10, 0, 10, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 0, 12, 0, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1103RedUnits_Turn_4_6[] = {
    { EID_ENEMY_GENERIC, JID_ランスペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 10, 12, 10, 12, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 0, 14, 0, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1104RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_アイク_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 24, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ティアマト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 0, 0, 0, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_セネリオ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1104RedUnits_Turn_1_1[] = {
    { EID_ENEMY_GENERIC, JID_ボウファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 10, 0, 10, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1104RedUnits_Turn_4_5[] = {
    { EID_ENEMY_GENERIC, JID_ランスナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 0, 14, 0, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 10, 14, 10, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1104RedUnits_Turn_4_4[] = {
    { EID_ENEMY_GENERIC, JID_アクスペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 0, 0, 0, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1104RedUnits_Turn_6_6[] = {
    { EID_ENEMY_GENERIC, JID_ソードナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 10, 0, 10, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 0, 0, 0, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1105RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_アイク_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 25, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ミスト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 25, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ティアマト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 25, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_セネリオ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 25, 0, 2, 0, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 25, 8, 0, 8, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1201RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_セリカ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 26, 10, 10, 10, 10, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ジェニー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 26, 10, 12, 10, 12, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 26, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 26, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_エスト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 26, 0, 14, 0, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1202RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_メイ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 27, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ボーイ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 8, 2, 8, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1203RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_セリカ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 28, 0, 14, 0, 14, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_メイ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 28, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ジェニー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 28, 2, 12, 2, 12, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_パオラ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 28, 8, 14, 8, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 28, 0, 10, 0, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1203RedUnits_Turn_2_2[] = {
    { EID_ENEMY_GENERIC, JID_アクスペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 28, 0, 14, 0, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1203RedUnits_Turn_3_3[] = {
    { EID_ENEMY_GENERIC, JID_ソードナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 28, 0, 10, 0, 10, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 28, 0, 12, 0, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1203RedUnits_Turn_4_4[] = {
    { EID_ENEMY_GENERIC, JID_ランスアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 28, 0, 6, 0, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 28, 2, 14, 2, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1204RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_メイ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 29, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ボーイ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 29, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ジェニー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 29, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 29, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_カチュア_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 29, 10, 6, 10, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1205RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_セリカ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ボーイ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_メイ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_ジェニー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ブルーノ, JID_ブルーノ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 2, 0, 2, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1301RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_デューテ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 8, 6, 8, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 10, 6, 10, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 0, 0, 0, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1302RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_セーバー_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 10, 12, 10, 12, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ソニア_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_レオ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 6, 6, 6, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 8, 0, 8, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1303RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_クレーベ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_マチルダ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_グレイ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_ロビン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 6, 2, 6, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1304RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_セーバー_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 2, 6, 2, 6, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ソニア_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_レオ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 0, 8, 0, 8, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 2, 2, 2, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1305RedUnits[] = {
    { EID_ブルーノ, JID_ブルーノ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_グレイ_PROMOTED, EID_ブルーノ, TRUE, FACTION_ID_RED, 30, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ロビン_PROMOTED, EID_ブルーノ, TRUE, FACTION_ID_RED, 30, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_クレーベ_PROMOTED, EID_ブルーノ, TRUE, FACTION_ID_RED, 30, 0, 2, 0, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_マチルダ_PROMOTED, EID_ブルーノ, TRUE, FACTION_ID_RED, 30, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_5, JID_ソニア_PROMOTED, EID_ブルーノ, TRUE, FACTION_ID_RED, 30, 0, 4, 0, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1401RedUnits[] = {
    { EID_ブルーノ, JID_ブルーノ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_PROMOTED, EID_ブルーノ, TRUE, FACTION_ID_RED, 30, 10, 0, 10, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ_PROMOTED, EID_ブルーノ, TRUE, FACTION_ID_RED, 30, 0, 8, 0, 8, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_PROMOTED, EID_ブルーノ, TRUE, FACTION_ID_RED, 30, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター_PROMOTED, EID_ブルーノ, TRUE, FACTION_ID_RED, 30, 4, 6, 4, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1402RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_エリンシア_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ネフェニー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 10, 6, 10, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1403RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_オスカー_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 0, 0, 0, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 0, 8, 0, 8, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 4, 4, 4, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1403RedUnits_Turn_4_4[] = {
    { EID_ENEMY_HERO_2, JID_漆黒の騎士_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 6, 6, 6, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1403RedUnits_Turn_3_3[] = {
    { EID_ENEMY_GENERIC, JID_アクスペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 10, 14, 10, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 10, 0, 10, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1403RedUnits_Turn_2_2[] = {
    { EID_ENEMY_GENERIC, JID_ランスナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 6, 0, 6, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1403RedUnits_Turn_5_5[] = {
    { EID_ENEMY_GENERIC, JID_ソードナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 0, 0, 0, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 10, 0, 10, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1403RedUnits_Turn_6_6[] = {
    { EID_ENEMY_GENERIC, JID_グリーンマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 2, 8, 2, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1404RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ネフェニー_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_オスカー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 0, 8, 0, 8, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 2, 6, 2, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_エリンシア_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 2, 4, 2, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1405RedUnits[] = {
    { EID_ブルーノ, JID_ブルーノ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 0, 0, 0, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_エリンシア_PROMOTED, EID_ブルーノ, TRUE, FACTION_ID_RED, 30, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_漆黒の騎士_PROMOTED, EID_ブルーノ, TRUE, FACTION_ID_RED, 30, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_総選挙アイク_PROMOTED, EID_ブルーノ, TRUE, FACTION_ID_RED, 30, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_オスカー_PROMOTED, EID_ブルーノ, TRUE, FACTION_ID_RED, 30, 8, 0, 8, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1501RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_アルム_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ユリア_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ゼロ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_ネフェニー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 10, 6, 10, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S1601RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_セリス_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_リンダ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_マリク_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 0, 2, 0, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_ユリア_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_5, JID_エリウッド_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 4, 0, 4, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2011RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_アクスドラゴン_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 1, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 1, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 1, 4, 0, 4, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2012RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ランスアーマー_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 2, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 2, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 2, 2, 0, 2, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2013RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ブルーマージ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 3, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 3, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 3, 0, 4, 0, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2014RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ランスドラゴン_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 4, 0, 0, 0, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 4, 10, 6, 10, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 4, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 4, 4, 0, 4, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2015RedUnits[] = {
    { EID_ロキ, JID_ロキ, PID_NONE, TRUE, FACTION_ID_RED, 5, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター_UNPROMOTED, EID_ロキ, TRUE, FACTION_ID_RED, 5, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン_UNPROMOTED, EID_ロキ, TRUE, FACTION_ID_RED, 5, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_UNPROMOTED, EID_ロキ, TRUE, FACTION_ID_RED, 5, 10, 4, 10, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2021RedUnits[] = {
    { EID_ヴェロニカ, JID_ヴェロニカ, PID_NONE, TRUE, FACTION_ID_RED, 6, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート_UNPROMOTED, EID_ヴェロニカ, TRUE, FACTION_ID_RED, 6, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_UNPROMOTED, EID_ヴェロニカ, TRUE, FACTION_ID_RED, 6, 10, 8, 10, 8, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター_UNPROMOTED, EID_ヴェロニカ, TRUE, FACTION_ID_RED, 6, 10, 14, 10, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2022RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_シノノメ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 7, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_シャラ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 7, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 7, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 7, 0, 0, 0, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2023RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ジークベルト_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 8, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ソレイユ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 8, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 8, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 8, 6, 2, 6, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2024RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_シノノメ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 9, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ジークベルト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 9, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 9, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 9, 6, 2, 6, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2025RedUnits[] = {
    { EID_スルト, JID_スルト, PID_NONE, TRUE, FACTION_ID_RED, 10, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ロキ, JID_ロキ, EID_スルト, TRUE, FACTION_ID_RED, 10, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_レーヴァテイン, JID_レーヴァテイン, EID_スルト, TRUE, FACTION_ID_RED, 10, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーマムクート_UNPROMOTED, EID_スルト, TRUE, FACTION_ID_RED, 10, 0, 4, 0, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2025RedUnits_Turn_2_2[] = {
    { EID_ENEMY_GENERIC, JID_アクスドラゴン_UNPROMOTED, EID_スルト, TRUE, FACTION_ID_RED, 10, 10, 14, 10, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2025RedUnits_Turn_3_3[] = {
    { EID_ENEMY_GENERIC, JID_ランスナイト_UNPROMOTED, EID_スルト, TRUE, FACTION_ID_RED, 10, 4, 0, 4, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2025RedUnits_Turn_4_4[] = {
    { EID_ENEMY_GENERIC, JID_ソードドラゴン_UNPROMOTED, EID_スルト, TRUE, FACTION_ID_RED, 10, 0, 0, 0, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンマムクート_UNPROMOTED, EID_スルト, TRUE, FACTION_ID_RED, 10, 10, 0, 10, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2031RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_サザ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 11, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 11, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 11, 0, 2, 0, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 11, 10, 2, 10, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2032RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_サザ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 12, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ミカヤ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 10, 10, 10, 10, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2033RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_オリヴァー_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 13, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンマムクート_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 10, 6, 10, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 0, 4, 0, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2034RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_サザ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 14, 0, 12, 0, 12, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ミカヤ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 14, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ゼルギウス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 14, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 14, 10, 14, 10, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2035RedUnits[] = {
    { EID_レーヴァテイン, JID_レーヴァテイン, PID_NONE, TRUE, FACTION_ID_RED, 15, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーマムクート_UNPROMOTED, EID_レーヴァテイン, TRUE, FACTION_ID_RED, 15, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ_UNPROMOTED, EID_レーヴァテイン, TRUE, FACTION_ID_RED, 15, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_UNPROMOTED, EID_レーヴァテイン, TRUE, FACTION_ID_RED, 15, 0, 4, 0, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2041RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_エイリーク2_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 16, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 16, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 16, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 16, 10, 6, 10, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2042RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_マリカ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 17, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 0, 2, 0, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 10, 2, 10, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2043RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_エイリーク2_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 18, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ラーチェル_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 8, 6, 8, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 4, 2, 4, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2044RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ミルラ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 19, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーマムクート_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 19, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 19, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 19, 10, 4, 10, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2045RedUnits[] = {
    { EID_ロキ, JID_ロキ, PID_NONE, TRUE, FACTION_ID_RED, 20, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_レーヴァテイン, JID_レーヴァテイン, EID_ロキ, TRUE, FACTION_ID_RED, 20, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト_UNPROMOTED, EID_ロキ, TRUE, FACTION_ID_RED, 20, 8, 14, 8, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードドラゴン_UNPROMOTED, EID_ロキ, TRUE, FACTION_ID_RED, 20, 2, 14, 2, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2045RedUnits_Turn_2_2[] = {
    { EID_ENEMY_GENERIC, JID_グリーンマージ_UNPROMOTED, EID_ロキ, TRUE, FACTION_ID_RED, 20, 0, 14, 0, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2045RedUnits_Turn_3_3[] = {
    { EID_ENEMY_GENERIC, JID_ランスナイト_UNPROMOTED, EID_ロキ, TRUE, FACTION_ID_RED, 20, 2, 14, 2, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト_UNPROMOTED, EID_ロキ, TRUE, FACTION_ID_RED, 20, 10, 14, 10, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2045RedUnits_Turn_4_4[] = {
    { EID_スルト, JID_スルト, EID_ロキ, TRUE, FACTION_ID_RED, 20, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー_UNPROMOTED, EID_ロキ, TRUE, FACTION_ID_RED, 20, 2, 14, 2, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2051RedUnits[] = {
    { EID_レーヴァテイン, JID_レーヴァテイン, PID_NONE, TRUE, FACTION_ID_RED, 21, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンナイト_UNPROMOTED, EID_レーヴァテイン, TRUE, FACTION_ID_RED, 21, 8, 14, 8, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードドラゴン_UNPROMOTED, EID_レーヴァテイン, TRUE, FACTION_ID_RED, 21, 10, 12, 10, 12, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_UNPROMOTED, EID_レーヴァテイン, TRUE, FACTION_ID_RED, 21, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2052RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_魔女セリカ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 22, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 10, 6, 10, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2052RedUnits_Turn_2_2[] = {
    { EID_ENEMY_GENERIC, JID_アクスナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 10, 14, 10, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2052RedUnits_Turn_3_3[] = {
    { EID_ENEMY_GENERIC, JID_ボウファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 0, 14, 0, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2052RedUnits_Turn_4_4[] = {
    { EID_ENEMY_GENERIC, JID_アクスペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 0, 6, 0, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 0, 14, 0, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2052RedUnits_Turn_5_5[] = {
    { EID_ENEMY_GENERIC, JID_レッドナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 10, 14, 10, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2053RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_邪竜ルフレ男_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 23, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーマムクート_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 4, 0, 4, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2054RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_暗黒ハーディン_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 24, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 0, 2, 0, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2055RedUnits[] = {
    { EID_レーギャルン, JID_レーギャルン, PID_NONE, TRUE, FACTION_ID_RED, 25, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_レーヴァテイン, JID_レーヴァテイン, EID_レーギャルン, TRUE, FACTION_ID_RED, 25, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_暗黒ハーディン_UNPROMOTED, EID_レーギャルン, TRUE, FACTION_ID_RED, 25, 6, 10, 6, 10, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_邪竜ルフレ男_UNPROMOTED, EID_レーギャルン, TRUE, FACTION_ID_RED, 25, 4, 10, 4, 10, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンナイト_UNPROMOTED, EID_レーギャルン, TRUE, FACTION_ID_RED, 25, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2061RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_マーク女_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 26, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 26, 2, 14, 2, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 26, 8, 14, 8, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 26, 0, 6, 0, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2062RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_クロム2_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 27, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 2, 14, 2, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 0, 2, 0, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンマムクート_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 0, 8, 0, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2063RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_マーク女_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 28, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ジェローム_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 28, 2, 12, 2, 12, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードドラゴン_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 28, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 28, 0, 10, 0, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2064RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_マーク男_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 29, 0, 6, 0, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 29, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 29, 2, 10, 2, 10, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーマムクート_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 29, 0, 10, 0, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2065RedUnits[] = {
    { EID_レーギャルン, JID_レーギャルン, PID_NONE, TRUE, FACTION_ID_RED, 30, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_クロム2_UNPROMOTED, EID_レーギャルン, TRUE, FACTION_ID_RED, 30, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ジェローム_UNPROMOTED, EID_レーギャルン, TRUE, FACTION_ID_RED, 30, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_マーク女_UNPROMOTED, EID_レーギャルン, TRUE, FACTION_ID_RED, 30, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_UNPROMOTED, EID_レーギャルン, TRUE, FACTION_ID_RED, 30, 8, 4, 8, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2071RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_フィン_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 1, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 1, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 1, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 1, 10, 2, 10, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2072RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ラインハルト2_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 2, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 2, 0, 2, 0, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ナンナ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 2, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 2, 8, 4, 8, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2073RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_リーフ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 3, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ナンナ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 3, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_フィン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 3, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンマムクート_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 8, 0, 8, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2074RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ラインハルト2_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 4, 0, 6, 0, 6, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_オルエン2_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 4, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 4, 2, 14, 2, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 4, 2, 10, 2, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2075RedUnits[] = {
    { EID_スルト, JID_スルト_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 5, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_PROMOTED, EID_スルト, TRUE, FACTION_ID_RED, 5, 2, 8, 2, 8, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_リーフ_PROMOTED, EID_スルト, TRUE, FACTION_ID_RED, 5, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ナンナ_PROMOTED, EID_スルト, TRUE, FACTION_ID_RED, 5, 10, 10, 10, 10, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン_PROMOTED, EID_スルト, TRUE, FACTION_ID_RED, 5, 2, 14, 2, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2075RedUnits_Turn_3_3[] = {
    { EID_ENEMY_GENERIC, JID_ボウファイター_PROMOTED, EID_スルト, TRUE, FACTION_ID_RED, 5, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2075RedUnits_Turn_2_2[] = {
    { EID_ENEMY_HERO_3, JID_ラインハルト2_PROMOTED, EID_スルト, TRUE, FACTION_ID_RED, 5, 0, 12, 0, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2075RedUnits_Turn_4_4[] = {
    { EID_ENEMY_HERO_4, JID_フィン_PROMOTED, EID_スルト, TRUE, FACTION_ID_RED, 5, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン_PROMOTED, EID_スルト, TRUE, FACTION_ID_RED, 5, 4, 14, 4, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2075RedUnits_Turn_5_5[] = {
    { EID_ENEMY_HERO_5, JID_オルエン2_PROMOTED, EID_スルト, TRUE, FACTION_ID_RED, 5, 10, 14, 10, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2081RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_カンナ女_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 6, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 6, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 6, 6, 0, 6, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2082RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_スズカゼ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 7, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 7, 10, 6, 10, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 7, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 7, 8, 0, 8, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2083RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ヒノカ2_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 8, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_シグレ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 8, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 8, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 8, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 8, 8, 0, 8, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2084RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_カンナ女_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_カンナ男_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 9, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 9, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 9, 0, 0, 0, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2085RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_カンナ女_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_カンナ男_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ヒノカ2_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 10, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_シグレ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 10, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_5, JID_スズカゼ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 10, 10, 4, 10, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2091RedUnits[] = {
    { EID_ヘルビンディ, JID_ヘルビンディ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 11, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーマムクート_PROMOTED, EID_ヘルビンディ, TRUE, FACTION_ID_RED, 30, 0, 2, 0, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_PROMOTED, EID_ヘルビンディ, TRUE, FACTION_ID_RED, 11, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_PROMOTED, EID_ヘルビンディ, TRUE, FACTION_ID_RED, 11, 10, 0, 10, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2092RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_アレス_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 12, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ロッドナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 8, 0, 8, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2093RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_イシュタル_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 13, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 0, 8, 0, 8, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 0, 2, 0, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2094RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_アレス_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 14, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 14, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 14, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンマムクート_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_リーン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 6, 2, 6, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2095RedUnits[] = {
    { EID_ヘルビンディ, JID_ヘルビンディ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 15, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_リーン_PROMOTED, EID_ヘルビンディ, TRUE, FACTION_ID_RED, 30, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_イシュタル_PROMOTED, EID_ヘルビンディ, TRUE, FACTION_ID_RED, 15, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー_PROMOTED, EID_ヘルビンディ, TRUE, FACTION_ID_RED, 15, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト_PROMOTED, EID_ヘルビンディ, TRUE, FACTION_ID_RED, 15, 10, 2, 10, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2095RedUnits_Turn_3_3[] = {
    { EID_ENEMY_HERO_3, JID_アレス_PROMOTED, EID_ヘルビンディ, TRUE, FACTION_ID_RED, 15, 4, 0, 4, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2095RedUnits_Turn_2_2[] = {
    { EID_ENEMY_GENERIC, JID_グリーンマージ_PROMOTED, EID_ヘルビンディ, TRUE, FACTION_ID_RED, 15, 0, 0, 0, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2095RedUnits_Turn_4_4[] = {
    { EID_ENEMY_GENERIC, JID_ランスナイト_PROMOTED, EID_ヘルビンディ, TRUE, FACTION_ID_RED, 15, 6, 0, 6, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2101RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ラガルト_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 16, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 16, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 16, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 16, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 16, 2, 0, 2, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2102RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_カナス_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 17, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 4, 6, 4, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスドラゴン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 8, 2, 8, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2103RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ニノ2_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 18, 0, 8, 0, 8, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ライナス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 2, 6, 2, 6, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ロイド_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 2, 8, 2, 8, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 4, 12, 4, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2104RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_カアラ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 19, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 19, 0, 10, 0, 10, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 19, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ロッドナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 19, 10, 12, 10, 12, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンマムクート_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 6, 12, 6, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2105RedUnits[] = {
    { EID_スルト, JID_スルト_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 20, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ラガルト_PROMOTED, EID_スルト, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ニノ2_PROMOTED, EID_スルト, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ウルスラ_PROMOTED, EID_スルト, TRUE, FACTION_ID_RED, 20, 0, 0, 0, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_カナス_PROMOTED, EID_スルト, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2105RedUnits_Turn_1_1[] = {
    { EID_ENEMY_HERO_5, JID_ジャファル_PROMOTED, EID_スルト, TRUE, FACTION_ID_RED, 20, 10, 14, 10, 14, { 0 }, { 0 } },
    { EID_ENEMY_HERO_6, JID_ライナス_PROMOTED, EID_スルト, TRUE, FACTION_ID_RED, 20, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_ENEMY_HERO_7, JID_ロイド_PROMOTED, EID_スルト, TRUE, FACTION_ID_RED, 20, 4, 14, 4, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2111RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_アクスファイター_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 21, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 21, 8, 8, 8, 8, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 21, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 21, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 21, 10, 6, 10, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2112RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_スミア_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 22, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 0, 2, 0, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 10, 2, 10, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2113RedUnits[] = {
    { EID_ヘルビンディ, JID_ヘルビンディ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 23, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_マリアベル_PROMOTED, EID_ヘルビンディ, TRUE, FACTION_ID_RED, 23, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスファイター_PROMOTED, EID_ヘルビンディ, TRUE, FACTION_ID_RED, 23, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ_PROMOTED, EID_ヘルビンディ, TRUE, FACTION_ID_RED, 23, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート_PROMOTED, EID_ヘルビンディ, TRUE, FACTION_ID_RED, 30, 0, 4, 0, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2114RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_オリヴィエ2_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_リベラ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 0, 12, 0, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2115RedUnits[] = {
    { EID_レーヴァテイン, JID_レーヴァテイン_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 25, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_レーギャルン, JID_レーギャルン_PROMOTED, EID_レーヴァテイン, TRUE, FACTION_ID_RED, 25, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_マリアベル_PROMOTED, EID_レーヴァテイン, TRUE, FACTION_ID_RED, 25, 2, 14, 2, 14, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_リベラ_PROMOTED, EID_レーヴァテイン, TRUE, FACTION_ID_RED, 25, 10, 12, 10, 12, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_スミア_PROMOTED, EID_レーヴァテイン, TRUE, FACTION_ID_RED, 25, 8, 10, 8, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2121RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ジャムカ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 26, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_キュアン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 26, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 26, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードドラゴン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 26, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 26, 10, 4, 10, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2122RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_キュアン_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 27, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_エスリン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 0, 0, 0, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2123RedUnits[] = {
    { EID_ヘルビンディ, JID_ヘルビンディ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 28, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ジャムカ_PROMOTED, EID_ヘルビンディ, TRUE, FACTION_ID_RED, 28, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート_PROMOTED, EID_ヘルビンディ, TRUE, FACTION_ID_RED, 30, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスファイター_PROMOTED, EID_ヘルビンディ, TRUE, FACTION_ID_RED, 28, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーナイト_PROMOTED, EID_ヘルビンディ, TRUE, FACTION_ID_RED, 28, 0, 0, 0, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2124RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_レヴィン_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 29, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_シルヴィア_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 29, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 29, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 29, 0, 2, 0, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2125RedUnits[] = {
    { EID_ロキ, JID_ロキ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_シルヴィア_PROMOTED, EID_ロキ, TRUE, FACTION_ID_RED, 30, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスドラゴン_PROMOTED, EID_ロキ, TRUE, FACTION_ID_RED, 30, 0, 6, 0, 6, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_レヴィン_PROMOTED, EID_ロキ, TRUE, FACTION_ID_RED, 30, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス_PROMOTED, EID_ロキ, TRUE, FACTION_ID_RED, 30, 8, 0, 8, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2125RedUnits_Turn_1_1[] = {
    { EID_ENEMY_HERO_3, JID_キュアン_PROMOTED, EID_ロキ, TRUE, FACTION_ID_RED, 30, 0, 6, 0, 6, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_エスリン_PROMOTED, EID_ロキ, TRUE, FACTION_ID_RED, 30, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_5, JID_ジャムカ_PROMOTED, EID_ロキ, TRUE, FACTION_ID_RED, 30, 8, 0, 8, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2131RedUnits[] = {
    { EID_レーギャルン, JID_レーギャルン_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_サイラス_PROMOTED, EID_レーギャルン, TRUE, FACTION_ID_RED, 30, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン_PROMOTED, EID_レーギャルン, TRUE, FACTION_ID_RED, 30, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス_PROMOTED, EID_レーギャルン, TRUE, FACTION_ID_RED, 30, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ_PROMOTED, EID_レーギャルン, TRUE, FACTION_ID_RED, 30, 8, 2, 8, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2132RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_エポニーヌ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 8, 4, 8, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2133RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_オフェリア_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_フローラ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 8, 0, 8, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2134RedUnits[] = {
    { EID_レーヴァテイン, JID_レーヴァテイン_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_オフェリア_PROMOTED, EID_レーヴァテイン, TRUE, FACTION_ID_RED, 30, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_エポニーヌ_PROMOTED, EID_レーヴァテイン, TRUE, FACTION_ID_RED, 30, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー_PROMOTED, EID_レーヴァテイン, TRUE, FACTION_ID_RED, 30, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_PROMOTED, EID_レーヴァテイン, TRUE, FACTION_ID_RED, 30, 8, 0, 8, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2135RedUnits[] = {
    { EID_スルト, JID_スルト_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_サイラス_PROMOTED, EID_スルト, TRUE, FACTION_ID_RED, 30, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_フローラ_PROMOTED, EID_スルト, TRUE, FACTION_ID_RED, 30, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンマムクート_PROMOTED, EID_スルト, TRUE, FACTION_ID_RED, 30, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_PROMOTED, EID_スルト, TRUE, FACTION_ID_RED, 30, 0, 2, 0, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2135RedUnits_Turn_2_2[] = {
    { EID_ENEMY_GENERIC, JID_ブルーナイト_PROMOTED, EID_スルト, TRUE, FACTION_ID_RED, 30, 0, 14, 0, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター_PROMOTED, EID_スルト, TRUE, FACTION_ID_RED, 30, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S2135RedUnits_Turn_3_3[] = {
    { EID_ENEMY_GENERIC, JID_ボウファイター_PROMOTED, EID_スルト, TRUE, FACTION_ID_RED, 30, 10, 4, 10, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3011RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ランスファイター_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 1, 0, 2, 0, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 1, 10, 12, 10, 12, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドペガサス_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 1, 0, 14, 0, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3012RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_グリーンシーフ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 2, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドボウ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 2, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 2, 6, 6, 6, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3013RedUnits[] = {
    { EID_リーヴ, JID_リーヴ, PID_NONE, TRUE, FACTION_ID_RED, 3, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスファイター_UNPROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 3, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_UNPROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 3, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー_UNPROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 3, 2, 6, 2, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3014RedUnits[] = {
    { EID_スラシル, JID_スラシル, PID_NONE, TRUE, FACTION_ID_RED, 4, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル_UNPROMOTED, EID_スラシル, TRUE, FACTION_ID_RED, 4, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート_UNPROMOTED, EID_スラシル, TRUE, FACTION_ID_RED, 4, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_UNPROMOTED, EID_スラシル, TRUE, FACTION_ID_RED, 4, 8, 0, 8, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3015RedUnits[] = {
    { PID_神階エイル, JID_神階エイル, PID_NONE, TRUE, FACTION_ID_RED, 5, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト_UNPROMOTED, PID_神階エイル, TRUE, FACTION_ID_RED, 5, 10, 14, 10, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンファヴニル_UNPROMOTED, PID_神階エイル, TRUE, FACTION_ID_RED, 5, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_UNPROMOTED, PID_神階エイル, TRUE, FACTION_ID_RED, 5, 10, 10, 10, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3021RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_アクスファイター_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 6, 10, 10, 10, 10, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドペガサス_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 6, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 6, 10, 14, 10, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 6, 10, 4, 10, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3022RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_グルンマムクート_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 7, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 7, 10, 8, 10, 8, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 7, 8, 12, 8, 12, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスドラゴン_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 7, 4, 14, 4, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3023RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ソードナイト_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 8, 2, 12, 2, 12, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 8, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 8, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 8, 10, 10, 10, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3024RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_レッドマージ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 9, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 9, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 9, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーシーフ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 9, 8, 12, 8, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3025RedUnits[] = {
    { EID_スラシル, JID_スラシル, PID_NONE, TRUE, FACTION_ID_RED, 10, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト_UNPROMOTED, EID_スラシル, TRUE, FACTION_ID_RED, 10, 8, 14, 8, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_UNPROMOTED, EID_スラシル, TRUE, FACTION_ID_RED, 10, 2, 12, 2, 12, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアファヴニル_UNPROMOTED, EID_スラシル, TRUE, FACTION_ID_RED, 10, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3025RedUnits_Turn_2_2[] = {
    { EID_ENEMY_GENERIC, JID_ロッドナイト_UNPROMOTED, EID_スラシル, TRUE, FACTION_ID_RED, 10, 2, 14, 2, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3025RedUnits_Turn_3_3[] = {
    { EID_ENEMY_GENERIC, JID_ソードナイト_UNPROMOTED, EID_スラシル, TRUE, FACTION_ID_RED, 10, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3025RedUnits_Turn_4_4[] = {
    { EID_ENEMY_GENERIC, JID_ブルーペガサス_UNPROMOTED, EID_スラシル, TRUE, FACTION_ID_RED, 10, 4, 14, 4, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3031RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_リュシオン_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 11, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_リアーネ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 11, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 11, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 11, 10, 2, 10, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3032RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ネサラ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 12, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_リアーネ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 0, 2, 0, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3033RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ニケ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 13, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 0, 4, 0, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3034RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ティバーン_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 14, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_リュシオン_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 14, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 14, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 14, 2, 8, 2, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3035RedUnits[] = {
    { EID_ヘル, JID_ヘル, PID_NONE, TRUE, FACTION_ID_RED, 15, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_リアーネ_UNPROMOTED, EID_ヘル, TRUE, FACTION_ID_RED, 15, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ティバーン_UNPROMOTED, EID_ヘル, TRUE, FACTION_ID_RED, 15, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ニケ_UNPROMOTED, EID_ヘル, TRUE, FACTION_ID_RED, 15, 6, 4, 6, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3041RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ベルベット_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 16, 8, 12, 8, 12, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 16, 10, 10, 10, 10, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンファヴニル_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 16, 8, 10, 8, 10, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 16, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3042RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_キヌ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 17, 0, 2, 0, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ニシキ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 0, 6, 0, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 4, 0, 4, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3043RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ベロア_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 18, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_フランネル_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーボウ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 0, 2, 0, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3044RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ベロア_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 19, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_キヌ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 19, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドボウ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 19, 8, 14, 8, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 19, 2, 14, 2, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3045RedUnits[] = {
    { EID_リーヴ, JID_リーヴ, PID_NONE, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ニシキ_UNPROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_フランネル_UNPROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ベルベット_UNPROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3051RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ルゥ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 21, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 21, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 21, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 21, 0, 2, 0, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3052RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ティト_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 22, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 6, 0, 6, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3053RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ルトガー_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 23, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_スー_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 8, 2, 8, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3054RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_イドゥン_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 24, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーマムクート_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンファヴニル_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアファヴニル_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 0, 4, 0, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3055RedUnits[] = {
    { EID_グスタフ, JID_グスタフ, PID_NONE, TRUE, FACTION_ID_RED, 25, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_スー_UNPROMOTED, EID_グスタフ, TRUE, FACTION_ID_RED, 25, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ティト_UNPROMOTED, EID_グスタフ, TRUE, FACTION_ID_RED, 25, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_UNPROMOTED, EID_グスタフ, TRUE, FACTION_ID_RED, 25, 2, 2, 2, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3055RedUnits_Turn_2_2[] = {
    { EID_ENEMY_GENERIC, JID_ブルーナイト_UNPROMOTED, EID_グスタフ, TRUE, FACTION_ID_RED, 25, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ルトガー_UNPROMOTED, EID_グスタフ, TRUE, FACTION_ID_RED, 25, 6, 4, 6, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3055RedUnits_Turn_3_3[] = {
    { EID_ENEMY_GENERIC, JID_ボウペガサス_UNPROMOTED, EID_グスタフ, TRUE, FACTION_ID_RED, 25, 6, 4, 6, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3061RedUnits[] = {
    { EID_リーヴ, JID_リーヴ, PID_NONE, TRUE, FACTION_ID_RED, 26, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_レテ_UNPROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 26, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス_UNPROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 26, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ_UNPROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 26, 10, 4, 10, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3062RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_モゥディ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 27, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ライ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 8, 0, 8, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3063RedUnits[] = {
    { EID_ヘル, JID_ヘル, PID_NONE, TRUE, FACTION_ID_RED, 28, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスドラゴン_UNPROMOTED, EID_ヘル, TRUE, FACTION_ID_RED, 28, 10, 6, 10, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアファヴニル_UNPROMOTED, EID_ヘル, TRUE, FACTION_ID_RED, 28, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト_UNPROMOTED, EID_ヘル, TRUE, FACTION_ID_RED, 28, 8, 0, 8, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3064RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_カイネギス_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 29, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 29, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ライ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 29, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 29, 6, 0, 6, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3065RedUnits[] = {
    { EID_リーヴ, JID_リーヴ, PID_NONE, TRUE, FACTION_ID_RED, 30, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_スラシル, JID_スラシル, EID_リーヴ, TRUE, FACTION_ID_RED, 30, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_モゥディ_UNPROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 30, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_レテ_UNPROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 30, 10, 4, 10, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3071RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ランスペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 1, 10, 6, 10, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 1, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 1, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_魔剣マリータ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 1, 8, 4, 8, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3072RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_暴走カムイ女_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 10, 6, 10, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 2, 10, 14, 10, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 2, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 2, 0, 2, 0, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3073RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_魔剣マリータ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 3, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_催眠チキ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 3, 10, 0, 10, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 3, 0, 0, 0, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3074RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_闇ベルクト_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 4, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 4, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 4, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 4, 2, 8, 2, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3075RedUnits[] = {
    { EID_リーヴ, JID_リーヴ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 5, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_暴走カムイ女_PROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 30, 10, 6, 10, 6, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_催眠チキ_PROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 30, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_闇ベルクト_PROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 5, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_魔剣マリータ_PROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 5, 6, 2, 6, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3081RedUnits[] = {
    { EID_スラシル, JID_スラシル_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 6, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_シンシア_PROMOTED, EID_スラシル, TRUE, FACTION_ID_RED, 6, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー_PROMOTED, EID_スラシル, TRUE, FACTION_ID_RED, 6, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン_PROMOTED, EID_スラシル, TRUE, FACTION_ID_RED, 6, 0, 4, 0, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3082RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ブレディ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 7, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_シャンブレー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 7, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 7, 6, 4, 6, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3083RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_デジェル_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 8, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 8, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 8, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスドラゴン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 8, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 8, 10, 2, 10, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3084RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ンン_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_シンシア_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 9, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーマムクート_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 9, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 9, 0, 2, 0, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3085RedUnits[] = {
    { EID_リーヴ, JID_リーヴ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 10, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ンン_PROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 30, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_デジェル_PROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 10, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ブレディ_PROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 10, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_シャンブレー_PROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 30, 0, 2, 0, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3091RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ベレス_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 11, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 11, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 11, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 11, 6, 0, 6, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3092RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ディミトリ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 12, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 2, 6, 2, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 0, 0, 0, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 10, 2, 10, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3093RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_クロード_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 13, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 10, 0, 10, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 10, 2, 10, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3094RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_エーデルガルト_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 14, 10, 6, 10, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 14, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 14, 10, 12, 10, 12, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 14, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードドラゴン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 14, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3095RedUnits[] = {
    { EID_リーヴ, JID_リーヴ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 15, 2, 10, 2, 10, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ベレス_PROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 15, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ディミトリ_PROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 15, 0, 10, 0, 10, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_エーデルガルト_PROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 15, 10, 8, 10, 8, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_クロード_PROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 15, 10, 14, 10, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3101RedUnits[] = {
    { EID_スラシル, JID_スラシル_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 16, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ペトラ_PROMOTED, EID_スラシル, TRUE, FACTION_ID_RED, 16, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター_PROMOTED, EID_スラシル, TRUE, FACTION_ID_RED, 16, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー_PROMOTED, EID_スラシル, TRUE, FACTION_ID_RED, 16, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウペガサス_PROMOTED, EID_スラシル, TRUE, FACTION_ID_RED, 16, 10, 2, 10, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3102RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ヒルダ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 17, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 0, 0, 0, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアファヴニル_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_メルセデス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 6, 0, 6, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3103RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ヒューベルト_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 18, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ペトラ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 2, 4, 2, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3104RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_死神騎士_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 19, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 19, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 19, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンマムクート_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 19, 10, 4, 10, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3105RedUnits[] = {
    { EID_スラシル, JID_スラシル_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ペトラ_PROMOTED, EID_スラシル, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ヒルダ_PROMOTED, EID_スラシル, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_メルセデス_PROMOTED, EID_スラシル, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター_PROMOTED, EID_スラシル, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3105RedUnits_Turn_2_2[] = {
    { EID_ENEMY_HERO_4, JID_ヒューベルト_PROMOTED, EID_スラシル, TRUE, FACTION_ID_RED, 20, 0, 12, 0, 12, { 0 }, { 0 } },
    { EID_ENEMY_HERO_5, JID_死神騎士_PROMOTED, EID_スラシル, TRUE, FACTION_ID_RED, 20, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター_PROMOTED, EID_スラシル, TRUE, FACTION_ID_RED, 20, 0, 10, 0, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3111RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ノルン_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 21, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_フィーナ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 21, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 21, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 21, 8, 2, 8, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3112RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_シリウス_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 22, 10, 8, 10, 8, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンファヴニル_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 4, 2, 4, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3113RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_アストリア_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 23, 2, 12, 2, 12, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_フィーナ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 4, 10, 4, 10, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ロッドナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 0, 14, 0, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーボウ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンシーフ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3114RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_バヌトゥ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 0, 6, 0, 6, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ナギ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 4, 0, 4, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3115RedUnits[] = {
    { EID_リーヴ, JID_リーヴ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 25, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ノルン_PROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 25, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_フィーナ_PROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 30, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ナギ_PROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 30, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_シリウス_PROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 25, 10, 4, 10, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3121RedUnits[] = {
    { EID_リーヴ, JID_リーヴ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 26, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_バルボ_PROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 26, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ_PROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 26, 0, 2, 0, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスドラゴン_PROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 26, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ_PROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 26, 8, 0, 8, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3122RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_バルボ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 27, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_シルク_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 0, 2, 0, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 10, 0, 10, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3123RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_フォルス_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 28, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_パイソン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 28, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_シルク_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 28, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 28, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 28, 10, 2, 10, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3124RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_外伝カチュア_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 29, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 29, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_コンラート_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 29, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンマムクート_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 2, 6, 2, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 29, 8, 4, 8, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3125RedUnits[] = {
    { EID_リーヴ, JID_リーヴ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_外伝カチュア_PROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 30, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_フォルス_PROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 30, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_パイソン_PROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 30, 10, 0, 10, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_シルク_PROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 30, 8, 2, 8, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3125RedUnits_Turn_2_2[] = {
    { EID_ENEMY_HERO_5, JID_バルボ_PROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 30, 2, 14, 2, 14, { 0 }, { 0 } },
    { EID_ENEMY_HERO_6, JID_コンラート_PROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 30, 0, 2, 0, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_7, JID_レオ_PROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 30, 0, 14, 0, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3131RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ロス_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ユアン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 10, 6, 10, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 10, 10, 10, 10, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 6, 0, 6, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3132RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ジスト_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_テティス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 4, 2, 4, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3133RedUnits[] = {
    { EID_リーヴ, JID_リーヴ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_スラシル, JID_スラシル_PROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 30, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト_PROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 30, 0, 0, 0, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル_PROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 30, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスドラゴン_PROMOTED, EID_リーヴ, TRUE, FACTION_ID_RED, 30, 10, 2, 10, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3134RedUnits[] = {
    { EID_ヘル, JID_ヘル_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_比翼エフラム_PROMOTED, EID_ヘル, TRUE, FACTION_ID_RED, 30, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス_PROMOTED, EID_ヘル, TRUE, FACTION_ID_RED, 30, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーペガサス_PROMOTED, EID_ヘル, TRUE, FACTION_ID_RED, 30, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_PROMOTED, EID_ヘル, TRUE, FACTION_ID_RED, 30, 2, 4, 2, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3135RedUnits[] = {
    { EID_ヘル, JID_ヘル_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_比翼エフラム_PROMOTED, EID_ヘル, TRUE, FACTION_ID_RED, 30, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ジスト_PROMOTED, EID_ヘル, TRUE, FACTION_ID_RED, 30, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_テティス_PROMOTED, EID_ヘル, TRUE, FACTION_ID_RED, 30, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドペガサス_PROMOTED, EID_ヘル, TRUE, FACTION_ID_RED, 30, 0, 2, 0, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3135RedUnits_Turn_2_2[] = {
    { EID_ENEMY_HERO_4, JID_クーガー_PROMOTED, EID_ヘル, TRUE, FACTION_ID_RED, 30, 0, 8, 0, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S3135RedUnits_Turn_3_3[] = {
    { EID_ENEMY_GENERIC, JID_ラウアファヴニル_PROMOTED, EID_ヘル, TRUE, FACTION_ID_RED, 30, 10, 14, 10, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーナイト_PROMOTED, EID_ヘル, TRUE, FACTION_ID_RED, 30, 10, 4, 10, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4011RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_レッドシーフ_UNPROMOTED, EID_ロキ, TRUE, FACTION_ID_RED, 1, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ロキ, JID_ロキ, PID_NONE, TRUE, FACTION_ID_RED, 1, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト_UNPROMOTED, EID_ロキ, TRUE, FACTION_ID_RED, 1, 10, 4, 10, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4012RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ブルーペガサス_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 2, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 2, 8, 6, 8, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 2, 8, 10, 8, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4013RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_シスター_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 3, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 3, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 3, 0, 8, 0, 8, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 3, 4, 4, 4, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4014RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ラウアファヴニル_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 4, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーボウ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 4, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 4, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 4, 4, 4, 4, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4015RedUnits[] = {
    { EID_ブルーノ, JID_ブルーノ, PID_NONE, TRUE, FACTION_ID_RED, 5, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ヴェロニカ, JID_ヴェロニカ, EID_ブルーノ, TRUE, FACTION_ID_RED, 5, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター_UNPROMOTED, EID_ブルーノ, TRUE, FACTION_ID_RED, 5, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス_UNPROMOTED, EID_ブルーノ, TRUE, FACTION_ID_RED, 5, 10, 4, 10, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4021RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_タニア_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 6, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_オーシン_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 6, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 6, 10, 6, 10, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 6, 10, 10, 10, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4022RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ケンプフ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 7, 0, 0, 0, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 7, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンボウ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 7, 0, 14, 0, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 7, 10, 14, 10, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4023RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_マリータ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 8, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 8, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 8, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 8, 0, 4, 0, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4024RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_エーヴェル_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 9, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_オーシン_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 9, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_タニア_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 9, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 9, 4, 0, 4, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4025RedUnits[] = {
    { EID_スカビオサ, JID_スカビオサ, PID_NONE, TRUE, FACTION_ID_RED, 10, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_エーヴェル_UNPROMOTED, EID_スカビオサ, TRUE, FACTION_ID_RED, 10, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_マリータ_UNPROMOTED, EID_スカビオサ, TRUE, FACTION_ID_RED, 10, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル_UNPROMOTED, EID_スカビオサ, TRUE, FACTION_ID_RED, 10, 10, 4, 10, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4031RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_シャナン_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 11, 6, 10, 6, 10, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 11, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンボウ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 11, 10, 10, 10, 10, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 11, 2, 12, 2, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4032RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_アルテナ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 12, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードドラゴン_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 10, 4, 10, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4033RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ラクチェ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 13, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_シャナン_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 0, 14, 0, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 8, 2, 8, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4034RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_セティ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 14, 0, 6, 0, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 14, 4, 6, 4, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 14, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 14, 4, 0, 4, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4035RedUnits[] = {
    { EID_プルメリア, JID_プルメリア, PID_NONE, TRUE, FACTION_ID_RED, 15, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_アルテナ_UNPROMOTED, EID_プルメリア, TRUE, FACTION_ID_RED, 15, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ラクチェ_UNPROMOTED, EID_プルメリア, TRUE, FACTION_ID_RED, 15, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_セティ_UNPROMOTED, EID_プルメリア, TRUE, FACTION_ID_RED, 15, 10, 0, 10, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4041RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ラス_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 16, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ヒース_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 16, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 16, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 16, 2, 4, 2, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4042RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ニルス_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 17, 2, 14, 2, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 8, 10, 8, 10, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 10, 12, 10, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4043RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_フィオーラ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 18, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 10, 2, 10, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4044RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_レイラ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 19, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドボウ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 19, 10, 14, 10, 14, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ラス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 19, 0, 6, 0, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 19, 4, 14, 4, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4045RedUnits[] = {
    { EID_スカビオサ, JID_スカビオサ, PID_NONE, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ニルス_UNPROMOTED, EID_スカビオサ, TRUE, FACTION_ID_RED, 20, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_フィオーラ_UNPROMOTED, EID_スカビオサ, TRUE, FACTION_ID_RED, 20, 10, 6, 10, 6, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_レイラ_UNPROMOTED, EID_スカビオサ, TRUE, FACTION_ID_RED, 20, 0, 4, 0, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4051RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ブルーマージ_UNPROMOTED, EID_スルト, TRUE, FACTION_ID_RED, 21, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_UNPROMOTED, EID_スルト, TRUE, FACTION_ID_RED, 21, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードドラゴン_UNPROMOTED, EID_スルト, TRUE, FACTION_ID_RED, 21, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_スルト, JID_スルト, PID_NONE, TRUE, FACTION_ID_RED, 21, 4, 2, 4, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4052RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_アネット_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 22, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 2, 8, 2, 8, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 0, 4, 0, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4053RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_リシテア_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 23, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 4, 6, 4, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 6, 6, 6, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ロッドナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 0, 4, 0, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4054RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_フェルディナント_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 24, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ベルナデッタ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 0, 2, 0, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアファヴニル_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 10, 2, 10, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4055RedUnits[] = {
    { EID_ヘルビンディ, JID_ヘルビンディ, PID_NONE, TRUE, FACTION_ID_RED, 25, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_炎帝_UNPROMOTED, EID_ヘルビンディ, TRUE, FACTION_ID_RED, 25, 2, 6, 2, 6, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_リシテア_UNPROMOTED, EID_ヘルビンディ, TRUE, FACTION_ID_RED, 25, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_フェルディナント_UNPROMOTED, EID_ヘルビンディ, TRUE, FACTION_ID_RED, 25, 2, 2, 2, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4061RedUnits[] = {
    { EID_ヴェロニカ, JID_ヴェロニカ, PID_NONE, TRUE, FACTION_ID_RED, 26, 8, 12, 8, 12, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル_UNPROMOTED, EID_ヴェロニカ, TRUE, FACTION_ID_RED, 26, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー_UNPROMOTED, EID_ヴェロニカ, TRUE, FACTION_ID_RED, 26, 10, 8, 10, 8, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター_UNPROMOTED, EID_ヴェロニカ, TRUE, FACTION_ID_RED, 26, 4, 14, 4, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4062RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_リンカ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 27, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 8, 2, 8, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4063RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_リリス_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 28, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアファヴニル_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 28, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンマムクート_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 28, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 28, 8, 2, 8, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4064RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_フォレオ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 29, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ミドリコ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 29, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 29, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 29, 4, 4, 4, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4065RedUnits[] = {
    { EID_ブルーノ, JID_ブルーノ, PID_NONE, TRUE, FACTION_ID_RED, 30, 4, 4, 4, 4, { 0 }, { 0 } },
    { PID_マークス, JID_マークス, EID_ブルーノ, TRUE, FACTION_ID_RED, 30, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_マクベス_UNPROMOTED, EID_ブルーノ, TRUE, FACTION_ID_RED, 30, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_フォレオ_UNPROMOTED, EID_ブルーノ, TRUE, FACTION_ID_RED, 30, 2, 2, 2, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4071RedUnits[] = {
    { EID_スカビオサ, JID_スカビオサ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ヘル, JID_ヘル_PROMOTED, EID_スカビオサ, TRUE, FACTION_ID_RED, 1, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー_PROMOTED, EID_スカビオサ, TRUE, FACTION_ID_RED, 1, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーマムクート_PROMOTED, EID_スカビオサ, TRUE, FACTION_ID_RED, 30, 8, 2, 8, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4072RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_催眠ユリア_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 2, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 2, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 2, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードドラゴン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 2, 10, 12, 10, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4073RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_魔王リオン_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 3, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 3, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ロッドナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 3, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドボウ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 3, 0, 4, 0, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4074RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_暴走アイク_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 4, 6, 10, 6, 10, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 4, 2, 14, 2, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 4, 8, 10, 8, 10, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 4, 10, 10, 10, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4075RedUnits[] = {
    { EID_スカビオサ, JID_スカビオサ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_暴走アイク_PROMOTED, EID_スカビオサ, TRUE, FACTION_ID_RED, 5, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_暴走カムイ男_PROMOTED, EID_スカビオサ, TRUE, FACTION_ID_RED, 30, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_催眠ユリア_PROMOTED, EID_スカビオサ, TRUE, FACTION_ID_RED, 5, 2, 2, 2, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4081RedUnits[] = {
    { EID_プルメリア, JID_プルメリア_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_エメリナ_PROMOTED, EID_プルメリア, TRUE, FACTION_ID_RED, 6, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンペガサス_PROMOTED, EID_プルメリア, TRUE, FACTION_ID_RED, 6, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル_PROMOTED, EID_プルメリア, TRUE, FACTION_ID_RED, 30, 4, 4, 4, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4082RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_覚醒アンナ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 7, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_エメリナ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 7, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 7, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 7, 6, 2, 6, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4083RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_サイリ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 8, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ロッドナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 8, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 8, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 8, 8, 6, 8, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスドラゴン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 8, 6, 2, 6, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4084RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ギャンレル_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 9, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ムスタファー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 9, 0, 2, 0, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 9, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアファヴニル_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 9, 4, 4, 4, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4085RedUnits[] = {
    { EID_プルメリア, JID_プルメリア_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ギャンレル_PROMOTED, EID_プルメリア, TRUE, FACTION_ID_RED, 10, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_サイリ_PROMOTED, EID_プルメリア, TRUE, FACTION_ID_RED, 10, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_覚醒アンナ_PROMOTED, EID_プルメリア, TRUE, FACTION_ID_RED, 10, 0, 2, 0, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_ムスタファー_PROMOTED, EID_プルメリア, TRUE, FACTION_ID_RED, 10, 6, 2, 6, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4091RedUnits[] = {
    { EID_スカビオサ, JID_スカビオサ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_クリス男_PROMOTED, EID_スカビオサ, TRUE, FACTION_ID_RED, 11, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル_PROMOTED, EID_スカビオサ, TRUE, FACTION_ID_RED, 30, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト_PROMOTED, EID_スカビオサ, TRUE, FACTION_ID_RED, 11, 10, 2, 10, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4092RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ジュリアン_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 12, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_レナ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 2, 8, 2, 8, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 0, 6, 0, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4093RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_クリス女_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 13, 4, 6, 4, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンシーフ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 0, 6, 0, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4094RedUnits[] = {
    { EID_スカビオサ, JID_スカビオサ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 0, 6, 0, 6, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_エレミヤ_PROMOTED, EID_スカビオサ, TRUE, FACTION_ID_RED, 14, 0, 10, 0, 10, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター_PROMOTED, EID_スカビオサ, TRUE, FACTION_ID_RED, 14, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_PROMOTED, EID_スカビオサ, TRUE, FACTION_ID_RED, 14, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_PROMOTED, EID_スカビオサ, TRUE, FACTION_ID_RED, 14, 0, 4, 0, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4095RedUnits[] = {
    { EID_フレイヤ, JID_フレイヤ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 0, 14, 0, 14, { 0 }, { 0 } },
    { EID_フレイヤ, JID_フレイヤ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 10, 14, 10, 14, { 0 }, { 0 } },
    { EID_フレイヤ, JID_フレイヤ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_クリス男_PROMOTED, EID_フレイヤ, TRUE, FACTION_ID_RED, 15, 2, 12, 2, 12, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_クリス女_PROMOTED, EID_フレイヤ, TRUE, FACTION_ID_RED, 15, 0, 2, 0, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4095RedUnits_Turn_1_1[] = {
    { EID_フレイヤ, JID_フレイヤ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 0, 0, 0, 0, { 0 }, { 0 } },
    { EID_フレイヤ, JID_フレイヤ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 10, 0, 10, 0, { 0 }, { 0 } },
    { EID_フレイヤ, JID_フレイヤ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_フレイヤ, JID_フレイヤ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 0, 14, 0, 14, { 0 }, { 0 } },
    { EID_フレイヤ, JID_フレイヤ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 10, 14, 10, 14, { 0 }, { 0 } },
    { EID_フレイヤ, JID_フレイヤ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 4, 0, 4, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4095RedUnits_Turn_2_2[] = {
    { EID_ENEMY_HERO_3, JID_エレミヤ_PROMOTED, EID_フレイヤ, TRUE, FACTION_ID_RED, 15, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4095RedUnits_Turn_3_3[] = {
    { EID_ENEMY_HERO_4, JID_レナ_PROMOTED, EID_フレイヤ, TRUE, FACTION_ID_RED, 15, 2, 0, 2, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4095RedUnits_Turn_4_4[] = {
    { EID_ENEMY_HERO_5, JID_ジュリアン_PROMOTED, EID_フレイヤ, TRUE, FACTION_ID_RED, 15, 8, 0, 8, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4101RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_総選挙リシテア_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 16, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 16, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 16, 2, 6, 2, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 16, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 16, 6, 4, 6, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4102RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_総選挙ディミトリ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 17, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 0, 6, 0, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 2, 4, 2, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4103RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_総選挙クロード_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 18, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 10, 0, 10, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 8, 0, 8, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4104RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_総選挙エーデル_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 19, 8, 8, 8, 8, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 19, 10, 10, 10, 10, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 19, 6, 6, 6, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 19, 10, 12, 10, 12, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードドラゴン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 19, 8, 4, 8, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4105RedUnits[] = {
    { EID_フロージ, JID_フロージ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_総選挙リシテア_PROMOTED, EID_フロージ, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_総選挙ディミトリ_PROMOTED, EID_フロージ, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_総選挙クロード_PROMOTED, EID_フロージ, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_総選挙エーデル_PROMOTED, EID_フロージ, TRUE, FACTION_ID_RED, 20, 10, 6, 10, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4111RedUnits[] = {
    { EID_フレイヤ, JID_フレイヤ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_イレース_PROMOTED, EID_フレイヤ, TRUE, FACTION_ID_RED, 21, 2, 12, 2, 12, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト_PROMOTED, EID_フレイヤ, TRUE, FACTION_ID_RED, 21, 0, 12, 0, 12, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト_PROMOTED, EID_フレイヤ, TRUE, FACTION_ID_RED, 21, 10, 12, 10, 12, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル_PROMOTED, EID_フレイヤ, TRUE, FACTION_ID_RED, 30, 6, 10, 6, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4112RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_シノン_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 22, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ジル_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスドラゴン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンシーフ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 0, 4, 0, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4113RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_シノン_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 23, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ガトリー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 8, 6, 8, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 8, 8, 8, 8, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 10, 14, 10, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 8, 2, 8, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4114RedUnits[] = {
    { EID_プルメリア, JID_プルメリア_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_プラハ_PROMOTED, EID_プルメリア, TRUE, FACTION_ID_RED, 24, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト_PROMOTED, EID_プルメリア, TRUE, FACTION_ID_RED, 24, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル_PROMOTED, EID_プルメリア, TRUE, FACTION_ID_RED, 30, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ_PROMOTED, EID_プルメリア, TRUE, FACTION_ID_RED, 24, 0, 2, 0, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4115RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_シノン_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 25, 0, 2, 0, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ガトリー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 25, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_フレイヤ, JID_フレイヤ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 25, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ジル_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 25, 8, 4, 8, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4121RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_カトリーヌ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 26, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 26, 10, 10, 10, 10, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 26, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 26, 10, 14, 10, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4122RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_フレン_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 27, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンマムクート_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 8, 2, 8, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4123RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_セテス_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 28, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードドラゴン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 28, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_フレン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 28, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 28, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 28, 8, 6, 8, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4124RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_カトリーヌ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 29, 10, 8, 10, 8, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_シャミア_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 29, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 29, 10, 10, 10, 10, { 0 }, { 0 } },
    { EID_スカビオサ, JID_スカビオサ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 8, 12, 8, 12, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 10, 4, 10, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4125RedUnits[] = {
    { EID_フード, JID_フード_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_カトリーヌ_PROMOTED, EID_フード, TRUE, FACTION_ID_RED, 30, 10, 8, 10, 8, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_シャミア_PROMOTED, EID_フード, TRUE, FACTION_ID_RED, 30, 0, 10, 0, 10, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_セテス_PROMOTED, EID_フード, TRUE, FACTION_ID_RED, 30, 8, 10, 8, 10, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_フレン_PROMOTED, EID_フード, TRUE, FACTION_ID_RED, 30, 4, 12, 4, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4131RedUnits[] = {
    { EID_フレイヤ, JID_フレイヤ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ゲイル_PROMOTED, EID_フレイヤ, TRUE, FACTION_ID_RED, 30, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト_PROMOTED, EID_フレイヤ, TRUE, FACTION_ID_RED, 30, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_PROMOTED, EID_フレイヤ, TRUE, FACTION_ID_RED, 30, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター_PROMOTED, EID_フレイヤ, TRUE, FACTION_ID_RED, 30, 8, 4, 8, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4132RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ディーク_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 6, 6, 6, 6, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_マリナス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 0, 2, 0, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 8, 6, 8, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4133RedUnits[] = {
    { EID_フレイヤ, JID_フレイヤ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 0, 14, 0, 14, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ギネヴィア_PROMOTED, EID_フレイヤ, TRUE, FACTION_ID_RED, 30, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ミレディ_PROMOTED, EID_フレイヤ, TRUE, FACTION_ID_RED, 30, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードドラゴン_PROMOTED, EID_フレイヤ, TRUE, FACTION_ID_RED, 30, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト_PROMOTED, EID_フレイヤ, TRUE, FACTION_ID_RED, 30, 0, 2, 0, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4134RedUnits[] = {
    { EID_フレイヤ, JID_フレイヤ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ディーク_PROMOTED, EID_フレイヤ, TRUE, FACTION_ID_RED, 30, 10, 10, 10, 10, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ギネヴィア_PROMOTED, EID_フレイヤ, TRUE, FACTION_ID_RED, 30, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ミレディ_PROMOTED, EID_フレイヤ, TRUE, FACTION_ID_RED, 30, 10, 6, 10, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアファヴニル_PROMOTED, EID_フレイヤ, TRUE, FACTION_ID_RED, 30, 6, 0, 6, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4134RedUnits_Turn_2_2[] = {
    { EID_ENEMY_HERO_4, JID_マリナス_PROMOTED, EID_フレイヤ, TRUE, FACTION_ID_RED, 30, 0, 4, 0, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4134RedUnits_Turn_3_3[] = {
    { EID_ENEMY_HERO_5, JID_ゲイル_PROMOTED, EID_フレイヤ, TRUE, FACTION_ID_RED, 30, 2, 14, 2, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードドラゴン_PROMOTED, EID_フレイヤ, TRUE, FACTION_ID_RED, 30, 0, 14, 0, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S4135RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_レッドシーフ_PROMOTED, EID_ロキ, TRUE, FACTION_ID_RED, 30, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ロキ, JID_ロキ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト_PROMOTED, EID_ロキ, TRUE, FACTION_ID_RED, 30, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_PROMOTED, EID_ロキ, TRUE, FACTION_ID_RED, 30, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーナイト_PROMOTED, EID_ロキ, TRUE, FACTION_ID_RED, 30, 2, 2, 2, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5011RedUnits[] = {
    { PID_レギン, JID_レギン, PID_NONE, TRUE, FACTION_ID_RED, 1, 10, 10, 10, 10, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_UNPROMOTED, PID_レギン, TRUE, FACTION_ID_RED, 1, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ_UNPROMOTED, PID_レギン, TRUE, FACTION_ID_RED, 1, 8, 0, 8, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5012RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ランスアーマー_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 2, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウペガサス_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 2, 0, 6, 0, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドペガサス_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 2, 8, 0, 8, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5013RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ラウアマムクート_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 3, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 3, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーシーフ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 3, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 3, 10, 4, 10, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5014RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ランスファイター_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 4, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 4, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 4, 0, 2, 0, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドナイト_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 4, 10, 0, 10, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5015RedUnits[] = {
    { PID_レギン, JID_レギン, PID_NONE, TRUE, FACTION_ID_RED, 5, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト_UNPROMOTED, PID_レギン, TRUE, FACTION_ID_RED, 5, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル_UNPROMOTED, PID_レギン, TRUE, FACTION_ID_RED, 5, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーペガサス_UNPROMOTED, PID_レギン, TRUE, FACTION_ID_RED, 5, 10, 4, 10, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5021RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ナターシャ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 6, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ノール_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 6, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 6, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 6, 4, 4, 4, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5022RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ケセルダ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 7, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 7, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスドラゴン_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 7, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 7, 10, 2, 10, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5023RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_セライナ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 8, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 8, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 8, 0, 6, 0, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 8, 8, 0, 8, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5024RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_デュッセル_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 9, 0, 6, 0, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 9, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアファヴニル_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 9, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 9, 0, 10, 0, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5025RedUnits[] = {
    { EID_オッテル, JID_オッテル, PID_NONE, TRUE, FACTION_ID_RED, 10, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ケセルダ_UNPROMOTED, EID_オッテル, TRUE, FACTION_ID_RED, 10, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_デュッセル_UNPROMOTED, EID_オッテル, TRUE, FACTION_ID_RED, 10, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_セライナ_UNPROMOTED, EID_オッテル, TRUE, FACTION_ID_RED, 10, 10, 4, 10, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5031RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ロナン_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 11, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 11, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 11, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ロッドナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 11, 2, 0, 2, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5032RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ミランダ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 12, 10, 10, 10, 10, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 8, 6, 8, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 10, 8, 10, 8, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 10, 2, 10, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5033RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_サラ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 13, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーボウ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 10, 2, 10, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5034RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_アスベル_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 14, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 14, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーマムクート_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 14, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 14, 10, 4, 10, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5035RedUnits[] = {
    { EID_ファフニール, JID_ファフニール, PID_NONE, TRUE, FACTION_ID_RED, 15, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ミランダ_UNPROMOTED, EID_ファフニール, TRUE, FACTION_ID_RED, 15, 10, 0, 10, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_サラ_UNPROMOTED, EID_ファフニール, TRUE, FACTION_ID_RED, 15, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト_UNPROMOTED, EID_ファフニール, TRUE, FACTION_ID_RED, 15, 6, 2, 6, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5035RedUnits_Turn_3_3[] = {
    { EID_ENEMY_HERO_3, JID_ロナン_UNPROMOTED, EID_ファフニール, TRUE, FACTION_ID_RED, 15, 0, 14, 0, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5035RedUnits_Turn_2_2[] = {
    { EID_ENEMY_HERO_4, JID_アスベル_UNPROMOTED, EID_ファフニール, TRUE, FACTION_ID_RED, 15, 0, 6, 0, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5035RedUnits_Turn_4_4[] = {
    { EID_ENEMY_GENERIC, JID_アクスファイター_UNPROMOTED, EID_ファフニール, TRUE, FACTION_ID_RED, 15, 10, 14, 10, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5041RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_アゼル_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 16, 2, 10, 2, 10, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 16, 10, 10, 10, 10, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 16, 0, 8, 0, 8, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンマムクート_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 16, 6, 12, 6, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5042RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_マーニャ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 17, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 0, 0, 0, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 10, 4, 10, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5043RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_フュリー_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 18, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ロッドナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 10, 2, 10, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5044RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_アゼル_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 19, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_レックス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 19, 10, 6, 10, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 19, 10, 10, 10, 10, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 19, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5045RedUnits[] = {
    { EID_ダグ, JID_ダグ, PID_NONE, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_フュリー_UNPROMOTED, EID_ダグ, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_マーニャ_UNPROMOTED, EID_ダグ, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_アゼル_UNPROMOTED, EID_ダグ, TRUE, FACTION_ID_RED, 20, 10, 2, 10, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5051RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ドゥドゥ__UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 21, 0, 6, 0, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 21, 10, 8, 10, 8, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 21, 6, 10, 6, 10, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 21, 0, 8, 0, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5052RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_イングリット_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 22, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 10, 14, 10, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 10, 8, 10, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5053RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_リンハルト_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 23, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーマムクート_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 6, 4, 6, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5054RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_マリアンヌ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 24, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 0, 2, 0, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 10, 4, 10, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5055RedUnits[] = {
    { EID_ノート, JID_ノート, PID_NONE, TRUE, FACTION_ID_RED, 25, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアファヴニル_UNPROMOTED, EID_ノート, TRUE, FACTION_ID_RED, 25, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ドゥドゥ__UNPROMOTED, EID_ノート, TRUE, FACTION_ID_RED, 25, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_マリアンヌ_UNPROMOTED, EID_ノート, TRUE, FACTION_ID_RED, 25, 8, 2, 8, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5061RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_エルク_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 26, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 26, 0, 8, 0, 8, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 26, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 26, 10, 2, 10, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5062RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ファリナ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 27, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 0, 6, 0, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンファヴニル_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ロッドナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 2, 2, 2, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5063RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ソーニャ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 28, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドボウ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 28, 2, 10, 2, 10, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 28, 10, 10, 10, 10, { 0 }, { 0 } },
    { EID_オッテル, JID_オッテル, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 28, 6, 12, 6, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5064RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_パント_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 29, 0, 6, 0, 6, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ルイーズ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 29, 0, 10, 0, 10, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_エルク_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 29, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 29, 4, 10, 4, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5065RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_フード無印_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_フード無印_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_パント_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ファリナ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 6, 2, 6, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5071RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_闇マーク男_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 1, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 1, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンファヴニル_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 1, 8, 2, 8, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5072RedUnits[] = {
    { EID_オッテル, JID_オッテル_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 2, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_闇マーク女_PROMOTED, EID_オッテル, TRUE, FACTION_ID_RED, 2, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドペガサス_PROMOTED, EID_オッテル, TRUE, FACTION_ID_RED, 2, 10, 0, 10, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーナイト_PROMOTED, EID_オッテル, TRUE, FACTION_ID_RED, 2, 0, 2, 0, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5073RedUnits[] = {
    { EID_オッテル, JID_オッテル_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 3, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_闇ディミトリ_PROMOTED, EID_オッテル, TRUE, FACTION_ID_RED, 3, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_PROMOTED, EID_オッテル, TRUE, FACTION_ID_RED, 3, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_PROMOTED, EID_オッテル, TRUE, FACTION_ID_RED, 3, 8, 4, 8, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5074RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_覇骸エーデルガルト_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 0, 6, 0, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンファヴニル_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 0, 12, 0, 12, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーマムクート_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 4, 2, 4, 2, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5075RedUnits[] = {
    { EID_ファフニール, JID_ファフニール_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 5, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_闇マーク女_PROMOTED, EID_ファフニール, TRUE, FACTION_ID_RED, 5, 0, 10, 0, 10, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_闇マーク男_PROMOTED, EID_ファフニール, TRUE, FACTION_ID_RED, 5, 8, 14, 8, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーナイト_PROMOTED, EID_ファフニール, TRUE, FACTION_ID_RED, 5, 2, 14, 2, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5075RedUnits_Turn_2_2[] = {
    { EID_ENEMY_HERO_3, JID_闇ディミトリ_PROMOTED, EID_ファフニール, TRUE, FACTION_ID_RED, 5, 0, 12, 0, 12, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ロッドナイト_PROMOTED, EID_ファフニール, TRUE, FACTION_ID_RED, 5, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5075RedUnits_Turn_3_3[] = {
    { EID_ENEMY_HERO_4, JID_覇骸エーデルガルト_PROMOTED, EID_ファフニール, TRUE, FACTION_ID_RED, 30, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5081RedUnits[] = {
    { EID_ファフニール, JID_ファフニール_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 6, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードスチーム_PROMOTED, EID_ファフニール, TRUE, FACTION_ID_RED, 6, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクススチーム_PROMOTED, EID_ファフニール, TRUE, FACTION_ID_RED, 6, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ティータ_PROMOTED, EID_ファフニール, TRUE, FACTION_ID_RED, 6, 10, 4, 10, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5082RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_リュート_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 7, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードスチーム_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 7, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 7, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーボウ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 7, 0, 6, 0, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5083RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ティータ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 8, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ジーク_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 8, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクススチーム_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 8, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 8, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 8, 6, 2, 6, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5084RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_外伝パオラ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 9, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスドラゴン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 9, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 9, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 9, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 4, 4, 4, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5085RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_外伝パオラ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 10, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_リュート_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 10, 10, 0, 10, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ティータ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 10, 8, 14, 8, 14, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_ジーク_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 10, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクススチーム_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 10, 10, 8, 10, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5091RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ブノワ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 11, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 11, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 11, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 11, 10, 4, 10, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5092RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_オロチ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 12, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_シェンメイ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 10, 6, 10, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 0, 2, 0, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5093RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ニュクス_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 13, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ロッドナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 4, 2, 4, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5094RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_シャーロッテ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 14, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ニュクス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 14, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 14, 10, 6, 10, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 0, 6, 0, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 14, 4, 0, 4, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5095RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ブノワ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 15, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_オロチ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 15, 10, 12, 10, 12, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_シェンメイ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 15, 0, 14, 0, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 15, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーボウ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 15, 8, 14, 8, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5095RedUnits_Turn_3_3[] = {
    { EID_ENEMY_HERO_4, JID_シャーロッテ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 15, 8, 0, 8, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5095RedUnits_Turn_2_2[] = {
    { EID_ENEMY_HERO_5, JID_ニュクス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 15, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 15, 2, 0, 2, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5101RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_総選挙マルス_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 16, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 16, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 16, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 16, 0, 2, 0, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 16, 6, 0, 6, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5102RedUnits[] = {
    { EID_オッテル, JID_オッテル_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 17, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_総選挙マリアンヌ_PROMOTED, EID_オッテル, TRUE, FACTION_ID_RED, 17, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランススチーム_PROMOTED, EID_オッテル, TRUE, FACTION_ID_RED, 17, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードスチーム_PROMOTED, EID_オッテル, TRUE, FACTION_ID_RED, 17, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_PROMOTED, EID_オッテル, TRUE, FACTION_ID_RED, 17, 0, 0, 0, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5103RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_総選挙エイリーク_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 18, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 0, 2, 0, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 10, 8, 10, 8, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 6, 0, 6, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5104RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_総選挙マリアンヌ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 19, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_総選挙門番_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 19, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 19, 0, 8, 0, 8, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 19, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 19, 4, 6, 4, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5105RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_総選挙マルス_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 20, 4, 12, 4, 12, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_総選挙マリアンヌ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 20, 2, 12, 2, 12, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_総選挙門番_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 20, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_総選挙エイリーク_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 20, 8, 10, 8, 10, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 20, 0, 8, 0, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5111RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ファフニール2_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 21, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 21, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 21, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_バルタザール_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 21, 0, 6, 0, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5112RedUnits[] = {
    { EID_オッテル, JID_オッテル_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 22, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト_PROMOTED, EID_オッテル, TRUE, FACTION_ID_RED, 22, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ハピ_PROMOTED, EID_オッテル, TRUE, FACTION_ID_RED, 22, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンマムクート_PROMOTED, EID_オッテル, TRUE, FACTION_ID_RED, 30, 10, 6, 10, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドシーフ_PROMOTED, EID_オッテル, TRUE, FACTION_ID_RED, 22, 0, 2, 0, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5113RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_コンスタンツェ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 23, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ハピ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 10, 0, 10, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5114RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ユーリス_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 24, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_バルタザール_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 10, 2, 10, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5115RedUnits[] = {
    { EID_オッテル, JID_オッテル_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 25, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ユーリス_PROMOTED, EID_オッテル, TRUE, FACTION_ID_RED, 25, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ハピ_PROMOTED, EID_オッテル, TRUE, FACTION_ID_RED, 25, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_バルタザール_PROMOTED, EID_オッテル, TRUE, FACTION_ID_RED, 25, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_コンスタンツェ_PROMOTED, EID_オッテル, TRUE, FACTION_ID_RED, 25, 10, 2, 10, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5121RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_マリス_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 26, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 26, 0, 2, 0, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクススチーム_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 26, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 26, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードドラゴン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 26, 10, 4, 10, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5122RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ファフニール2_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 2, 6, 2, 6, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ビラク_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ロシェ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 10, 6, 10, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 0, 2, 0, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5123RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ファフニール2_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ウルフ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 28, 0, 14, 0, 14, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ザガロ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 28, 10, 14, 10, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアファヴニル_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5124RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ビラク_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 29, 0, 2, 0, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ロシェ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 29, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ウルフ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 29, 10, 0, 10, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_ザガロ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 29, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 29, 6, 0, 6, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5125RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ファフニール2_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ビラク_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ロシェ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_マリス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランススチーム_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 8, 2, 8, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5125RedUnits_Turn_2_2[] = {
    { EID_ENEMY_HERO_5, JID_ウルフ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_6, JID_ザガロ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 8, 0, 8, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5131RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ベウフォレス_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランススチーム_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクススチーム_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 0, 6, 0, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5132RedUnits[] = {
    { EID_エイトリ, JID_エイトリ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 10, 0, 10, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_タニス_PROMOTED, EID_エイトリ, TRUE, FACTION_ID_RED, 30, 0, 6, 0, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_PROMOTED, EID_エイトリ, TRUE, FACTION_ID_RED, 30, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランススチーム_PROMOTED, EID_エイトリ, TRUE, FACTION_ID_RED, 30, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_PROMOTED, EID_エイトリ, TRUE, FACTION_ID_RED, 30, 4, 2, 4, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5132RedUnits_Turn_2_2[] = {
    { EID_ENEMY_GENERIC, JID_アクスアーマー_PROMOTED, EID_エイトリ, TRUE, FACTION_ID_RED, 30, 0, 14, 0, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランススチーム_PROMOTED, EID_エイトリ, TRUE, FACTION_ID_RED, 30, 0, 0, 0, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5132RedUnits_Turn_3_3[] = {
    { EID_ENEMY_GENERIC, JID_ソードスチーム_PROMOTED, EID_エイトリ, TRUE, FACTION_ID_RED, 30, 10, 12, 10, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5133RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ステラ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードスチーム_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 10, 6, 10, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5134RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_フォルカ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 0, 2, 0, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_フード無印_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 8, 2, 8, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5135RedUnits[] = {
    { EID_エイトリ, JID_エイトリ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ステラ_PROMOTED, EID_エイトリ, TRUE, FACTION_ID_RED, 30, 10, 0, 10, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_フォルカ_PROMOTED, EID_エイトリ, TRUE, FACTION_ID_RED, 30, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_タニス_PROMOTED, EID_エイトリ, TRUE, FACTION_ID_RED, 30, 0, 6, 0, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランススチーム_PROMOTED, EID_エイトリ, TRUE, FACTION_ID_RED, 30, 2, 0, 2, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S5135RedUnits_Turn_2_2[] = {
    { EID_ENEMY_HERO_4, JID_マーシャ_PROMOTED, EID_エイトリ, TRUE, FACTION_ID_RED, 30, 10, 14, 10, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンファヴニル_PROMOTED, EID_エイトリ, TRUE, FACTION_ID_RED, 30, 0, 14, 0, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6011RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ソードファイター_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 1, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスドラゴン_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 1, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 1, 2, 4, 2, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6012RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_レッドペガサス_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 2, 10, 14, 10, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 2, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 2, 0, 14, 0, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6013RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ソードナイト_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 3, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 3, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 3, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーシーフ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 3, 2, 4, 2, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6014RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ブルーボウ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 4, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 4, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンナイト_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 4, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウペガサス_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 4, 2, 2, 2, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6015RedUnits[] = {
    { EID_エルム, JID_エルム, PID_NONE, TRUE, FACTION_ID_RED, 5, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_UNPROMOTED, EID_エルム, TRUE, FACTION_ID_RED, 5, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター_UNPROMOTED, EID_エルム, TRUE, FACTION_ID_RED, 5, 10, 14, 10, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート_UNPROMOTED, EID_エルム, TRUE, FACTION_ID_RED, 5, 10, 8, 10, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6021RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_フラヴィア_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 6, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 6, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 6, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 6, 10, 4, 10, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6022RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ミリエル_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 7, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 7, 10, 6, 10, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンファヴニル_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 7, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ロッドナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 7, 10, 12, 10, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6023RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_パリス_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 8, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 8, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスドラゴン_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 8, 0, 8, 0, 8, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 8, 0, 4, 0, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6024RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_フラヴィア_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 9, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_バジーリオ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 9, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 9, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 9, 10, 2, 10, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6025RedUnits[] = {
    { EID_エルム, JID_エルム, PID_NONE, TRUE, FACTION_ID_RED, 10, 2, 14, 2, 14, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_パリス_UNPROMOTED, EID_エルム, TRUE, FACTION_ID_RED, 10, 10, 10, 10, 10, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ミリエル_UNPROMOTED, EID_エルム, TRUE, FACTION_ID_RED, 10, 8, 14, 8, 14, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_バジーリオ_UNPROMOTED, EID_エルム, TRUE, FACTION_ID_RED, 10, 6, 14, 6, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6031RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ヴェロニカ洗脳_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 11, 10, 12, 10, 12, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_コーマ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 11, 10, 0, 10, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 11, 10, 14, 10, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 11, 10, 2, 10, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6032RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_レナック_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 12, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 0, 8, 0, 8, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 0, 14, 0, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 6, 0, 6, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6033RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_コーマ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 13, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ネイミー_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 0, 0, 0, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 6, 0, 6, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6034RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_開花ヨシュア_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 14, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 14, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンマムクート_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 14, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 14, 0, 2, 0, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6035RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ヴェロニカ洗脳_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 15, 2, 14, 2, 14, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_開花ヨシュア_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 15, 10, 0, 10, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_アーヴ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 15, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_コーマ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 15, 0, 14, 0, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6035RedUnits_Turn_2_2[] = {
    { EID_ENEMY_HERO_5, JID_レナック_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 15, 10, 12, 10, 12, { 0 }, { 0 } },
    { EID_ENEMY_HERO_6, JID_ネイミー_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 15, 0, 12, 0, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6041RedUnits[] = {
    { EID_レティシア, JID_レティシア, PID_NONE, TRUE, FACTION_ID_RED, 16, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ゴンザレス_UNPROMOTED, EID_レティシア, TRUE, FACTION_ID_RED, 16, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーペガサス_UNPROMOTED, EID_レティシア, TRUE, FACTION_ID_RED, 16, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドシーフ_UNPROMOTED, EID_レティシア, TRUE, FACTION_ID_RED, 16, 2, 4, 2, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6042RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ヒュウ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 17, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ニイメ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 10, 2, 10, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6043RedUnits[] = {
    { EID_レティシア, JID_レティシア, PID_NONE, TRUE, FACTION_ID_RED, 18, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_キャス_UNPROMOTED, EID_レティシア, TRUE, FACTION_ID_RED, 18, 10, 12, 10, 12, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーナイト_UNPROMOTED, EID_レティシア, TRUE, FACTION_ID_RED, 18, 10, 14, 10, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー_UNPROMOTED, EID_レティシア, TRUE, FACTION_ID_RED, 18, 6, 6, 6, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6044RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_開花イドゥン_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 19, 6, 6, 6, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 19, 10, 8, 10, 8, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンファヴニル_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 19, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 19, 8, 4, 8, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6045RedUnits[] = {
    { EID_レティシア, JID_レティシア, PID_NONE, TRUE, FACTION_ID_RED, 20, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_開花イドゥン_UNPROMOTED, EID_レティシア, TRUE, FACTION_ID_RED, 20, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ヒュウ_UNPROMOTED, EID_レティシア, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ニイメ_UNPROMOTED, EID_レティシア, TRUE, FACTION_ID_RED, 20, 4, 2, 4, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6051RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ガルザス_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 21, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 21, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 21, 8, 6, 8, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 21, 8, 2, 8, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6052RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_アウグスト_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 22, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_カリン_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドボウ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 10, 4, 10, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6053RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_セイラム_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 23, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 0, 2, 0, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアファヴニル_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 6, 2, 6, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6054RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_開花マリータ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 24, 0, 12, 0, 12, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 0, 2, 0, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードドラゴン_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 6, 0, 6, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6055RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ガルザス_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 25, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_開花マリータ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 25, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_レティシア, JID_レティシア, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 25, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_カリン_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 25, 2, 4, 2, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6061RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_スカサハ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 26, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 26, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 26, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 26, 2, 2, 2, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6062RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ティニー_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 27, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 10, 10, 10, 10, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 2, 14, 2, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 10, 14, 10, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6063RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_アーサー_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 28, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 28, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードドラゴン_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 28, 10, 6, 10, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 28, 2, 2, 2, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6064RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_開花イシュタル_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 29, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 29, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 29, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 29, 10, 2, 10, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6065RedUnits[] = {
    { EID_レティシア, JID_レティシア, PID_NONE, TRUE, FACTION_ID_RED, 30, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_開花イシュタル_UNPROMOTED, EID_レティシア, TRUE, FACTION_ID_RED, 30, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_アーサー_UNPROMOTED, EID_レティシア, TRUE, FACTION_ID_RED, 30, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_スカサハ_UNPROMOTED, EID_レティシア, TRUE, FACTION_ID_RED, 30, 8, 2, 8, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6071RedUnits[] = {
    { EID_レティシア, JID_レティシア_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 1, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_闇リリス_PROMOTED, EID_レティシア, TRUE, FACTION_ID_RED, 30, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスファイター_PROMOTED, EID_レティシア, TRUE, FACTION_ID_RED, 1, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト_PROMOTED, EID_レティシア, TRUE, FACTION_ID_RED, 1, 0, 4, 0, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6072RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_暴走レア_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーマムクート_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_闇リリス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 2, 6, 2, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 2, 6, 2, 6, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6073RedUnits[] = {
    { EID_グスタフ, JID_グスタフ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 3, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト_PROMOTED, EID_グスタフ, TRUE, FACTION_ID_RED, 3, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドペガサス_PROMOTED, EID_グスタフ, TRUE, FACTION_ID_RED, 3, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート_PROMOTED, EID_グスタフ, TRUE, FACTION_ID_RED, 30, 10, 2, 10, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6074RedUnits[] = {
    { EID_レティシア, JID_レティシア_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 4, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_暴走レア_PROMOTED, EID_レティシア, TRUE, FACTION_ID_RED, 30, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_PROMOTED, EID_レティシア, TRUE, FACTION_ID_RED, 4, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト_PROMOTED, EID_レティシア, TRUE, FACTION_ID_RED, 4, 10, 2, 10, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6075RedUnits[] = {
    { EID_レティシア, JID_レティシア_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 5, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_催眠ニニアン_PROMOTED, EID_レティシア, TRUE, FACTION_ID_RED, 30, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_闇リリス_PROMOTED, EID_レティシア, TRUE, FACTION_ID_RED, 30, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_グスタフ, JID_グスタフ_PROMOTED, EID_レティシア, TRUE, FACTION_ID_RED, 5, 2, 2, 2, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6081RedUnits[] = {
    { EID_エルム, JID_エルム_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーバット_PROMOTED, EID_エルム, TRUE, FACTION_ID_RED, 30, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンバット_PROMOTED, EID_エルム, TRUE, FACTION_ID_RED, 30, 0, 8, 0, 8, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_PROMOTED, EID_エルム, TRUE, FACTION_ID_RED, 6, 2, 14, 2, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6082RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ケント_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 7, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_セイン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 7, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 7, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 7, 4, 6, 4, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6083RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ギィ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 8, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーシーフ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 8, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 8, 0, 0, 0, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンファヴニル_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 10, 8, 10, 8, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアバット_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 10, 6, 10, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6084RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_開花フロリーナ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 9, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ギィ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 9, 2, 6, 2, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 9, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 9, 4, 6, 4, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンバット_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 0, 8, 0, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6085RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_レティシア洗脳_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 10, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_開花フロリーナ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 10, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_セイン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 10, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_ケント_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 10, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_5, JID_リムステラ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 10, 0, 2, 0, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6091RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ブルーノ洗脳_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 11, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_外伝カムイ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 11, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_アトラス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 11, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 11, 6, 2, 6, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6092RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_外伝エスト_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 12, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 10, 0, 10, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 6, 0, 6, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6093RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_開花セリカ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 13, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンシーフ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 10, 4, 10, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6094RedUnits[] = {
    { EID_エルム, JID_エルム_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_外伝エスト_PROMOTED, EID_エルム, TRUE, FACTION_ID_RED, 14, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_アトラス_PROMOTED, EID_エルム, TRUE, FACTION_ID_RED, 14, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーバット_PROMOTED, EID_エルム, TRUE, FACTION_ID_RED, 30, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンバット_PROMOTED, EID_エルム, TRUE, FACTION_ID_RED, 30, 4, 2, 4, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6095RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ヴェロニカ洗脳2_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 15, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_外伝エスト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 15, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_開花セリカ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 15, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_外伝カムイ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 15, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_5, JID_アトラス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 15, 2, 2, 2, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6101RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_総選挙ベレス_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 16, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ロッドナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 16, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 16, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードドラゴン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 16, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 16, 6, 2, 6, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6102RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_総選挙セリス_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 17, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 10, 6, 10, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6103RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ラウアマムクート_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 0, 2, 0, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_総選挙クロム_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 18, 4, 0, 4, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6104RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_総選挙覚醒チキ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 19, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンシーフ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 19, 0, 4, 0, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6105RedUnits[] = {
    { EID_エルム, JID_エルム_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_総選挙ベレス_PROMOTED, EID_エルム, TRUE, FACTION_ID_RED, 20, 0, 2, 0, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_総選挙セリス_PROMOTED, EID_エルム, TRUE, FACTION_ID_RED, 20, 0, 6, 0, 6, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_総選挙クロム_PROMOTED, EID_エルム, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_総選挙覚醒チキ_PROMOTED, EID_エルム, TRUE, FACTION_ID_RED, 30, 10, 4, 10, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6111RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_モニカ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 21, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 21, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 21, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンシーフ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 21, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアファヴニル_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 8, 4, 8, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6112RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_開花ヒルダ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 22, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードドラゴン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 0, 6, 0, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーバット_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 10, 0, 10, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 8, 2, 8, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6113RedUnits[] = {
    { EID_エルム, JID_エルム_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーバット_PROMOTED, EID_エルム, TRUE, FACTION_ID_RED, 30, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_シェズ女_PROMOTED, EID_エルム, TRUE, FACTION_ID_RED, 23, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート_PROMOTED, EID_エルム, TRUE, FACTION_ID_RED, 30, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_PROMOTED, EID_エルム, TRUE, FACTION_ID_RED, 23, 8, 0, 8, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6114RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ブルーノ素顔_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 24, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_開花ヒルダ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ホルスト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 8, 0, 8, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6115RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ブルーノ素顔_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 25, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_開花ヒルダ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 25, 4, 6, 4, 6, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_モニカ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 25, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 25, 2, 6, 2, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドボウ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 25, 8, 0, 8, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6115RedUnits_Turn_3_3[] = {
    { EID_ENEMY_HERO_4, JID_シェズ女_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 25, 6, 6, 6, 6, { 0 }, { 0 } },
    { EID_ENEMY_HERO_5, JID_シェズ男_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 25, 2, 8, 2, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6121RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_フィレイン_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 26, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードドラゴン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 26, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 26, 0, 12, 0, 12, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 26, 0, 8, 0, 8, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンファヴニル_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 2, 0, 2, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6122RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_セルバンテス_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 27, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンボウ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 2, 0, 2, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6123RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_グレゴ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 28, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_リヒト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 28, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 28, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 28, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 28, 2, 2, 2, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6124RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_魔器ルフレ女_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 29, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 29, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアファヴニル_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 29, 10, 2, 10, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6125RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ヴェロニカ2_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_魔器ルフレ女_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_グレゴ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_リヒト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 8, 0, 8, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6125RedUnits_Turn_2_2[] = {
    { EID_ENEMY_GENERIC, JID_シーフ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 0, 8, 0, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6125RedUnits_Turn_3_3[] = {
    { EID_ENEMY_GENERIC, JID_グルンマムクート_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 10, 8, 10, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6125RedUnits_Turn_4_4[] = {
    { EID_ENEMY_GENERIC, JID_グルンファヴニル_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_5, JID_フィレイン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 6, 0, 6, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6131RedUnits[] = {
    { EID_エンブラ, JID_エンブラ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーバット_PROMOTED, EID_エンブラ, TRUE, FACTION_ID_RED, 30, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_PROMOTED, EID_エンブラ, TRUE, FACTION_ID_RED, 30, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ニーナ_PROMOTED, EID_エンブラ, TRUE, FACTION_ID_RED, 30, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト_PROMOTED, EID_エンブラ, TRUE, FACTION_ID_RED, 30, 8, 2, 8, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6132RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ハーディン_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンファヴニル_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 10, 6, 10, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6133RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_エリス_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_マチス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドボウ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 2, 6, 2, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6134RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_開花チキ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンボウ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_エリス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 6, 0, 6, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6135RedUnits[] = {
    { EID_エンブラ, JID_エンブラ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_開花チキ_PROMOTED, EID_エンブラ, TRUE, FACTION_ID_RED, 30, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーマムクート_PROMOTED, EID_エンブラ, TRUE, FACTION_ID_RED, 30, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンナイト_PROMOTED, EID_エンブラ, TRUE, FACTION_ID_RED, 30, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ハーディン_PROMOTED, EID_エンブラ, TRUE, FACTION_ID_RED, 30, 8, 2, 8, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S6135RedUnits_Turn_2_2[] = {
    { EID_ENEMY_GENERIC, JID_ラウアバット_PROMOTED, EID_エンブラ, TRUE, FACTION_ID_RED, 30, 10, 6, 10, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアファヴニル_PROMOTED, EID_エンブラ, TRUE, FACTION_ID_RED, 30, 0, 8, 0, 8, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7011RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ガンズ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 1, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 1, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 1, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 1, 10, 4, 10, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7012RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_キサラギ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 2, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ディーア_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 2, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 2, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 2, 4, 0, 4, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7013RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_マトイ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 3, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_キサラギ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 3, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 3, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 3, 0, 4, 0, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7014RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_魔器オフェリア_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 4, 0, 12, 0, 12, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ディーア_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 4, 0, 8, 0, 8, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 4, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーシーフ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 4, 0, 0, 0, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7015RedUnits[] = {
    { EID_グルヴェイグ, JID_グルヴェイグ, PID_NONE, TRUE, FACTION_ID_RED, 5, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_魔器オフェリア_UNPROMOTED, EID_グルヴェイグ, TRUE, FACTION_ID_RED, 5, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ガンズ_UNPROMOTED, EID_グルヴェイグ, TRUE, FACTION_ID_RED, 5, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_マトイ_UNPROMOTED, EID_グルヴェイグ, TRUE, FACTION_ID_RED, 5, 10, 2, 10, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7021RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_グリーンマージ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 6, 2, 10, 2, 10, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドシーフ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 6, 8, 14, 8, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーペガサス_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 6, 10, 10, 10, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7022RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_レッドマージ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 7, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 7, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンボウ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 7, 6, 0, 6, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7023RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_グルンマムクート_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 8, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアファヴニル_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 8, 10, 6, 10, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 8, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 8, 4, 4, 4, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7024RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_レッドナイト_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 9, 10, 0, 10, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 9, 0, 8, 0, 8, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウペガサス_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 9, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーマムクート_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 9, 6, 2, 6, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7025RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_レッドシーフ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 10, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 10, 0, 14, 0, 14, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 10, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 10, 10, 14, 10, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7031RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_セリーヌ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 11, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 11, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 11, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 11, 0, 4, 0, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7032RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_クロエ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 12, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 6, 0, 6, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7033RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_リュール女_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 13, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 10, 6, 10, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7034RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_エーティエ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 14, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_魔器アルフレッド_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 14, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 14, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 14, 8, 2, 8, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7035RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_セリーヌ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 15, 2, 12, 2, 12, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_クロエ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 15, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_リュール女_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 15, 0, 6, 0, 6, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_魔器アルフレッド_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 15, 0, 10, 0, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7041RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ユリシーズ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 16, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 16, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 16, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 16, 8, 4, 8, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7042RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ルキノ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 17, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ユリシーズ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 4, 6, 4, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 10, 4, 10, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7043RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ジョフレ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 18, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 0, 4, 0, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7044RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_開花エリンシア_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 19, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ジョフレ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 19, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 19, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 19, 2, 4, 2, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7045RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_開花エリンシア_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 20, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ルキノ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 20, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ネルトゥス, JID_ネルトゥス, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ユリシーズ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 20, 2, 4, 2, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7051RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ヴァネッサ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 21, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 21, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 21, 0, 6, 0, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 21, 2, 4, 2, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7052RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ヴァネッサ_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 22, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_シレーネ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンファヴニル_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ロッドナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 10, 0, 10, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7053RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ギリアム_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 23, 2, 6, 2, 6, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_シレーネ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 0, 6, 0, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 4, 2, 4, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7054RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ギリアム_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 24, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_魔器ターナ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンシーフ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 6, 0, 6, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7055RedUnits[] = {
    { EID_グルヴェイグ, JID_グルヴェイグ, PID_NONE, TRUE, FACTION_ID_RED, 25, 4, 14, 4, 14, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_ギリアム_UNPROMOTED, EID_グルヴェイグ, TRUE, FACTION_ID_RED, 25, 6, 12, 6, 12, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_シレーネ_UNPROMOTED, EID_グルヴェイグ, TRUE, FACTION_ID_RED, 25, 6, 10, 6, 10, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ_UNPROMOTED, EID_グルヴェイグ, TRUE, FACTION_ID_RED, 25, 8, 10, 8, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7055RedUnits_Turn_2_2[] = {
    { EID_ENEMY_HERO_3, JID_ヴァネッサ_UNPROMOTED, EID_グルヴェイグ, TRUE, FACTION_ID_RED, 25, 10, 6, 10, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンナイト_UNPROMOTED, EID_グルヴェイグ, TRUE, FACTION_ID_RED, 25, 0, 14, 0, 14, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7055RedUnits_Turn_3_3[] = {
    { EID_ENEMY_HERO_4, JID_魔器ターナ_UNPROMOTED, EID_グルヴェイグ, TRUE, FACTION_ID_RED, 25, 0, 12, 0, 12, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7061RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_フェリクス_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 26, 8, 6, 8, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 26, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンシーフ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 26, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーペガサス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 26, 10, 4, 10, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7062RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_フェリクス_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 27, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 0, 2, 0, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_シルヴァン_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 27, 10, 4, 10, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7063RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_魔器イングリット_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 28, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードドラゴン_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 28, 0, 6, 0, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 28, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 28, 10, 0, 10, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7064RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_レア_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 29, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 29, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 29, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 29, 0, 4, 0, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7065RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_魔器イングリット_UNPROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 0, 6, 0, 6, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_フェリクス_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_シルヴァン_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_レア_UNPROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 4, 4, 4, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7071RedUnits[] = {
    { EID_ネルトゥス, JID_ネルトゥス_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_闇ライナス_PROMOTED, EID_ネルトゥス, TRUE, FACTION_ID_RED, 1, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドペガサス_PROMOTED, EID_ネルトゥス, TRUE, FACTION_ID_RED, 1, 0, 2, 0, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト_PROMOTED, EID_ネルトゥス, TRUE, FACTION_ID_RED, 1, 10, 2, 10, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7072RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_闇マリア_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 2, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 2, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 2, 0, 4, 0, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7073RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_闇ハイドラ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 3, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンシーフ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 3, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ロッドナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 3, 10, 0, 10, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7074RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_闇ベレス_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 4, 10, 12, 10, 12, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンファヴニル_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 10, 8, 10, 8, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 4, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアマムクート_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 6, 0, 6, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7075RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_魔器闇クロム_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 5, 2, 12, 2, 12, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_闇ベレス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 5, 8, 10, 8, 10, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_闇マリア_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 5, 6, 14, 6, 14, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_闇ハイドラ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 6, 10, 6, 10, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7081RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ノア_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 6, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 6, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 6, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 6, 0, 2, 0, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7082RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ドロシー_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 7, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドボウ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 7, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 7, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 6, 4, 6, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7083RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ドロシー_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 8, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_サウル_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 8, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 8, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 8, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 8, 6, 2, 6, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7084RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ノア_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 9, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_開花フィル_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 9, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 9, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 9, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 9, 10, 0, 10, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7085RedUnits[] = {
    { EID_クワシル, JID_クワシル_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 10, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_マードック_PROMOTED, EID_クワシル, TRUE, FACTION_ID_RED, 10, 4, 6, 4, 6, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_サウル_PROMOTED, EID_クワシル, TRUE, FACTION_ID_RED, 10, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ノア_PROMOTED, EID_クワシル, TRUE, FACTION_ID_RED, 10, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_開花フィル_PROMOTED, EID_クワシル, TRUE, FACTION_ID_RED, 10, 2, 4, 2, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7091RedUnits[] = {
    { PID_神階ヘイズ, JID_神階ヘイズ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 11, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_リュール男_PROMOTED, PID_神階ヘイズ, TRUE, FACTION_ID_RED, 11, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーペガサス_PROMOTED, PID_神階ヘイズ, TRUE, FACTION_ID_RED, 11, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_PROMOTED, PID_神階ヘイズ, TRUE, FACTION_ID_RED, 11, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスファイター_PROMOTED, PID_神階ヘイズ, TRUE, FACTION_ID_RED, 11, 2, 2, 2, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7092RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ディアマンド_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 12, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 6, 6, 6, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 12, 10, 0, 10, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7093RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_ラピス_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 13, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_シトリニカ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 13, 10, 2, 10, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7094RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_魔器スタルーク_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 14, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ディアマンド_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 14, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_シトリニカ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 14, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 14, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 14, 6, 6, 6, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7095RedUnits[] = {
    { PID_神階ヘイズ, JID_神階ヘイズ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 15, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_魔器スタルーク_PROMOTED, PID_神階ヘイズ, TRUE, FACTION_ID_RED, 15, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブラーファヴニル_PROMOTED, PID_神階ヘイズ, TRUE, FACTION_ID_RED, 30, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_リュール男_PROMOTED, PID_神階ヘイズ, TRUE, FACTION_ID_RED, 15, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_シトリニカ_PROMOTED, PID_神階ヘイズ, TRUE, FACTION_ID_RED, 15, 8, 2, 8, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7101RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_総選挙セネリオ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 16, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 16, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 16, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 16, 0, 0, 0, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 16, 10, 2, 10, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7102RedUnits[] = {
    { EID_ENEMY_GENERIC, JID_ランスファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グリーンマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 17, 10, 0, 10, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_1, JID_総選挙ルフレ男_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 17, 4, 0, 4, 0, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7103RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_総選挙カムイ女_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 30, 8, 4, 8, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_グルンマムクート_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 4, 4, 4, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 18, 0, 4, 0, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7104RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_総選挙グルヴェイグ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 19, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 19, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 19, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 19, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 19, 10, 6, 10, 6, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7105RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_総選挙グルヴェイグ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 20, 10, 4, 10, 4, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_総選挙カムイ女_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 2, 6, 2, 6, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_総選挙ルフレ男_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 20, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_4, JID_総選挙セネリオ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 20, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_5, JID_ツィリル_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 20, 8, 2, 8, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7111RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_フィー_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 21, 2, 6, 2, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 21, 2, 2, 2, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 21, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ソードファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 21, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 21, 4, 2, 4, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7112RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_パティ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 22, 4, 0, 4, 0, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_ファバル_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 6, 2, 6, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ブルーマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 10, 2, 10, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 6, 6, 6, 6, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 22, 2, 4, 2, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7113RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_アリオーン_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 23, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスドラゴン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 6, 4, 6, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドペガサス_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 2, 0, 2, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ボウナイト_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 8, 0, 8, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_アクスアーマー_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 23, 0, 4, 0, 4, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7114RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_開花セティ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 24, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シーフ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 0, 4, 0, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_シスター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 2, 4, 2, 4, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ランスファイター_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 24, 10, 2, 10, 2, { 0 }, { 0 } },
    { 0 }, // end
};

const struct UnitInfo S7115RedUnits[] = {
    { EID_ENEMY_HERO_1, JID_開花セティ_PROMOTED, PID_NONE, TRUE, FACTION_ID_RED, 25, 4, 2, 4, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_2, JID_アリオーン_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 25, 6, 0, 6, 0, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_レッドマージ_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 25, 0, 2, 0, 2, { 0 }, { 0 } },
    { EID_ENEMY_GENERIC, JID_ラウアファヴニル_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 30, 8, 2, 8, 2, { 0 }, { 0 } },
    { EID_ENEMY_HERO_3, JID_ファバル_PROMOTED, EID_ENEMY_HERO_1, TRUE, FACTION_ID_RED, 25, 2, 2, 2, 2, { 0 }, { 0 } },
    { 0 }, // end
};

