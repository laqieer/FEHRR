#include <stddef.h>
#include "textNew.h"
#include "gfx_glyph_JA.h"
const struct GlyphNew GlyTJA_E382A1 = { /* ァ */
    .next = NULL,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E382A1Tiles,
};

const struct GlyphNew GlyTJA_E291A0 = { /* ① */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E291A0Tiles,
};

const struct GlyphNew GlyTJA_E38080 = { /* 　 */
    .next = &GlyTJA_E382A1,
    .width = 7,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38080Tiles,
};

const struct GlyphNew GlyTJA_E6B395 = { /* 法 */
    .next = NULL,
    .width = 11,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B395Tiles,
};

const struct GlyphNew GlyTJA_E999A2 = { /* 院 */
    .next = NULL,
    .width = 11,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E999A2Tiles,
};

const struct GlyphNew GlyTJA_E6A99F = { /* 機 */
    .next = &GlyTJA_E6B395,
    .width = 11,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6A99FTiles,
};

const struct GlyphNew GlyTJA_E68E98 = { /* 掘 */
    .next = &GlyTJA_E6A99F,
    .width = 11,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68E98Tiles,
};

const struct GlyphNew GlyTJA_E58FA9 = { /* 叩 */
    .next = NULL,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58FA9Tiles,
};

const struct GlyphNew GlyTJA_E5AF9F = { /* 察 */
    .next = &GlyTJA_E58FA9,
    .width = 11,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AF9FTiles,
};

const struct GlyphNew GlyTJA_E893AE = { /* 蓮 */
    .next = NULL,
    .width = 11,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E893AETiles,
};

const struct GlyphNew GlyTJA_E382A2 = { /* ア */
    .next = &GlyTJA_E38080,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E382A2Tiles,
};

const struct GlyphNew GlyTJA_E291A1 = { /* ② */
    .next = &GlyTJA_E291A0,
    .width = 7,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E291A1Tiles,
};

const struct GlyphNew GlyTJA_E38081 = { /* 、 */
    .next = &GlyTJA_E382A2,
    .width = 5,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38081Tiles,
};

const struct GlyphNew GlyTJA_E999B0 = { /* 陰 */
    .next = &GlyTJA_E999A2,
    .width = 11,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E999B0Tiles,
};

const struct GlyphNew GlyTJA_E980A3 = { /* 連 */
    .next = &GlyTJA_E999B0,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E980A3Tiles,
};

const struct GlyphNew GlyTJA_E5B8B0 = { /* 帰 */
    .next = &GlyTJA_E5AF9F,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B8B0Tiles,
};

const struct GlyphNew GlyTJA_E7AA9F = { /* 窟 */
    .next = NULL,
    .width = 11,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7AA9FTiles,
};

const struct GlyphNew GlyTJA_E7BEA8 = { /* 羨 */
    .next = &GlyTJA_E7AA9F,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7BEA8Tiles,
};

const struct GlyphNew GlyTJA_E8BCB8 = { /* 輸 */
    .next = &GlyTJA_E893AE,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8BCB8Tiles,
};

const struct GlyphNew GlyTJA_E382A3 = { /* ィ */
    .next = &GlyTJA_E38081,
    .width = 7,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E382A3Tiles,
};

const struct GlyphNew GlyTJA_E291A2 = { /* ③ */
    .next = &GlyTJA_E291A1,
    .width = 7,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E291A2Tiles,
};

const struct GlyphNew GlyTJA_E38082 = { /* 。 */
    .next = &GlyTJA_E382A3,
    .width = 5,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38082Tiles,
};

const struct GlyphNew GlyTJA_E594AF = { /* 唯 */
    .next = &GlyTJA_E5B8B0,
    .width = 11,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E594AFTiles,
};

const struct GlyphNew GlyTJA_E98194 = { /* 達 */
    .next = &GlyTJA_E980A3,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E98194Tiles,
};

const struct GlyphNew GlyTJA_E99AA0 = { /* 隠 */
    .next = &GlyTJA_E98194,
    .width = 11,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99AA0Tiles,
};

const struct GlyphNew GlyTJA_E382A4 = { /* イ */
    .next = &GlyTJA_E38082,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E382A4Tiles,
};

const struct GlyphNew GlyTJA_E291A3 = { /* ④ */
    .next = &GlyTJA_E291A2,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E291A3Tiles,
};

const struct GlyphNew GlyTJA_E6B097 = { /* 気 */
    .next = &GlyTJA_E68E98,
    .width = 11,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B097Tiles,
};

const struct GlyphNew GlyTJA_E6B5B7 = { /* 海 */
    .next = &GlyTJA_E6B097,
    .width = 11,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B5B7Tiles,
};

const struct GlyphNew GlyTJA_E4BFAE = { /* 修 */
    .next = NULL,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BFAETiles,
};

const struct GlyphNew GlyTJA_E4BBBB = { /* 任 */
    .next = &GlyTJA_E4BFAE,
    .width = 11,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BBBBTiles,
};

const struct GlyphNew GlyTJA_E382A5 = { /* ゥ */
    .next = &GlyTJA_E382A4,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E382A5Tiles,
};

const struct GlyphNew GlyTJA_E291A4 = { /* ⑤ */
    .next = &GlyTJA_E291A3,
    .width = 7,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E291A4Tiles,
};

const struct GlyphNew GlyTJA_EFBC8E = { /* ． */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBC8ETiles,
};

const struct GlyphNew GlyTJA_E5A5BD = { /* 好 */
    .next = &GlyTJA_E594AF,
    .width = 11,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A5BDTiles,
};

const struct GlyphNew GlyTJA_E5A5AA = { /* 奪 */
    .next = &GlyTJA_E5A5BD,
    .width = 11,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A5AATiles,
};

const struct GlyphNew GlyTJA_E7B994 = { /* 織 */
    .next = &GlyTJA_E7BEA8,
    .width = 11,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B994Tiles,
};

const struct GlyphNew GlyTJA_E6B3A5 = { /* 泥 */
    .next = &GlyTJA_E6B5B7,
    .width = 11,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B3A5Tiles,
};

const struct GlyphNew GlyTJA_E584AA = { /* 優 */
    .next = &GlyTJA_E5A5AA,
    .width = 11,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E584AATiles,
};

const struct GlyphNew GlyTJA_E69CAD = { /* 札 */
    .next = &GlyTJA_E6B3A5,
    .width = 11,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69CADTiles,
};

const struct GlyphNew GlyTJA_E781B0 = { /* 灰 */
    .next = &GlyTJA_E7B994,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E781B0Tiles,
};

const struct GlyphNew GlyTJA_E888B9 = { /* 船 */
    .next = &GlyTJA_E8BCB8,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E888B9Tiles,
};

const struct GlyphNew GlyTJA_E382A6 = { /* ウ */
    .next = &GlyTJA_E382A5,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E382A6Tiles,
};

const struct GlyphNew GlyTJA_E291A5 = { /* ⑥ */
    .next = &GlyTJA_E291A4,
    .width = 7,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E291A5Tiles,
};

const struct GlyphNew GlyTJA_E383BB = { /* ・ */
    .next = &GlyTJA_E382A6,
    .width = 6,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E383BBTiles,
};

const struct GlyphNew GlyTJA_E58B87 = { /* 勇 */
    .next = &GlyTJA_E584AA,
    .width = 10,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58B87Tiles,
};

const struct GlyphNew GlyTJA_E6AEBA = { /* 殺 */
    .next = &GlyTJA_E69CAD,
    .width = 11,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6AEBATiles,
};

const struct GlyphNew GlyTJA_E7958C = { /* 界 */
    .next = &GlyTJA_E781B0,
    .width = 11,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7958CTiles,
};

const struct GlyphNew GlyTJA_E884B1 = { /* 脱 */
    .next = &GlyTJA_E888B9,
    .width = 11,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E884B1Tiles,
};

const struct GlyphNew GlyTJA_E881B7 = { /* 職 */
    .next = &GlyTJA_E884B1,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E881B7Tiles,
};

const struct GlyphNew GlyTJA_E58FB3 = { /* 右 */
    .next = &GlyTJA_E58B87,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58FB3Tiles,
};

const struct GlyphNew GlyTJA_E5BF8D = { /* 忍 */
    .next = &GlyTJA_E58FB3,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BF8DTiles,
};

const struct GlyphNew GlyTJA_E382A7 = { /* ェ */
    .next = &GlyTJA_E383BB,
    .width = 7,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E382A7Tiles,
};

const struct GlyphNew GlyTJA_E291A6 = { /* ⑦ */
    .next = &GlyTJA_E291A5,
    .width = 7,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E291A6Tiles,
};

const struct GlyphNew GlyTJA_E58F8B = { /* 友 */
    .next = &GlyTJA_E5BF8D,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58F8BTiles,
};

const struct GlyphNew GlyTJA_E79A86 = { /* 皆 */
    .next = &GlyTJA_E7958C,
    .width = 11,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79A86Tiles,
};

const struct GlyphNew GlyTJA_E8AA8D = { /* 認 */
    .next = &GlyTJA_E881B7,
    .width = 11,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8AA8DTiles,
};

const struct GlyphNew GlyTJA_E5AD9D = { /* 孝 */
    .next = &GlyTJA_E58F8B,
    .width = 11,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AD9DTiles,
};

const struct GlyphNew GlyTJA_E889B2 = { /* 色 */
    .next = &GlyTJA_E8AA8D,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E889B2Tiles,
};

const struct GlyphNew GlyTJA_E7A588 = { /* 祈 */
    .next = &GlyTJA_E79A86,
    .width = 11,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A588Tiles,
};

const struct GlyphNew GlyTJA_E382A8 = { /* エ */
    .next = &GlyTJA_E382A7,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E382A8Tiles,
};

const struct GlyphNew GlyTJA_E695B5 = { /* 敵 */
    .next = &GlyTJA_E6AEBA,
    .width = 11,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E695B5Tiles,
};

const struct GlyphNew GlyTJA_E99B91 = { /* 雑 */
    .next = &GlyTJA_E99AA0,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99B91Tiles,
};

const struct GlyphNew GlyTJA_E7B5B5 = { /* 絵 */
    .next = &GlyTJA_E7A588,
    .width = 11,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B5B5Tiles,
};

const struct GlyphNew GlyTJA_E7A780 = { /* 秀 */
    .next = &GlyTJA_E7B5B5,
    .width = 11,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A780Tiles,
};

const struct GlyphNew GlyTJA_E8A7A6 = { /* 触 */
    .next = &GlyTJA_E889B2,
    .width = 11,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A7A6Tiles,
};

const struct GlyphNew GlyTJA_E382A9 = { /* ォ */
    .next = &GlyTJA_E382A8,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E382A9Tiles,
};

const struct GlyphNew GlyTJA_EFBC9F = { /* ？ */
    .next = &GlyTJA_EFBC8E,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBC9FTiles,
};

const struct GlyphNew GlyTJA_E8B7AF = { /* 路 */
    .next = &GlyTJA_E8A7A6,
    .width = 11,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B7AFTiles,
};

const struct GlyphNew GlyTJA_E9A39F = { /* 食 */
    .next = &GlyTJA_E99B91,
    .width = 11,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9A39FTiles,
};

const struct GlyphNew GlyTJA_E7BEBD = { /* 羽 */
    .next = &GlyTJA_E7A780,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7BEBDTiles,
};

const struct GlyphNew GlyTJA_E382AA = { /* オ */
    .next = &GlyTJA_E382A9,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E382AATiles,
};

const struct GlyphNew GlyTJA_EFBC81 = { /* ！ */
    .next = &GlyTJA_EFBC9F,
    .width = 5,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBC81Tiles,
};

const struct GlyphNew GlyTJA_E79A84 = { /* 的 */
    .next = &GlyTJA_E7BEBD,
    .width = 11,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79A84Tiles,
};

const struct GlyphNew GlyTJA_E981B8 = { /* 選 */
    .next = &GlyTJA_E9A39F,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E981B8Tiles,
};

const struct GlyphNew GlyTJA_E7B582 = { /* 終 */
    .next = &GlyTJA_E79A84,
    .width = 11,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B582Tiles,
};

const struct GlyphNew GlyTJA_E7B480 = { /* 紀 */
    .next = &GlyTJA_E7B582,
    .width = 11,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B480Tiles,
};

const struct GlyphNew GlyTJA_E382AB = { /* カ */
    .next = &GlyTJA_E382AA,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E382ABTiles,
};

const struct GlyphNew GlyTJA_E8B0B7 = { /* 谷 */
    .next = &GlyTJA_E8B7AF,
    .width = 11,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B0B7Tiles,
};

const struct GlyphNew GlyTJA_E9968B = { /* 開 */
    .next = &GlyTJA_E981B8,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9968BTiles,
};

const struct GlyphNew GlyTJA_E58AB4 = { /* 労 */
    .next = &GlyTJA_E5AD9D,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58AB4Tiles,
};

const struct GlyphNew GlyTJA_E99BA8 = { /* 雨 */
    .next = &GlyTJA_E9968B,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99BA8Tiles,
};

const struct GlyphNew GlyTJA_E8BEB1 = { /* 辱 */
    .next = &GlyTJA_E8B0B7,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8BEB1Tiles,
};

const struct GlyphNew GlyTJA_E7B586 = { /* 絆 */
    .next = &GlyTJA_E7B480,
    .width = 11,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B586Tiles,
};

const struct GlyphNew GlyTJA_E382AC = { /* ガ */
    .next = &GlyTJA_E382AB,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E382ACTiles,
};

const struct GlyphNew GlyTJA_E5BF85 = { /* 必 */
    .next = &GlyTJA_E58AB4,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BF85Tiles,
};

const struct GlyphNew GlyTJA_E5B9B8 = { /* 幸 */
    .next = &GlyTJA_E5BF85,
    .width = 11,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B9B8Tiles,
};

const struct GlyphNew GlyTJA_E8A8AA = { /* 訪 */
    .next = &GlyTJA_E8BEB1,
    .width = 11,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A8AATiles,
};

const struct GlyphNew GlyTJA_E8A68F = { /* 規 */
    .next = &GlyTJA_E8A8AA,
    .width = 11,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A68FTiles,
};

const struct GlyphNew GlyTJA_E99A8E = { /* 階 */
    .next = &GlyTJA_E99BA8,
    .width = 11,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99A8ETiles,
};

const struct GlyphNew GlyTJA_E7BF92 = { /* 習 */
    .next = &GlyTJA_E7B586,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7BF92Tiles,
};

const struct GlyphNew GlyTJA_E981A9 = { /* 適 */
    .next = &GlyTJA_E99A8E,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E981A9Tiles,
};

const struct GlyphNew GlyTJA_E5B0BB = { /* 尻 */
    .next = &GlyTJA_E5B9B8,
    .width = 11,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B0BBTiles,
};

const struct GlyphNew GlyTJA_E382AD = { /* キ */
    .next = &GlyTJA_E382AC,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E382ADTiles,
};

const struct GlyphNew GlyTJA_E8B18A = { /* 豊 */
    .next = &GlyTJA_E8A68F,
    .width = 11,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B18ATiles,
};

const struct GlyphNew GlyTJA_E8A898 = { /* 記 */
    .next = &GlyTJA_E8B18A,
    .width = 11,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A898Tiles,
};

const struct GlyphNew GlyTJA_E69C89 = { /* 有 */
    .next = &GlyTJA_E695B5,
    .width = 11,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69C89Tiles,
};

const struct GlyphNew GlyTJA_E5BA83 = { /* 広 */
    .next = &GlyTJA_E5B0BB,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BA83Tiles,
};

const struct GlyphNew GlyTJA_E78CAB = { /* 猫 */
    .next = &GlyTJA_E7BF92,
    .width = 11,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E78CABTiles,
};

const struct GlyphNew GlyTJA_E382AE = { /* ギ */
    .next = &GlyTJA_E382AD,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E382AETiles,
};

const struct GlyphNew GlyTJA_E8B2B4 = { /* 貴 */
    .next = &GlyTJA_E8A898,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B2B4Tiles,
};

const struct GlyphNew GlyTJA_E4BFA1 = { /* 信 */
    .next = &GlyTJA_E4BBBB,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BFA1Tiles,
};

const struct GlyphNew GlyTJA_E786B1 = { /* 熱 */
    .next = &GlyTJA_E78CAB,
    .width = 11,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E786B1Tiles,
};

const struct GlyphNew GlyTJA_E7AD86 = { /* 筆 */
    .next = &GlyTJA_E786B1,
    .width = 11,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7AD86Tiles,
};

const struct GlyphNew GlyTJA_E58BB2 = { /* 勲 */
    .next = &GlyTJA_E5BA83,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58BB2Tiles,
};

const struct GlyphNew GlyTJA_E382AF = { /* ク */
    .next = &GlyTJA_E382AE,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E382AFTiles,
};

const struct GlyphNew GlyTJA_E5B9B4 = { /* 年 */
    .next = &GlyTJA_E58BB2,
    .width = 11,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B9B4Tiles,
};

const struct GlyphNew GlyTJA_E4BEB5 = { /* 侵 */
    .next = &GlyTJA_E4BFA1,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BEB5Tiles,
};

const struct GlyphNew GlyTJA_E8B5B7 = { /* 起 */
    .next = &GlyTJA_E8B2B4,
    .width = 11,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B5B7Tiles,
};

const struct GlyphNew GlyTJA_E5909B = { /* 君 */
    .next = &GlyTJA_E5B9B4,
    .width = 11,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5909BTiles,
};

const struct GlyphNew GlyTJA_E8AAB0 = { /* 誰 */
    .next = &GlyTJA_E8B5B7,
    .width = 11,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8AAB0Tiles,
};

const struct GlyphNew GlyTJA_E69C97 = { /* 朗 */
    .next = &GlyTJA_E69C89,
    .width = 11,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69C97Tiles,
};

const struct GlyphNew GlyTJA_E382B0 = { /* グ */
    .next = &GlyTJA_E382AF,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E382B0Tiles,
};

const struct GlyphNew GlyTJA_EFBC90 = { /* ０ */
    .next = &GlyTJA_EFBC81,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBC90Tiles,
};

const struct GlyphNew GlyTJA_E5898D = { /* 前 */
    .next = &GlyTJA_E5909B,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5898DTiles,
};

const struct GlyphNew GlyTJA_E5A496 = { /* 外 */
    .next = &GlyTJA_E5898D,
    .width = 11,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A496Tiles,
};

const struct GlyphNew GlyTJA_E5BFB5 = { /* 念 */
    .next = &GlyTJA_E5A496,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BFB5Tiles,
};

const struct GlyphNew GlyTJA_E4B889 = { /* 三 */
    .next = &GlyTJA_E4BEB5,
    .width = 10,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4B889Tiles,
};

const struct GlyphNew GlyTJA_E5BEB9 = { /* 徹 */
    .next = &GlyTJA_E5BFB5,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BEB9Tiles,
};

const struct GlyphNew GlyTJA_E382B1 = { /* ケ */
    .next = &GlyTJA_E382B0,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E382B1Tiles,
};

const struct GlyphNew GlyTJA_EFBC91 = { /* １ */
    .next = &GlyTJA_EFBC90,
    .width = 6,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBC91Tiles,
};

const struct GlyphNew GlyTJA_E5A7AB = { /* 姫 */
    .next = &GlyTJA_E5BEB9,
    .width = 11,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A7ABTiles,
};

const struct GlyphNew GlyTJA_E59684 = { /* 善 */
    .next = &GlyTJA_E5A7AB,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59684Tiles,
};

const struct GlyphNew GlyTJA_E58D98 = { /* 単 */
    .next = &GlyTJA_E59684,
    .width = 11,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58D98Tiles,
};

const struct GlyphNew GlyTJA_E8A5B2 = { /* 襲 */
    .next = &GlyTJA_E8AAB0,
    .width = 11,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A5B2Tiles,
};

const struct GlyphNew GlyTJA_E692A4 = { /* 撤 */
    .next = &GlyTJA_E69C97,
    .width = 11,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E692A4Tiles,
};

const struct GlyphNew GlyTJA_E8A893 = { /* 訓 */
    .next = &GlyTJA_E8A5B2,
    .width = 11,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A893Tiles,
};

const struct GlyphNew GlyTJA_E8BC9D = { /* 輝 */
    .next = &GlyTJA_E8A893,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8BC9DTiles,
};

const struct GlyphNew GlyTJA_E382B2 = { /* ゲ */
    .next = &GlyTJA_E382B1,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E382B2Tiles,
};

const struct GlyphNew GlyTJA_EFBC92 = { /* ２ */
    .next = &GlyTJA_EFBC91,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBC92Tiles,
};

const struct GlyphNew GlyTJA_E59886 = { /* 嘆 */
    .next = &GlyTJA_E58D98,
    .width = 11,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59886Tiles,
};

const struct GlyphNew GlyTJA_E58F82 = { /* 参 */
    .next = &GlyTJA_E59886,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58F82Tiles,
};

const struct GlyphNew GlyTJA_E5AEB3 = { /* 害 */
    .next = &GlyTJA_E58F82,
    .width = 11,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AEB3Tiles,
};

const struct GlyphNew GlyTJA_E6B5AA = { /* 浪 */
    .next = &GlyTJA_E692A4,
    .width = 11,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B5AATiles,
};

const struct GlyphNew GlyTJA_E7BEA4 = { /* 群 */
    .next = &GlyTJA_E7AD86,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7BEA4Tiles,
};

const struct GlyphNew GlyTJA_E5AF9D = { /* 寝 */
    .next = &GlyTJA_E5AEB3,
    .width = 12,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AF9DTiles,
};

const struct GlyphNew GlyTJA_E8AE90 = { /* 讐 */
    .next = &GlyTJA_E8BC9D,
    .width = 11,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8AE90Tiles,
};

const struct GlyphNew GlyTJA_E382B3 = { /* コ */
    .next = &GlyTJA_E382B2,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E382B3Tiles,
};

const struct GlyphNew GlyTJA_EFBC93 = { /* ３ */
    .next = &GlyTJA_EFBC92,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBC93Tiles,
};

const struct GlyphNew GlyTJA_E8BB8D = { /* 軍 */
    .next = &GlyTJA_E8AE90,
    .width = 11,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8BB8DTiles,
};

const struct GlyphNew GlyTJA_E9A88E = { /* 騎 */
    .next = &GlyTJA_E981A9,
    .width = 12,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9A88ETiles,
};

const struct GlyphNew GlyTJA_E5B1B1 = { /* 山 */
    .next = &GlyTJA_E5AF9D,
    .width = 11,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B1B1Tiles,
};

const struct GlyphNew GlyTJA_E784B6 = { /* 然 */
    .next = &GlyTJA_E7BEA4,
    .width = 11,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E784B6Tiles,
};

const struct GlyphNew GlyTJA_E794B1 = { /* 由 */
    .next = &GlyTJA_E784B6,
    .width = 11,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E794B1Tiles,
};

const struct GlyphNew GlyTJA_E68A97 = { /* 抗 */
    .next = &GlyTJA_E6B5AA,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68A97Tiles,
};

const struct GlyphNew GlyTJA_E78783 = { /* 燃 */
    .next = &GlyTJA_E794B1,
    .width = 11,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E78783Tiles,
};

const struct GlyphNew GlyTJA_E382B4 = { /* ゴ */
    .next = &GlyTJA_E382B3,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E382B4Tiles,
};

const struct GlyphNew GlyTJA_EFBC94 = { /* ４ */
    .next = &GlyTJA_EFBC93,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBC94Tiles,
};

const struct GlyphNew GlyTJA_E585A8 = { /* 全 */
    .next = &GlyTJA_E5B1B1,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E585A8Tiles,
};

const struct GlyphNew GlyTJA_E4BAA1 = { /* 亡 */
    .next = &GlyTJA_E4B889,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BAA1Tiles,
};

const struct GlyphNew GlyTJA_E5BF83 = { /* 心 */
    .next = &GlyTJA_E585A8,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BF83Tiles,
};

const struct GlyphNew GlyTJA_E98984 = { /* 鉄 */
    .next = &GlyTJA_E9A88E,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E98984Tiles,
};

const struct GlyphNew GlyTJA_E799BE = { /* 百 */
    .next = &GlyTJA_E78783,
    .width = 11,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E799BETiles,
};

const struct GlyphNew GlyTJA_E683A8 = { /* 惨 */
    .next = &GlyTJA_E68A97,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E683A8Tiles,
};

const struct GlyphNew GlyTJA_E68B85 = { /* 担 */
    .next = &GlyTJA_E683A8,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68B85Tiles,
};

const struct GlyphNew GlyTJA_E789A2 = { /* 牢 */
    .next = &GlyTJA_E799BE,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E789A2Tiles,
};

const struct GlyphNew GlyTJA_E9ACBC = { /* 鬼 */
    .next = &GlyTJA_E98984,
    .width = 11,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9ACBCTiles,
};

const struct GlyphNew GlyTJA_E7B298 = { /* 粘 */
    .next = &GlyTJA_E789A2,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B298Tiles,
};

const struct GlyphNew GlyTJA_E382B5 = { /* サ */
    .next = &GlyTJA_E382B4,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E382B5Tiles,
};

const struct GlyphNew GlyTJA_EFBC95 = { /* ５ */
    .next = &GlyTJA_EFBC94,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBC95Tiles,
};

const struct GlyphNew GlyTJA_E78BBC = { /* 狼 */
    .next = &GlyTJA_E7B298,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E78BBCTiles,
};

const struct GlyphNew GlyTJA_E68EA7 = { /* 控 */
    .next = &GlyTJA_E68B85,
    .width = 11,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68EA7Tiles,
};

const struct GlyphNew GlyTJA_E68EA2 = { /* 探 */
    .next = &GlyTJA_E68EA7,
    .width = 11,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68EA2Tiles,
};

const struct GlyphNew GlyTJA_E585B8 = { /* 典 */
    .next = &GlyTJA_E5BF83,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E585B8Tiles,
};

const struct GlyphNew GlyTJA_E8A395 = { /* 裕 */
    .next = &GlyTJA_E8BB8D,
    .width = 11,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A395Tiles,
};

const struct GlyphNew GlyTJA_E6858E = { /* 慎 */
    .next = &GlyTJA_E68EA2,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6858ETiles,
};

const struct GlyphNew GlyTJA_E382B6 = { /* ザ */
    .next = &GlyTJA_E382B5,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E382B6Tiles,
};

const struct GlyphNew GlyTJA_EFBC96 = { /* ６ */
    .next = &GlyTJA_EFBC95,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBC96Tiles,
};

const struct GlyphNew GlyTJA_E694BB = { /* 攻 */
    .next = &GlyTJA_E6858E,
    .width = 11,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E694BBTiles,
};

const struct GlyphNew GlyTJA_E695A3 = { /* 散 */
    .next = &GlyTJA_E694BB,
    .width = 12,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E695A3Tiles,
};

const struct GlyphNew GlyTJA_E8AA98 = { /* 誘 */
    .next = &GlyTJA_E8A395,
    .width = 11,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8AA98Tiles,
};

const struct GlyphNew GlyTJA_E6B6AF = { /* 涯 */
    .next = &GlyTJA_E695A3,
    .width = 11,
    .utf_byte_2 = 0xb6,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B6AFTiles,
};

const struct GlyphNew GlyTJA_E68CAF = { /* 振 */
    .next = &GlyTJA_E6B6AF,
    .width = 11,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68CAFTiles,
};

const struct GlyphNew GlyTJA_E382B7 = { /* シ */
    .next = &GlyTJA_E382B6,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E382B7Tiles,
};

const struct GlyphNew GlyTJA_EFBC97 = { /* ７ */
    .next = &GlyTJA_EFBC96,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBC97Tiles,
};

const struct GlyphNew GlyTJA_E88081 = { /* 老 */
    .next = &GlyTJA_E8AA98,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E88081Tiles,
};

const struct GlyphNew GlyTJA_E5A4A9 = { /* 天 */
    .next = &GlyTJA_E585B8,
    .width = 11,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A4A9Tiles,
};

const struct GlyphNew GlyTJA_E696B0 = { /* 新 */
    .next = &GlyTJA_E68CAF,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E696B0Tiles,
};

const struct GlyphNew GlyTJA_E9818A = { /* 遊 */
    .next = &GlyTJA_E9ACBC,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9818ATiles,
};

const struct GlyphNew GlyTJA_E58480 = { /* 儀 */
    .next = &GlyTJA_E5A4A9,
    .width = 11,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58480Tiles,
};

const struct GlyphNew GlyTJA_E59D8A = { /* 坊 */
    .next = &GlyTJA_E58480,
    .width = 11,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59D8ATiles,
};

const struct GlyphNew GlyTJA_E382B8 = { /* ジ */
    .next = &GlyTJA_E382B7,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E382B8Tiles,
};

const struct GlyphNew GlyTJA_EFBC98 = { /* ８ */
    .next = &GlyTJA_EFBC97,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBC98Tiles,
};

const struct GlyphNew GlyTJA_E99B86 = { /* 集 */
    .next = &GlyTJA_E9818A,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99B86Tiles,
};

const struct GlyphNew GlyTJA_E6A899 = { /* 標 */
    .next = &GlyTJA_E696B0,
    .width = 11,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6A899Tiles,
};

const struct GlyphNew GlyTJA_E4BF82 = { /* 係 */
    .next = &GlyTJA_E4BAA1,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BF82Tiles,
};

const struct GlyphNew GlyTJA_E5B195 = { /* 展 */
    .next = &GlyTJA_E59D8A,
    .width = 11,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B195Tiles,
};

const struct GlyphNew GlyTJA_E382B9 = { /* ス */
    .next = &GlyTJA_E382B8,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E382B9Tiles,
};

const struct GlyphNew GlyTJA_EFBC99 = { /* ９ */
    .next = &GlyTJA_EFBC98,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBC99Tiles,
};

const struct GlyphNew GlyTJA_E5BA97 = { /* 店 */
    .next = &GlyTJA_E5B195,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BA97Tiles,
};

const struct GlyphNew GlyTJA_E38085 = { /* 々 */
    .next = &GlyTJA_E382B9,
    .width = 10,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38085Tiles,
};

const struct GlyphNew GlyTJA_E8A197 = { /* 街 */
    .next = &GlyTJA_E88081,
    .width = 11,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A197Tiles,
};

const struct GlyphNew GlyTJA_E6B0B7 = { /* 氷 */
    .next = &GlyTJA_E6A899,
    .width = 11,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B0B7Tiles,
};

const struct GlyphNew GlyTJA_E6A3AE = { /* 森 */
    .next = &GlyTJA_E6B0B7,
    .width = 11,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6A3AETiles,
};

const struct GlyphNew GlyTJA_E69BB4 = { /* 更 */
    .next = &GlyTJA_E6A3AE,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69BB4Tiles,
};

const struct GlyphNew GlyTJA_E582BE = { /* 傾 */
    .next = &GlyTJA_E5BA97,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E582BETiles,
};

const struct GlyphNew GlyTJA_E382BA = { /* ズ */
    .next = &GlyTJA_E38085,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E382BATiles,
};

const struct GlyphNew GlyTJA_E99B84 = { /* 雄 */
    .next = &GlyTJA_E99B86,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99B84Tiles,
};

const struct GlyphNew GlyTJA_E794A3 = { /* 産 */
    .next = &GlyTJA_E78BBC,
    .width = 11,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E794A3Tiles,
};

const struct GlyphNew GlyTJA_E58891 = { /* 刑 */
    .next = &GlyTJA_E582BE,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58891Tiles,
};

const struct GlyphNew GlyTJA_E5BF98 = { /* 忘 */
    .next = &GlyTJA_E58891,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BF98Tiles,
};

const struct GlyphNew GlyTJA_E9838E = { /* 郎 */
    .next = &GlyTJA_E99B84,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9838ETiles,
};

const struct GlyphNew GlyTJA_E682A9 = { /* 悩 */
    .next = &GlyTJA_E69BB4,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E682A9Tiles,
};

const struct GlyphNew GlyTJA_E382BB = { /* セ */
    .next = &GlyTJA_E382BA,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E382BBTiles,
};

const struct GlyphNew GlyTJA_E68A80 = { /* 技 */
    .next = &GlyTJA_E682A9,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68A80Tiles,
};

const struct GlyphNew GlyTJA_E58584 = { /* 兄 */
    .next = &GlyTJA_E5BF98,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58584Tiles,
};

const struct GlyphNew GlyTJA_E79FAD = { /* 短 */
    .next = &GlyTJA_E794A3,
    .width = 11,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79FADTiles,
};

const struct GlyphNew GlyTJA_E4BD8F = { /* 住 */
    .next = &GlyTJA_E4BF82,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BD8FTiles,
};

const struct GlyphNew GlyTJA_E6A0A1 = { /* 校 */
    .next = &GlyTJA_E68A80,
    .width = 11,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6A0A1Tiles,
};

const struct GlyphNew GlyTJA_E585AD = { /* 六 */
    .next = &GlyTJA_E58584,
    .width = 12,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E585ADTiles,
};

const struct GlyphNew GlyTJA_E7AE97 = { /* 算 */
    .next = &GlyTJA_E79FAD,
    .width = 11,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7AE97Tiles,
};

const struct GlyphNew GlyTJA_E98EA7 = { /* 鎧 */
    .next = &GlyTJA_E9838E,
    .width = 11,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E98EA7Tiles,
};

const struct GlyphNew GlyTJA_E5BF99 = { /* 忙 */
    .next = &GlyTJA_E585AD,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BF99Tiles,
};

const struct GlyphNew GlyTJA_E382BC = { /* ゼ */
    .next = &GlyTJA_E382BB,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E382BCTiles,
};

const struct GlyphNew GlyTJA_E383BC = { /* ー */
    .next = &GlyTJA_E382BC,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E383BCTiles,
};

const struct GlyphNew GlyTJA_E6B7B1 = { /* 深 */
    .next = &GlyTJA_E6A0A1,
    .width = 11,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B7B1Tiles,
};

const struct GlyphNew GlyTJA_E7ABAF = { /* 端 */
    .next = &GlyTJA_E7AE97,
    .width = 11,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7ABAFTiles,
};

const struct GlyphNew GlyTJA_E7B48D = { /* 納 */
    .next = &GlyTJA_E7ABAF,
    .width = 11,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B48DTiles,
};

const struct GlyphNew GlyTJA_E5A495 = { /* 夕 */
    .next = &GlyTJA_E5BF99,
    .width = 11,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A495Tiles,
};

const struct GlyphNew GlyTJA_E382BD = { /* ソ */
    .next = &GlyTJA_E383BC,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E382BDTiles,
};

const struct GlyphNew GlyTJA_E8A1A8 = { /* 表 */
    .next = &GlyTJA_E8A197,
    .width = 11,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A1A8Tiles,
};

const struct GlyphNew GlyTJA_E883BD = { /* 能 */
    .next = &GlyTJA_E8A1A8,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E883BDTiles,
};

const struct GlyphNew GlyTJA_E794B3 = { /* 申 */
    .next = &GlyTJA_E7B48D,
    .width = 11,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E794B3Tiles,
};

const struct GlyphNew GlyTJA_E4BA88 = { /* 予 */
    .next = &GlyTJA_E4BD8F,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BA88Tiles,
};

const struct GlyphNew GlyTJA_E58D81 = { /* 十 */
    .next = &GlyTJA_E5A495,
    .width = 11,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58D81Tiles,
};

const struct GlyphNew GlyTJA_E69AB4 = { /* 暴 */
    .next = &GlyTJA_E6B7B1,
    .width = 11,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69AB4Tiles,
};

const struct GlyphNew GlyTJA_E6A78B = { /* 構 */
    .next = &GlyTJA_E69AB4,
    .width = 12,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6A78BTiles,
};

const struct GlyphNew GlyTJA_E382BE = { /* ゾ */
    .next = &GlyTJA_E382BD,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E382BETiles,
};

const struct GlyphNew GlyTJA_E5BE93 = { /* 従 */
    .next = &GlyTJA_E58D81,
    .width = 10,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BE93Tiles,
};

const struct GlyphNew GlyTJA_E69C9B = { /* 望 */
    .next = &GlyTJA_E6A78B,
    .width = 11,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69C9BTiles,
};

const struct GlyphNew GlyTJA_E8BBA2 = { /* 転 */
    .next = &GlyTJA_E883BD,
    .width = 11,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8BBA2Tiles,
};

const struct GlyphNew GlyTJA_E78AA0 = { /* 犠 */
    .next = &GlyTJA_E794B3,
    .width = 12,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E78AA0Tiles,
};

const struct GlyphNew GlyTJA_E4BD99 = { /* 余 */
    .next = &GlyTJA_E4BA88,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BD99Tiles,
};

const struct GlyphNew GlyTJA_E6B19F = { /* 江 */
    .next = &GlyTJA_E69C9B,
    .width = 11,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B19FTiles,
};

const struct GlyphNew GlyTJA_E8A995 = { /* 評 */
    .next = &GlyTJA_E8BBA2,
    .width = 11,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A995Tiles,
};

const struct GlyphNew GlyTJA_E382BF = { /* タ */
    .next = &GlyTJA_E382BE,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E382BFTiles,
};

const struct GlyphNew GlyTJA_EFBC8F = { /* ／ */
    .next = &GlyTJA_EFBC99,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBC8FTiles,
};

const struct GlyphNew GlyTJA_E9818B = { /* 運 */
    .next = &GlyTJA_E98EA7,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9818BTiles,
};

const struct GlyphNew GlyTJA_E79C9F = { /* 真 */
    .next = &GlyTJA_E78AA0,
    .width = 11,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79C9FTiles,
};

const struct GlyphNew GlyTJA_E98CB2 = { /* 録 */
    .next = &GlyTJA_E9818B,
    .width = 11,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E98CB2Tiles,
};

const struct GlyphNew GlyTJA_E4B88E = { /* 与 */
    .next = &GlyTJA_E4BD99,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4B88ETiles,
};

const struct GlyphNew GlyTJA_E59E8B = { /* 型 */
    .next = &GlyTJA_E5BE93,
    .width = 11,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59E8BTiles,
};

const struct GlyphNew GlyTJA_E8B39B = { /* 賛 */
    .next = &GlyTJA_E8A995,
    .width = 11,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B39BTiles,
};

const struct GlyphNew GlyTJA_E79691 = { /* 疑 */
    .next = &GlyTJA_E79C9F,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79691Tiles,
};

const struct GlyphNew GlyTJA_E38380 = { /* ダ */
    .next = &GlyTJA_E382BF,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38380Tiles,
};

const struct GlyphNew GlyTJA_E7A59E = { /* 神 */
    .next = &GlyTJA_E79691,
    .width = 11,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A59ETiles,
};

const struct GlyphNew GlyTJA_E99BB2 = { /* 雲 */
    .next = &GlyTJA_E98CB2,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99BB2Tiles,
};

const struct GlyphNew GlyTJA_E8AA89 = { /* 誉 */
    .next = &GlyTJA_E8B39B,
    .width = 11,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8AA89Tiles,
};

const struct GlyphNew GlyTJA_E5A591 = { /* 契 */
    .next = &GlyTJA_E59E8B,
    .width = 11,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A591Tiles,
};

const struct GlyphNew GlyTJA_E78B99 = { /* 狙 */
    .next = &GlyTJA_E7A59E,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E78B99Tiles,
};

const struct GlyphNew GlyTJA_E782B9 = { /* 点 */
    .next = &GlyTJA_E78B99,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E782B9Tiles,
};

const struct GlyphNew GlyTJA_E8AB96 = { /* 論 */
    .next = &GlyTJA_E8AA89,
    .width = 11,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8AB96Tiles,
};

const struct GlyphNew GlyTJA_E6A392 = { /* 棒 */
    .next = &GlyTJA_E6B19F,
    .width = 11,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6A392Tiles,
};

const struct GlyphNew GlyTJA_E38381 = { /* チ */
    .next = &GlyTJA_E38380,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38381Tiles,
};

const struct GlyphNew GlyTJA_EFBD9E = { /* ～ */
    .next = &GlyTJA_EFBC8F,
    .width = 9,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBD9ETiles,
};

const struct GlyphNew GlyTJA_EFBCA1 = { /* Ａ */
    .next = &GlyTJA_EFBD9E,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBCA1Tiles,
};

const struct GlyphNew GlyTJA_E6B8AF = { /* 港 */
    .next = &GlyTJA_E6A392,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B8AFTiles,
};

const struct GlyphNew GlyTJA_E7BEA9 = { /* 義 */
    .next = &GlyTJA_E782B9,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7BEA9Tiles,
};

const struct GlyphNew GlyTJA_E4BC9D = { /* 伝 */
    .next = &GlyTJA_E4B88E,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BC9DTiles,
};

const struct GlyphNew GlyTJA_E5BDA2 = { /* 形 */
    .next = &GlyTJA_E5A591,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BDA2Tiles,
};

const struct GlyphNew GlyTJA_E580AD = { /* 倭 */
    .next = &GlyTJA_E5BDA2,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E580ADTiles,
};

const struct GlyphNew GlyTJA_EFBCA2 = { /* Ｂ */
    .next = &GlyTJA_EFBCA1,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBCA2Tiles,
};

const struct GlyphNew GlyTJA_E6AEBF = { /* 殿 */
    .next = &GlyTJA_E6B8AF,
    .width = 12,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6AEBFTiles,
};

const struct GlyphNew GlyTJA_E5928C = { /* 和 */
    .next = &GlyTJA_E580AD,
    .width = 11,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5928CTiles,
};

const struct GlyphNew GlyTJA_E79785 = { /* 病 */
    .next = &GlyTJA_E7BEA9,
    .width = 11,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79785Tiles,
};

const struct GlyphNew GlyTJA_E8AA95 = { /* 誕 */
    .next = &GlyTJA_E8AB96,
    .width = 11,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8AA95Tiles,
};

const struct GlyphNew GlyTJA_E9A090 = { /* 預 */
    .next = &GlyTJA_E99BB2,
    .width = 11,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9A090Tiles,
};

const struct GlyphNew GlyTJA_E696AC = { /* 斬 */
    .next = &GlyTJA_E6AEBF,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E696ACTiles,
};

const struct GlyphNew GlyTJA_E38383 = { /* ッ */
    .next = &GlyTJA_E38381,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38383Tiles,
};

const struct GlyphNew GlyTJA_EFBCA3 = { /* Ｃ */
    .next = &GlyTJA_EFBCA2,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBCA3Tiles,
};

const struct GlyphNew GlyTJA_E8A9B1 = { /* 話 */
    .next = &GlyTJA_E8AA95,
    .width = 12,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A9B1Tiles,
};

const struct GlyphNew GlyTJA_E582AD = { /* 傭 */
    .next = &GlyTJA_E5928C,
    .width = 12,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E582ADTiles,
};

const struct GlyphNew GlyTJA_E887A3 = { /* 臣 */
    .next = &GlyTJA_E8A9B1,
    .width = 11,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E887A3Tiles,
};

const struct GlyphNew GlyTJA_E794B2 = { /* 甲 */
    .next = &GlyTJA_E79785,
    .width = 11,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E794B2Tiles,
};

const struct GlyphNew GlyTJA_E681B5 = { /* 恵 */
    .next = &GlyTJA_E696AC,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E681B5Tiles,
};

const struct GlyphNew GlyTJA_E38384 = { /* ツ */
    .next = &GlyTJA_E38383,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38384Tiles,
};

const struct GlyphNew GlyTJA_EFBCA4 = { /* Ｄ */
    .next = &GlyTJA_EFBCA3,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBCA4Tiles,
};

const struct GlyphNew GlyTJA_E79A87 = { /* 皇 */
    .next = &GlyTJA_E794B2,
    .width = 11,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79A87Tiles,
};

const struct GlyphNew GlyTJA_E59BA3 = { /* 団 */
    .next = &GlyTJA_E582AD,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59BA3Tiles,
};

const struct GlyphNew GlyTJA_E7A596 = { /* 祖 */
    .next = &GlyTJA_E79A87,
    .width = 11,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A596Tiles,
};

const struct GlyphNew GlyTJA_E6AE8B = { /* 残 */
    .next = &GlyTJA_E681B5,
    .width = 11,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6AE8BTiles,
};

const struct GlyphNew GlyTJA_E8ADB0 = { /* 議 */
    .next = &GlyTJA_E887A3,
    .width = 11,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8ADB0Tiles,
};

const struct GlyphNew GlyTJA_E596B6 = { /* 営 */
    .next = &GlyTJA_E59BA3,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E596B6Tiles,
};

const struct GlyphNew GlyTJA_E5B9BC = { /* 幼 */
    .next = &GlyTJA_E596B6,
    .width = 11,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B9BCTiles,
};

const struct GlyphNew GlyTJA_E794B0 = { /* 田 */
    .next = &GlyTJA_E7A596,
    .width = 10,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E794B0Tiles,
};

const struct GlyphNew GlyTJA_E68A8A = { /* 把 */
    .next = &GlyTJA_E6AE8B,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68A8ATiles,
};

const struct GlyphNew GlyTJA_EFBCA5 = { /* Ｅ */
    .next = &GlyTJA_EFBCA4,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBCA5Tiles,
};

const struct GlyphNew GlyTJA_E5A387 = { /* 壇 */
    .next = &GlyTJA_E5B9BC,
    .width = 11,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A387Tiles,
};

const struct GlyphNew GlyTJA_E99BBB = { /* 電 */
    .next = &GlyTJA_E9A090,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99BBBTiles,
};

const struct GlyphNew GlyTJA_E9878D = { /* 重 */
    .next = &GlyTJA_E99BBB,
    .width = 11,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9878DTiles,
};

const struct GlyphNew GlyTJA_E4BB95 = { /* 仕 */
    .next = &GlyTJA_E4BC9D,
    .width = 11,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BB95Tiles,
};

const struct GlyphNew GlyTJA_E8AC80 = { /* 謀 */
    .next = &GlyTJA_E8ADB0,
    .width = 11,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8AC80Tiles,
};

const struct GlyphNew GlyTJA_E38386 = { /* テ */
    .next = &GlyTJA_E38384,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38386Tiles,
};

const struct GlyphNew GlyTJA_EFBCA6 = { /* Ｆ */
    .next = &GlyTJA_EFBCA5,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBCA6Tiles,
};

const struct GlyphNew GlyTJA_E8A6AA = { /* 親 */
    .next = &GlyTJA_E8AC80,
    .width = 11,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A6AATiles,
};

const struct GlyphNew GlyTJA_E59084 = { /* 各 */
    .next = &GlyTJA_E5A387,
    .width = 11,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59084Tiles,
};

const struct GlyphNew GlyTJA_E8A687 = { /* 覇 */
    .next = &GlyTJA_E8A6AA,
    .width = 11,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A687Tiles,
};

const struct GlyphNew GlyTJA_E5AEB9 = { /* 容 */
    .next = &GlyTJA_E59084,
    .width = 11,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AEB9Tiles,
};

const struct GlyphNew GlyTJA_E5BDB1 = { /* 影 */
    .next = &GlyTJA_E5AEB9,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BDB1Tiles,
};

const struct GlyphNew GlyTJA_E5BCBE = { /* 弾 */
    .next = &GlyTJA_E5BDB1,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BCBETiles,
};

const struct GlyphNew GlyTJA_E7B297 = { /* 粗 */
    .next = &GlyTJA_E794B0,
    .width = 12,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B297Tiles,
};

const struct GlyphNew GlyTJA_E38387 = { /* デ */
    .next = &GlyTJA_E38386,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38387Tiles,
};

const struct GlyphNew GlyTJA_EFBCA7 = { /* Ｇ */
    .next = &GlyTJA_EFBCA6,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBCA7Tiles,
};

const struct GlyphNew GlyTJA_E696AD = { /* 断 */
    .next = &GlyTJA_E68A8A,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E696ADTiles,
};

const struct GlyphNew GlyTJA_E68391 = { /* 惑 */
    .next = &GlyTJA_E696AD,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68391Tiles,
};

const struct GlyphNew GlyTJA_E7B4A0 = { /* 素 */
    .next = &GlyTJA_E7B297,
    .width = 11,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B4A0Tiles,
};

const struct GlyphNew GlyTJA_E698A0 = { /* 映 */
    .next = &GlyTJA_E68391,
    .width = 11,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E698A0Tiles,
};

const struct GlyphNew GlyTJA_E38388 = { /* ト */
    .next = &GlyTJA_E38387,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38388Tiles,
};

const struct GlyphNew GlyTJA_EFBCA8 = { /* Ｈ */
    .next = &GlyTJA_EFBCA7,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBCA8Tiles,
};

const struct GlyphNew GlyTJA_E4BDBF = { /* 使 */
    .next = &GlyTJA_E4BB95,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BDBFTiles,
};

const struct GlyphNew GlyTJA_E8BAAB = { /* 身 */
    .next = &GlyTJA_E8A687,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8BAABTiles,
};

const struct GlyphNew GlyTJA_E7B485 = { /* 紅 */
    .next = &GlyTJA_E7B4A0,
    .width = 11,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B485Tiles,
};

const struct GlyphNew GlyTJA_E69A96 = { /* 暖 */
    .next = &GlyTJA_E698A0,
    .width = 11,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69A96Tiles,
};

const struct GlyphNew GlyTJA_E7B584 = { /* 組 */
    .next = &GlyTJA_E7B485,
    .width = 11,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B584Tiles,
};

const struct GlyphNew GlyTJA_E68BA1 = { /* 拡 */
    .next = &GlyTJA_E69A96,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68BA1Tiles,
};

const struct GlyphNew GlyTJA_E59089 = { /* 吉 */
    .next = &GlyTJA_E5BCBE,
    .width = 11,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59089Tiles,
};

const struct GlyphNew GlyTJA_E6B3A2 = { /* 波 */
    .next = &GlyTJA_E68BA1,
    .width = 11,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B3A2Tiles,
};

const struct GlyphNew GlyTJA_E69EA0 = { /* 枠 */
    .next = &GlyTJA_E6B3A2,
    .width = 12,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69EA0Tiles,
};

const struct GlyphNew GlyTJA_E38389 = { /* ド */
    .next = &GlyTJA_E38388,
    .width = 10,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38389Tiles,
};

const struct GlyphNew GlyTJA_EFBCA9 = { /* Ｉ */
    .next = &GlyTJA_EFBCA8,
    .width = 5,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBCA9Tiles,
};

const struct GlyphNew GlyTJA_E8BE9B = { /* 辛 */
    .next = &GlyTJA_E8BAAB,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8BE9BTiles,
};

const struct GlyphNew GlyTJA_E998B2 = { /* 防 */
    .next = &GlyTJA_E9878D,
    .width = 11,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E998B2Tiles,
};

const struct GlyphNew GlyTJA_E6A084 = { /* 栄 */
    .next = &GlyTJA_E69EA0,
    .width = 11,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6A084Tiles,
};

const struct GlyphNew GlyTJA_E6B4BE = { /* 派 */
    .next = &GlyTJA_E6A084,
    .width = 11,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B4BETiles,
};

const struct GlyphNew GlyTJA_E5AEBF = { /* 宿 */
    .next = &GlyTJA_E59089,
    .width = 11,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AEBFTiles,
};

const struct GlyphNew GlyTJA_E695AC = { /* 敬 */
    .next = &GlyTJA_E6B4BE,
    .width = 11,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E695ACTiles,
};

const struct GlyphNew GlyTJA_E68FBA = { /* 揺 */
    .next = &GlyTJA_E695AC,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68FBATiles,
};

const struct GlyphNew GlyTJA_E3838A = { /* ナ */
    .next = &GlyTJA_E38389,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E3838ATiles,
};

const struct GlyphNew GlyTJA_EFBC88 = { /* （ */
    .next = &GlyTJA_EFBCA9,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBC88Tiles,
};

const struct GlyphNew GlyTJA_EFBCAA = { /* Ｊ */
    .next = &GlyTJA_EFBC88,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBCAATiles,
};

const struct GlyphNew GlyTJA_E980B2 = { /* 進 */
    .next = &GlyTJA_E998B2,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E980B2Tiles,
};

const struct GlyphNew GlyTJA_E58FB8 = { /* 司 */
    .next = &GlyTJA_E5AEBF,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58FB8Tiles,
};

const struct GlyphNew GlyTJA_E699AF = { /* 景 */
    .next = &GlyTJA_E68FBA,
    .width = 11,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E699AFTiles,
};

const struct GlyphNew GlyTJA_E6B0B8 = { /* 永 */
    .next = &GlyTJA_E699AF,
    .width = 11,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B0B8Tiles,
};

const struct GlyphNew GlyTJA_E6A0BC = { /* 格 */
    .next = &GlyTJA_E6B0B8,
    .width = 11,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6A0BCTiles,
};

const struct GlyphNew GlyTJA_E6AEB5 = { /* 段 */
    .next = &GlyTJA_E6A0BC,
    .width = 11,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6AEB5Tiles,
};

const struct GlyphNew GlyTJA_E59381 = { /* 品 */
    .next = &GlyTJA_E58FB8,
    .width = 11,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59381Tiles,
};

const struct GlyphNew GlyTJA_E5A6AC = { /* 妬 */
    .next = &GlyTJA_E59381,
    .width = 11,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A6ACTiles,
};

const struct GlyphNew GlyTJA_E3838B = { /* ニ */
    .next = &GlyTJA_E3838A,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E3838BTiles,
};

const struct GlyphNew GlyTJA_EFBC89 = { /* ） */
    .next = &GlyTJA_EFBCAA,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBC89Tiles,
};

const struct GlyphNew GlyTJA_EFBCAB = { /* Ｋ */
    .next = &GlyTJA_EFBC89,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBCABTiles,
};

const struct GlyphNew GlyTJA_E794B7 = { /* 男 */
    .next = &GlyTJA_E7B584,
    .width = 11,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E794B7Tiles,
};

const struct GlyphNew GlyTJA_E7A0B4 = { /* 破 */
    .next = &GlyTJA_E794B7,
    .width = 11,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A0B4Tiles,
};

const struct GlyphNew GlyTJA_E998BB = { /* 阻 */
    .next = &GlyTJA_E980B2,
    .width = 11,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E998BBTiles,
};

const struct GlyphNew GlyTJA_E58FB2 = { /* 史 */
    .next = &GlyTJA_E5A6AC,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58FB2Tiles,
};

const struct GlyphNew GlyTJA_E9879D = { /* 針 */
    .next = &GlyTJA_E998BB,
    .width = 11,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9879DTiles,
};

const struct GlyphNew GlyTJA_E7A59D = { /* 祝 */
    .next = &GlyTJA_E7A0B4,
    .width = 11,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A59DTiles,
};

const struct GlyphNew GlyTJA_E3838C = { /* ヌ */
    .next = &GlyTJA_E3838B,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E3838CTiles,
};

const struct GlyphNew GlyTJA_EFBCAC = { /* Ｌ */
    .next = &GlyTJA_EFBCAB,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBCACTiles,
};

const struct GlyphNew GlyTJA_E58C97 = { /* 北 */
    .next = &GlyTJA_E58FB2,
    .width = 11,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58C97Tiles,
};

const struct GlyphNew GlyTJA_E5BE92 = { /* 徒 */
    .next = &GlyTJA_E58C97,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BE92Tiles,
};

const struct GlyphNew GlyTJA_E8AB87 = { /* 談 */
    .next = &GlyTJA_E8BE9B,
    .width = 11,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8AB87Tiles,
};

const struct GlyphNew GlyTJA_E5A986 = { /* 婆 */
    .next = &GlyTJA_E5BE92,
    .width = 11,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A986Tiles,
};

const struct GlyphNew GlyTJA_E7B8AE = { /* 縮 */
    .next = &GlyTJA_E7A59D,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B8AETiles,
};

const struct GlyphNew GlyTJA_E3838D = { /* ネ */
    .next = &GlyTJA_E3838C,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E3838DTiles,
};

const struct GlyphNew GlyTJA_EFBCAD = { /* Ｍ */
    .next = &GlyTJA_EFBCAC,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBCADTiles,
};

const struct GlyphNew GlyTJA_E4BABA = { /* 人 */
    .next = &GlyTJA_E4BDBF,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BABATiles,
};

const struct GlyphNew GlyTJA_E6A798 = { /* 様 */
    .next = &GlyTJA_E6AEB5,
    .width = 11,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6A798Tiles,
};

const struct GlyphNew GlyTJA_E580A4 = { /* 値 */
    .next = &GlyTJA_E5A986,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E580A4Tiles,
};

const struct GlyphNew GlyTJA_E7B29B = { /* 粛 */
    .next = &GlyTJA_E7B8AE,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B29BTiles,
};

const struct GlyphNew GlyTJA_E59B9B = { /* 四 */
    .next = &GlyTJA_E580A4,
    .width = 10,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59B9BTiles,
};

const struct GlyphNew GlyTJA_E88083 = { /* 考 */
    .next = &GlyTJA_E8AB87,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E88083Tiles,
};

const struct GlyphNew GlyTJA_E78DB2 = { /* 獲 */
    .next = &GlyTJA_E7B29B,
    .width = 11,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E78DB2Tiles,
};

const struct GlyphNew GlyTJA_E3838E = { /* ノ */
    .next = &GlyTJA_E3838D,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E3838ETiles,
};

const struct GlyphNew GlyTJA_EFBCAE = { /* Ｎ */
    .next = &GlyTJA_EFBCAD,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBCAETiles,
};

const struct GlyphNew GlyTJA_E5A3AB = { /* 士 */
    .next = &GlyTJA_E59B9B,
    .width = 11,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A3ABTiles,
};

const struct GlyphNew GlyTJA_E79FA5 = { /* 知 */
    .next = &GlyTJA_E78DB2,
    .width = 11,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79FA5Tiles,
};

const struct GlyphNew GlyTJA_E583A7 = { /* 僧 */
    .next = &GlyTJA_E5A3AB,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E583A7Tiles,
};

const struct GlyphNew GlyTJA_E7A2BA = { /* 確 */
    .next = &GlyTJA_E79FA5,
    .width = 11,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A2BATiles,
};

const struct GlyphNew GlyTJA_E3838F = { /* ハ */
    .next = &GlyTJA_E3838E,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E3838FTiles,
};

const struct GlyphNew GlyTJA_EFBCAF = { /* Ｏ */
    .next = &GlyTJA_EFBCAE,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBCAFTiles,
};

const struct GlyphNew GlyTJA_E7B3BB = { /* 系 */
    .next = &GlyTJA_E7A2BA,
    .width = 11,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B3BBTiles,
};

const struct GlyphNew GlyTJA_E59CB0 = { /* 地 */
    .next = &GlyTJA_E583A7,
    .width = 11,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59CB0Tiles,
};

const struct GlyphNew GlyTJA_E5A78B = { /* 始 */
    .next = &GlyTJA_E59CB0,
    .width = 10,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A78BTiles,
};

const struct GlyphNew GlyTJA_E9A6AC = { /* 馬 */
    .next = &GlyTJA_E9879D,
    .width = 11,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9A6ACTiles,
};

const struct GlyphNew GlyTJA_E6BAB6 = { /* 溶 */
    .next = &GlyTJA_E6A798,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6BAB6Tiles,
};

const struct GlyphNew GlyTJA_E589B5 = { /* 創 */
    .next = &GlyTJA_E5A78B,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E589B5Tiles,
};

const struct GlyphNew GlyTJA_E58883 = { /* 刃 */
    .next = &GlyTJA_E589B5,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58883Tiles,
};

const struct GlyphNew GlyTJA_E6B8A1 = { /* 渡 */
    .next = &GlyTJA_E6BAB6,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B8A1Tiles,
};

const struct GlyphNew GlyTJA_E7869F = { /* 熟 */
    .next = &GlyTJA_E7B3BB,
    .width = 11,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7869FTiles,
};

const struct GlyphNew GlyTJA_E38390 = { /* バ */
    .next = &GlyTJA_E3838F,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38390Tiles,
};

const struct GlyphNew GlyTJA_EFBCB0 = { /* Ｐ */
    .next = &GlyTJA_EFBCAF,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBCB0Tiles,
};

const struct GlyphNew GlyTJA_E587BA = { /* 出 */
    .next = &GlyTJA_E58883,
    .width = 10,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E587BATiles,
};

const struct GlyphNew GlyTJA_E5A789 = { /* 姉 */
    .next = &GlyTJA_E587BA,
    .width = 11,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A789Tiles,
};

const struct GlyphNew GlyTJA_E7B58C = { /* 経 */
    .next = &GlyTJA_E7869F,
    .width = 11,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B58CTiles,
};

const struct GlyphNew GlyTJA_E58F8C = { /* 双 */
    .next = &GlyTJA_E5A789,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58F8CTiles,
};

const struct GlyphNew GlyTJA_E8A69A = { /* 覚 */
    .next = &GlyTJA_E88083,
    .width = 11,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A69ATiles,
};

const struct GlyphNew GlyTJA_E38391 = { /* パ */
    .next = &GlyTJA_E38390,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38391Tiles,
};

const struct GlyphNew GlyTJA_EFBCB1 = { /* Ｑ */
    .next = &GlyTJA_EFBCB0,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBCB1Tiles,
};

const struct GlyphNew GlyTJA_E794A8 = { /* 用 */
    .next = &GlyTJA_E7B58C,
    .width = 11,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E794A8Tiles,
};

const struct GlyphNew GlyTJA_E88BB1 = { /* 英 */
    .next = &GlyTJA_E8A69A,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E88BB1Tiles,
};

const struct GlyphNew GlyTJA_E8A193 = { /* 術 */
    .next = &GlyTJA_E88BB1,
    .width = 11,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A193Tiles,
};

const struct GlyphNew GlyTJA_E7B699 = { /* 継 */
    .next = &GlyTJA_E794A8,
    .width = 11,
    .utf_byte_2 = 0xb6,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B699Tiles,
};

const struct GlyphNew GlyTJA_E5A7BF = { /* 姿 */
    .next = &GlyTJA_E58F8C,
    .width = 11,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A7BFTiles,
};

const struct GlyphNew GlyTJA_E681A5 = { /* 恥 */
    .next = &GlyTJA_E6B8A1,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E681A5Tiles,
};

const struct GlyphNew GlyTJA_E8A792 = { /* 角 */
    .next = &GlyTJA_E8A193,
    .width = 11,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A792Tiles,
};

const struct GlyphNew GlyTJA_E6B9BE = { /* 湾 */
    .next = &GlyTJA_E681A5,
    .width = 11,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B9BETiles,
};

const struct GlyphNew GlyTJA_E38392 = { /* ヒ */
    .next = &GlyTJA_E38391,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38392Tiles,
};

const struct GlyphNew GlyTJA_EFBCB2 = { /* Ｒ */
    .next = &GlyTJA_EFBCB1,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBCB2Tiles,
};

const struct GlyphNew GlyTJA_E5AD90 = { /* 子 */
    .next = &GlyTJA_E5A7BF,
    .width = 11,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AD90Tiles,
};

const struct GlyphNew GlyTJA_E8A19B = { /* 衛 */
    .next = &GlyTJA_E8A792,
    .width = 11,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A19BTiles,
};

const struct GlyphNew GlyTJA_E5AEA2 = { /* 客 */
    .next = &GlyTJA_E5AD90,
    .width = 11,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AEA2Tiles,
};

const struct GlyphNew GlyTJA_E789A7 = { /* 牧 */
    .next = &GlyTJA_E7B699,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E789A7Tiles,
};

const struct GlyphNew GlyTJA_E68B9D = { /* 拝 */
    .next = &GlyTJA_E6B9BE,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68B9DTiles,
};

const struct GlyphNew GlyTJA_E38393 = { /* ビ */
    .next = &GlyTJA_E38392,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38393Tiles,
};

const struct GlyphNew GlyTJA_EFBCB3 = { /* Ｓ */
    .next = &GlyTJA_EFBCB2,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBCB3Tiles,
};

const struct GlyphNew GlyTJA_E88D92 = { /* 荒 */
    .next = &GlyTJA_E8A19B,
    .width = 11,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E88D92Tiles,
};

const struct GlyphNew GlyTJA_E98094 = { /* 途 */
    .next = &GlyTJA_E9A6AC,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E98094Tiles,
};

const struct GlyphNew GlyTJA_E88595 = { /* 腕 */
    .next = &GlyTJA_E88D92,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E88595Tiles,
};

const struct GlyphNew GlyTJA_E7BE8A = { /* 羊 */
    .next = &GlyTJA_E789A7,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7BE8ATiles,
};

const struct GlyphNew GlyTJA_E8BC83 = { /* 較 */
    .next = &GlyTJA_E88595,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8BC83Tiles,
};

const struct GlyphNew GlyTJA_E38394 = { /* ピ */
    .next = &GlyTJA_E38393,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38394Tiles,
};

const struct GlyphNew GlyTJA_EFBCB4 = { /* Ｔ */
    .next = &GlyTJA_EFBCB3,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBCB4Tiles,
};

const struct GlyphNew GlyTJA_E8A18C = { /* 行 */
    .next = &GlyTJA_E8BC83,
    .width = 11,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A18CTiles,
};

const struct GlyphNew GlyTJA_E983BD = { /* 都 */
    .next = &GlyTJA_E98094,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E983BDTiles,
};

const struct GlyphNew GlyTJA_E5B882 = { /* 市 */
    .next = &GlyTJA_E5AEA2,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B882Tiles,
};

const struct GlyphNew GlyTJA_E69597 = { /* 敗 */
    .next = &GlyTJA_E68B9D,
    .width = 11,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69597Tiles,
};

const struct GlyphNew GlyTJA_E98BAD = { /* 鋭 */
    .next = &GlyTJA_E983BD,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E98BADTiles,
};

const struct GlyphNew GlyTJA_E4B88D = { /* 不 */
    .next = &GlyTJA_E4BABA,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4B88DTiles,
};

const struct GlyphNew GlyTJA_E5B0BD = { /* 尽 */
    .next = &GlyTJA_E5B882,
    .width = 11,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B0BDTiles,
};

const struct GlyphNew GlyTJA_E89990 = { /* 虐 */
    .next = &GlyTJA_E8A18C,
    .width = 11,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E89990Tiles,
};

const struct GlyphNew GlyTJA_E38395 = { /* フ */
    .next = &GlyTJA_E38394,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38395Tiles,
};

const struct GlyphNew GlyTJA_EFBCB5 = { /* Ｕ */
    .next = &GlyTJA_EFBCB4,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBCB5Tiles,
};

const struct GlyphNew GlyTJA_E98086 = { /* 逆 */
    .next = &GlyTJA_E98BAD,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E98086Tiles,
};

const struct GlyphNew GlyTJA_E5B8AB = { /* 師 */
    .next = &GlyTJA_E5B0BD,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B8ABTiles,
};

const struct GlyphNew GlyTJA_E4BB98 = { /* 付 */
    .next = &GlyTJA_E4B88D,
    .width = 12,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BB98Tiles,
};

const struct GlyphNew GlyTJA_E89189 = { /* 葉 */
    .next = &GlyTJA_E89990,
    .width = 11,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E89189Tiles,
};

const struct GlyphNew GlyTJA_E698A5 = { /* 春 */
    .next = &GlyTJA_E69597,
    .width = 11,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E698A5Tiles,
};

const struct GlyphNew GlyTJA_E996A3 = { /* 閣 */
    .next = &GlyTJA_E98086,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E996A3Tiles,
};

const struct GlyphNew GlyTJA_E69DAF = { /* 杯 */
    .next = &GlyTJA_E698A5,
    .width = 11,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69DAFTiles,
};

const struct GlyphNew GlyTJA_E5A58F = { /* 奏 */
    .next = &GlyTJA_E5B8AB,
    .width = 11,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A58FTiles,
};

const struct GlyphNew GlyTJA_E38396 = { /* ブ */
    .next = &GlyTJA_E38395,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38396Tiles,
};

const struct GlyphNew GlyTJA_E3808C = { /* 「 */
    .next = &GlyTJA_E38396,
    .width = 7,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E3808CTiles,
};

const struct GlyphNew GlyTJA_EFBCB6 = { /* Ｖ */
    .next = &GlyTJA_EFBCB5,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBCB6Tiles,
};

const struct GlyphNew GlyTJA_E5BF97 = { /* 志 */
    .next = &GlyTJA_E5A58F,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BF97Tiles,
};

const struct GlyphNew GlyTJA_E7BDAE = { /* 置 */
    .next = &GlyTJA_E7BE8A,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7BDAETiles,
};

const struct GlyphNew GlyTJA_E38397 = { /* プ */
    .next = &GlyTJA_E3808C,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38397Tiles,
};

const struct GlyphNew GlyTJA_E3808D = { /* 」 */
    .next = &GlyTJA_E38397,
    .width = 8,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E3808DTiles,
};

const struct GlyphNew GlyTJA_EFBCB7 = { /* Ｗ */
    .next = &GlyTJA_EFBCB6,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBCB7Tiles,
};

const struct GlyphNew GlyTJA_E4B985 = { /* 久 */
    .next = &GlyTJA_E4BB98,
    .width = 11,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4B985Tiles,
};

const struct GlyphNew GlyTJA_E8A681 = { /* 要 */
    .next = &GlyTJA_E89189,
    .width = 11,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A681Tiles,
};

const struct GlyphNew GlyTJA_E6809D = { /* 思 */
    .next = &GlyTJA_E69DAF,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6809DTiles,
};

const struct GlyphNew GlyTJA_E5A4AB = { /* 夫 */
    .next = &GlyTJA_E5BF97,
    .width = 11,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A4ABTiles,
};

const struct GlyphNew GlyTJA_E8A888 = { /* 計 */
    .next = &GlyTJA_E8A681,
    .width = 11,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A888Tiles,
};

const struct GlyphNew GlyTJA_E6B2A1 = { /* 没 */
    .next = &GlyTJA_E6809D,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B2A1Tiles,
};

const struct GlyphNew GlyTJA_E79B8A = { /* 益 */
    .next = &GlyTJA_E7BDAE,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79B8ATiles,
};

const struct GlyphNew GlyTJA_E887B4 = { /* 致 */
    .next = &GlyTJA_E8A888,
    .width = 11,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E887B4Tiles,
};

const struct GlyphNew GlyTJA_E38398 = { /* ヘ */
    .next = &GlyTJA_E3808D,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38398Tiles,
};

const struct GlyphNew GlyTJA_EFBCB8 = { /* Ｘ */
    .next = &GlyTJA_EFBCB7,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBCB8Tiles,
};

const struct GlyphNew GlyTJA_E68C87 = { /* 指 */
    .next = &GlyTJA_E6B2A1,
    .width = 11,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68C87Tiles,
};

const struct GlyphNew GlyTJA_E8838C = { /* 背 */
    .next = &GlyTJA_E887B4,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8838CTiles,
};

const struct GlyphNew GlyTJA_E5ADA6 = { /* 学 */
    .next = &GlyTJA_E5A4AB,
    .width = 11,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5ADA6Tiles,
};

const struct GlyphNew GlyTJA_E999A3 = { /* 陣 */
    .next = &GlyTJA_E996A3,
    .width = 11,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E999A3Tiles,
};

const struct GlyphNew GlyTJA_E58AAA = { /* 努 */
    .next = &GlyTJA_E5ADA6,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58AAATiles,
};

const struct GlyphNew GlyTJA_E5A9A6 = { /* 婦 */
    .next = &GlyTJA_E58AAA,
    .width = 12,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A9A6Tiles,
};

const struct GlyphNew GlyTJA_E3808E = { /* 『 */
    .next = &GlyTJA_E38398,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E3808ETiles,
};

const struct GlyphNew GlyTJA_E5B1A4 = { /* 層 */
    .next = &GlyTJA_E5A9A6,
    .width = 11,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B1A4Tiles,
};

const struct GlyphNew GlyTJA_E4BB87 = { /* 仇 */
    .next = &GlyTJA_E4B985,
    .width = 11,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BB87Tiles,
};

const struct GlyphNew GlyTJA_E38399 = { /* ベ */
    .next = &GlyTJA_E3808E,
    .width = 10,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38399Tiles,
};

const struct GlyphNew GlyTJA_EFBCB9 = { /* Ｙ */
    .next = &GlyTJA_EFBCB8,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBCB9Tiles,
};

const struct GlyphNew GlyTJA_E4BC91 = { /* 休 */
    .next = &GlyTJA_E4BB87,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BC91Tiles,
};

const struct GlyphNew GlyTJA_E5BAA6 = { /* 度 */
    .next = &GlyTJA_E5B1A4,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BAA6Tiles,
};

const struct GlyphNew GlyTJA_E694AF = { /* 支 */
    .next = &GlyTJA_E68C87,
    .width = 11,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E694AFTiles,
};

const struct GlyphNew GlyTJA_E8B88A = { /* 踊 */
    .next = &GlyTJA_E8838C,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B88ATiles,
};

const struct GlyphNew GlyTJA_E9838A = { /* 郊 */
    .next = &GlyTJA_E999A3,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9838ATiles,
};

const struct GlyphNew GlyTJA_E5AF8C = { /* 富 */
    .next = &GlyTJA_E5BAA6,
    .width = 11,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AF8CTiles,
};

const struct GlyphNew GlyTJA_E8ADA6 = { /* 警 */
    .next = &GlyTJA_E8B88A,
    .width = 11,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8ADA6Tiles,
};

const struct GlyphNew GlyTJA_E3808F = { /* 』 */
    .next = &GlyTJA_E38399,
    .width = 8,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E3808FTiles,
};

const struct GlyphNew GlyTJA_E98185 = { /* 遅 */
    .next = &GlyTJA_E9838A,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E98185Tiles,
};

const struct GlyphNew GlyTJA_E3839A = { /* ペ */
    .next = &GlyTJA_E3808F,
    .width = 10,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E3839ATiles,
};

const struct GlyphNew GlyTJA_E59C9F = { /* 土 */
    .next = &GlyTJA_E5AF8C,
    .width = 11,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59C9FTiles,
};

const struct GlyphNew GlyTJA_E8BBBD = { /* 軽 */
    .next = &GlyTJA_E8ADA6,
    .width = 11,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8BBBDTiles,
};

const struct GlyphNew GlyTJA_E8BCA9 = { /* 輩 */
    .next = &GlyTJA_E8BBBD,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8BCA9Tiles,
};

const struct GlyphNew GlyTJA_E6A5BD = { /* 楽 */
    .next = &GlyTJA_E694AF,
    .width = 11,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6A5BDTiles,
};

const struct GlyphNew GlyTJA_E8AB8D = { /* 諍 */
    .next = &GlyTJA_E8BCA9,
    .width = 11,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8AB8DTiles,
};

const struct GlyphNew GlyTJA_E3839B = { /* ホ */
    .next = &GlyTJA_E3839A,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E3839BTiles,
};

const struct GlyphNew GlyTJA_E5A5B4 = { /* 奴 */
    .next = &GlyTJA_E59C9F,
    .width = 11,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A5B4Tiles,
};

const struct GlyphNew GlyTJA_E7AF89 = { /* 築 */
    .next = &GlyTJA_E79B8A,
    .width = 11,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7AF89Tiles,
};

const struct GlyphNew GlyTJA_E9858D = { /* 配 */
    .next = &GlyTJA_E98185,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9858DTiles,
};

const struct GlyphNew GlyTJA_E999BD = { /* 陽 */
    .next = &GlyTJA_E9858D,
    .width = 11,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E999BDTiles,
};

const struct GlyphNew GlyTJA_E683B3 = { /* 想 */
    .next = &GlyTJA_E6A5BD,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E683B3Tiles,
};

const struct GlyphNew GlyTJA_E9A18D = { /* 額 */
    .next = &GlyTJA_E999BD,
    .width = 11,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9A18DTiles,
};

const struct GlyphNew GlyTJA_E989B1 = { /* 鉱 */
    .next = &GlyTJA_E9A18D,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E989B1Tiles,
};

const struct GlyphNew GlyTJA_E8B68A = { /* 越 */
    .next = &GlyTJA_E8AB8D,
    .width = 11,
    .utf_byte_2 = 0xb6,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B68ATiles,
};

const struct GlyphNew GlyTJA_E5B883 = { /* 布 */
    .next = &GlyTJA_E5A5B4,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B883Tiles,
};

const struct GlyphNew GlyTJA_E590B8 = { /* 吸 */
    .next = &GlyTJA_E5B883,
    .width = 11,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E590B8Tiles,
};

const struct GlyphNew GlyTJA_E3839C = { /* ボ */
    .next = &GlyTJA_E3839B,
    .width = 10,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E3839CTiles,
};

const struct GlyphNew GlyTJA_EFBC8B = { /* ＋ */
    .next = &GlyTJA_EFBCB9,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBC8BTiles,
};

const struct GlyphNew GlyTJA_E9A48A = { /* 養 */
    .next = &GlyTJA_E989B1,
    .width = 11,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9A48ATiles,
};

const struct GlyphNew GlyTJA_E5AEAE = { /* 宮 */
    .next = &GlyTJA_E590B8,
    .width = 11,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AEAETiles,
};

const struct GlyphNew GlyTJA_E69CAC = { /* 本 */
    .next = &GlyTJA_E683B3,
    .width = 11,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69CACTiles,
};

const struct GlyphNew GlyTJA_E5808D = { /* 倍 */
    .next = &GlyTJA_E5AEAE,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5808DTiles,
};

const struct GlyphNew GlyTJA_E68092 = { /* 怒 */
    .next = &GlyTJA_E69CAC,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68092Tiles,
};

const struct GlyphNew GlyTJA_E68D9C = { /* 捜 */
    .next = &GlyTJA_E68092,
    .width = 11,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68D9CTiles,
};

const struct GlyphNew GlyTJA_E5BA9C = { /* 府 */
    .next = &GlyTJA_E5808D,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BA9CTiles,
};

const struct GlyphNew GlyTJA_E7959C = { /* 畜 */
    .next = &GlyTJA_E7AF89,
    .width = 11,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7959CTiles,
};

const struct GlyphNew GlyTJA_E696BD = { /* 施 */
    .next = &GlyTJA_E68D9C,
    .width = 12,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E696BDTiles,
};

const struct GlyphNew GlyTJA_E3839D = { /* ポ */
    .next = &GlyTJA_E3839C,
    .width = 10,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E3839DTiles,
};

const struct GlyphNew GlyTJA_E58092 = { /* 倒 */
    .next = &GlyTJA_E5BA9C,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58092Tiles,
};

const struct GlyphNew GlyTJA_E5BC93 = { /* 弓 */
    .next = &GlyTJA_E58092,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BC93Tiles,
};

const struct GlyphNew GlyTJA_E68096 = { /* 怖 */
    .next = &GlyTJA_E696BD,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68096Tiles,
};

const struct GlyphNew GlyTJA_E68E83 = { /* 掃 */
    .next = &GlyTJA_E68096,
    .width = 11,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68E83Tiles,
};

const struct GlyphNew GlyTJA_E98BBC = { /* 鋼 */
    .next = &GlyTJA_E9A48A,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E98BBCTiles,
};

const struct GlyphNew GlyTJA_E68E9F = { /* 掟 */
    .next = &GlyTJA_E68E83,
    .width = 11,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68E9FTiles,
};

const struct GlyphNew GlyTJA_E88AB8 = { /* 芸 */
    .next = &GlyTJA_E8B68A,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E88AB8Tiles,
};

const struct GlyphNew GlyTJA_E68E9B = { /* 掛 */
    .next = &GlyTJA_E68E9F,
    .width = 12,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68E9BTiles,
};

const struct GlyphNew GlyTJA_E3839E = { /* マ */
    .next = &GlyTJA_E3839D,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E3839ETiles,
};

const struct GlyphNew GlyTJA_E8BF8E = { /* 迎 */
    .next = &GlyTJA_E88AB8,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8BF8ETiles,
};

const struct GlyphNew GlyTJA_E5859A = { /* 党 */
    .next = &GlyTJA_E5BC93,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5859ATiles,
};

const struct GlyphNew GlyTJA_E680A5 = { /* 急 */
    .next = &GlyTJA_E68E9B,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E680A5Tiles,
};

const struct GlyphNew GlyTJA_E59BB3 = { /* 図 */
    .next = &GlyTJA_E5859A,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59BB3Tiles,
};

const struct GlyphNew GlyTJA_E6AE89 = { /* 殉 */
    .next = &GlyTJA_E680A5,
    .width = 11,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6AE89Tiles,
};

const struct GlyphNew GlyTJA_E587A1 = { /* 凡 */
    .next = &GlyTJA_E59BB3,
    .width = 11,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E587A1Tiles,
};

const struct GlyphNew GlyTJA_E69E9D = { /* 枝 */
    .next = &GlyTJA_E6AE89,
    .width = 11,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69E9DTiles,
};

const struct GlyphNew GlyTJA_E3839F = { /* ミ */
    .next = &GlyTJA_E3839E,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E3839FTiles,
};

const struct GlyphNew GlyTJA_E69591 = { /* 救 */
    .next = &GlyTJA_E69E9D,
    .width = 11,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69591Tiles,
};

const struct GlyphNew GlyTJA_E6ADA2 = { /* 止 */
    .next = &GlyTJA_E69591,
    .width = 11,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6ADA2Tiles,
};

const struct GlyphNew GlyTJA_E9998D = { /* 降 */
    .next = &GlyTJA_E98BBC,
    .width = 11,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9998DTiles,
};

const struct GlyphNew GlyTJA_E6ACB2 = { /* 欲 */
    .next = &GlyTJA_E6ADA2,
    .width = 11,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6ACB2Tiles,
};

const struct GlyphNew GlyTJA_E586AC = { /* 冬 */
    .next = &GlyTJA_E587A1,
    .width = 11,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E586ACTiles,
};

const struct GlyphNew GlyTJA_C397 = { /* × */
    .next = NULL,
    .width = 7,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_C397Tiles,
};

const struct GlyphNew GlyTJA_E383A0 = { /* ム */
    .next = &GlyTJA_E3839F,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E383A0Tiles,
};

const struct GlyphNew GlyTJA_E6ADBB = { /* 死 */
    .next = &GlyTJA_E6ACB2,
    .width = 11,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6ADBBTiles,
};

const struct GlyphNew GlyTJA_E696A7 = { /* 斧 */
    .next = &GlyTJA_E6ADBB,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E696A7Tiles,
};

const struct GlyphNew GlyTJA_E6BA96 = { /* 準 */
    .next = &GlyTJA_E696A7,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6BA96Tiles,
};

const struct GlyphNew GlyTJA_E5878D = { /* 凍 */
    .next = &GlyTJA_E586AC,
    .width = 11,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5878DTiles,
};

const struct GlyphNew GlyTJA_E98090 = { /* 逐 */
    .next = &GlyTJA_E9998D,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E98090Tiles,
};

const struct GlyphNew GlyTJA_E6938D = { /* 操 */
    .next = &GlyTJA_E6BA96,
    .width = 11,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6938DTiles,
};

const struct GlyphNew GlyTJA_E58A87 = { /* 劇 */
    .next = &GlyTJA_E5878D,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58A87Tiles,
};

const struct GlyphNew GlyTJA_E9A085 = { /* 項 */
    .next = &GlyTJA_E98090,
    .width = 11,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9A085Tiles,
};

const struct GlyphNew GlyTJA_E383A1 = { /* メ */
    .next = &GlyTJA_E383A0,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E383A1Tiles,
};

const struct GlyphNew GlyTJA_EFBD81 = { /* ａ */
    .next = &GlyTJA_EFBC8B,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBD81Tiles,
};

const struct GlyphNew GlyTJA_E7A3A8 = { /* 磨 */
    .next = &GlyTJA_E7959C,
    .width = 11,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A3A8Tiles,
};

const struct GlyphNew GlyTJA_E6B182 = { /* 求 */
    .next = &GlyTJA_E6938D,
    .width = 11,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B182Tiles,
};

const struct GlyphNew GlyTJA_E697A9 = { /* 早 */
    .next = &GlyTJA_E6B182,
    .width = 11,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E697A9Tiles,
};

const struct GlyphNew GlyTJA_E7A7A9 = { /* 秩 */
    .next = &GlyTJA_E7A3A8,
    .width = 11,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A7A9Tiles,
};

const struct GlyphNew GlyTJA_E699AE = { /* 普 */
    .next = &GlyTJA_E697A9,
    .width = 11,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E699AETiles,
};

const struct GlyphNew GlyTJA_E58880 = { /* 刀 */
    .next = &GlyTJA_E58A87,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58880Tiles,
};

const struct GlyphNew GlyTJA_E590B9 = { /* 吹 */
    .next = &GlyTJA_E58880,
    .width = 11,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E590B9Tiles,
};

const struct GlyphNew GlyTJA_E383A2 = { /* モ */
    .next = &GlyTJA_E383A1,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E383A2Tiles,
};

const struct GlyphNew GlyTJA_EFBD82 = { /* ｂ */
    .next = &GlyTJA_EFBD81,
    .width = 7,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBD82Tiles,
};

const struct GlyphNew GlyTJA_E69283 = { /* 撃 */
    .next = &GlyTJA_E699AE,
    .width = 11,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69283Tiles,
};

const struct GlyphNew GlyTJA_E9AD94 = { /* 魔 */
    .next = &GlyTJA_E9A085,
    .width = 11,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9AD94Tiles,
};

const struct GlyphNew GlyTJA_E9AB98 = { /* 高 */
    .next = &GlyTJA_E9AD94,
    .width = 11,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9AB98Tiles,
};

const struct GlyphNew GlyTJA_E79BBE = { /* 盾 */
    .next = &GlyTJA_E7A7A9,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79BBETiles,
};

const struct GlyphNew GlyTJA_E78D85 = { /* 獅 */
    .next = &GlyTJA_E79BBE,
    .width = 11,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E78D85Tiles,
};

const struct GlyphNew GlyTJA_E6B5AE = { /* 浮 */
    .next = &GlyTJA_E69283,
    .width = 11,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B5AETiles,
};

const struct GlyphNew GlyTJA_E383A3 = { /* ャ */
    .next = &GlyTJA_E383A2,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E383A3Tiles,
};

const struct GlyphNew GlyTJA_EFBD83 = { /* ｃ */
    .next = &GlyTJA_EFBD82,
    .width = 7,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBD83Tiles,
};

const struct GlyphNew GlyTJA_E788B6 = { /* 父 */
    .next = &GlyTJA_E78D85,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E788B6Tiles,
};

const struct GlyphNew GlyTJA_E5A194 = { /* 塔 */
    .next = &GlyTJA_E590B9,
    .width = 11,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A194Tiles,
};

const struct GlyphNew GlyTJA_E5B7A3 = { /* 巣 */
    .next = &GlyTJA_E5A194,
    .width = 11,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B7A3Tiles,
};

const struct GlyphNew GlyTJA_E6BF80 = { /* 激 */
    .next = &GlyTJA_E6B5AE,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6BF80Tiles,
};

const struct GlyphNew GlyTJA_E8B2B7 = { /* 買 */
    .next = &GlyTJA_E8BF8E,
    .width = 10,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B2B7Tiles,
};

const struct GlyphNew GlyTJA_E6B3A3 = { /* 泣 */
    .next = &GlyTJA_E6BF80,
    .width = 11,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B3A3Tiles,
};

const struct GlyphNew GlyTJA_E7B494 = { /* 純 */
    .next = &GlyTJA_E788B6,
    .width = 11,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B494Tiles,
};

const struct GlyphNew GlyTJA_E7BFBC = { /* 翼 */
    .next = &GlyTJA_E7B494,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7BFBCTiles,
};

const struct GlyphNew GlyTJA_E5AEB4 = { /* 宴 */
    .next = &GlyTJA_E5B7A3,
    .width = 11,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AEB4Tiles,
};

const struct GlyphNew GlyTJA_E88CB6 = { /* 茶 */
    .next = &GlyTJA_E8B2B7,
    .width = 11,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E88CB6Tiles,
};

const struct GlyphNew GlyTJA_E383A4 = { /* ヤ */
    .next = &GlyTJA_E383A3,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E383A4Tiles,
};

const struct GlyphNew GlyTJA_EFBD84 = { /* ｄ */
    .next = &GlyTJA_EFBD83,
    .width = 7,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBD84Tiles,
};

const struct GlyphNew GlyTJA_E6A78D = { /* 槍 */
    .next = &GlyTJA_E6B3A3,
    .width = 11,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6A78DTiles,
};

const struct GlyphNew GlyTJA_E5A3B2 = { /* 売 */
    .next = &GlyTJA_E5AEB4,
    .width = 11,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A3B2Tiles,
};

const struct GlyphNew GlyTJA_E59F8B = { /* 埋 */
    .next = &GlyTJA_E5A3B2,
    .width = 11,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59F8BTiles,
};

const struct GlyphNew GlyTJA_E7A781 = { /* 私 */
    .next = &GlyTJA_E7BFBC,
    .width = 11,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A781Tiles,
};

const struct GlyphNew GlyTJA_E5BBB6 = { /* 延 */
    .next = &GlyTJA_E59F8B,
    .width = 11,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BBB6Tiles,
};

const struct GlyphNew GlyTJA_E5ABA1 = { /* 嫡 */
    .next = &GlyTJA_E5BBB6,
    .width = 11,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5ABA1Tiles,
};

const struct GlyphNew GlyTJA_E5899B = { /* 剛 */
    .next = &GlyTJA_E5ABA1,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5899BTiles,
};

const struct GlyphNew GlyTJA_E5B7A1 = { /* 巡 */
    .next = &GlyTJA_E5899B,
    .width = 11,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B7A1Tiles,
};

const struct GlyphNew GlyTJA_E383A5 = { /* ュ */
    .next = &GlyTJA_E383A4,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E383A5Tiles,
};

const struct GlyphNew GlyTJA_EFBD85 = { /* ｅ */
    .next = &GlyTJA_EFBD84,
    .width = 7,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBD85Tiles,
};

const struct GlyphNew GlyTJA_E6B0B4 = { /* 水 */
    .next = &GlyTJA_E6A78D,
    .width = 11,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B0B4Tiles,
};

const struct GlyphNew GlyTJA_E79D80 = { /* 着 */
    .next = &GlyTJA_E7A781,
    .width = 11,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79D80Tiles,
};

const struct GlyphNew GlyTJA_E5A6B9 = { /* 妹 */
    .next = &GlyTJA_E5B7A1,
    .width = 11,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A6B9Tiles,
};

const struct GlyphNew GlyTJA_E7B3B8 = { /* 糸 */
    .next = &GlyTJA_E79D80,
    .width = 11,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B3B8Tiles,
};

const struct GlyphNew GlyTJA_E88590 = { /* 腐 */
    .next = &GlyTJA_E88CB6,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E88590Tiles,
};

const struct GlyphNew GlyTJA_E383A6 = { /* ユ */
    .next = &GlyTJA_E383A5,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E383A6Tiles,
};

const struct GlyphNew GlyTJA_EFBD86 = { /* ｆ */
    .next = &GlyTJA_EFBD85,
    .width = 7,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBD86Tiles,
};

const struct GlyphNew GlyTJA_E4B8AD = { /* 中 */
    .next = &GlyTJA_E4BC91,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4B8ADTiles,
};

const struct GlyphNew GlyTJA_E58FB7 = { /* 号 */
    .next = &GlyTJA_E5A6B9,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58FB7Tiles,
};

const struct GlyphNew GlyTJA_E7B499 = { /* 紙 */
    .next = &GlyTJA_E7B3B8,
    .width = 11,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B499Tiles,
};

const struct GlyphNew GlyTJA_E7A9B6 = { /* 究 */
    .next = &GlyTJA_E7B499,
    .width = 11,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A9B6Tiles,
};

const struct GlyphNew GlyTJA_E383A7 = { /* ョ */
    .next = &GlyTJA_E383A6,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E383A7Tiles,
};

const struct GlyphNew GlyTJA_EFBD87 = { /* ｇ */
    .next = &GlyTJA_EFBD86,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBD87Tiles,
};

const struct GlyphNew GlyTJA_E68FB4 = { /* 援 */
    .next = &GlyTJA_E6B0B4,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68FB4Tiles,
};

const struct GlyphNew GlyTJA_E5B3B6 = { /* 島 */
    .next = &GlyTJA_E58FB7,
    .width = 11,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B3B6Tiles,
};

const struct GlyphNew GlyTJA_E59088 = { /* 合 */
    .next = &GlyTJA_E5B3B6,
    .width = 10,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59088Tiles,
};

const struct GlyphNew GlyTJA_E4BBB2 = { /* 仲 */
    .next = &GlyTJA_E4B8AD,
    .width = 11,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BBB2Tiles,
};

const struct GlyphNew GlyTJA_E9A086 = { /* 順 */
    .next = &GlyTJA_E9AB98,
    .width = 11,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9A086Tiles,
};

const struct GlyphNew GlyTJA_E69E9A = { /* 枚 */
    .next = &GlyTJA_E68FB4,
    .width = 12,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69E9ATiles,
};

const struct GlyphNew GlyTJA_E6ACA0 = { /* 欠 */
    .next = &GlyTJA_E69E9A,
    .width = 11,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6ACA0Tiles,
};

const struct GlyphNew GlyTJA_E383A8 = { /* ヨ */
    .next = &GlyTJA_E383A7,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E383A8Tiles,
};

const struct GlyphNew GlyTJA_EFBD88 = { /* ｈ */
    .next = &GlyTJA_EFBD87,
    .width = 7,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBD88Tiles,
};

const struct GlyphNew GlyTJA_E4BA89 = { /* 争 */
    .next = &GlyTJA_E4BBB2,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BA89Tiles,
};

const struct GlyphNew GlyTJA_E69DA5 = { /* 来 */
    .next = &GlyTJA_E6ACA0,
    .width = 11,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69DA5Tiles,
};

const struct GlyphNew GlyTJA_E6B1BA = { /* 決 */
    .next = &GlyTJA_E69DA5,
    .width = 11,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B1BATiles,
};

const struct GlyphNew GlyTJA_E6B4BB = { /* 活 */
    .next = &GlyTJA_E6B1BA,
    .width = 11,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B4BBTiles,
};

const struct GlyphNew GlyTJA_E587A6 = { /* 処 */
    .next = &GlyTJA_E59088,
    .width = 11,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E587A6Tiles,
};

const struct GlyphNew GlyTJA_E6AF8E = { /* 毎 */
    .next = &GlyTJA_E6B4BB,
    .width = 11,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6AF8ETiles,
};

const struct GlyphNew GlyTJA_E7B28B = { /* 粋 */
    .next = &GlyTJA_E7A9B6,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B28BTiles,
};

const struct GlyphNew GlyTJA_E383A9 = { /* ラ */
    .next = &GlyTJA_E383A8,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E383A9Tiles,
};

const struct GlyphNew GlyTJA_EFBD89 = { /* ｉ */
    .next = &GlyTJA_EFBD88,
    .width = 4,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBD89Tiles,
};

const struct GlyphNew GlyTJA_E5BFA0 = { /* 忠 */
    .next = &GlyTJA_E587A6,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BFA0Tiles,
};

const struct GlyphNew GlyTJA_E5889D = { /* 初 */
    .next = &GlyTJA_E5BFA0,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5889DTiles,
};

const struct GlyphNew GlyTJA_E8B2A0 = { /* 負 */
    .next = &GlyTJA_E88590,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B2A0Tiles,
};

const struct GlyphNew GlyTJA_E7B49A = { /* 級 */
    .next = &GlyTJA_E7B28B,
    .width = 12,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B49ATiles,
};

const struct GlyphNew GlyTJA_E383AA = { /* リ */
    .next = &GlyTJA_E383A9,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E383AATiles,
};

const struct GlyphNew GlyTJA_E68980 = { /* 所 */
    .next = &GlyTJA_E6AF8E,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68980Tiles,
};

const struct GlyphNew GlyTJA_E7828E = { /* 炎 */
    .next = &GlyTJA_E7B49A,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7828ETiles,
};

const struct GlyphNew GlyTJA_E79BB8 = { /* 相 */
    .next = &GlyTJA_E7828E,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79BB8Tiles,
};

const struct GlyphNew GlyTJA_E9A0BC = { /* 頼 */
    .next = &GlyTJA_E9A086,
    .width = 11,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9A0BCTiles,
};

const struct GlyphNew GlyTJA_E8A1B0 = { /* 衰 */
    .next = &GlyTJA_E8B2A0,
    .width = 11,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A1B0Tiles,
};

const struct GlyphNew GlyTJA_E887B3 = { /* 至 */
    .next = &GlyTJA_E8A1B0,
    .width = 11,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E887B3Tiles,
};

const struct GlyphNew GlyTJA_E68A95 = { /* 投 */
    .next = &GlyTJA_E68980,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68A95Tiles,
};

const struct GlyphNew GlyTJA_E383AB = { /* ル */
    .next = &GlyTJA_E383AA,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E383ABTiles,
};

const struct GlyphNew GlyTJA_EFBD8B = { /* ｋ */
    .next = &GlyTJA_EFBD89,
    .width = 7,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBD8BTiles,
};

const struct GlyphNew GlyTJA_E8A696 = { /* 視 */
    .next = &GlyTJA_E887B3,
    .width = 11,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A696Tiles,
};

const struct GlyphNew GlyTJA_E7B590 = { /* 結 */
    .next = &GlyTJA_E79BB8,
    .width = 11,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B590Tiles,
};

const struct GlyphNew GlyTJA_E8B5B4 = { /* 赴 */
    .next = &GlyTJA_E8A696,
    .width = 11,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B5B4Tiles,
};

const struct GlyphNew GlyTJA_E698BC = { /* 昼 */
    .next = &GlyTJA_E68A95,
    .width = 11,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E698BCTiles,
};

const struct GlyphNew GlyTJA_E5B995 = { /* 幕 */
    .next = &GlyTJA_E5889D,
    .width = 11,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B995Tiles,
};

const struct GlyphNew GlyTJA_E99BB7 = { /* 雷 */
    .next = &GlyTJA_E9A0BC,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99BB7Tiles,
};

const struct GlyphNew GlyTJA_E7B5A6 = { /* 給 */
    .next = &GlyTJA_E7B590,
    .width = 11,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B5A6Tiles,
};

const struct GlyphNew GlyTJA_E8B1AA = { /* 豪 */
    .next = &GlyTJA_E8B5B4,
    .width = 11,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B1AATiles,
};

const struct GlyphNew GlyTJA_E98182 = { /* 遂 */
    .next = &GlyTJA_E99BB7,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E98182Tiles,
};

const struct GlyphNew GlyTJA_E383AC = { /* レ */
    .next = &GlyTJA_E383AB,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E383ACTiles,
};

const struct GlyphNew GlyTJA_EFBD8C = { /* ｌ */
    .next = &GlyTJA_EFBD8B,
    .width = 4,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBD8CTiles,
};

const struct GlyphNew GlyTJA_E69DB1 = { /* 東 */
    .next = &GlyTJA_E698BC,
    .width = 11,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69DB1Tiles,
};

const struct GlyphNew GlyTJA_E8A180 = { /* 血 */
    .next = &GlyTJA_E8B1AA,
    .width = 11,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A180Tiles,
};

const struct GlyphNew GlyTJA_E4BCAF = { /* 伯 */
    .next = &GlyTJA_E4BA89,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BCAFTiles,
};

const struct GlyphNew GlyTJA_E697A7 = { /* 旧 */
    .next = &GlyTJA_E69DB1,
    .width = 11,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E697A7Tiles,
};

const struct GlyphNew GlyTJA_E78599 = { /* 煙 */
    .next = &GlyTJA_E7B5A6,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E78599Tiles,
};

const struct GlyphNew GlyTJA_E383AD = { /* ロ */
    .next = &GlyTJA_E383AC,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E383ADTiles,
};

const struct GlyphNew GlyTJA_EFBD8D = { /* ｍ */
    .next = &GlyTJA_EFBD8C,
    .width = 9,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBD8DTiles,
};

const struct GlyphNew GlyTJA_E6B3A8 = { /* 注 */
    .next = &GlyTJA_E697A7,
    .width = 11,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B3A8Tiles,
};

const struct GlyphNew GlyTJA_E7B5A1 = { /* 絡 */
    .next = &GlyTJA_E78599,
    .width = 11,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B5A1Tiles,
};

const struct GlyphNew GlyTJA_E7B78F = { /* 総 */
    .next = &GlyTJA_E7B5A1,
    .width = 11,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B78FTiles,
};

const struct GlyphNew GlyTJA_E8A9A9 = { /* 詩 */
    .next = &GlyTJA_E8A180,
    .width = 12,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A9A9Tiles,
};

const struct GlyphNew GlyTJA_E8BD84 = { /* 轄 */
    .next = &GlyTJA_E8A9A9,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8BD84Tiles,
};

const struct GlyphNew GlyTJA_E8A8A3 = { /* 訣 */
    .next = &GlyTJA_E8BD84,
    .width = 11,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A8A3Tiles,
};

const struct GlyphNew GlyTJA_EFBD8E = { /* ｎ */
    .next = &GlyTJA_EFBD8D,
    .width = 7,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBD8ETiles,
};

const struct GlyphNew GlyTJA_E69C88 = { /* 月 */
    .next = &GlyTJA_E6B3A8,
    .width = 11,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69C88Tiles,
};

const struct GlyphNew GlyTJA_E58EBB = { /* 去 */
    .next = &GlyTJA_E5B995,
    .width = 11,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58EBBTiles,
};

const struct GlyphNew GlyTJA_E890BD = { /* 落 */
    .next = &GlyTJA_E8A8A3,
    .width = 11,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E890BDTiles,
};

const struct GlyphNew GlyTJA_E4BEAE = { /* 侮 */
    .next = &GlyTJA_E4BCAF,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BEAETiles,
};

const struct GlyphNew GlyTJA_E8A9A6 = { /* 試 */
    .next = &GlyTJA_E890BD,
    .width = 11,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A9A6Tiles,
};

const struct GlyphNew GlyTJA_E899AB = { /* 虫 */
    .next = &GlyTJA_E8A9A6,
    .width = 10,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E899ABTiles,
};

const struct GlyphNew GlyTJA_E383AF = { /* ワ */
    .next = &GlyTJA_E383AD,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E383AFTiles,
};

const struct GlyphNew GlyTJA_EFBD8F = { /* ｏ */
    .next = &GlyTJA_EFBD8E,
    .width = 7,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBD8FTiles,
};

const struct GlyphNew GlyTJA_E7B792 = { /* 緒 */
    .next = &GlyTJA_E7B78F,
    .width = 11,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B792Tiles,
};

const struct GlyphNew GlyTJA_E588BB = { /* 刻 */
    .next = &GlyTJA_E58EBB,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E588BBTiles,
};

const struct GlyphNew GlyTJA_E5B185 = { /* 居 */
    .next = &GlyTJA_E588BB,
    .width = 11,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B185Tiles,
};

const struct GlyphNew GlyTJA_E68B8D = { /* 拍 */
    .next = &GlyTJA_E69C88,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68B8DTiles,
};

const struct GlyphNew GlyTJA_E4BBB6 = { /* 件 */
    .next = &GlyTJA_E4BEAE,
    .width = 11,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BBB6Tiles,
};

const struct GlyphNew GlyTJA_E7B881 = { /* 縁 */
    .next = &GlyTJA_E7B792,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B881Tiles,
};

const struct GlyphNew GlyTJA_EFBD90 = { /* ｐ */
    .next = &GlyTJA_EFBD8F,
    .width = 7,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBD90Tiles,
};

const struct GlyphNew GlyTJA_E88D89 = { /* 草 */
    .next = &GlyTJA_E899AB,
    .width = 11,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E88D89Tiles,
};

const struct GlyphNew GlyTJA_E6ADA6 = { /* 武 */
    .next = &GlyTJA_E68B8D,
    .width = 11,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6ADA6Tiles,
};

const struct GlyphNew GlyTJA_E79B97 = { /* 盗 */
    .next = &GlyTJA_E7B881,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79B97Tiles,
};

const struct GlyphNew GlyTJA_E4B9B1 = { /* 乱 */
    .next = &GlyTJA_E4BBB6,
    .width = 11,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4B9B1Tiles,
};

const struct GlyphNew GlyTJA_E5B7A8 = { /* 巨 */
    .next = &GlyTJA_E5B185,
    .width = 11,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B7A8Tiles,
};

const struct GlyphNew GlyTJA_E5918A = { /* 告 */
    .next = &GlyTJA_E5B7A8,
    .width = 11,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5918ATiles,
};

const struct GlyphNew GlyTJA_E69BB8 = { /* 書 */
    .next = &GlyTJA_E6ADA6,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69BB8Tiles,
};

const struct GlyphNew GlyTJA_E59BBD = { /* 国 */
    .next = &GlyTJA_E5918A,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59BBDTiles,
};

const struct GlyphNew GlyTJA_E8889E = { /* 舞 */
    .next = &GlyTJA_E88D89,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8889ETiles,
};

const struct GlyphNew GlyTJA_E68B92 = { /* 拒 */
    .next = &GlyTJA_E69BB8,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68B92Tiles,
};

const struct GlyphNew GlyTJA_E8B387 = { /* 資 */
    .next = &GlyTJA_E8889E,
    .width = 11,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B387Tiles,
};

const struct GlyphNew GlyTJA_EFBD92 = { /* ｒ */
    .next = &GlyTJA_EFBD90,
    .width = 7,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBD92Tiles,
};

const struct GlyphNew GlyTJA_E799BD = { /* 白 */
    .next = &GlyTJA_E79B97,
    .width = 10,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E799BDTiles,
};

const struct GlyphNew GlyTJA_E68BA0 = { /* 拠 */
    .next = &GlyTJA_E68B92,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68BA0Tiles,
};

const struct GlyphNew GlyTJA_E5B590 = { /* 嵐 */
    .next = &GlyTJA_E59BBD,
    .width = 11,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B590Tiles,
};

const struct GlyphNew GlyTJA_E581A5 = { /* 健 */
    .next = &GlyTJA_E5B590,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E581A5Tiles,
};

const struct GlyphNew GlyTJA_E383B3 = { /* ン */
    .next = &GlyTJA_E383AF,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E383B3Tiles,
};

const struct GlyphNew GlyTJA_EFBD93 = { /* ｓ */
    .next = &GlyTJA_EFBD92,
    .width = 7,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBD93Tiles,
};

const struct GlyphNew GlyTJA_E981A0 = { /* 遠 */
    .next = &GlyTJA_E98182,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E981A0Tiles,
};

const struct GlyphNew GlyTJA_E985B7 = { /* 酷 */
    .next = &GlyTJA_E981A0,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E985B7Tiles,
};

const struct GlyphNew GlyTJA_E68C99 = { /* 挙 */
    .next = &GlyTJA_E68BA0,
    .width = 11,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68C99Tiles,
};

const struct GlyphNew GlyTJA_E9A790 = { /* 駐 */
    .next = &GlyTJA_E985B7,
    .width = 11,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9A790Tiles,
};

const struct GlyphNew GlyTJA_E383B4 = { /* ヴ */
    .next = &GlyTJA_E383B3,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E383B4Tiles,
};

const struct GlyphNew GlyTJA_EFBD94 = { /* ｔ */
    .next = &GlyTJA_EFBD93,
    .width = 6,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBD94Tiles,
};

const struct GlyphNew GlyTJA_E695B0 = { /* 数 */
    .next = &GlyTJA_E68C99,
    .width = 11,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E695B0Tiles,
};

const struct GlyphNew GlyTJA_E983A8 = { /* 部 */
    .next = &GlyTJA_E9A790,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E983A8Tiles,
};

const struct GlyphNew GlyTJA_E8ABB8 = { /* 諸 */
    .next = &GlyTJA_E8B387,
    .width = 10,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8ABB8Tiles,
};

const struct GlyphNew GlyTJA_EFBD95 = { /* ｕ */
    .next = &GlyTJA_EFBD94,
    .width = 7,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBD95Tiles,
};

const struct GlyphNew GlyTJA_E9BB92 = { /* 黒 */
    .next = &GlyTJA_E983A8,
    .width = 11,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9BB92Tiles,
};

const struct GlyphNew GlyTJA_E589A3 = { /* 剣 */
    .next = &GlyTJA_E581A5,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E589A3Tiles,
};

const struct GlyphNew GlyTJA_E58AA9 = { /* 助 */
    .next = &GlyTJA_E589A3,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58AA9Tiles,
};

const struct GlyphNew GlyTJA_E8A385 = { /* 装 */
    .next = &GlyTJA_E8ABB8,
    .width = 11,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A385Tiles,
};

const struct GlyphNew GlyTJA_E5B081 = { /* 封 */
    .next = &GlyTJA_E58AA9,
    .width = 11,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B081Tiles,
};

const struct GlyphNew GlyTJA_E6ADAF = { /* 歯 */
    .next = &GlyTJA_E695B0,
    .width = 11,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6ADAFTiles,
};

const struct GlyphNew GlyTJA_EFBD96 = { /* ｖ */
    .next = &GlyTJA_EFBD95,
    .width = 7,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBD96Tiles,
};

const struct GlyphNew GlyTJA_E69CAB = { /* 末 */
    .next = &GlyTJA_E6ADAF,
    .width = 11,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69CABTiles,
};

const struct GlyphNew GlyTJA_E4BA8B = { /* 事 */
    .next = &GlyTJA_E4B9B1,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BA8BTiles,
};

const struct GlyphNew GlyTJA_E5BD93 = { /* 当 */
    .next = &GlyTJA_E5B081,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BD93Tiles,
};

const struct GlyphNew GlyTJA_E78D84 = { /* 獄 */
    .next = &GlyTJA_E799BD,
    .width = 11,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E78D84Tiles,
};

const struct GlyphNew GlyTJA_E8A8B1 = { /* 許 */
    .next = &GlyTJA_E8A385,
    .width = 11,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A8B1Tiles,
};

const struct GlyphNew GlyTJA_E8B5B0 = { /* 走 */
    .next = &GlyTJA_E8A8B1,
    .width = 11,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B5B0Tiles,
};

const struct GlyphNew GlyTJA_E58F99 = { /* 叙 */
    .next = &GlyTJA_E5BD93,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58F99Tiles,
};

const struct GlyphNew GlyTJA_EFBD97 = { /* ｗ */
    .next = &GlyTJA_EFBD96,
    .width = 9,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBD97Tiles,
};

const struct GlyphNew GlyTJA_E5A5B3 = { /* 女 */
    .next = &GlyTJA_E58F99,
    .width = 11,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A5B3Tiles,
};

const struct GlyphNew GlyTJA_E9A2A8 = { /* 風 */
    .next = &GlyTJA_E9BB92,
    .width = 11,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9A2A8Tiles,
};

const struct GlyphNew GlyTJA_E8BFAB = { /* 迫 */
    .next = &GlyTJA_E8B5B0,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8BFABTiles,
};

const struct GlyphNew GlyTJA_E98081 = { /* 送 */
    .next = &GlyTJA_E9A2A8,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E98081Tiles,
};

const struct GlyphNew GlyTJA_E8B79D = { /* 距 */
    .next = &GlyTJA_E8BFAB,
    .width = 11,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B79DTiles,
};

const struct GlyphNew GlyTJA_E8A6A7 = { /* 覧 */
    .next = &GlyTJA_E8B79D,
    .width = 11,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A6A7Tiles,
};

const struct GlyphNew GlyTJA_E4BCBC = { /* 似 */
    .next = &GlyTJA_E4BA8B,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BCBCTiles,
};

const struct GlyphNew GlyTJA_EFBD98 = { /* ｘ */
    .next = &GlyTJA_EFBD97,
    .width = 7,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBD98Tiles,
};

const struct GlyphNew GlyTJA_E588A9 = { /* 利 */
    .next = &GlyTJA_E5A5B3,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E588A9Tiles,
};

const struct GlyphNew GlyTJA_E885B0 = { /* 腰 */
    .next = &GlyTJA_E8A6A7,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E885B0Tiles,
};

const struct GlyphNew GlyTJA_E5BA8F = { /* 序 */
    .next = &GlyTJA_E588A9,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BA8FTiles,
};

const struct GlyphNew GlyTJA_E6B19A = { /* 汚 */
    .next = &GlyTJA_E69CAB,
    .width = 11,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B19ATiles,
};

const struct GlyphNew GlyTJA_E5A085 = { /* 堅 */
    .next = &GlyTJA_E5BA8F,
    .width = 11,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A085Tiles,
};

const struct GlyphNew GlyTJA_EFBD99 = { /* ｙ */
    .next = &GlyTJA_EFBD98,
    .width = 7,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBD99Tiles,
};

const struct GlyphNew GlyTJA_E6BCA0 = { /* 漠 */
    .next = &GlyTJA_E6B19A,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6BCA0Tiles,
};

const struct GlyphNew GlyTJA_E58590 = { /* 児 */
    .next = &GlyTJA_E5A085,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58590Tiles,
};

const struct GlyphNew GlyTJA_E8B2AF = { /* 貯 */
    .next = &GlyTJA_E885B0,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B2AFTiles,
};

const struct GlyphNew GlyTJA_E6BC81 = { /* 漁 */
    .next = &GlyTJA_E6BCA0,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6BC81Tiles,
};

const struct GlyphNew GlyTJA_E7AD89 = { /* 等 */
    .next = &GlyTJA_E78D84,
    .width = 11,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7AD89Tiles,
};

const struct GlyphNew GlyTJA_E5908F = { /* 吏 */
    .next = &GlyTJA_E58590,
    .width = 11,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5908FTiles,
};

const struct GlyphNew GlyTJA_E5AB8C = { /* 嫌 */
    .next = &GlyTJA_E5908F,
    .width = 12,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AB8CTiles,
};

const struct GlyphNew GlyTJA_E5BBBA = { /* 建 */
    .next = &GlyTJA_E5AB8C,
    .width = 11,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BBBATiles,
};

const struct GlyphNew GlyTJA_E4BC8F = { /* 伏 */
    .next = &GlyTJA_E4BCBC,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BC8FTiles,
};

const struct GlyphNew GlyTJA_E7AD94 = { /* 答 */
    .next = &GlyTJA_E7AD89,
    .width = 11,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7AD94Tiles,
};

const struct GlyphNew GlyTJA_E5AD97 = { /* 字 */
    .next = &GlyTJA_E5BBBA,
    .width = 11,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AD97Tiles,
};

const struct GlyphNew GlyTJA_E4B881 = { /* 丁 */
    .next = &GlyTJA_E4BC8F,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4B881Tiles,
};

const struct GlyphNew GlyTJA_E2978B = { /* ○ */
    .next = &GlyTJA_E291A6,
    .width = 1,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E2978BTiles,
};

const struct GlyphNew GlyTJA_E5A4AE = { /* 央 */
    .next = &GlyTJA_E5AD97,
    .width = 11,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A4AETiles,
};

const struct GlyphNew GlyTJA_E5BEA9 = { /* 復 */
    .next = &GlyTJA_E5A4AE,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BEA9Tiles,
};

const struct GlyphNew GlyTJA_E5838F = { /* 像 */
    .next = &GlyTJA_E5BEA9,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5838FTiles,
};

const struct GlyphNew GlyTJA_E4B887 = { /* 万 */
    .next = &GlyTJA_E4B881,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4B887Tiles,
};

const struct GlyphNew GlyTJA_E5A5A5 = { /* 奥 */
    .next = &GlyTJA_E5838F,
    .width = 11,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A5A5Tiles,
};

const struct GlyphNew GlyTJA_E68588 = { /* 慈 */
    .next = &GlyTJA_E6BC81,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68588Tiles,
};

const struct GlyphNew GlyTJA_E687B8 = { /* 懸 */
    .next = &GlyTJA_E68588,
    .width = 11,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E687B8Tiles,
};

const struct GlyphNew GlyTJA_E999A4 = { /* 除 */
    .next = &GlyTJA_E98081,
    .width = 11,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E999A4Tiles,
};

const struct GlyphNew GlyTJA_E9AAA8 = { /* 骨 */
    .next = &GlyTJA_E999A4,
    .width = 11,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9AAA8Tiles,
};

const struct GlyphNew GlyTJA_E68C81 = { /* 持 */
    .next = &GlyTJA_E687B8,
    .width = 11,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68C81Tiles,
};

const struct GlyphNew GlyTJA_E7B5B1 = { /* 統 */
    .next = &GlyTJA_E7AD94,
    .width = 11,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B5B1Tiles,
};

const struct GlyphNew GlyTJA_E79086 = { /* 理 */
    .next = &GlyTJA_E7B5B1,
    .width = 11,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79086Tiles,
};

const struct GlyphNew GlyTJA_E5A297 = { /* 増 */
    .next = &GlyTJA_E5A5A5,
    .width = 11,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A297Tiles,
};

const struct GlyphNew GlyTJA_E5B985 = { /* 幅 */
    .next = &GlyTJA_E5A297,
    .width = 11,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B985Tiles,
};

const struct GlyphNew GlyTJA_E582B7 = { /* 傷 */
    .next = &GlyTJA_E5B985,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E582B7Tiles,
};

const struct GlyphNew GlyTJA_E685A2 = { /* 慢 */
    .next = &GlyTJA_E68C81,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E685A2Tiles,
};

const struct GlyphNew GlyTJA_E8BEBC = { /* 込 */
    .next = &GlyTJA_E8B2AF,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8BEBCTiles,
};

const struct GlyphNew GlyTJA_E69982 = { /* 時 */
    .next = &GlyTJA_E685A2,
    .width = 11,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69982Tiles,
};

const struct GlyphNew GlyTJA_E5849F = { /* 償 */
    .next = &GlyTJA_E582B7,
    .width = 11,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5849FTiles,
};

const struct GlyphNew GlyTJA_E69C8D = { /* 服 */
    .next = &GlyTJA_E69982,
    .width = 11,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69C8DTiles,
};

const struct GlyphNew GlyTJA_E5BF9C = { /* 応 */
    .next = &GlyTJA_E5849F,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BF9CTiles,
};

const struct GlyphNew GlyTJA_E588B0 = { /* 到 */
    .next = &GlyTJA_E5BF9C,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E588B0Tiles,
};

const struct GlyphNew GlyTJA_E6BA80 = { /* 満 */
    .next = &GlyTJA_E69C8D,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6BA80Tiles,
};

const struct GlyphNew GlyTJA_E6868E = { /* 憎 */
    .next = &GlyTJA_E6BA80,
    .width = 11,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6868ETiles,
};

const struct GlyphNew GlyTJA_E5AFB5 = { /* 寵 */
    .next = &GlyTJA_E588B0,
    .width = 12,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AFB5Tiles,
};

const struct GlyphNew GlyTJA_E38181 = { /* ぁ */
    .next = &GlyTJA_E383B4,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38181Tiles,
};

const struct GlyphNew GlyTJA_E58B9D = { /* 勝 */
    .next = &GlyTJA_E5AFB5,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58B9DTiles,
};

const struct GlyphNew GlyTJA_E7A68F = { /* 福 */
    .next = &GlyTJA_E79086,
    .width = 11,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A68FTiles,
};

const struct GlyphNew GlyTJA_E4BE9B = { /* 供 */
    .next = &GlyTJA_E4B887,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BE9BTiles,
};

const struct GlyphNew GlyTJA_E6ACA1 = { /* 次 */
    .next = &GlyTJA_E6868E,
    .width = 11,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6ACA1Tiles,
};

const struct GlyphNew GlyTJA_E68ABC = { /* 押 */
    .next = &GlyTJA_E6ACA1,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68ABCTiles,
};

const struct GlyphNew GlyTJA_E38182 = { /* あ */
    .next = &GlyTJA_E38181,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38182Tiles,
};

const struct GlyphNew GlyTJA_E7AEB1 = { /* 箱 */
    .next = &GlyTJA_E7A68F,
    .width = 11,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7AEB1Tiles,
};

const struct GlyphNew GlyTJA_E9A083 = { /* 頃 */
    .next = &GlyTJA_E9AAA8,
    .width = 11,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9A083Tiles,
};

const struct GlyphNew GlyTJA_E6A8A9 = { /* 権 */
    .next = &GlyTJA_E68ABC,
    .width = 11,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6A8A9Tiles,
};

const struct GlyphNew GlyTJA_E8A38F = { /* 裏 */
    .next = &GlyTJA_E8BEBC,
    .width = 11,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A38FTiles,
};

const struct GlyphNew GlyTJA_E885B9 = { /* 腹 */
    .next = &GlyTJA_E8A38F,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E885B9Tiles,
};

const struct GlyphNew GlyTJA_E58CA0 = { /* 匠 */
    .next = &GlyTJA_E58B9D,
    .width = 11,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58CA0Tiles,
};

const struct GlyphNew GlyTJA_E38183 = { /* ぃ */
    .next = &GlyTJA_E38182,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38183Tiles,
};

const struct GlyphNew GlyTJA_E4BB8A = { /* 今 */
    .next = &GlyTJA_E4BE9B,
    .width = 11,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BB8ATiles,
};

const struct GlyphNew GlyTJA_E6B2BB = { /* 治 */
    .next = &GlyTJA_E6A8A9,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B2BBTiles,
};

const struct GlyphNew GlyTJA_E591B3 = { /* 味 */
    .next = &GlyTJA_E58CA0,
    .width = 11,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E591B3Tiles,
};

const struct GlyphNew GlyTJA_E8A487 = { /* 複 */
    .next = &GlyTJA_E885B9,
    .width = 11,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A487Tiles,
};

const struct GlyphNew GlyTJA_E5AFB8 = { /* 寸 */
    .next = &GlyTJA_E591B3,
    .width = 11,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AFB8Tiles,
};

const struct GlyphNew GlyTJA_E6A8AA = { /* 横 */
    .next = &GlyTJA_E6B2BB,
    .width = 11,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6A8AATiles,
};

const struct GlyphNew GlyTJA_E38184 = { /* い */
    .next = &GlyTJA_E38183,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38184Tiles,
};

const struct GlyphNew GlyTJA_E8A88E = { /* 討 */
    .next = &GlyTJA_E8A487,
    .width = 11,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A88ETiles,
};

const struct GlyphNew GlyTJA_E4B896 = { /* 世 */
    .next = &GlyTJA_E4BB8A,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4B896Tiles,
};

const struct GlyphNew GlyTJA_E69CAA = { /* 未 */
    .next = &GlyTJA_E6A8AA,
    .width = 11,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69CAATiles,
};

const struct GlyphNew GlyTJA_E5BC94 = { /* 弔 */
    .next = &GlyTJA_E5AFB8,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BC94Tiles,
};

const struct GlyphNew GlyTJA_E980A0 = { /* 造 */
    .next = &GlyTJA_E9A083,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E980A0Tiles,
};

const struct GlyphNew GlyTJA_E78AAC = { /* 犬 */
    .next = &GlyTJA_E7AEB1,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E78AACTiles,
};

const struct GlyphNew GlyTJA_E59BB0 = { /* 困 */
    .next = &GlyTJA_E5BC94,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59BB0Tiles,
};

const struct GlyphNew GlyTJA_E9878C = { /* 里 */
    .next = &GlyTJA_E980A0,
    .width = 11,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9878CTiles,
};

const struct GlyphNew GlyTJA_E58FAC = { /* 召 */
    .next = &GlyTJA_E59BB0,
    .width = 10,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58FACTiles,
};

const struct GlyphNew GlyTJA_E38185 = { /* ぅ */
    .next = &GlyTJA_E38184,
    .width = 7,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38185Tiles,
};

const struct GlyphNew GlyTJA_E99BA2 = { /* 離 */
    .next = &GlyTJA_E9878C,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99BA2Tiles,
};

const struct GlyphNew GlyTJA_E59380 = { /* 哀 */
    .next = &GlyTJA_E58FAC,
    .width = 11,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59380Tiles,
};

const struct GlyphNew GlyTJA_E5BCB5 = { /* 張 */
    .next = &GlyTJA_E59380,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BCB5Tiles,
};

const struct GlyphNew GlyTJA_E9AD85 = { /* 魅 */
    .next = &GlyTJA_E99BA2,
    .width = 11,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9AD85Tiles,
};

const struct GlyphNew GlyTJA_E7ABB6 = { /* 競 */
    .next = &GlyTJA_E78AAC,
    .width = 11,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7ABB6Tiles,
};

const struct GlyphNew GlyTJA_E38186 = { /* う */
    .next = &GlyTJA_E38185,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38186Tiles,
};

const struct GlyphNew GlyTJA_E78E8B = { /* 王 */
    .next = &GlyTJA_E7ABB6,
    .width = 11,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E78E8BTiles,
};

const struct GlyphNew GlyTJA_E6849B = { /* 愛 */
    .next = &GlyTJA_E69CAA,
    .width = 11,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6849BTiles,
};

const struct GlyphNew GlyTJA_E999B8 = { /* 陸 */
    .next = &GlyTJA_E9AD85,
    .width = 11,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E999B8Tiles,
};

const struct GlyphNew GlyTJA_E59586 = { /* 商 */
    .next = &GlyTJA_E5BCB5,
    .width = 10,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59586Tiles,
};

const struct GlyphNew GlyTJA_E585B1 = { /* 共 */
    .next = &GlyTJA_E59586,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E585B1Tiles,
};

const struct GlyphNew GlyTJA_E581B4 = { /* 側 */
    .next = &GlyTJA_E585B1,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E581B4Tiles,
};

const struct GlyphNew GlyTJA_E7A094 = { /* 研 */
    .next = &GlyTJA_E78E8B,
    .width = 11,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A094Tiles,
};

const struct GlyphNew GlyTJA_E38187 = { /* ぇ */
    .next = &GlyTJA_E38186,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38187Tiles,
};

const struct GlyphNew GlyTJA_E5A99A = { /* 婚 */
    .next = &GlyTJA_E581B4,
    .width = 11,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A99ATiles,
};

const struct GlyphNew GlyTJA_E68995 = { /* 払 */
    .next = &GlyTJA_E6849B,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68995Tiles,
};

const struct GlyphNew GlyTJA_E594B1 = { /* 唱 */
    .next = &GlyTJA_E5A99A,
    .width = 11,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E594B1Tiles,
};

const struct GlyphNew GlyTJA_E5BEB4 = { /* 徴 */
    .next = &GlyTJA_E594B1,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BEB4Tiles,
};

const struct GlyphNew GlyTJA_E698AF = { /* 是 */
    .next = &GlyTJA_E68995,
    .width = 11,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E698AFTiles,
};

const struct GlyphNew GlyTJA_E5BE8B = { /* 律 */
    .next = &GlyTJA_E5BEB4,
    .width = 12,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BE8BTiles,
};

const struct GlyphNew GlyTJA_E8B88F = { /* 踏 */
    .next = &GlyTJA_E8A88E,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B88FTiles,
};

const struct GlyphNew GlyTJA_E586A0 = { /* 冠 */
    .next = &GlyTJA_E5BE8B,
    .width = 11,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E586A0Tiles,
};

const struct GlyphNew GlyTJA_E587B6 = { /* 凶 */
    .next = &GlyTJA_E586A0,
    .width = 11,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E587B6Tiles,
};

const struct GlyphNew GlyTJA_E38188 = { /* え */
    .next = &GlyTJA_E38187,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38188Tiles,
};

const struct GlyphNew GlyTJA_E78E87 = { /* 率 */
    .next = &GlyTJA_E7A094,
    .width = 11,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E78E87Tiles,
};

const struct GlyphNew GlyTJA_E7A4BA = { /* 示 */
    .next = &GlyTJA_E78E87,
    .width = 11,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A4BATiles,
};

const struct GlyphNew GlyTJA_E58D94 = { /* 協 */
    .next = &GlyTJA_E587B6,
    .width = 10,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58D94Tiles,
};

const struct GlyphNew GlyTJA_E98083 = { /* 逃 */
    .next = &GlyTJA_E999B8,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E98083Tiles,
};

const struct GlyphNew GlyTJA_E5AF92 = { /* 寒 */
    .next = &GlyTJA_E58D94,
    .width = 11,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AF92Tiles,
};

const struct GlyphNew GlyTJA_E681A8 = { /* 恨 */
    .next = &GlyTJA_E698AF,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E681A8Tiles,
};

const struct GlyphNew GlyTJA_E58DB3 = { /* 即 */
    .next = &GlyTJA_E5AF92,
    .width = 11,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58DB3Tiles,
};

const struct GlyphNew GlyTJA_E38189 = { /* ぉ */
    .next = &GlyTJA_E38188,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38189Tiles,
};

const struct GlyphNew GlyTJA_E68C91 = { /* 挑 */
    .next = &GlyTJA_E681A8,
    .width = 11,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68C91Tiles,
};

const struct GlyphNew GlyTJA_E7AB8B = { /* 立 */
    .next = &GlyTJA_E7A4BA,
    .width = 11,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7AB8BTiles,
};

const struct GlyphNew GlyTJA_E588B6 = { /* 制 */
    .next = &GlyTJA_E58DB3,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E588B6Tiles,
};

const struct GlyphNew GlyTJA_E5AF86 = { /* 密 */
    .next = &GlyTJA_E588B6,
    .width = 11,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AF86Tiles,
};

const struct GlyphNew GlyTJA_E8828C = { /* 肌 */
    .next = &GlyTJA_E8B88F,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8828CTiles,
};

const struct GlyphNew GlyTJA_E681AF = { /* 息 */
    .next = &GlyTJA_E68C91,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E681AFTiles,
};

const struct GlyphNew GlyTJA_E5A5A8 = { /* 奨 */
    .next = &GlyTJA_E5AF86,
    .width = 11,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A5A8Tiles,
};

const struct GlyphNew GlyTJA_E3818A = { /* お */
    .next = &GlyTJA_E38189,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E3818ATiles,
};

const struct GlyphNew GlyTJA_E789A9 = { /* 物 */
    .next = &GlyTJA_E7AB8B,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E789A9Tiles,
};

const struct GlyphNew GlyTJA_E58DBF = { /* 卿 */
    .next = &GlyTJA_E5A5A8,
    .width = 12,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58DBFTiles,
};

const struct GlyphNew GlyTJA_E880B3 = { /* 耳 */
    .next = &GlyTJA_E8828C,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E880B3Tiles,
};

const struct GlyphNew GlyTJA_E58BA2 = { /* 勢 */
    .next = &GlyTJA_E58DBF,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58BA2Tiles,
};

const struct GlyphNew GlyTJA_E882A9 = { /* 肩 */
    .next = &GlyTJA_E880B3,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E882A9Tiles,
};

const struct GlyphNew GlyTJA_E79591 = { /* 畑 */
    .next = &GlyTJA_E789A9,
    .width = 11,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79591Tiles,
};

const struct GlyphNew GlyTJA_E3818B = { /* か */
    .next = &GlyTJA_E3818A,
    .width = 10,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E3818BTiles,
};

const struct GlyphNew GlyTJA_E887AA = { /* 自 */
    .next = &GlyTJA_E882A9,
    .width = 10,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E887AATiles,
};

const struct GlyphNew GlyTJA_E7BDA0 = { /* 罠 */
    .next = &GlyTJA_E79591,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7BDA0Tiles,
};

const struct GlyphNew GlyTJA_E8A68B = { /* 見 */
    .next = &GlyTJA_E887AA,
    .width = 11,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A68BTiles,
};

const struct GlyphNew GlyTJA_E9BB84 = { /* 黄 */
    .next = &GlyTJA_E98083,
    .width = 11,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9BB84Tiles,
};

const struct GlyphNew GlyTJA_E69D9F = { /* 束 */
    .next = &GlyTJA_E681AF,
    .width = 11,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69D9FTiles,
};

const struct GlyphNew GlyTJA_E69C9D = { /* 朝 */
    .next = &GlyTJA_E69D9F,
    .width = 11,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69C9DTiles,
};

const struct GlyphNew GlyTJA_E58FAB = { /* 叫 */
    .next = &GlyTJA_E58BA2,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58FABTiles,
};

const struct GlyphNew GlyTJA_E3818C = { /* が */
    .next = &GlyTJA_E3818B,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E3818CTiles,
};

const struct GlyphNew GlyTJA_E58886 = { /* 分 */
    .next = &GlyTJA_E58FAB,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58886Tiles,
};

const struct GlyphNew GlyTJA_E5BE81 = { /* 征 */
    .next = &GlyTJA_E58886,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BE81Tiles,
};

const struct GlyphNew GlyTJA_E795A5 = { /* 略 */
    .next = &GlyTJA_E7BDA0,
    .width = 11,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E795A5Tiles,
};

const struct GlyphNew GlyTJA_E9A0AD = { /* 頭 */
    .next = &GlyTJA_E9BB84,
    .width = 11,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9A0ADTiles,
};

const struct GlyphNew GlyTJA_E5B7BB = { /* 巻 */
    .next = &GlyTJA_E5BE81,
    .width = 11,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B7BBTiles,
};

const struct GlyphNew GlyTJA_E6A0B9 = { /* 根 */
    .next = &GlyTJA_E69C9D,
    .width = 11,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6A0B9Tiles,
};

const struct GlyphNew GlyTJA_E585AB = { /* 八 */
    .next = &GlyTJA_E5B7BB,
    .width = 12,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E585ABTiles,
};

const struct GlyphNew GlyTJA_E6BDAE = { /* 潮 */
    .next = &GlyTJA_E6A0B9,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6BDAETiles,
};

const struct GlyphNew GlyTJA_E3818D = { /* き */
    .next = &GlyTJA_E3818C,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E3818DTiles,
};

const struct GlyphNew GlyTJA_E5A283 = { /* 境 */
    .next = &GlyTJA_E585AB,
    .width = 12,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A283Tiles,
};

const struct GlyphNew GlyTJA_E682AA = { /* 悪 */
    .next = &GlyTJA_E6BDAE,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E682AATiles,
};

const struct GlyphNew GlyTJA_E5B086 = { /* 将 */
    .next = &GlyTJA_E5A283,
    .width = 11,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B086Tiles,
};

const struct GlyphNew GlyTJA_E680A7 = { /* 性 */
    .next = &GlyTJA_E682AA,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E680A7Tiles,
};

const struct GlyphNew GlyTJA_E8B3A2 = { /* 賢 */
    .next = &GlyTJA_E8A68B,
    .width = 10,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B3A2Tiles,
};

const struct GlyphNew GlyTJA_E8B6B3 = { /* 足 */
    .next = &GlyTJA_E8B3A2,
    .width = 11,
    .utf_byte_2 = 0xb6,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B6B3Tiles,
};

const struct GlyphNew GlyTJA_E8BE9E = { /* 辞 */
    .next = &GlyTJA_E8B6B3,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8BE9ETiles,
};

const struct GlyphNew GlyTJA_E3818E = { /* ぎ */
    .next = &GlyTJA_E3818D,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E3818ETiles,
};

const struct GlyphNew GlyTJA_E99798 = { /* 闘 */
    .next = &GlyTJA_E9A0AD,
    .width = 11,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99798Tiles,
};

const struct GlyphNew GlyTJA_E9809F = { /* 速 */
    .next = &GlyTJA_E99798,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9809FTiles,
};

const struct GlyphNew GlyTJA_E5B08F = { /* 小 */
    .next = &GlyTJA_E5B086,
    .width = 11,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B08FTiles,
};

const struct GlyphNew GlyTJA_E794BA = { /* 町 */
    .next = &GlyTJA_E795A5,
    .width = 11,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E794BATiles,
};

const struct GlyphNew GlyTJA_E68890 = { /* 成 */
    .next = &GlyTJA_E680A7,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68890Tiles,
};

const struct GlyphNew GlyTJA_E88488 = { /* 脈 */
    .next = &GlyTJA_E8BE9E,
    .width = 11,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E88488Tiles,
};

const struct GlyphNew GlyTJA_E6B581 = { /* 流 */
    .next = &GlyTJA_E68890,
    .width = 11,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B581Tiles,
};

const struct GlyphNew GlyTJA_E6B7B7 = { /* 混 */
    .next = &GlyTJA_E6B581,
    .width = 11,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B7B7Tiles,
};

const struct GlyphNew GlyTJA_E68FA1 = { /* 握 */
    .next = &GlyTJA_E6B7B7,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68FA1Tiles,
};

const struct GlyphNew GlyTJA_E3818F = { /* く */
    .next = &GlyTJA_E3818E,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E3818FTiles,
};

const struct GlyphNew GlyTJA_E5BCB7 = { /* 強 */
    .next = &GlyTJA_E5B08F,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BCB7Tiles,
};

const struct GlyphNew GlyTJA_E799BA = { /* 発 */
    .next = &GlyTJA_E794BA,
    .width = 11,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E799BATiles,
};

const struct GlyphNew GlyTJA_E694BF = { /* 政 */
    .next = &GlyTJA_E68FA1,
    .width = 11,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E694BFTiles,
};

const struct GlyphNew GlyTJA_E5B091 = { /* 少 */
    .next = &GlyTJA_E5BCB7,
    .width = 11,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B091Tiles,
};

const struct GlyphNew GlyTJA_E981A3 = { /* 遣 */
    .next = &GlyTJA_E9809F,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E981A3Tiles,
};

const struct GlyphNew GlyTJA_E5838D = { /* 働 */
    .next = &GlyTJA_E5B091,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5838DTiles,
};

const struct GlyphNew GlyTJA_E5A699 = { /* 妙 */
    .next = &GlyTJA_E5838D,
    .width = 11,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A699Tiles,
};

const struct GlyphNew GlyTJA_E9B9BF = { /* 鹿 */
    .next = &GlyTJA_E981A3,
    .width = 11,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9B9BFTiles,
};

const struct GlyphNew GlyTJA_E38190 = { /* ぐ */
    .next = &GlyTJA_E3818F,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38190Tiles,
};

const struct GlyphNew GlyTJA_E58B95 = { /* 動 */
    .next = &GlyTJA_E5A699,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58B95Tiles,
};

const struct GlyphNew GlyTJA_E5B18B = { /* 屋 */
    .next = &GlyTJA_E58B95,
    .width = 11,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B18BTiles,
};

const struct GlyphNew GlyTJA_E5AE8C = { /* 完 */
    .next = &GlyTJA_E5B18B,
    .width = 11,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AE8CTiles,
};

const struct GlyphNew GlyTJA_E5BC8F = { /* 式 */
    .next = &GlyTJA_E5AE8C,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BC8FTiles,
};

const struct GlyphNew GlyTJA_E5B19E = { /* 属 */
    .next = &GlyTJA_E5BC8F,
    .width = 11,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B19ETiles,
};

const struct GlyphNew GlyTJA_E695B4 = { /* 整 */
    .next = &GlyTJA_E694BF,
    .width = 11,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E695B4Tiles,
};

const struct GlyphNew GlyTJA_E5B09A = { /* 尚 */
    .next = &GlyTJA_E5B19E,
    .width = 11,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B09ATiles,
};

const struct GlyphNew GlyTJA_E38191 = { /* け */
    .next = &GlyTJA_E38190,
    .width = 10,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38191Tiles,
};

const struct GlyphNew GlyTJA_E8B38A = { /* 賊 */
    .next = &GlyTJA_E88488,
    .width = 11,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B38ATiles,
};

const struct GlyphNew GlyTJA_E6989F = { /* 星 */
    .next = &GlyTJA_E695B4,
    .width = 11,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6989FTiles,
};

const struct GlyphNew GlyTJA_E5908C = { /* 同 */
    .next = &GlyTJA_E5B09A,
    .width = 11,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5908CTiles,
};

const struct GlyphNew GlyTJA_E6B091 = { /* 民 */
    .next = &GlyTJA_E6989F,
    .width = 11,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B091Tiles,
};

const struct GlyphNew GlyTJA_E8AD98 = { /* 識 */
    .next = &GlyTJA_E8B38A,
    .width = 11,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8AD98Tiles,
};

const struct GlyphNew GlyTJA_E5AE98 = { /* 官 */
    .next = &GlyTJA_E5908C,
    .width = 11,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AE98Tiles,
};

const struct GlyphNew GlyTJA_E686B6 = { /* 憶 */
    .next = &GlyTJA_E6B091,
    .width = 11,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E686B6Tiles,
};

const struct GlyphNew GlyTJA_E79599 = { /* 留 */
    .next = &GlyTJA_E799BA,
    .width = 11,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79599Tiles,
};

const struct GlyphNew GlyTJA_E999BA = { /* 険 */
    .next = &GlyTJA_E9B9BF,
    .width = 12,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E999BATiles,
};

const struct GlyphNew GlyTJA_E9ABAA = { /* 髪 */
    .next = &GlyTJA_E999BA,
    .width = 11,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9ABAATiles,
};

const struct GlyphNew GlyTJA_E38192 = { /* げ */
    .next = &GlyTJA_E38191,
    .width = 12,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38192Tiles,
};

const struct GlyphNew GlyTJA_E68190 = { /* 恐 */
    .next = &GlyTJA_E686B6,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68190Tiles,
};

const struct GlyphNew GlyTJA_E6978F = { /* 族 */
    .next = &GlyTJA_E68190,
    .width = 11,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6978FTiles,
};

const struct GlyphNew GlyTJA_E4BC90 = { /* 伐 */
    .next = &GlyTJA_E4B896,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BC90Tiles,
};

const struct GlyphNew GlyTJA_E5A082 = { /* 堂 */
    .next = &GlyTJA_E5AE98,
    .width = 11,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A082Tiles,
};

const struct GlyphNew GlyTJA_E9AD82 = { /* 魂 */
    .next = &GlyTJA_E9ABAA,
    .width = 11,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9AD82Tiles,
};

const struct GlyphNew GlyTJA_E699B4 = { /* 晴 */
    .next = &GlyTJA_E6978F,
    .width = 11,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E699B4Tiles,
};

const struct GlyphNew GlyTJA_E5BA8A = { /* 床 */
    .next = &GlyTJA_E5A082,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BA8ATiles,
};

const struct GlyphNew GlyTJA_E79CA0 = { /* 眠 */
    .next = &GlyTJA_E79599,
    .width = 12,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79CA0Tiles,
};

const struct GlyphNew GlyTJA_E38193 = { /* こ */
    .next = &GlyTJA_E38192,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38193Tiles,
};

const struct GlyphNew GlyTJA_E7B69A = { /* 続 */
    .next = &GlyTJA_E79CA0,
    .width = 11,
    .utf_byte_2 = 0xb6,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B69ATiles,
};

const struct GlyphNew GlyTJA_E58B99 = { /* 務 */
    .next = &GlyTJA_E5BA8A,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58B99Tiles,
};

const struct GlyphNew GlyTJA_E9A893 = { /* 験 */
    .next = &GlyTJA_E9AD82,
    .width = 11,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9A893Tiles,
};

const struct GlyphNew GlyTJA_E5B08E = { /* 導 */
    .next = &GlyTJA_E58B99,
    .width = 11,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B08ETiles,
};

const struct GlyphNew GlyTJA_E7BDB0 = { /* 罰 */
    .next = &GlyTJA_E7B69A,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7BDB0Tiles,
};

const struct GlyphNew GlyTJA_E68495 = { /* 愕 */
    .next = &GlyTJA_E699B4,
    .width = 11,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68495Tiles,
};

const struct GlyphNew GlyTJA_E5B9B2 = { /* 干 */
    .next = &GlyTJA_E5B08E,
    .width = 11,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B9B2Tiles,
};

const struct GlyphNew GlyTJA_E38194 = { /* ご */
    .next = &GlyTJA_E38193,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38194Tiles,
};

const struct GlyphNew GlyTJA_E68C9F = { /* 挟 */
    .next = &GlyTJA_E68495,
    .width = 11,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68C9FTiles,
};

const struct GlyphNew GlyTJA_E68A9C = { /* 抜 */
    .next = &GlyTJA_E68C9F,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68A9CTiles,
};

const struct GlyphNew GlyTJA_E8AABF = { /* 調 */
    .next = &GlyTJA_E8AD98,
    .width = 11,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8AABFTiles,
};

const struct GlyphNew GlyTJA_E5A4A2 = { /* 夢 */
    .next = &GlyTJA_E5B9B2,
    .width = 11,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A4A2Tiles,
};

const struct GlyphNew GlyTJA_E686A7 = { /* 憧 */
    .next = &GlyTJA_E68A9C,
    .width = 11,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E686A7Tiles,
};

const struct GlyphNew GlyTJA_E38195 = { /* さ */
    .next = &GlyTJA_E38194,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38195Tiles,
};

const struct GlyphNew GlyTJA_E58583 = { /* 元 */
    .next = &GlyTJA_E5A4A2,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58583Tiles,
};

const struct GlyphNew GlyTJA_E7AB9C = { /* 竜 */
    .next = &GlyTJA_E7BDB0,
    .width = 11,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7AB9CTiles,
};

const struct GlyphNew GlyTJA_E784A1 = { /* 無 */
    .next = &GlyTJA_E7AB9C,
    .width = 11,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E784A1Tiles,
};

const struct GlyphNew GlyTJA_E6ADA3 = { /* 正 */
    .next = &GlyTJA_E686A7,
    .width = 11,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6ADA3Tiles,
};

const struct GlyphNew GlyTJA_E59CA7 = { /* 圧 */
    .next = &GlyTJA_E58583,
    .width = 11,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59CA7Tiles,
};

const struct GlyphNew GlyTJA_E69599 = { /* 教 */
    .next = &GlyTJA_E6ADA3,
    .width = 11,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69599Tiles,
};

const struct GlyphNew GlyTJA_E689BF = { /* 承 */
    .next = &GlyTJA_E69599,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E689BFTiles,
};

const struct GlyphNew GlyTJA_E4B999 = { /* 乙 */
    .next = &GlyTJA_E4BC90,
    .width = 10,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4B999Tiles,
};

const struct GlyphNew GlyTJA_E38196 = { /* ざ */
    .next = &GlyTJA_E38195,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38196Tiles,
};

const struct GlyphNew GlyTJA_E58E9F = { /* 原 */
    .next = &GlyTJA_E59CA7,
    .width = 11,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58E9FTiles,
};

const struct GlyphNew GlyTJA_E4BFBA = { /* 俺 */
    .next = &GlyTJA_E4B999,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BFBATiles,
};

const struct GlyphNew GlyTJA_E6A98B = { /* 橋 */
    .next = &GlyTJA_E689BF,
    .width = 11,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6A98BTiles,
};

const struct GlyphNew GlyTJA_E6849F = { /* 感 */
    .next = &GlyTJA_E6A98B,
    .width = 11,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6849FTiles,
};

const struct GlyphNew GlyTJA_E8B685 = { /* 超 */
    .next = &GlyTJA_E8AABF,
    .width = 11,
    .utf_byte_2 = 0xb6,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B685Tiles,
};

const struct GlyphNew GlyTJA_E6B885 = { /* 清 */
    .next = &GlyTJA_E6849F,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B885Tiles,
};

const struct GlyphNew GlyTJA_E6B49E = { /* 洞 */
    .next = &GlyTJA_E6B885,
    .width = 11,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B49ETiles,
};

const struct GlyphNew GlyTJA_E38197 = { /* し */
    .next = &GlyTJA_E38196,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38197Tiles,
};

const struct GlyphNew GlyTJA_E689B1 = { /* 扱 */
    .next = &GlyTJA_E6B49E,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E689B1Tiles,
};

const struct GlyphNew GlyTJA_E4BEB6 = { /* 侶 */
    .next = &GlyTJA_E4BFBA,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BEB6Tiles,
};

const struct GlyphNew GlyTJA_E6B381 = { /* 況 */
    .next = &GlyTJA_E689B1,
    .width = 11,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B381Tiles,
};

const struct GlyphNew GlyTJA_E789B2 = { /* 牲 */
    .next = &GlyTJA_E784A1,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E789B2Tiles,
};

const struct GlyphNew GlyTJA_E68B9B = { /* 招 */
    .next = &GlyTJA_E6B381,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68B9BTiles,
};

const struct GlyphNew GlyTJA_E4B883 = { /* 七 */
    .next = &GlyTJA_E4BEB6,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4B883Tiles,
};

const struct GlyphNew GlyTJA_E685A3 = { /* 慣 */
    .next = &GlyTJA_E68B9B,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E685A3Tiles,
};

const struct GlyphNew GlyTJA_E58EB3 = { /* 厳 */
    .next = &GlyTJA_E58E9F,
    .width = 11,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58EB3Tiles,
};

const struct GlyphNew GlyTJA_E99BB0 = { /* 雰 */
    .next = &GlyTJA_E9A893,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99BB0Tiles,
};

const struct GlyphNew GlyTJA_E79EB3 = { /* 瞳 */
    .next = &GlyTJA_E789B2,
    .width = 11,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79EB3Tiles,
};

const struct GlyphNew GlyTJA_E38198 = { /* じ */
    .next = &GlyTJA_E38197,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38198Tiles,
};

const struct GlyphNew GlyTJA_E681A9 = { /* 恩 */
    .next = &GlyTJA_E685A3,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E681A9Tiles,
};

const struct GlyphNew GlyTJA_E7949F = { /* 生 */
    .next = &GlyTJA_E79EB3,
    .width = 11,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7949FTiles,
};

const struct GlyphNew GlyTJA_E69687 = { /* 文 */
    .next = &GlyTJA_E681A9,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69687Tiles,
};

const struct GlyphNew GlyTJA_E78B82 = { /* 狂 */
    .next = &GlyTJA_E7949F,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E78B82Tiles,
};

const struct GlyphNew GlyTJA_E5AD98 = { /* 存 */
    .next = &GlyTJA_E58EB3,
    .width = 11,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AD98Tiles,
};

const struct GlyphNew GlyTJA_E5B7A6 = { /* 左 */
    .next = &GlyTJA_E5AD98,
    .width = 11,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B7A6Tiles,
};

const struct GlyphNew GlyTJA_E99CA7 = { /* 霧 */
    .next = &GlyTJA_E99BB0,
    .width = 12,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99CA7Tiles,
};

const struct GlyphNew GlyTJA_E685AE = { /* 慮 */
    .next = &GlyTJA_E69687,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E685AETiles,
};

const struct GlyphNew GlyTJA_E5B9BB = { /* 幻 */
    .next = &GlyTJA_E5B7A6,
    .width = 11,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B9BBTiles,
};

const struct GlyphNew GlyTJA_E38199 = { /* す */
    .next = &GlyTJA_E38198,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38199Tiles,
};

const struct GlyphNew GlyTJA_E69785 = { /* 旅 */
    .next = &GlyTJA_E685AE,
    .width = 11,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69785Tiles,
};

const struct GlyphNew GlyTJA_E995B7 = { /* 長 */
    .next = &GlyTJA_E99CA7,
    .width = 11,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E995B7Tiles,
};

const struct GlyphNew GlyTJA_E5ADAB = { /* 孫 */
    .next = &GlyTJA_E5B9BB,
    .width = 11,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5ADABTiles,
};

const struct GlyphNew GlyTJA_E79B9B = { /* 盛 */
    .next = &GlyTJA_E78B82,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79B9BTiles,
};

const struct GlyphNew GlyTJA_E8819E = { /* 聞 */
    .next = &GlyTJA_E8B685,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8819ETiles,
};

const struct GlyphNew GlyTJA_E5B7AE = { /* 差 */
    .next = &GlyTJA_E5ADAB,
    .width = 11,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B7AETiles,
};

const struct GlyphNew GlyTJA_E6B8A9 = { /* 温 */
    .next = &GlyTJA_E69785,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B8A9Tiles,
};

const struct GlyphNew GlyTJA_E68F9B = { /* 換 */
    .next = &GlyTJA_E6B8A9,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68F9BTiles,
};

const struct GlyphNew GlyTJA_E59FB7 = { /* 執 */
    .next = &GlyTJA_E5B7AE,
    .width = 11,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59FB7Tiles,
};

const struct GlyphNew GlyTJA_E3819A = { /* ず */
    .next = &GlyTJA_E38199,
    .width = 10,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E3819ATiles,
};

const struct GlyphNew GlyTJA_E5A4B1 = { /* 失 */
    .next = &GlyTJA_E59FB7,
    .width = 11,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A4B1Tiles,
};

const struct GlyphNew GlyTJA_E7B2BE = { /* 精 */
    .next = &GlyTJA_E79B9B,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B2BETiles,
};

const struct GlyphNew GlyTJA_E6B89B = { /* 減 */
    .next = &GlyTJA_E68F9B,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B89BTiles,
};

const struct GlyphNew GlyTJA_E69887 = { /* 昇 */
    .next = &GlyTJA_E6B89B,
    .width = 11,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69887Tiles,
};

const struct GlyphNew GlyTJA_E8999C = { /* 虜 */
    .next = &GlyTJA_E8819E,
    .width = 11,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8999CTiles,
};

const struct GlyphNew GlyTJA_E5B08A = { /* 尊 */
    .next = &GlyTJA_E5A4B1,
    .width = 11,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B08ATiles,
};

const struct GlyphNew GlyTJA_E7A98F = { /* 穏 */
    .next = &GlyTJA_E7B2BE,
    .width = 11,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A98FTiles,
};

const struct GlyphNew GlyTJA_E9A082 = { /* 頂 */
    .next = &GlyTJA_E995B7,
    .width = 11,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9A082Tiles,
};

const struct GlyphNew GlyTJA_E3819B = { /* せ */
    .next = &GlyTJA_E3819A,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E3819BTiles,
};

const struct GlyphNew GlyTJA_E88196 = { /* 聖 */
    .next = &GlyTJA_E8999C,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E88196Tiles,
};

const struct GlyphNew GlyTJA_E98193 = { /* 道 */
    .next = &GlyTJA_E9A082,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E98193Tiles,
};

const struct GlyphNew GlyTJA_E4BDB5 = { /* 併 */
    .next = &GlyTJA_E4B883,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BDB5Tiles,
};

const struct GlyphNew GlyTJA_E4BA86 = { /* 了 */
    .next = &GlyTJA_E4BDB5,
    .width = 10,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BA86Tiles,
};

const struct GlyphNew GlyTJA_E99FB3 = { /* 音 */
    .next = &GlyTJA_E98193,
    .width = 11,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99FB3Tiles,
};

const struct GlyphNew GlyTJA_E9B3A5 = { /* 鳥 */
    .next = &GlyTJA_E99FB3,
    .width = 11,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9B3A5Tiles,
};

const struct GlyphNew GlyTJA_E6BA90 = { /* 源 */
    .next = &GlyTJA_E69887,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6BA90Tiles,
};

const struct GlyphNew GlyTJA_E5AB89 = { /* 嫉 */
    .next = &GlyTJA_E5B08A,
    .width = 11,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AB89Tiles,
};

const struct GlyphNew GlyTJA_E883B8 = { /* 胸 */
    .next = &GlyTJA_E88196,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E883B8Tiles,
};

const struct GlyphNew GlyTJA_E99ABC = { /* 隼 */
    .next = &GlyTJA_E9B3A5,
    .width = 11,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99ABCTiles,
};

const struct GlyphNew GlyTJA_E6908D = { /* 損 */
    .next = &GlyTJA_E6BA90,
    .width = 11,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6908DTiles,
};

const struct GlyphNew GlyTJA_E3819C = { /* ぜ */
    .next = &GlyTJA_E3819B,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E3819CTiles,
};

const struct GlyphNew GlyTJA_E585B5 = { /* 兵 */
    .next = &GlyTJA_E5AB89,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E585B5Tiles,
};

const struct GlyphNew GlyTJA_E69D91 = { /* 村 */
    .next = &GlyTJA_E6908D,
    .width = 11,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69D91Tiles,
};

const struct GlyphNew GlyTJA_E4B88B = { /* 下 */
    .next = &GlyTJA_E4BA86,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4B88BTiles,
};

const struct GlyphNew GlyTJA_E5A3B0 = { /* 声 */
    .next = &GlyTJA_E585B5,
    .width = 11,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A3B0Tiles,
};

const struct GlyphNew GlyTJA_E5AEA4 = { /* 室 */
    .next = &GlyTJA_E5A3B0,
    .width = 11,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AEA4Tiles,
};

const struct GlyphNew GlyTJA_E5A898 = { /* 娘 */
    .next = &GlyTJA_E5AEA4,
    .width = 10,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A898Tiles,
};

const struct GlyphNew GlyTJA_E58B85 = { /* 勅 */
    .next = &GlyTJA_E5A898,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58B85Tiles,
};

const struct GlyphNew GlyTJA_E3819D = { /* そ */
    .next = &GlyTJA_E3819C,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E3819DTiles,
};

const struct GlyphNew GlyTJA_E78FBE = { /* 現 */
    .next = &GlyTJA_E7A98F,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E78FBETiles,
};

const struct GlyphNew GlyTJA_E7A082 = { /* 砂 */
    .next = &GlyTJA_E78FBE,
    .width = 11,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A082Tiles,
};

const struct GlyphNew GlyTJA_E88888 = { /* 興 */
    .next = &GlyTJA_E883B8,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E88888Tiles,
};

const struct GlyphNew GlyTJA_E58C96 = { /* 化 */
    .next = &GlyTJA_E58B85,
    .width = 11,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58C96Tiles,
};

const struct GlyphNew GlyTJA_E5B3A0 = { /* 峠 */
    .next = &GlyTJA_E58C96,
    .width = 11,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B3A0Tiles,
};

const struct GlyphNew GlyTJA_E588A4 = { /* 判 */
    .next = &GlyTJA_E5B3A0,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E588A4Tiles,
};

const struct GlyphNew GlyTJA_E3819E = { /* ぞ */
    .next = &GlyTJA_E3819D,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E3819ETiles,
};

const struct GlyphNew GlyTJA_E4B8A1 = { /* 両 */
    .next = &GlyTJA_E4B88B,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4B8A1Tiles,
};

const struct GlyphNew GlyTJA_E8A5BF = { /* 西 */
    .next = &GlyTJA_E88888,
    .width = 11,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A5BFTiles,
};

const struct GlyphNew GlyTJA_E4BB96 = { /* 他 */
    .next = &GlyTJA_E4B8A1,
    .width = 11,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BB96Tiles,
};

const struct GlyphNew GlyTJA_E5908D = { /* 名 */
    .next = &GlyTJA_E588A4,
    .width = 11,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5908DTiles,
};

const struct GlyphNew GlyTJA_E58D8A = { /* 半 */
    .next = &GlyTJA_E5908D,
    .width = 11,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58D8ATiles,
};

const struct GlyphNew GlyTJA_E4BBAE = { /* 仮 */
    .next = &GlyTJA_E4BB96,
    .width = 11,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BBAETiles,
};

const struct GlyphNew GlyTJA_E79BB4 = { /* 直 */
    .next = &GlyTJA_E7A082,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79BB4Tiles,
};

const struct GlyphNew GlyTJA_E3819F = { /* た */
    .next = &GlyTJA_E3819E,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E3819FTiles,
};

const struct GlyphNew GlyTJA_E4BD95 = { /* 何 */
    .next = &GlyTJA_E4BBAE,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BD95Tiles,
};

const struct GlyphNew GlyTJA_E5A49A = { /* 多 */
    .next = &GlyTJA_E58D8A,
    .width = 11,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A49ATiles,
};

const struct GlyphNew GlyTJA_E591BD = { /* 命 */
    .next = &GlyTJA_E5A49A,
    .width = 11,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E591BDTiles,
};

const struct GlyphNew GlyTJA_E5B9B3 = { /* 平 */
    .next = &GlyTJA_E591BD,
    .width = 11,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B9B3Tiles,
};

const struct GlyphNew GlyTJA_E8AAA0 = { /* 誠 */
    .next = &GlyTJA_E8A5BF,
    .width = 11,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8AAA0Tiles,
};

const struct GlyphNew GlyTJA_E58F8D = { /* 反 */
    .next = &GlyTJA_E5B9B3,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58F8DTiles,
};

const struct GlyphNew GlyTJA_E6AD93 = { /* 歓 */
    .next = &GlyTJA_E69D91,
    .width = 11,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6AD93Tiles,
};

const struct GlyphNew GlyTJA_E983B7 = { /* 郷 */
    .next = &GlyTJA_E99ABC,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E983B7Tiles,
};

const struct GlyphNew GlyTJA_E6BC86 = { /* 漆 */
    .next = &GlyTJA_E6AD93,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6BC86Tiles,
};

const struct GlyphNew GlyTJA_E381A0 = { /* だ */
    .next = &GlyTJA_E3819F,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E381A0Tiles,
};

const struct GlyphNew GlyTJA_E6B288 = { /* 沈 */
    .next = &GlyTJA_E6BC86,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B288Tiles,
};

const struct GlyphNew GlyTJA_E8A880 = { /* 言 */
    .next = &GlyTJA_E8AAA0,
    .width = 11,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A880Tiles,
};

const struct GlyphNew GlyTJA_E6988E = { /* 明 */
    .next = &GlyTJA_E6B288,
    .width = 11,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6988ETiles,
};

const struct GlyphNew GlyTJA_E5A4AA = { /* 太 */
    .next = &GlyTJA_E58F8D,
    .width = 11,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A4AATiles,
};

const struct GlyphNew GlyTJA_E5BE97 = { /* 得 */
    .next = &GlyTJA_E5A4AA,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BE97Tiles,
};

const struct GlyphNew GlyTJA_E8AA93 = { /* 誓 */
    .next = &GlyTJA_E8A880,
    .width = 11,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8AA93Tiles,
};

const struct GlyphNew GlyTJA_E6B197 = { /* 汗 */
    .next = &GlyTJA_E6988E,
    .width = 11,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B197Tiles,
};

const struct GlyphNew GlyTJA_E98FA1 = { /* 鏡 */
    .next = &GlyTJA_E983B7,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E98FA1Tiles,
};

const struct GlyphNew GlyTJA_E796BE = { /* 疾 */
    .next = &GlyTJA_E79BB4,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E796BETiles,
};

const struct GlyphNew GlyTJA_E58F9B = { /* 叛 */
    .next = &GlyTJA_E5BE97,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58F9BTiles,
};

const struct GlyphNew GlyTJA_E381A1 = { /* ち */
    .next = &GlyTJA_E381A0,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E381A1Tiles,
};

const struct GlyphNew GlyTJA_E79B9F = { /* 盟 */
    .next = &GlyTJA_E796BE,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79B9FTiles,
};

const struct GlyphNew GlyTJA_E8B3AA = { /* 質 */
    .next = &GlyTJA_E8AA93,
    .width = 11,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B3AATiles,
};

const struct GlyphNew GlyTJA_E8AB8B = { /* 請 */
    .next = &GlyTJA_E8B3AA,
    .width = 11,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8AB8BTiles,
};

const struct GlyphNew GlyTJA_E69F84 = { /* 柄 */
    .next = &GlyTJA_E6B197,
    .width = 11,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69F84Tiles,
};

const struct GlyphNew GlyTJA_E4BEA1 = { /* 価 */
    .next = &GlyTJA_E4BD95,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BEA1Tiles,
};

const struct GlyphNew GlyTJA_E99FBF = { /* 響 */
    .next = &GlyTJA_E98FA1,
    .width = 11,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99FBFTiles,
};

const struct GlyphNew GlyTJA_E69699 = { /* 料 */
    .next = &GlyTJA_E69F84,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69699Tiles,
};

const struct GlyphNew GlyTJA_E381A2 = { /* ぢ */
    .next = &GlyTJA_E381A1,
    .width = 10,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E381A2Tiles,
};

const struct GlyphNew GlyTJA_E5AE89 = { /* 安 */
    .next = &GlyTJA_E58F9B,
    .width = 11,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AE89Tiles,
};

const struct GlyphNew GlyTJA_E5BAA7 = { /* 座 */
    .next = &GlyTJA_E5AE89,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BAA7Tiles,
};

const struct GlyphNew GlyTJA_E8BFB7 = { /* 迷 */
    .next = &GlyTJA_E8AB8B,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8BFB7Tiles,
};

const struct GlyphNew GlyTJA_E99990 = { /* 限 */
    .next = &GlyTJA_E99FBF,
    .width = 11,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99990Tiles,
};

const struct GlyphNew GlyTJA_E5AE9F = { /* 実 */
    .next = &GlyTJA_E5BAA7,
    .width = 11,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AE9FTiles,
};

const struct GlyphNew GlyTJA_E4B8A6 = { /* 並 */
    .next = &GlyTJA_E4BEA1,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4B8A6Tiles,
};

const struct GlyphNew GlyTJA_E381A3 = { /* っ */
    .next = &GlyTJA_E381A2,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E381A3Tiles,
};

const struct GlyphNew GlyTJA_E58AA0 = { /* 加 */
    .next = &GlyTJA_E5AE9F,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58AA0Tiles,
};

const struct GlyphNew GlyTJA_E6B688 = { /* 消 */
    .next = &GlyTJA_E69699,
    .width = 11,
    .utf_byte_2 = 0xb6,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B688Tiles,
};

const struct GlyphNew GlyTJA_E789B9 = { /* 特 */
    .next = &GlyTJA_E79B9F,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E789B9Tiles,
};

const struct GlyphNew GlyTJA_E9A99A = { /* 驚 */
    .next = &GlyTJA_E99990,
    .width = 11,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9A99ATiles,
};

const struct GlyphNew GlyTJA_E98EAE = { /* 鎮 */
    .next = &GlyTJA_E9A99A,
    .width = 11,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E98EAETiles,
};

const struct GlyphNew GlyTJA_E381A4 = { /* つ */
    .next = &GlyTJA_E381A3,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E381A4Tiles,
};

const struct GlyphNew GlyTJA_E58FAF = { /* 可 */
    .next = &GlyTJA_E58AA0,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58FAFTiles,
};

const struct GlyphNew GlyTJA_E5808B = { /* 個 */
    .next = &GlyTJA_E58FAF,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5808BTiles,
};

const struct GlyphNew GlyTJA_E78C9F = { /* 猟 */
    .next = &GlyTJA_E789B9,
    .width = 11,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E78C9FTiles,
};

const struct GlyphNew GlyTJA_E99689 = { /* 閉 */
    .next = &GlyTJA_E98EAE,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99689Tiles,
};

const struct GlyphNew GlyTJA_E6B889 = { /* 渉 */
    .next = &GlyTJA_E6B688,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B889Tiles,
};

const struct GlyphNew GlyTJA_E79DA3 = { /* 督 */
    .next = &GlyTJA_E78C9F,
    .width = 11,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79DA3Tiles,
};

const struct GlyphNew GlyTJA_E99D92 = { /* 青 */
    .next = &GlyTJA_E99689,
    .width = 11,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99D92Tiles,
};

const struct GlyphNew GlyTJA_E9B3B4 = { /* 鳴 */
    .next = &GlyTJA_E99D92,
    .width = 11,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9B3B4Tiles,
};

const struct GlyphNew GlyTJA_E381A5 = { /* づ */
    .next = &GlyTJA_E381A4,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E381A5Tiles,
};

const struct GlyphNew GlyTJA_E69A97 = { /* 暗 */
    .next = &GlyTJA_E6B889,
    .width = 11,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69A97Tiles,
};

const struct GlyphNew GlyTJA_E58FA4 = { /* 古 */
    .next = &GlyTJA_E5808B,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58FA4Tiles,
};

const struct GlyphNew GlyTJA_E9999B = { /* 陛 */
    .next = &GlyTJA_E9B3B4,
    .width = 11,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9999BTiles,
};

const struct GlyphNew GlyTJA_E5A7AA = { /* 姪 */
    .next = &GlyTJA_E58FA4,
    .width = 11,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A7AATiles,
};

const struct GlyphNew GlyTJA_E79498 = { /* 甘 */
    .next = &GlyTJA_E79DA3,
    .width = 11,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79498Tiles,
};

const struct GlyphNew GlyTJA_E99D99 = { /* 静 */
    .next = &GlyTJA_E9999B,
    .width = 12,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99D99Tiles,
};

const struct GlyphNew GlyTJA_E381A6 = { /* て */
    .next = &GlyTJA_E381A5,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E381A6Tiles,
};

const struct GlyphNew GlyTJA_E5868D = { /* 再 */
    .next = &GlyTJA_E5A7AA,
    .width = 11,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5868DTiles,
};

const struct GlyphNew GlyTJA_E784BC = { /* 焼 */
    .next = &GlyTJA_E79498,
    .width = 11,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E784BCTiles,
};

const struct GlyphNew GlyTJA_E591BC = { /* 呼 */
    .next = &GlyTJA_E5868D,
    .width = 11,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E591BCTiles,
};

const struct GlyphNew GlyTJA_E6A188 = { /* 案 */
    .next = &GlyTJA_E69A97,
    .width = 11,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6A188Tiles,
};

const struct GlyphNew GlyTJA_E79BA3 = { /* 監 */
    .next = &GlyTJA_E784BC,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79BA3Tiles,
};

const struct GlyphNew GlyTJA_E5A48F = { /* 夏 */
    .next = &GlyTJA_E591BC,
    .width = 11,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A48FTiles,
};

const struct GlyphNew GlyTJA_E7899D = { /* 牝 */
    .next = &GlyTJA_E79BA3,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7899DTiles,
};

const struct GlyphNew GlyTJA_E381A7 = { /* で */
    .next = &GlyTJA_E381A6,
    .width = 10,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E381A7Tiles,
};

const struct GlyphNew GlyTJA_E69C80 = { /* 最 */
    .next = &GlyTJA_E6A188,
    .width = 11,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69C80Tiles,
};

const struct GlyphNew GlyTJA_E7A88E = { /* 税 */
    .next = &GlyTJA_E7899D,
    .width = 11,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A88ETiles,
};

const struct GlyphNew GlyTJA_E6BB85 = { /* 滅 */
    .next = &GlyTJA_E69C80,
    .width = 12,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6BB85Tiles,
};

const struct GlyphNew GlyTJA_E68993 = { /* 打 */
    .next = &GlyTJA_E6BB85,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68993Tiles,
};

const struct GlyphNew GlyTJA_E99787 = { /* 闇 */
    .next = &GlyTJA_E99D99,
    .width = 11,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99787Tiles,
};

const struct GlyphNew GlyTJA_E5AB81 = { /* 嫁 */
    .next = &GlyTJA_E5A48F,
    .width = 11,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AB81Tiles,
};

const struct GlyphNew GlyTJA_E59BBA = { /* 固 */
    .next = &GlyTJA_E5AB81,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59BBATiles,
};

const struct GlyphNew GlyTJA_E6AF92 = { /* 毒 */
    .next = &GlyTJA_E68993,
    .width = 11,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6AF92Tiles,
};

const struct GlyphNew GlyTJA_E784A6 = { /* 焦 */
    .next = &GlyTJA_E7A88E,
    .width = 11,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E784A6Tiles,
};

const struct GlyphNew GlyTJA_E381A8 = { /* と */
    .next = &GlyTJA_E381A7,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E381A8Tiles,
};

const struct GlyphNew GlyTJA_E5AEB6 = { /* 家 */
    .next = &GlyTJA_E59BBA,
    .width = 11,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AEB6Tiles,
};

const struct GlyphNew GlyTJA_E78BAC = { /* 独 */
    .next = &GlyTJA_E784A6,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E78BACTiles,
};

const struct GlyphNew GlyTJA_E6A5AD = { /* 業 */
    .next = &GlyTJA_E6AF92,
    .width = 11,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6A5ADTiles,
};

const struct GlyphNew GlyTJA_E5858D = { /* 免 */
    .next = &GlyTJA_E5AEB6,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5858DTiles,
};

const struct GlyphNew GlyTJA_E785A7 = { /* 照 */
    .next = &GlyTJA_E78BAC,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E785A7Tiles,
};

const struct GlyphNew GlyTJA_E381A9 = { /* ど */
    .next = &GlyTJA_E381A8,
    .width = 10,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E381A9Tiles,
};

const struct GlyphNew GlyTJA_E5A19E = { /* 塞 */
    .next = &GlyTJA_E5858D,
    .width = 11,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A19ETiles,
};

const struct GlyphNew GlyTJA_E8BFBD = { /* 追 */
    .next = &GlyTJA_E8BFB7,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8BFBDTiles,
};

const struct GlyphNew GlyTJA_E5ADA4 = { /* 孤 */
    .next = &GlyTJA_E5A19E,
    .width = 11,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5ADA4Tiles,
};

const struct GlyphNew GlyTJA_E889AF = { /* 良 */
    .next = &GlyTJA_E8BFBD,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E889AFTiles,
};

const struct GlyphNew GlyTJA_E5B180 = { /* 局 */
    .next = &GlyTJA_E5ADA4,
    .width = 11,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B180Tiles,
};

const struct GlyphNew GlyTJA_E7AEA1 = { /* 管 */
    .next = &GlyTJA_E785A7,
    .width = 11,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7AEA1Tiles,
};

const struct GlyphNew GlyTJA_E8AAAD = { /* 読 */
    .next = &GlyTJA_E889AF,
    .width = 11,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8AAADTiles,
};

const struct GlyphNew GlyTJA_E5A381 = { /* 壁 */
    .next = &GlyTJA_E5B180,
    .width = 11,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A381Tiles,
};

const struct GlyphNew GlyTJA_E5AFA1 = { /* 寡 */
    .next = &GlyTJA_E5A381,
    .width = 11,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AFA1Tiles,
};

const struct GlyphNew GlyTJA_E79787 = { /* 症 */
    .next = &GlyTJA_E7AEA1,
    .width = 11,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79787Tiles,
};

const struct GlyphNew GlyTJA_E381AA = { /* な */
    .next = &GlyTJA_E381A9,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E381AATiles,
};

const struct GlyphNew GlyTJA_E4BBA5 = { /* 以 */
    .next = &GlyTJA_E4B8A6,
    .width = 11,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BBA5Tiles,
};

const struct GlyphNew GlyTJA_E5A6BB = { /* 妻 */
    .next = &GlyTJA_E5AFA1,
    .width = 11,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A6BBTiles,
};

const struct GlyphNew GlyTJA_E7B0A1 = { /* 簡 */
    .next = &GlyTJA_E79787,
    .width = 11,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B0A1Tiles,
};

const struct GlyphNew GlyTJA_E5B7B1 = { /* 己 */
    .next = &GlyTJA_E5A6BB,
    .width = 11,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B7B1Tiles,
};

const struct GlyphNew GlyTJA_E5B8AD = { /* 席 */
    .next = &GlyTJA_E5B7B1,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B8ADTiles,
};

const struct GlyphNew GlyTJA_E69BB2 = { /* 曲 */
    .next = &GlyTJA_E6A5AD,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69BB2Tiles,
};

const struct GlyphNew GlyTJA_E79C81 = { /* 省 */
    .next = &GlyTJA_E7B0A1,
    .width = 11,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79C81Tiles,
};

const struct GlyphNew GlyTJA_E381AB = { /* に */
    .next = &GlyTJA_E381AA,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E381ABTiles,
};

const struct GlyphNew GlyTJA_E7979B = { /* 痛 */
    .next = &GlyTJA_E79C81,
    .width = 11,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7979BTiles,
};

const struct GlyphNew GlyTJA_E6839C = { /* 惜 */
    .next = &GlyTJA_E69BB2,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6839CTiles,
};

const struct GlyphNew GlyTJA_E5AEB0 = { /* 宰 */
    .next = &GlyTJA_E5B8AD,
    .width = 11,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AEB0Tiles,
};

const struct GlyphNew GlyTJA_E6A5B5 = { /* 極 */
    .next = &GlyTJA_E6839C,
    .width = 11,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6A5B5Tiles,
};

const struct GlyphNew GlyTJA_E7B981 = { /* 繁 */
    .next = &GlyTJA_E7979B,
    .width = 11,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B981Tiles,
};

const struct GlyphNew GlyTJA_E8888E = { /* 舎 */
    .next = &GlyTJA_E8AAAD,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8888ETiles,
};

const struct GlyphNew GlyTJA_E381AC = { /* ぬ */
    .next = &GlyTJA_E381AB,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E381ACTiles,
};

const struct GlyphNew GlyTJA_E4BD8D = { /* 位 */
    .next = &GlyTJA_E4BBA5,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BD8DTiles,
};

const struct GlyphNew GlyTJA_E58699 = { /* 写 */
    .next = &GlyTJA_E5AEB0,
    .width = 11,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58699Tiles,
};

const struct GlyphNew GlyTJA_E78E89 = { /* 玉 */
    .next = &GlyTJA_E7B981,
    .width = 11,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E78E89Tiles,
};

const struct GlyphNew GlyTJA_E69E9C = { /* 果 */
    .next = &GlyTJA_E6A5B5,
    .width = 11,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69E9CTiles,
};

const struct GlyphNew GlyTJA_E588A5 = { /* 別 */
    .next = &GlyTJA_E58699,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E588A5Tiles,
};

const struct GlyphNew GlyTJA_E99DA2 = { /* 面 */
    .next = &GlyTJA_E99787,
    .width = 11,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99DA2Tiles,
};

const struct GlyphNew GlyTJA_E9809A = { /* 通 */
    .next = &GlyTJA_E99DA2,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9809ATiles,
};

const struct GlyphNew GlyTJA_E9878F = { /* 量 */
    .next = &GlyTJA_E9809A,
    .width = 11,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9878FTiles,
};

const struct GlyphNew GlyTJA_E381AD = { /* ね */
    .next = &GlyTJA_E381AC,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E381ADTiles,
};

const struct GlyphNew GlyTJA_E6898D = { /* 才 */
    .next = &GlyTJA_E69E9C,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6898DTiles,
};

const struct GlyphNew GlyTJA_E7AA81 = { /* 突 */
    .next = &GlyTJA_E78E89,
    .width = 11,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7AA81Tiles,
};

const struct GlyphNew GlyTJA_E5B084 = { /* 射 */
    .next = &GlyTJA_E588A5,
    .width = 11,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B084Tiles,
};

const struct GlyphNew GlyTJA_E28792 = { /* ⇒ */
    .next = &GlyTJA_E2978B,
    .width = 11,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E28792Tiles,
};

const struct GlyphNew GlyTJA_E381AE = { /* の */
    .next = &GlyTJA_E381AD,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E381AETiles,
};

const struct GlyphNew GlyTJA_E9A098 = { /* 領 */
    .next = &GlyTJA_E9878F,
    .width = 11,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9A098Tiles,
};

const struct GlyphNew GlyTJA_E58189 = { /* 偉 */
    .next = &GlyTJA_E5B084,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58189Tiles,
};

const struct GlyphNew GlyTJA_E69894 = { /* 昔 */
    .next = &GlyTJA_E6898D,
    .width = 11,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69894Tiles,
};

const struct GlyphNew GlyTJA_E4BD93 = { /* 体 */
    .next = &GlyTJA_E4BD8D,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BD93Tiles,
};

const struct GlyphNew GlyTJA_E7A7B0 = { /* 称 */
    .next = &GlyTJA_E7AA81,
    .width = 11,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A7B0Tiles,
};

const struct GlyphNew GlyTJA_E68DA8 = { /* 捨 */
    .next = &GlyTJA_E69894,
    .width = 11,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68DA8Tiles,
};

const struct GlyphNew GlyTJA_E69585 = { /* 故 */
    .next = &GlyTJA_E68DA8,
    .width = 11,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69585Tiles,
};

const struct GlyphNew GlyTJA_E6AD8C = { /* 歌 */
    .next = &GlyTJA_E69585,
    .width = 11,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6AD8CTiles,
};

const struct GlyphNew GlyTJA_E381AF = { /* は */
    .next = &GlyTJA_E381AE,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E381AFTiles,
};

const struct GlyphNew GlyTJA_E58A9B = { /* 力 */
    .next = &GlyTJA_E58189,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58A9BTiles,
};

const struct GlyphNew GlyTJA_E59BB2 = { /* 囲 */
    .next = &GlyTJA_E58A9B,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59BB2Tiles,
};

const struct GlyphNew GlyTJA_E7ABA0 = { /* 章 */
    .next = &GlyTJA_E7A7B0,
    .width = 11,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7ABA0Tiles,
};

const struct GlyphNew GlyTJA_E6A8A1 = { /* 模 */
    .next = &GlyTJA_E6AD8C,
    .width = 11,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6A8A1Tiles,
};

const struct GlyphNew GlyTJA_E6B2B3 = { /* 河 */
    .next = &GlyTJA_E6A8A1,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B2B3Tiles,
};

const struct GlyphNew GlyTJA_E8B5A6 = { /* 赦 */
    .next = &GlyTJA_E8888E,
    .width = 11,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B5A6Tiles,
};

const struct GlyphNew GlyTJA_E69EAF = { /* 枯 */
    .next = &GlyTJA_E6B2B3,
    .width = 11,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69EAFTiles,
};

const struct GlyphNew GlyTJA_E5B18A = { /* 届 */
    .next = &GlyTJA_E59BB2,
    .width = 11,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B18ATiles,
};

const struct GlyphNew GlyTJA_E7AF84 = { /* 範 */
    .next = &GlyTJA_E7ABA0,
    .width = 11,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7AF84Tiles,
};

const struct GlyphNew GlyTJA_E381B0 = { /* ば */
    .next = &GlyTJA_E381AF,
    .width = 12,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E381B0Tiles,
};

const struct GlyphNew GlyTJA_E79FB3 = { /* 石 */
    .next = &GlyTJA_E7AF84,
    .width = 11,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79FB3Tiles,
};

const struct GlyphNew GlyTJA_E781AB = { /* 火 */
    .next = &GlyTJA_E79FB3,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E781ABTiles,
};

const struct GlyphNew GlyTJA_E5AFBE = { /* 対 */
    .next = &GlyTJA_E5B18A,
    .width = 11,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AFBETiles,
};

const struct GlyphNew GlyTJA_E7B791 = { /* 緑 */
    .next = &GlyTJA_E781AB,
    .width = 11,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B791Tiles,
};

const struct GlyphNew GlyTJA_E7AC91 = { /* 笑 */
    .next = &GlyTJA_E7B791,
    .width = 11,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7AC91Tiles,
};

const struct GlyphNew GlyTJA_E6B996 = { /* 湖 */
    .next = &GlyTJA_E69EAF,
    .width = 11,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B996Tiles,
};

const struct GlyphNew GlyTJA_E381B1 = { /* ぱ */
    .next = &GlyTJA_E381B0,
    .width = 12,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E381B1Tiles,
};

const struct GlyphNew GlyTJA_E5A489 = { /* 変 */
    .next = &GlyTJA_E5AFBE,
    .width = 11,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A489Tiles,
};

const struct GlyphNew GlyTJA_E5A794 = { /* 委 */
    .next = &GlyTJA_E5A489,
    .width = 11,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A794Tiles,
};

const struct GlyphNew GlyTJA_E7A98D = { /* 積 */
    .next = &GlyTJA_E7AC91,
    .width = 11,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A98DTiles,
};

const struct GlyphNew GlyTJA_E6B888 = { /* 済 */
    .next = &GlyTJA_E6B996,
    .width = 12,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B888Tiles,
};

const struct GlyphNew GlyTJA_E88090 = { /* 耐 */
    .next = &GlyTJA_E8B5A6,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E88090Tiles,
};

const struct GlyphNew GlyTJA_E381B2 = { /* ひ */
    .next = &GlyTJA_E381B1,
    .width = 10,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E381B2Tiles,
};

const struct GlyphNew GlyTJA_E781BD = { /* 災 */
    .next = &GlyTJA_E7A98D,
    .width = 10,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E781BDTiles,
};

const struct GlyphNew GlyTJA_E5A881 = { /* 威 */
    .next = &GlyTJA_E5A794,
    .width = 12,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A881Tiles,
};

const struct GlyphNew GlyTJA_E78987 = { /* 片 */
    .next = &GlyTJA_E781BD,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E78987Tiles,
};

const struct GlyphNew GlyTJA_E7B4B9 = { /* 紹 */
    .next = &GlyTJA_E78987,
    .width = 11,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B4B9Tiles,
};

const struct GlyphNew GlyTJA_E381B3 = { /* び */
    .next = &GlyTJA_E381B2,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E381B3Tiles,
};

const struct GlyphNew GlyTJA_E5B8AF = { /* 帯 */
    .next = &GlyTJA_E5A881,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B8AFTiles,
};

const struct GlyphNew GlyTJA_E69E97 = { /* 林 */
    .next = &GlyTJA_E6B888,
    .width = 11,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69E97Tiles,
};

const struct GlyphNew GlyTJA_E7B8BE = { /* 績 */
    .next = &GlyTJA_E7B4B9,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B8BETiles,
};

const struct GlyphNew GlyTJA_E6AF9B = { /* 毛 */
    .next = &GlyTJA_E69E97,
    .width = 11,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6AF9BTiles,
};

const struct GlyphNew GlyTJA_E8B2AB = { /* 貫 */
    .next = &GlyTJA_E88090,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B2ABTiles,
};

const struct GlyphNew GlyTJA_E381B4 = { /* ぴ */
    .next = &GlyTJA_E381B3,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E381B4Tiles,
};

const struct GlyphNew GlyTJA_E88085 = { /* 者 */
    .next = &GlyTJA_E8B2AB,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E88085Tiles,
};

const struct GlyphNew GlyTJA_E5BE85 = { /* 待 */
    .next = &GlyTJA_E5B8AF,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BE85Tiles,
};

const struct GlyphNew GlyTJA_E78C9B = { /* 猛 */
    .next = &GlyTJA_E7B8BE,
    .width = 11,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E78C9BTiles,
};

const struct GlyphNew GlyTJA_E98284 = { /* 還 */
    .next = &GlyTJA_E9A098,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E98284Tiles,
};

const struct GlyphNew GlyTJA_E7B7A8 = { /* 編 */
    .next = &GlyTJA_E78C9B,
    .width = 11,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B7A8Tiles,
};

const struct GlyphNew GlyTJA_E7A8BC = { /* 稼 */
    .next = &GlyTJA_E7B7A8,
    .width = 11,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A8BCTiles,
};

const struct GlyphNew GlyTJA_E381B5 = { /* ふ */
    .next = &GlyTJA_E381B4,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E381B5Tiles,
};

const struct GlyphNew GlyTJA_E8BEBA = { /* 辺 */
    .next = &GlyTJA_E88085,
    .width = 10,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8BEBATiles,
};

const struct GlyphNew GlyTJA_E6848F = { /* 意 */
    .next = &GlyTJA_E6AF9B,
    .width = 11,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6848FTiles,
};

const struct GlyphNew GlyTJA_E8B2AC = { /* 責 */
    .next = &GlyTJA_E8BEBA,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B2ACTiles,
};

const struct GlyphNew GlyTJA_E7A095 = { /* 砕 */
    .next = &GlyTJA_E7A8BC,
    .width = 11,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A095Tiles,
};

const struct GlyphNew GlyTJA_E8AC9D = { /* 謝 */
    .next = &GlyTJA_E8B2AC,
    .width = 11,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8AC9DTiles,
};

const struct GlyphNew GlyTJA_E699A9 = { /* 晩 */
    .next = &GlyTJA_E6848F,
    .width = 11,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E699A9Tiles,
};

const struct GlyphNew GlyTJA_E680A0 = { /* 怠 */
    .next = &GlyTJA_E699A9,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E680A0Tiles,
};

const struct GlyphNew GlyTJA_E381B6 = { /* ぶ */
    .next = &GlyTJA_E381B5,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E381B6Tiles,
};

const struct GlyphNew GlyTJA_E7A0A6 = { /* 砦 */
    .next = &GlyTJA_E7A095,
    .width = 11,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A0A6Tiles,
};

const struct GlyphNew GlyTJA_E99693 = { /* 間 */
    .next = &GlyTJA_E98284,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99693Tiles,
};

const struct GlyphNew GlyTJA_E8B5A4 = { /* 赤 */
    .next = &GlyTJA_E8AC9D,
    .width = 11,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B5A4Tiles,
};

const struct GlyphNew GlyTJA_E8BF94 = { /* 返 */
    .next = &GlyTJA_E8B5A4,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8BF94Tiles,
};

const struct GlyphNew GlyTJA_E8BB8A = { /* 車 */
    .next = &GlyTJA_E8BF94,
    .width = 11,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8BB8ATiles,
};

const struct GlyphNew GlyTJA_E6858B = { /* 態 */
    .next = &GlyTJA_E680A0,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6858BTiles,
};

const struct GlyphNew GlyTJA_E795AA = { /* 番 */
    .next = &GlyTJA_E7A0A6,
    .width = 11,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E795AATiles,
};

const struct GlyphNew GlyTJA_E88AB1 = { /* 花 */
    .next = &GlyTJA_E8BB8A,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E88AB1Tiles,
};

const struct GlyphNew GlyTJA_E5B1AF = { /* 屯 */
    .next = &GlyTJA_E5BE85,
    .width = 11,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B1AFTiles,
};

const struct GlyphNew GlyTJA_E381B7 = { /* ぷ */
    .next = &GlyTJA_E381B6,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E381B7Tiles,
};

const struct GlyphNew GlyTJA_E7A5AD = { /* 祭 */
    .next = &GlyTJA_E795AA,
    .width = 11,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A5ADTiles,
};

const struct GlyphNew GlyTJA_E69893 = { /* 易 */
    .next = &GlyTJA_E6858B,
    .width = 11,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69893Tiles,
};

const struct GlyphNew GlyTJA_E8B7A1 = { /* 跡 */
    .next = &GlyTJA_E88AB1,
    .width = 11,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B7A1Tiles,
};

const struct GlyphNew GlyTJA_E887A8 = { /* 臨 */
    .next = &GlyTJA_E8B7A1,
    .width = 11,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E887A8Tiles,
};

const struct GlyphNew GlyTJA_E8A19D = { /* 衝 */
    .next = &GlyTJA_E887A8,
    .width = 11,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A19DTiles,
};

const struct GlyphNew GlyTJA_E8998E = { /* 虎 */
    .next = &GlyTJA_E8A19D,
    .width = 11,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8998ETiles,
};

const struct GlyphNew GlyTJA_E381B8 = { /* へ */
    .next = &GlyTJA_E381B7,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E381B8Tiles,
};

const struct GlyphNew GlyTJA_E8AA87 = { /* 誇 */
    .next = &GlyTJA_E8998E,
    .width = 11,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8AA87Tiles,
};

const struct GlyphNew GlyTJA_E996A2 = { /* 関 */
    .next = &GlyTJA_E99693,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E996A2Tiles,
};

const struct GlyphNew GlyTJA_E4BEBF = { /* 便 */
    .next = &GlyTJA_E4BD93,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BEBFTiles,
};

const struct GlyphNew GlyTJA_E7A681 = { /* 禁 */
    .next = &GlyTJA_E7A5AD,
    .width = 11,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A681Tiles,
};

const struct GlyphNew GlyTJA_E8BCAA = { /* 輪 */
    .next = &GlyTJA_E8AA87,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8BCAATiles,
};

const struct GlyphNew GlyTJA_E381B9 = { /* べ */
    .next = &GlyTJA_E381B8,
    .width = 10,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E381B9Tiles,
};

const struct GlyphNew GlyTJA_E99AA3 = { /* 隣 */
    .next = &GlyTJA_E996A2,
    .width = 11,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99AA3Tiles,
};

const struct GlyphNew GlyTJA_E982AA = { /* 邪 */
    .next = &GlyTJA_E99AA3,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E982AATiles,
};

const struct GlyphNew GlyTJA_E58B89 = { /* 勉 */
    .next = &GlyTJA_E5B1AF,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58B89Tiles,
};

const struct GlyphNew GlyTJA_E7B4B0 = { /* 細 */
    .next = &GlyTJA_E7A681,
    .width = 11,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B4B0Tiles,
};

const struct GlyphNew GlyTJA_E999A5 = { /* 陥 */
    .next = &GlyTJA_E982AA,
    .width = 11,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E999A5Tiles,
};

const struct GlyphNew GlyTJA_E782BA = { /* 為 */
    .next = &GlyTJA_E7B4B0,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E782BATiles,
};

const struct GlyphNew GlyTJA_E88DB7 = { /* 荷 */
    .next = &GlyTJA_E8BCAA,
    .width = 11,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E88DB7Tiles,
};

const struct GlyphNew GlyTJA_E381BA = { /* ぺ */
    .next = &GlyTJA_E381B9,
    .width = 10,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E381BATiles,
};

const struct GlyphNew GlyTJA_E7AD8B = { /* 筋 */
    .next = &GlyTJA_E782BA,
    .width = 11,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7AD8BTiles,
};

const struct GlyphNew GlyTJA_E58887 = { /* 切 */
    .next = &GlyTJA_E58B89,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58887Tiles,
};

const struct GlyphNew GlyTJA_E89BAE = { /* 蛮 */
    .next = &GlyTJA_E88DB7,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E89BAETiles,
};

const struct GlyphNew GlyTJA_E5809F = { /* 借 */
    .next = &GlyTJA_E58887,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5809FTiles,
};

const struct GlyphNew GlyTJA_E8A8BC = { /* 証 */
    .next = &GlyTJA_E89BAE,
    .width = 11,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A8BCTiles,
};

const struct GlyphNew GlyTJA_E69CA8 = { /* 木 */
    .next = &GlyTJA_E69893,
    .width = 11,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69CA8Tiles,
};

const struct GlyphNew GlyTJA_E7958F = { /* 畏 */
    .next = &GlyTJA_E7AD8B,
    .width = 11,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7958FTiles,
};

const struct GlyphNew GlyTJA_E88FAF = { /* 華 */
    .next = &GlyTJA_E8A8BC,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E88FAFTiles,
};

const struct GlyphNew GlyTJA_E6BB9E = { /* 滞 */
    .next = &GlyTJA_E69CA8,
    .width = 11,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6BB9ETiles,
};

const struct GlyphNew GlyTJA_E381BB = { /* ほ */
    .next = &GlyTJA_E381BA,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E381BBTiles,
};

const struct GlyphNew GlyTJA_E9BB99 = { /* 黙 */
    .next = &GlyTJA_E999A5,
    .width = 11,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9BB99Tiles,
};

const struct GlyphNew GlyTJA_E795B0 = { /* 異 */
    .next = &GlyTJA_E7958F,
    .width = 11,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E795B0Tiles,
};

const struct GlyphNew GlyTJA_E99B87 = { /* 雇 */
    .next = &GlyTJA_E9BB99,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99B87Tiles,
};

const struct GlyphNew GlyTJA_E5BC81 = { /* 弁 */
    .next = &GlyTJA_E5809F,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BC81Tiles,
};

const struct GlyphNew GlyTJA_E9A4A8 = { /* 館 */
    .next = &GlyTJA_E99B87,
    .width = 11,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9A4A8Tiles,
};

const struct GlyphNew GlyTJA_E8A381 = { /* 裁 */
    .next = &GlyTJA_E88FAF,
    .width = 11,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A381Tiles,
};

const struct GlyphNew GlyTJA_E7B78A = { /* 緊 */
    .next = &GlyTJA_E795B0,
    .width = 11,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B78ATiles,
};

const struct GlyphNew GlyTJA_E88F93 = { /* 菓 */
    .next = &GlyTJA_E8A381,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E88F93Tiles,
};

const struct GlyphNew GlyTJA_E381BC = { /* ぼ */
    .next = &GlyTJA_E381BB,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E381BCTiles,
};

const struct GlyphNew GlyTJA_E79BAE = { /* 目 */
    .next = &GlyTJA_E7B78A,
    .width = 10,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79BAETiles,
};

const struct GlyphNew GlyTJA_E7A7BB = { /* 移 */
    .next = &GlyTJA_E79BAE,
    .width = 11,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A7BBTiles,
};

const struct GlyphNew GlyTJA_E68EA5 = { /* 接 */
    .next = &GlyTJA_E6BB9E,
    .width = 11,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68EA5Tiles,
};

const struct GlyphNew GlyTJA_E58D91 = { /* 卑 */
    .next = &GlyTJA_E5BC81,
    .width = 11,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58D91Tiles,
};

const struct GlyphNew GlyTJA_E9A1A7 = { /* 顧 */
    .next = &GlyTJA_E9A4A8,
    .width = 11,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9A1A7Tiles,
};

const struct GlyphNew GlyTJA_E8A9B3 = { /* 詳 */
    .next = &GlyTJA_E88F93,
    .width = 11,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A9B3Tiles,
};

const struct GlyphNew GlyTJA_E381BD = { /* ぽ */
    .next = &GlyTJA_E381BC,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E381BDTiles,
};

const struct GlyphNew GlyTJA_E4BF9D = { /* 保 */
    .next = &GlyTJA_E4BEBF,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BF9DTiles,
};

const struct GlyphNew GlyTJA_E590A6 = { /* 否 */
    .next = &GlyTJA_E58D91,
    .width = 11,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E590A6Tiles,
};

const struct GlyphNew GlyTJA_E99A9B = { /* 際 */
    .next = &GlyTJA_E9A1A7,
    .width = 11,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99A9BTiles,
};

const struct GlyphNew GlyTJA_E8B1A1 = { /* 象 */
    .next = &GlyTJA_E8A9B3,
    .width = 11,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B1A1Tiles,
};

const struct GlyphNew GlyTJA_E381BE = { /* ま */
    .next = &GlyTJA_E381BD,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E381BETiles,
};

const struct GlyphNew GlyTJA_E8B39E = { /* 賞 */
    .next = &GlyTJA_E8B1A1,
    .width = 11,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B39ETiles,
};

const struct GlyphNew GlyTJA_E781BC = { /* 灼 */
    .next = &GlyTJA_E7A7BB,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E781BCTiles,
};

const struct GlyphNew GlyTJA_E6B699 = { /* 涙 */
    .next = &GlyTJA_E68EA5,
    .width = 11,
    .utf_byte_2 = 0xb6,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B699Tiles,
};

const struct GlyphNew GlyTJA_E5A683 = { /* 妃 */
    .next = &GlyTJA_E590A6,
    .width = 11,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A683Tiles,
};

const struct GlyphNew GlyTJA_E4BA94 = { /* 五 */
    .next = &GlyTJA_E4BF9D,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BA94Tiles,
};

const struct GlyphNew GlyTJA_E788AA = { /* 爪 */
    .next = &GlyTJA_E781BC,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E788AATiles,
};

const struct GlyphNew GlyTJA_E68A98 = { /* 折 */
    .next = &GlyTJA_E6B699,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68A98Tiles,
};

const struct GlyphNew GlyTJA_E8A28B = { /* 袋 */
    .next = &GlyTJA_E8B39E,
    .width = 11,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A28BTiles,
};

const struct GlyphNew GlyTJA_E381BF = { /* み */
    .next = &GlyTJA_E381BE,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E381BFTiles,
};

const struct GlyphNew GlyTJA_E5B2B8 = { /* 岸 */
    .next = &GlyTJA_E5A683,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B2B8Tiles,
};

const struct GlyphNew GlyTJA_E788B5 = { /* 爵 */
    .next = &GlyTJA_E788AA,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E788B5Tiles,
};

const struct GlyphNew GlyTJA_E59CA8 = { /* 在 */
    .next = &GlyTJA_E5B2B8,
    .width = 11,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59CA8Tiles,
};

const struct GlyphNew GlyTJA_E8A8AD = { /* 設 */
    .next = &GlyTJA_E8A28B,
    .width = 11,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A8ADTiles,
};

const struct GlyphNew GlyTJA_E9888D = { /* 鈍 */
    .next = &GlyTJA_E99A9B,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9888DTiles,
};

const struct GlyphNew GlyTJA_E8B2B8 = { /* 貸 */
    .next = &GlyTJA_E8A8AD,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B2B8Tiles,
};

const struct GlyphNew GlyTJA_E4BA92 = { /* 互 */
    .next = &GlyTJA_E4BA94,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BA92Tiles,
};

const struct GlyphNew GlyTJA_E38280 = { /* む */
    .next = &GlyTJA_E381BF,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38280Tiles,
};

const struct GlyphNew GlyTJA_E5BDBC = { /* 彼 */
    .next = &GlyTJA_E59CA8,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BDBCTiles,
};

const struct GlyphNew GlyTJA_E98080 = { /* 退 */
    .next = &GlyTJA_E9888D,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E98080Tiles,
};

const struct GlyphNew GlyTJA_E9A19E = { /* 類 */
    .next = &GlyTJA_E98080,
    .width = 11,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9A19ETiles,
};

const struct GlyphNew GlyTJA_E5B7AB = { /* 巫 */
    .next = &GlyTJA_E5BDBC,
    .width = 11,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B7ABTiles,
};

const struct GlyphNew GlyTJA_E69D90 = { /* 材 */
    .next = &GlyTJA_E68A98,
    .width = 11,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69D90Tiles,
};

const struct GlyphNew GlyTJA_E38281 = { /* め */
    .next = &GlyTJA_E38280,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38281Tiles,
};

const struct GlyphNew GlyTJA_E8BF91 = { /* 近 */
    .next = &GlyTJA_E8B2B8,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8BF91Tiles,
};

const struct GlyphNew GlyTJA_E68D95 = { /* 捕 */
    .next = &GlyTJA_E69D90,
    .width = 11,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68D95Tiles,
};

const struct GlyphNew GlyTJA_E682B2 = { /* 悲 */
    .next = &GlyTJA_E68D95,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E682B2Tiles,
};

const struct GlyphNew GlyTJA_E7BDAA = { /* 罪 */
    .next = &GlyTJA_E788B5,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7BDAATiles,
};

const struct GlyphNew GlyTJA_E4BBA4 = { /* 令 */
    .next = &GlyTJA_E4BA92,
    .width = 11,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BBA4Tiles,
};

const struct GlyphNew GlyTJA_E7AF80 = { /* 節 */
    .next = &GlyTJA_E7BDAA,
    .width = 11,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7AF80Tiles,
};

const struct GlyphNew GlyTJA_E688BB = { /* 戻 */
    .next = &GlyTJA_E682B2,
    .width = 12,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E688BBTiles,
};

const struct GlyphNew GlyTJA_E9818E = { /* 過 */
    .next = &GlyTJA_E9A19E,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9818ETiles,
};

const struct GlyphNew GlyTJA_E8A1A3 = { /* 衣 */
    .next = &GlyTJA_E8BF91,
    .width = 11,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A1A3Tiles,
};

const struct GlyphNew GlyTJA_E98788 = { /* 釈 */
    .next = &GlyTJA_E9818E,
    .width = 11,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E98788Tiles,
};

const struct GlyphNew GlyTJA_E38282 = { /* も */
    .next = &GlyTJA_E38281,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38282Tiles,
};

const struct GlyphNew GlyTJA_E58685 = { /* 内 */
    .next = &GlyTJA_E5B7AB,
    .width = 11,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58685Tiles,
};

const struct GlyphNew GlyTJA_E8B2A1 = { /* 財 */
    .next = &GlyTJA_E8A1A3,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B2A1Tiles,
};

const struct GlyphNew GlyTJA_E98791 = { /* 金 */
    .next = &GlyTJA_E98788,
    .width = 11,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E98791Tiles,
};

const struct GlyphNew GlyTJA_E99A8A = { /* 隊 */
    .next = &GlyTJA_E98791,
    .width = 11,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99A8ATiles,
};

const struct GlyphNew GlyTJA_E6ADA9 = { /* 歩 */
    .next = &GlyTJA_E688BB,
    .width = 11,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6ADA9Tiles,
};

const struct GlyphNew GlyTJA_E8AAAC = { /* 説 */
    .next = &GlyTJA_E8B2A1,
    .width = 11,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8AAACTiles,
};

const struct GlyphNew GlyTJA_E68989 = { /* 扉 */
    .next = &GlyTJA_E6ADA9,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68989Tiles,
};

const struct GlyphNew GlyTJA_E38283 = { /* ゃ */
    .next = &GlyTJA_E38282,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38283Tiles,
};

const struct GlyphNew GlyTJA_E88BA5 = { /* 若 */
    .next = &GlyTJA_E8AAAC,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E88BA5Tiles,
};

const struct GlyphNew GlyTJA_E79CBC = { /* 眼 */
    .next = &GlyTJA_E7AF80,
    .width = 11,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79CBCTiles,
};

const struct GlyphNew GlyTJA_E4BD8E = { /* 低 */
    .next = &GlyTJA_E4BBA4,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BD8ETiles,
};

const struct GlyphNew GlyTJA_E8A394 = { /* 裔 */
    .next = &GlyTJA_E88BA5,
    .width = 11,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A394Tiles,
};

const struct GlyphNew GlyTJA_E99A9C = { /* 障 */
    .next = &GlyTJA_E99A8A,
    .width = 11,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99A9CTiles,
};

const struct GlyphNew GlyTJA_E5909F = { /* 吟 */
    .next = &GlyTJA_E58685,
    .width = 11,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5909FTiles,
};

const struct GlyphNew GlyTJA_E99BAA = { /* 雪 */
    .next = &GlyTJA_E99A9C,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99BAATiles,
};

const struct GlyphNew GlyTJA_E4BE8B = { /* 例 */
    .next = &GlyTJA_E4BD8E,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BE8BTiles,
};

const struct GlyphNew GlyTJA_E98195 = { /* 違 */
    .next = &GlyTJA_E99BAA,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E98195Tiles,
};

const struct GlyphNew GlyTJA_E8B2B0 = { /* 貰 */
    .next = &GlyTJA_E8A394,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B2B0Tiles,
};

const struct GlyphNew GlyTJA_E586B4 = { /* 冴 */
    .next = &GlyTJA_E5909F,
    .width = 11,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E586B4Tiles,
};

const struct GlyphNew GlyTJA_E38284 = { /* や */
    .next = &GlyTJA_E38283,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38284Tiles,
};

const struct GlyphNew GlyTJA_E7B5B6 = { /* 絶 */
    .next = &GlyTJA_E79CBC,
    .width = 11,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B5B6Tiles,
};

const struct GlyphNew GlyTJA_E98A80 = { /* 銀 */
    .next = &GlyTJA_E98195,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E98A80Tiles,
};

const struct GlyphNew GlyTJA_E586B7 = { /* 冷 */
    .next = &GlyTJA_E586B4,
    .width = 11,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E586B7Tiles,
};

const struct GlyphNew GlyTJA_E5B2A9 = { /* 岩 */
    .next = &GlyTJA_E586B7,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B2A9Tiles,
};

const struct GlyphNew GlyTJA_E981BA = { /* 遺 */
    .next = &GlyTJA_E98A80,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E981BATiles,
};

const struct GlyphNew GlyTJA_E5958F = { /* 問 */
    .next = &GlyTJA_E5B2A9,
    .width = 11,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5958FTiles,
};

const struct GlyphNew GlyTJA_E8A39C = { /* 補 */
    .next = &GlyTJA_E8B2B0,
    .width = 11,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A39CTiles,
};

const struct GlyphNew GlyTJA_E38285 = { /* ゅ */
    .next = &GlyTJA_E38284,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38285Tiles,
};

const struct GlyphNew GlyTJA_E5BE8C = { /* 後 */
    .next = &GlyTJA_E5958F,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BE8CTiles,
};

const struct GlyphNew GlyTJA_E4B88A = { /* 上 */
    .next = &GlyTJA_E4BE8B,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4B88ATiles,
};

const struct GlyphNew GlyTJA_E4BBA3 = { /* 代 */
    .next = &GlyTJA_E4B88A,
    .width = 11,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BBA3Tiles,
};

const struct GlyphNew GlyTJA_E5BCB1 = { /* 弱 */
    .next = &GlyTJA_E5BE8C,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BCB1Tiles,
};

const struct GlyphNew GlyTJA_E8888C = { /* 舌 */
    .next = &GlyTJA_E8A39C,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8888CTiles,
};

const struct GlyphNew GlyTJA_E4B99D = { /* 九 */
    .next = &GlyTJA_E4BBA3,
    .width = 12,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4B99DTiles,
};

const struct GlyphNew GlyTJA_E581B5 = { /* 偵 */
    .next = &GlyTJA_E5BCB1,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E581B5Tiles,
};

const struct GlyphNew GlyTJA_E58AB1 = { /* 励 */
    .next = &GlyTJA_E581B5,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58AB1Tiles,
};

const struct GlyphNew GlyTJA_E38286 = { /* ゆ */
    .next = &GlyTJA_E38285,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38286Tiles,
};

const struct GlyphNew GlyTJA_E7B48B = { /* 紋 */
    .next = &GlyTJA_E7B5B6,
    .width = 11,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B48BTiles,
};

const struct GlyphNew GlyTJA_E8AC8E = { /* 謎 */
    .next = &GlyTJA_E8888C,
    .width = 11,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8AC8ETiles,
};

const struct GlyphNew GlyTJA_E5BEA1 = { /* 御 */
    .next = &GlyTJA_E58AB1,
    .width = 13,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BEA1Tiles,
};

const struct GlyphNew GlyTJA_E68891 = { /* 我 */
    .next = &GlyTJA_E68989,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68891Tiles,
};

const struct GlyphNew GlyTJA_E58FB0 = { /* 台 */
    .next = &GlyTJA_E5BEA1,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58FB0Tiles,
};

const struct GlyphNew GlyTJA_E4B888 = { /* 丈 */
    .next = &GlyTJA_E4B99D,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4B888Tiles,
};

const struct GlyphNew GlyTJA_E6AF94 = { /* 比 */
    .next = &GlyTJA_E68891,
    .width = 11,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6AF94Tiles,
};

const struct GlyphNew GlyTJA_E38287 = { /* ょ */
    .next = &GlyTJA_E38286,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38287Tiles,
};

const struct GlyphNew GlyTJA_E5A4A7 = { /* 大 */
    .next = &GlyTJA_E58FB0,
    .width = 11,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A4A7Tiles,
};

const struct GlyphNew GlyTJA_E4B8BB = { /* 主 */
    .next = &GlyTJA_E4B888,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4B8BBTiles,
};

const struct GlyphNew GlyTJA_E99680 = { /* 門 */
    .next = &GlyTJA_E981BA,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99680Tiles,
};

const struct GlyphNew GlyTJA_E78999 = { /* 牙 */
    .next = &GlyTJA_E7B48B,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E78999Tiles,
};

const struct GlyphNew GlyTJA_E6829F = { /* 悟 */
    .next = &GlyTJA_E6AF94,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6829FTiles,
};

const struct GlyphNew GlyTJA_E58FA5 = { /* 句 */
    .next = &GlyTJA_E5A4A7,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58FA5Tiles,
};

const struct GlyphNew GlyTJA_E38288 = { /* よ */
    .next = &GlyTJA_E38287,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38288Tiles,
};

const struct GlyphNew GlyTJA_E58F96 = { /* 取 */
    .next = &GlyTJA_E58FA5,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58F96Tiles,
};

const struct GlyphNew GlyTJA_E59F9F = { /* 域 */
    .next = &GlyTJA_E58F96,
    .width = 11,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59F9FTiles,
};

const struct GlyphNew GlyTJA_E58588 = { /* 先 */
    .next = &GlyTJA_E59F9F,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58588Tiles,
};

const struct GlyphNew GlyTJA_E7ACAC = { /* 第 */
    .next = &GlyTJA_E78999,
    .width = 11,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7ACACTiles,
};

const struct GlyphNew GlyTJA_E5A293 = { /* 墓 */
    .next = &GlyTJA_E58588,
    .width = 11,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A293Tiles,
};

const struct GlyphNew GlyTJA_E4B997 = { /* 乗 */
    .next = &GlyTJA_E4B8BB,
    .width = 11,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4B997Tiles,
};

const struct GlyphNew GlyTJA_E794BB = { /* 画 */
    .next = &GlyTJA_E7ACAC,
    .width = 11,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E794BBTiles,
};

const struct GlyphNew GlyTJA_E9A091 = { /* 頑 */
    .next = &GlyTJA_E99680,
    .width = 11,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9A091Tiles,
};

const struct GlyphNew GlyTJA_E38289 = { /* ら */
    .next = &GlyTJA_E38288,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38289Tiles,
};

const struct GlyphNew GlyTJA_E5AE88 = { /* 守 */
    .next = &GlyTJA_E5A293,
    .width = 11,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AE88Tiles,
};

const struct GlyphNew GlyTJA_E58D83 = { /* 千 */
    .next = &GlyTJA_E5AE88,
    .width = 11,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58D83Tiles,
};

const struct GlyphNew GlyTJA_E7A4BC = { /* 礼 */
    .next = &GlyTJA_E794BB,
    .width = 11,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A4BCTiles,
};

const struct GlyphNew GlyTJA_E9A194 = { /* 顔 */
    .next = &GlyTJA_E9A091,
    .width = 11,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9A194Tiles,
};

const struct GlyphNew GlyTJA_E882B2 = { /* 育 */
    .next = &GlyTJA_E8AC8E,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E882B2Tiles,
};

const struct GlyphNew GlyTJA_E58697 = { /* 冗 */
    .next = &GlyTJA_E58D83,
    .width = 11,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58697Tiles,
};

const struct GlyphNew GlyTJA_E592B2 = { /* 咲 */
    .next = &GlyTJA_E58697,
    .width = 11,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E592B2Tiles,
};

const struct GlyphNew GlyTJA_E68595 = { /* 慕 */
    .next = &GlyTJA_E6829F,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68595Tiles,
};

const struct GlyphNew GlyTJA_E3828A = { /* り */
    .next = &GlyTJA_E38289,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E3828ATiles,
};

const struct GlyphNew GlyTJA_E58DA0 = { /* 占 */
    .next = &GlyTJA_E592B2,
    .width = 11,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58DA0Tiles,
};

const struct GlyphNew GlyTJA_E9A198 = { /* 願 */
    .next = &GlyTJA_E9A194,
    .width = 11,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9A198Tiles,
};

const struct GlyphNew GlyTJA_E6898B = { /* 手 */
    .next = &GlyTJA_E68595,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6898BTiles,
};

const struct GlyphNew GlyTJA_E5AE9A = { /* 定 */
    .next = &GlyTJA_E58DA0,
    .width = 11,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AE9ATiles,
};

const struct GlyphNew GlyTJA_E9A18C = { /* 題 */
    .next = &GlyTJA_E9A198,
    .width = 11,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9A18CTiles,
};

const struct GlyphNew GlyTJA_E3828B = { /* る */
    .next = &GlyTJA_E3828A,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E3828BTiles,
};

const struct GlyphNew GlyTJA_E5B89D = { /* 帝 */
    .next = &GlyTJA_E5AE9A,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B89DTiles,
};

const struct GlyphNew GlyTJA_E59F8E = { /* 城 */
    .next = &GlyTJA_E5B89D,
    .width = 11,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59F8ETiles,
};

const struct GlyphNew GlyTJA_E7A798 = { /* 秘 */
    .next = &GlyTJA_E7A4BC,
    .width = 11,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A798Tiles,
};

const struct GlyphNew GlyTJA_E69AAE = { /* 暮 */
    .next = &GlyTJA_E6898B,
    .width = 11,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69AAETiles,
};

const struct GlyphNew GlyTJA_E5AEA3 = { /* 宣 */
    .next = &GlyTJA_E59F8E,
    .width = 11,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AEA3Tiles,
};

const struct GlyphNew GlyTJA_E5A49C = { /* 夜 */
    .next = &GlyTJA_E5AEA3,
    .width = 11,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A49CTiles,
};

const struct GlyphNew GlyTJA_E3828C = { /* れ */
    .next = &GlyTJA_E3828B,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E3828CTiles,
};

const struct GlyphNew GlyTJA_E88BA6 = { /* 苦 */
    .next = &GlyTJA_E882B2,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E88BA6Tiles,
};

const struct GlyphNew GlyTJA_E5A0B4 = { /* 場 */
    .next = &GlyTJA_E5A49C,
    .width = 11,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A0B4Tiles,
};

const struct GlyphNew GlyTJA_E6AF8D = { /* 母 */
    .next = &GlyTJA_E69AAE,
    .width = 11,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6AF8DTiles,
};

const struct GlyphNew GlyTJA_E99AB7 = { /* 隷 */
    .next = &GlyTJA_E9A18C,
    .width = 11,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99AB7Tiles,
};

const struct GlyphNew GlyTJA_E8AA9E = { /* 語 */
    .next = &GlyTJA_E88BA6,
    .width = 11,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8AA9ETiles,
};

const struct GlyphNew GlyTJA_E6AE8A = { /* 殊 */
    .next = &GlyTJA_E6AF8D,
    .width = 11,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6AE8ATiles,
};

const struct GlyphNew GlyTJA_E4B880 = { /* 一 */
    .next = &GlyTJA_E4B997,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4B880Tiles,
};

const struct GlyphNew GlyTJA_E5BA95 = { /* 底 */
    .next = &GlyTJA_E5A0B4,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BA95Tiles,
};

const struct GlyphNew GlyTJA_E5B082 = { /* 専 */
    .next = &GlyTJA_E5BA95,
    .width = 11,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B082Tiles,
};

const struct GlyphNew GlyTJA_E3828D = { /* ろ */
    .next = &GlyTJA_E3828C,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E3828DTiles,
};

const struct GlyphNew GlyTJA_E58DB1 = { /* 危 */
    .next = &GlyTJA_E5B082,
    .width = 11,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58DB1Tiles,
};

const struct GlyphNew GlyTJA_E99B85 = { /* 雅 */
    .next = &GlyTJA_E99AB7,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99B85Tiles,
};

const struct GlyphNew GlyTJA_E78BA9 = { /* 狩 */
    .next = &GlyTJA_E7A798,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E78BA9Tiles,
};

const struct GlyphNew GlyTJA_E8AAA4 = { /* 誤 */
    .next = &GlyTJA_E8AA9E,
    .width = 11,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8AAA4Tiles,
};

const struct GlyphNew GlyTJA_E5BAAD = { /* 庭 */
    .next = &GlyTJA_E58DB1,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BAADTiles,
};

const struct GlyphNew GlyTJA_E58D97 = { /* 南 */
    .next = &GlyTJA_E5BAAD,
    .width = 11,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58D97Tiles,
};

const struct GlyphNew GlyTJA_E5969C = { /* 喜 */
    .next = &GlyTJA_E58D97,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5969CTiles,
};

const struct GlyphNew GlyTJA_E9878E = { /* 野 */
    .next = &GlyTJA_E99B85,
    .width = 11,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9878ETiles,
};

const struct GlyphNew GlyTJA_E5BBB7 = { /* 廷 */
    .next = &GlyTJA_E5969C,
    .width = 11,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BBB7Tiles,
};

const struct GlyphNew GlyTJA_E9A786 = { /* 駆 */
    .next = &GlyTJA_E9878E,
    .width = 11,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9A786Tiles,
};

const struct GlyphNew GlyTJA_E8ADB7 = { /* 護 */
    .next = &GlyTJA_E8AAA4,
    .width = 11,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8ADB7Tiles,
};

const struct GlyphNew GlyTJA_E4BD9C = { /* 作 */
    .next = &GlyTJA_E4B880,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BD9CTiles,
};

const struct GlyphNew GlyTJA_E5B79D = { /* 川 */
    .next = &GlyTJA_E5BBB7,
    .width = 11,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B79DTiles,
};

const struct GlyphNew GlyTJA_E99C8A = { /* 霊 */
    .next = &GlyTJA_E9A786,
    .width = 11,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99C8ATiles,
};

const struct GlyphNew GlyTJA_E5ACA2 = { /* 嬢 */
    .next = &GlyTJA_E5B79D,
    .width = 11,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5ACA2Tiles,
};

const struct GlyphNew GlyTJA_E78FA0 = { /* 珠 */
    .next = &GlyTJA_E78BA9,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E78FA0Tiles,
};

const struct GlyphNew GlyTJA_E3828F = { /* わ */
    .next = &GlyTJA_E3828D,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E3828FTiles,
};

const struct GlyphNew GlyTJA_E688A6 = { /* 戦 */
    .next = &GlyTJA_E6AE8A,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E688A6Tiles,
};

const struct GlyphNew GlyTJA_E5BC9F = { /* 弟 */
    .next = &GlyTJA_E5ACA2,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BC9FTiles,
};

const struct GlyphNew GlyTJA_E7A8AE = { /* 種 */
    .next = &GlyTJA_E78FA0,
    .width = 11,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A8AETiles,
};

const struct GlyphNew GlyTJA_E599A8 = { /* 器 */
    .next = &GlyTJA_E5BC9F,
    .width = 11,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E599A8Tiles,
};

const struct GlyphNew GlyTJA_E8A2AB = { /* 被 */
    .next = &GlyTJA_E8ADB7,
    .width = 11,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A2ABTiles,
};

const struct GlyphNew GlyTJA_E580A3 = { /* 倣 */
    .next = &GlyTJA_E599A8,
    .width = 12,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E580A3Tiles,
};

const struct GlyphNew GlyTJA_E5B8B8 = { /* 常 */
    .next = &GlyTJA_E580A3,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B8B8Tiles,
};

const struct GlyphNew GlyTJA_E980B8 = { /* 逸 */
    .next = &GlyTJA_E99C8A,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E980B8Tiles,
};

const struct GlyphNew GlyTJA_E68385 = { /* 情 */
    .next = &GlyTJA_E688A6,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68385Tiles,
};

const struct GlyphNew GlyTJA_E79FA2 = { /* 矢 */
    .next = &GlyTJA_E7A8AE,
    .width = 11,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79FA2Tiles,
};

const struct GlyphNew GlyTJA_E59FBA = { /* 基 */
    .next = &GlyTJA_E5B8B8,
    .width = 11,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59FBATiles,
};

const struct GlyphNew GlyTJA_E4BB8B = { /* 介 */
    .next = &GlyTJA_E4BD9C,
    .width = 11,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BB8BTiles,
};

const struct GlyphNew GlyTJA_E8BB9F = { /* 軟 */
    .next = &GlyTJA_E8A2AB,
    .width = 11,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8BB9FTiles,
};

const struct GlyphNew GlyTJA_E7A8B2 = { /* 稲 */
    .next = &GlyTJA_E79FA2,
    .width = 11,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A8B2Tiles,
};

const struct GlyphNew GlyTJA_E4BC9A = { /* 会 */
    .next = &GlyTJA_E4BB8B,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BC9ATiles,
};

const struct GlyphNew GlyTJA_E58C85 = { /* 包 */
    .next = &GlyTJA_E59FBA,
    .width = 10,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58C85Tiles,
};

const struct GlyphNew GlyTJA_E99BA3 = { /* 難 */
    .next = &GlyTJA_E980B8,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99BA3Tiles,
};

const struct GlyphNew GlyTJA_E585B7 = { /* 具 */
    .next = &GlyTJA_E58C85,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E585B7Tiles,
};

const struct GlyphNew GlyTJA_E68AB5 = { /* 抵 */
    .next = &GlyTJA_E68385,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68AB5Tiles,
};

const struct GlyphNew GlyTJA_E5A587 = { /* 奇 */
    .next = &GlyTJA_E585B7,
    .width = 11,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A587Tiles,
};

const struct GlyphNew GlyTJA_E38292 = { /* を */
    .next = &GlyTJA_E3828F,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38292Tiles,
};

const struct GlyphNew GlyTJA_E8A7A3 = { /* 解 */
    .next = &GlyTJA_E8BB9F,
    .width = 11,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A7A3Tiles,
};

const struct GlyphNew GlyTJA_E6ADB4 = { /* 歴 */
    .next = &GlyTJA_E68AB5,
    .width = 11,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6ADB4Tiles,
};

const struct GlyphNew GlyTJA_E68A9E = { /* 択 */
    .next = &GlyTJA_E6ADB4,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68A9ETiles,
};

const struct GlyphNew GlyTJA_E5BDB9 = { /* 役 */
    .next = &GlyTJA_E5A587,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BDB9Tiles,
};

const struct GlyphNew GlyTJA_E4BAA4 = { /* 交 */
    .next = &GlyTJA_E4BC9A,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BAA4Tiles,
};

const struct GlyphNew GlyTJA_E69DA1 = { /* 条 */
    .next = &GlyTJA_E68A9E,
    .width = 11,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69DA1Tiles,
};

const struct GlyphNew GlyTJA_E981BF = { /* 避 */
    .next = &GlyTJA_E99BA3,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E981BFTiles,
};

const struct GlyphNew GlyTJA_E6B19D = { /* 汝 */
    .next = &GlyTJA_E69DA1,
    .width = 11,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B19DTiles,
};

const struct GlyphNew GlyTJA_E98592 = { /* 酒 */
    .next = &GlyTJA_E981BF,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E98592Tiles,
};

const struct GlyphNew GlyTJA_E59186 = { /* 呆 */
    .next = &GlyTJA_E5BDB9,
    .width = 11,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59186Tiles,
};

const struct GlyphNew GlyTJA_E38293 = { /* ん */
    .next = &GlyTJA_E38292,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38293Tiles,
};

const struct GlyphNew GlyTJA_E69D96 = { /* 杖 */
    .next = &GlyTJA_E6B19D,
    .width = 11,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69D96Tiles,
};

const struct GlyphNew GlyTJA_E59B9E = { /* 回 */
    .next = &GlyTJA_E59186,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59B9ETiles,
};

const struct GlyphNew GlyTJA_E99D9E = { /* 非 */
    .next = &GlyTJA_E98592,
    .width = 11,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99D9ETiles,
};

const struct GlyphNew GlyTJA_E5A0B1 = { /* 報 */
    .next = &GlyTJA_E59B9E,
    .width = 11,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A0B1Tiles,
};

const struct GlyphNew GlyTJA_E7B484 = { /* 約 */
    .next = &GlyTJA_E7A8B2,
    .width = 11,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B484Tiles,
};

const struct GlyphNew GlyTJA_E68B93 = { /* 拓 */
    .next = &GlyTJA_E69D96,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68B93Tiles,
};

const struct GlyphNew GlyTJA_E5AF84 = { /* 寄 */
    .next = &GlyTJA_E5A0B1,
    .width = 11,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AF84Tiles,
};

const struct GlyphNew GlyTJA_E9A696 = { /* 首 */
    .next = &GlyTJA_E99D9E,
    .width = 11,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9A696Tiles,
};

const struct GlyphNew GlyTJA_E4BA8C = { /* 二 */
    .next = &GlyTJA_E4BAA4,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BA8CTiles,
};

const struct GlyphNew GlyTJA_E9A39B = { /* 飛 */
    .next = &GlyTJA_E9A696,
    .width = 11,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9A39BTiles,
};

const struct GlyphNew GlyTJA_E4BEAF = { /* 侯 */
    .next = &GlyTJA_E4BA8C,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BEAFTiles,
};

const struct GlyphNew GlyTJA_E58AA3 = { /* 劣 */
    .next = &GlyTJA_E5AF84,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58AA3Tiles,
};

const struct GlyphNew GlyTJA_E896AC = { /* 薬 */
    .next = &GlyTJA_E8A7A3,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E896ACTiles,
};

const struct GlyphNew GlyTJA_E78AB6 = { /* 状 */
    .next = &GlyTJA_E7B484,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E78AB6Tiles,
};

const struct GlyphNew GlyTJA_E5AE9D = { /* 宝 */
    .next = &GlyTJA_E58AA3,
    .width = 11,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AE9DTiles,
};

const struct GlyphNew GlyTJA_E58F97 = { /* 受 */
    .next = &GlyTJA_E5AE9D,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58F97Tiles,
};

const struct GlyphNew GlyTJA_E7A9BA = { /* 空 */
    .next = &GlyTJA_E78AB6,
    .width = 11,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A9BATiles,
};

const struct GlyphNew GlyTJA_E5A38A = { /* 壊 */
    .next = &GlyTJA_E58F97,
    .width = 11,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A38ATiles,
};

const struct GlyphNew GlyTJA_E58DB0 = { /* 印 */
    .next = &GlyTJA_E5A38A,
    .width = 11,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58DB0Tiles,
};

const struct GlyphNew GlyTJA_E5B88C = { /* 希 */
    .next = &GlyTJA_E58DB0,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B88CTiles,
};

const struct GlyphNew GlyTJA_E8A8B3 = { /* 訳 */
    .next = &GlyTJA_E896AC,
    .width = 12,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A8B3Tiles,
};

const struct GlyphNew GlyTJA_E78388 = { /* 烈 */
    .next = &GlyTJA_E7A9BA,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E78388Tiles,
};

const struct GlyphNew GlyTJA_E58099 = { /* 候 */
    .next = &GlyTJA_E5B88C,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58099Tiles,
};

const struct GlyphNew GlyTJA_E6B585 = { /* 浅 */
    .next = &GlyTJA_E68B93,
    .width = 11,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B585Tiles,
};

const struct GlyphNew GlyTJA_E591AA = { /* 呪 */
    .next = &GlyTJA_E58099,
    .width = 11,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E591AATiles,
};

const struct GlyphNew GlyTJA_E8A382 = { /* 裂 */
    .next = &GlyTJA_E8A8B3,
    .width = 11,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A382Tiles,
};

const struct GlyphNew GlyTJA_E8BA8D = { /* 躍 */
    .next = &GlyTJA_E8A382,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8BA8DTiles,
};

const struct GlyphNew GlyTJA_E581B6 = { /* 偶 */
    .next = &GlyTJA_E591AA,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E581B6Tiles,
};

const struct GlyphNew GlyTJA_E5B9BE = { /* 幾 */
    .next = &GlyTJA_E581B6,
    .width = 11,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B9BETiles,
};

const struct GlyphNew GlyTJA_E7AD96 = { /* 策 */
    .next = &GlyTJA_E78388,
    .width = 11,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7AD96Tiles,
};

const struct GlyphNew GlyTJA_E58299 = { /* 備 */
    .next = &GlyTJA_E5B9BE,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58299Tiles,
};

const struct GlyphNew GlyTJA_E58589 = { /* 光 */
    .next = &GlyTJA_E58299,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58589Tiles,
};

const struct GlyphNew GlyTJA_E593A1 = { /* 員 */
    .next = &GlyTJA_E58589,
    .width = 11,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E593A1Tiles,
};

const struct GlyphNew GlyTJA_E8A897 = { /* 託 */
    .next = &GlyTJA_E8BA8D,
    .width = 11,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A897Tiles,
};

const struct GlyphNew GlyTJA_E5BFAB = { /* 快 */
    .next = &GlyTJA_E593A1,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BFABTiles,
};

const struct GlyphNew GlyTJA_E69F93 = { /* 染 */
    .next = &GlyTJA_E6B585,
    .width = 11,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69F93Tiles,
};

const struct GlyphNew GlyTJA_E58C82 = { /* 匂 */
    .next = &GlyTJA_E5BFAB,
    .width = 11,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58C82Tiles,
};

const struct GlyphNew GlyTJA_E585AC = { /* 公 */
    .next = &GlyTJA_E58C82,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E585ACTiles,
};

const struct GlyphNew GlyTJA_E68FAE = { /* 揮 */
    .next = &GlyTJA_E69F93,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68FAETiles,
};

const struct GlyphNew GlyTJA_E6818B = { /* 恋 */
    .next = &GlyTJA_E68FAE,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6818BTiles,
};

const struct GlyphNew GlyTJA_E5B4A9 = { /* 崩 */
    .next = &GlyTJA_E585AC,
    .width = 11,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B4A9Tiles,
};

const struct GlyphNew GlyTJA_E68E88 = { /* 授 */
    .next = &GlyTJA_E6818B,
    .width = 12,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68E88Tiles,
};

const struct GlyphNew GlyTJA_E680AA = { /* 怪 */
    .next = &GlyTJA_E68E88,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E680AATiles,
};

const struct GlyphNew GlyTJA_E59BA0 = { /* 因 */
    .next = &GlyTJA_E5B4A9,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59BA0Tiles,
};

const struct GlyphNew GlyTJA_E7A88B = { /* 程 */
    .next = &GlyTJA_E7AD96,
    .width = 11,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A88BTiles,
};

const struct GlyphNew GlyTJA_E98187 = { /* 遇 */
    .next = &GlyTJA_E9A39B,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E98187Tiles,
};

const struct GlyphNew GlyTJA_E68294 = { /* 悔 */
    .next = &GlyTJA_E680AA,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68294Tiles,
};

const struct GlyphNew GlyTJA_E88289 = { /* 肉 */
    .next = &GlyTJA_E8A897,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E88289Tiles,
};

const struct GlyphNew GlyTJA_E58A9F = { /* 功 */
    .next = &GlyTJA_E59BA0,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58A9FTiles,
};

const struct GlyphNew GlyTJA_E5BEAE = { /* 微 */
    .next = &GlyTJA_E58A9F,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BEAETiles,
};

const struct GlyphNew GlyTJA_E68690 = { /* 憐 */
    .next = &GlyTJA_E68294,
    .width = 11,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68690Tiles,
};

const struct GlyphNew GlyTJA_E7B7A0 = { /* 締 */
    .next = &GlyTJA_E7A88B,
    .width = 11,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B7A0Tiles,
};

const struct GlyphNew GlyTJA_E58AB9 = { /* 効 */
    .next = &GlyTJA_E5BEAE,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58AB9Tiles,
};

const struct GlyphNew GlyTJA_E5BC95 = { /* 引 */
    .next = &GlyTJA_E58AB9,
    .width = 10,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BC95Tiles,
};

const struct GlyphNew GlyTJA_E69797 = { /* 旗 */
    .next = &GlyTJA_E68690,
    .width = 11,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69797Tiles,
};

const struct GlyphNew GlyTJA_E68AB1 = { /* 抱 */
    .next = &GlyTJA_E69797,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68AB1Tiles,
};

const struct GlyphNew GlyTJA_E6978B = { /* 旋 */
    .next = &GlyTJA_E68AB1,
    .width = 11,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6978BTiles,
};

const struct GlyphNew GlyTJA_E9A3B2 = { /* 飲 */
    .next = &GlyTJA_E98187,
    .width = 11,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9A3B2Tiles,
};

const struct GlyphNew GlyTJA_E68489 = { /* 愉 */
    .next = &GlyTJA_E6978B,
    .width = 11,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68489Tiles,
};

const struct GlyphNew GlyTJA_E68790 = { /* 懐 */
    .next = &GlyTJA_E68489,
    .width = 11,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68790Tiles,
};

const struct GlyphNew GlyTJA_E697A5 = { /* 日 */
    .next = &GlyTJA_E68790,
    .width = 10,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E697A5Tiles,
};

const struct GlyphNew GlyTJA_E694BE = { /* 放 */
    .next = &GlyTJA_E697A5,
    .width = 11,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E694BETiles,
};

const struct GlyphNew GlyTJA_E69C9F = { /* 期 */
    .next = &GlyTJA_E694BE,
    .width = 11,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69C9FTiles,
};

const struct GlyphNew GlyTJA_E59B9A = { /* 囚 */
    .next = &GlyTJA_E5BC95,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59B9ATiles,
};

const struct GlyphNew GlyTJA_E58E9A = { /* 厚 */
    .next = &GlyTJA_E59B9A,
    .width = 11,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58E9ATiles,
};

const struct GlyphNew GlyTJA_E68892 = { /* 戒 */
    .next = &GlyTJA_E69C9F,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68892Tiles,
};

const struct GlyphNew GlyTJA_E696B9 = { /* 方 */
    .next = &GlyTJA_E68892,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E696B9Tiles,
};

const struct GlyphNew GlyTJA_E68B90 = { /* 拐 */
    .next = &GlyTJA_E696B9,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68B90Tiles,
};

const struct GlyphNew GlyTJA_E58FA3 = { /* 口 */
    .next = &GlyTJA_E58E9A,
    .width = 10,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58FA3Tiles,
};

const struct GlyphNew GlyTJA_E6B2B9 = { /* 油 */
    .next = &GlyTJA_E68B90,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B2B9Tiles,
};

const struct GlyphNew GlyTJA_E7B7B4 = { /* 練 */
    .next = &GlyTJA_E7B7A0,
    .width = 11,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B7B4Tiles,
};

const struct GlyphNew GlyTJA_E5868A = { /* 冊 */
    .next = &GlyTJA_E58FA3,
    .width = 11,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5868ATiles,
};

const struct GlyphNew GlyTJA_E58F8E = { /* 収 */
    .next = &GlyTJA_E5868A,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58F8ETiles,
};

const struct GlyphNew GlyTJA_E4B9B3 = { /* 乳 */
    .next = &GlyTJA_E4BEAF,
    .width = 11,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4B9B3Tiles,
};

const struct GlyphNew GlyTJA_E585A5 = { /* 入 */
    .next = &GlyTJA_E58F8E,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E585A5Tiles,
};

const struct GlyphNew GlyTJA_E59091 = { /* 向 */
    .next = &GlyTJA_E585A5,
    .width = 11,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59091Tiles,
};

const struct GlyphNew GlyTJA_E7BE8E = { /* 美 */
    .next = &GlyTJA_E7B7B4,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7BE8ETiles,
};

const struct GlyphNew GlyTJA_E5B188 = { /* 屈 */
    .next = &GlyTJA_E59091,
    .width = 11,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B188Tiles,
};

const struct GlyphNew GlyTJA_E694B9 = { /* 改 */
    .next = &GlyTJA_E6B2B9,
    .width = 11,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E694B9Tiles,
};

const struct GlyphNew GlyTJA_E7B79A = { /* 線 */
    .next = &GlyTJA_E7BE8E,
    .width = 11,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B79ATiles,
};

const struct GlyphNew GlyTJA_E591A8 = { /* 周 */
    .next = &GlyTJA_E5B188,
    .width = 11,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E591A8Tiles,
};

const struct GlyphNew GlyTJA_E9A3BE = { /* 飾 */
    .next = &GlyTJA_E9A3B2,
    .width = 11,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9A3BETiles,
};

const struct GlyphNew GlyTJA_3D = { /* = */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_3DTiles,
};

const struct GlyphNew GlyTJA_E5A682 = { /* 如 */
    .next = &GlyTJA_E591A8,
    .width = 11,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A682Tiles,
};

const struct GlyphNew GlyTJA_E9BCBB = { /* 鼻 */
    .next = &GlyTJA_E9A3BE,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9BCBBTiles,
};

const struct GlyphNew GlyTJA_E68BB6 = { /* 拶 */
    .next = &GlyTJA_E694B9,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68BB6Tiles,
};

const struct GlyphNew GlyTJA_E59689 = { /* 喉 */
    .next = &GlyTJA_E5A682,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59689Tiles,
};

const struct GlyphNew GlyTJA_E98CAC = { /* 錬 */
    .next = &GlyTJA_E9BCBB,
    .width = 11,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E98CACTiles,
};

const struct GlyphNew GlyTJA_E58CB9 = { /* 匹 */
    .next = &GlyTJA_E59689,
    .width = 11,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58CB9Tiles,
};

const struct GlyphNew GlyTJA_E688AE = { /* 戮 */
    .next = &GlyTJA_E68BB6,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E688AETiles,
};

const struct GlyphNew GlyTJA_E68BBE = { /* 拾 */
    .next = &GlyTJA_E688AE,
    .width = 12,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68BBETiles,
};

const struct GlyphNew GlyTJA_E8A9AE = { /* 詮 */
    .next = &GlyTJA_E88289,
    .width = 12,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A9AETiles,
};

const struct GlyphNew GlyTJA_E78289 = { /* 炉 */
    .next = &GlyTJA_E7B79A,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E78289Tiles,
};

const struct GlyphNew GlyTJA_E6BFA1 = { /* 濡 */
    .next = &GlyTJA_E68BBE,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6BFA1Tiles,
};

const struct GlyphNew GlyTJA_E8B8AA = { /* 踪 */
    .next = &GlyTJA_E8A9AE,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B8AATiles,
};

const struct GlyphNew GlyTJA_E5B7A5 = { /* 工 */
    .next = &GlyTJA_E58CB9,
    .width = 11,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B7A5Tiles,
};

const struct GlyphNew GlyTJA_E7A880 = { /* 稀 */
    .next = &GlyTJA_E78289,
    .width = 11,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A880Tiles,
};

const struct GlyphNew GlyTJA_E5B9BD = { /* 幽 */
    .next = &GlyTJA_E5B7A5,
    .width = 11,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B9BDTiles,
};

const struct GlyphNew GlyTJA_E99CB2 = { /* 露 */
    .next = &GlyTJA_E98CAC,
    .width = 11,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99CB2Tiles,
};

const struct GlyphNew GlyTJA_E8BF82 = { /* 迂 */
    .next = &GlyTJA_E8B8AA,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8BF82Tiles,
};

const struct GlyphNew GlyTJA_E682A0 = { /* 悠 */
    .next = &GlyTJA_E6BFA1,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E682A0Tiles,
};

const struct GlyphNew GlyTJA_E8A492 = { /* 褒 */
    .next = &GlyTJA_E8BF82,
    .width = 11,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A492Tiles,
};

const struct GlyphNew GlyTJA_E7AC9B = { /* 笛 */
    .next = &GlyTJA_E7A880,
    .width = 11,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7AC9BTiles,
};

const struct GlyphNew GlyTJA_E5AFA7 = { /* 寧 */
    .next = &GlyTJA_E5B9BD,
    .width = 11,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AFA7Tiles,
};

const struct GlyphNew GlyTJA_E68682 = { /* 憂 */
    .next = &GlyTJA_E682A0,
    .width = 11,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68682Tiles,
};

const struct GlyphNew GlyTJA_E7B9B0 = { /* 繰 */
    .next = &GlyTJA_E7AC9B,
    .width = 11,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B9B0Tiles,
};

const struct GlyphNew GlyTJA_E593AE = { /* 哮 */
    .next = &GlyTJA_E5AFA7,
    .width = 11,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E593AETiles,
};

const struct GlyphNew GlyTJA_E887AD = { /* 臭 */
    .next = &GlyTJA_E8A492,
    .width = 10,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E887ADTiles,
};

const struct GlyphNew GlyTJA_E4BCB8 = { /* 伸 */
    .next = &GlyTJA_E4B9B3,
    .width = 12,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BCB8Tiles,
};

const struct GlyphNew GlyTJA_E6BABA = { /* 溺 */
    .next = &GlyTJA_E68682,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6BABATiles,
};

const struct GlyphNew GlyTJA_E5BC84 = { /* 弄 */
    .next = &GlyTJA_E593AE,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BC84Tiles,
};

const struct GlyphNew GlyTJA_E6B9A7 = { /* 湧 */
    .next = &GlyTJA_E6BABA,
    .width = 11,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B9A7Tiles,
};

const struct GlyphNew GlyTJA_E9AEAE = { /* 鮮 */
    .next = &GlyTJA_E99CB2,
    .width = 12,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9AEAETiles,
};

const struct GlyphNew GlyTJA_E291AE = { /* ⑮ */
    .next = &GlyTJA_E28792,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E291AETiles,
};

const struct GlyphNew GlyTJA_E8A186 = { /* 衆 */
    .next = &GlyTJA_E887AD,
    .width = 11,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A186Tiles,
};

const struct GlyphNew GlyTJA_E291AF = { /* ⑯ */
    .next = &GlyTJA_E291AE,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E291AFTiles,
};

const struct GlyphNew GlyTJA_E78CB6 = { /* 猶 */
    .next = &GlyTJA_E7B9B0,
    .width = 11,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E78CB6Tiles,
};

const struct GlyphNew GlyTJA_E291B0 = { /* ⑰ */
    .next = &GlyTJA_E291AF,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E291B0Tiles,
};

const struct GlyphNew GlyTJA_E6858C = { /* 慌 */
    .next = &GlyTJA_E6B9A7,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6858CTiles,
};

const struct GlyphNew GlyTJA_E6B8A6 = { /* 渦 */
    .next = &GlyTJA_E6858C,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B8A6Tiles,
};

const struct GlyphNew GlyTJA_E9A3A2 = { /* 飢 */
    .next = &GlyTJA_E9AEAE,
    .width = 11,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9A3A2Tiles,
};

const struct GlyphNew GlyTJA_E5AFA9 = { /* 審 */
    .next = &GlyTJA_E5BC84,
    .width = 11,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AFA9Tiles,
};

const struct GlyphNew GlyTJA_E59898 = { /* 嘘 */
    .next = &GlyTJA_E5AFA9,
    .width = 11,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59898Tiles,
};

const struct GlyphNew GlyTJA_E4B98F = { /* 乏 */
    .next = &GlyTJA_E4BCB8,
    .width = 10,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4B98FTiles,
};

const struct GlyphNew GlyTJA_E5849A = { /* 儚 */
    .next = &GlyTJA_E59898,
    .width = 11,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5849ATiles,
};

const struct GlyphNew GlyTJA_E5828D = { /* 傍 */
    .next = &GlyTJA_E5849A,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5828DTiles,
};

const struct GlyphNew GlyTJA_E285A0 = { /* Ⅰ */
    .next = &GlyTJA_E291B0,
    .width = 7,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E285A0Tiles,
};

const struct GlyphNew GlyTJA_E581BD = { /* 偽 */
    .next = &GlyTJA_E5828D,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E581BDTiles,
};

const struct GlyphNew GlyTJA_E697A6 = { /* 旦 */
    .next = &GlyTJA_E6B8A6,
    .width = 11,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E697A6Tiles,
};

const struct GlyphNew GlyTJA_E285A1 = { /* Ⅱ */
    .next = &GlyTJA_E285A0,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E285A1Tiles,
};

const struct GlyphNew GlyTJA_E285A2 = { /* Ⅲ */
    .next = &GlyTJA_E285A1,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E285A2Tiles,
};

const struct GlyphNew GlyTJA_E5A6A8 = { /* 妨 */
    .next = &GlyTJA_E581BD,
    .width = 11,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A6A8Tiles,
};

const struct GlyphNew GlyTJA_E285A3 = { /* Ⅳ */
    .next = &GlyTJA_E285A2,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E285A3Tiles,
};

const struct GlyphNew GlyTJA_E8BA99 = { /* 躙 */
    .next = &GlyTJA_E8A186,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8BA99Tiles,
};

const struct GlyphNew GlyTJA_E285A4 = { /* Ⅴ */
    .next = &GlyTJA_E285A3,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E285A4Tiles,
};

const struct GlyphNew GlyTJA_E6B7BB = { /* 添 */
    .next = &GlyTJA_E697A6,
    .width = 11,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B7BBTiles,
};

const struct GlyphNew GlyTJA_E7B6BA = { /* 綺 */
    .next = &GlyTJA_E78CB6,
    .width = 11,
    .utf_byte_2 = 0xb6,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B6BATiles,
};

const struct GlyphNew GlyTJA_E688AF = { /* 戯 */
    .next = &GlyTJA_E6B7BB,
    .width = 12,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E688AFTiles,
};

const struct GlyphNew GlyTJA_E6BF83 = { /* 濃 */
    .next = &GlyTJA_E688AF,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6BF83Tiles,
};

const struct GlyphNew GlyTJA_E6B5B8 = { /* 浸 */
    .next = &GlyTJA_E6BF83,
    .width = 11,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B5B8Tiles,
};

const struct GlyphNew GlyTJA_E9AAB8 = { /* 骸 */
    .next = &GlyTJA_E9A3A2,
    .width = 11,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9AAB8Tiles,
};

const struct GlyphNew GlyTJA_E59982 = { /* 噂 */
    .next = &GlyTJA_E5A6A8,
    .width = 11,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59982Tiles,
};

const struct GlyphNew GlyTJA_E884B3 = { /* 脳 */
    .next = &GlyTJA_E8BA99,
    .width = 11,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E884B3Tiles,
};

const struct GlyphNew GlyTJA_E88386 = { /* 胆 */
    .next = &GlyTJA_E884B3,
    .width = 12,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E88386Tiles,
};

const struct GlyphNew GlyTJA_E69F94 = { /* 柔 */
    .next = &GlyTJA_E6B5B8,
    .width = 11,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69F94Tiles,
};

const struct GlyphNew GlyTJA_E68F8F = { /* 描 */
    .next = &GlyTJA_E69F94,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68F8FTiles,
};

const struct GlyphNew GlyTJA_E58692 = { /* 冒 */
    .next = &GlyTJA_E59982,
    .width = 11,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58692Tiles,
};

const struct GlyphNew GlyTJA_E98D9B = { /* 鍛 */
    .next = &GlyTJA_E9AAB8,
    .width = 11,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E98D9BTiles,
};

const struct GlyphNew GlyTJA_E78DA3 = { /* 獣 */
    .next = &GlyTJA_E7B6BA,
    .width = 11,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E78DA3Tiles,
};

const struct GlyphNew GlyTJA_E6ADAA = { /* 歪 */
    .next = &GlyTJA_E68F8F,
    .width = 11,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6ADAATiles,
};

const struct GlyphNew GlyTJA_E88AAF = { /* 芯 */
    .next = &GlyTJA_E88386,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E88AAFTiles,
};

const struct GlyphNew GlyTJA_E7A1AC = { /* 硬 */
    .next = &GlyTJA_E78DA3,
    .width = 11,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A1ACTiles,
};

const struct GlyphNew GlyTJA_E5A696 = { /* 妖 */
    .next = &GlyTJA_E58692,
    .width = 11,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A696Tiles,
};

const struct GlyphNew GlyTJA_E8B28C = { /* 貌 */
    .next = &GlyTJA_E88AAF,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B28CTiles,
};

const struct GlyphNew GlyTJA_E4BCBA = { /* 伺 */
    .next = &GlyTJA_E4B98F,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BCBATiles,
};

const struct GlyphNew GlyTJA_E59090 = { /* 吐 */
    .next = &GlyTJA_E5A696,
    .width = 11,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59090Tiles,
};

const struct GlyphNew GlyTJA_E5BDB7 = { /* 彷 */
    .next = &GlyTJA_E59090,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BDB7Tiles,
};

const struct GlyphNew GlyTJA_E28099 = { /* ’ */
    .next = &GlyTJA_E285A4,
    .width = 5,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E28099Tiles,
};

const struct GlyphNew GlyTJA_E2809C = { /* “ */
    .next = &GlyTJA_E28099,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E2809CTiles,
};

const struct GlyphNew GlyTJA_E2809D = { /* ” */
    .next = &GlyTJA_E2809C,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E2809DTiles,
};

const struct GlyphNew GlyTJA_E588BA = { /* 刺 */
    .next = &GlyTJA_E5BDB7,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E588BATiles,
};

const struct GlyphNew GlyTJA_E9B7B2 = { /* 鷲 */
    .next = &GlyTJA_E98D9B,
    .width = 11,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9B7B2Tiles,
};

const struct GlyphNew GlyTJA_E5A197 = { /* 塗 */
    .next = &GlyTJA_E588BA,
    .width = 11,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A197Tiles,
};

const struct GlyphNew GlyTJA_E58691 = { /* 冑 */
    .next = &GlyTJA_E5A197,
    .width = 11,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58691Tiles,
};

const struct GlyphNew GlyTJA_E8A8B4 = { /* 訴 */
    .next = &GlyTJA_E8B28C,
    .width = 11,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A8B4Tiles,
};

const struct GlyphNew GlyTJA_E99C87 = { /* 震 */
    .next = &GlyTJA_E9B7B2,
    .width = 11,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99C87Tiles,
};

const struct GlyphNew GlyTJA_E59785 = { /* 嗅 */
    .next = &GlyTJA_E58691,
    .width = 11,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59785Tiles,
};

const struct GlyphNew GlyTJA_E8A9B0 = { /* 詰 */
    .next = &GlyTJA_E8A8B4,
    .width = 11,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A9B0Tiles,
};

const struct GlyphNew GlyTJA_E58395 = { /* 僕 */
    .next = &GlyTJA_E59785,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58395Tiles,
};

const struct GlyphNew GlyTJA_E8A9AB = { /* 詫 */
    .next = &GlyTJA_E8A9B0,
    .width = 11,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A9ABTiles,
};

const struct GlyphNew GlyTJA_E7A8BD = { /* 稽 */
    .next = &GlyTJA_E7A1AC,
    .width = 11,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A8BDTiles,
};

const struct GlyphNew GlyTJA_E8B2A7 = { /* 貧 */
    .next = &GlyTJA_E8A9AB,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B2A7Tiles,
};

const struct GlyphNew GlyTJA_E7A9AB = { /* 穫 */
    .next = &GlyTJA_E7A8BD,
    .width = 11,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A9ABTiles,
};

const struct GlyphNew GlyTJA_E799BB = { /* 登 */
    .next = &GlyTJA_E7A9AB,
    .width = 11,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E799BBTiles,
};

const struct GlyphNew GlyTJA_E5A1B5 = { /* 塵 */
    .next = &GlyTJA_E58395,
    .width = 11,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A1B5Tiles,
};

const struct GlyphNew GlyTJA_E8B3AD = { /* 賭 */
    .next = &GlyTJA_E8B2A7,
    .width = 11,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B3ADTiles,
};

const struct GlyphNew GlyTJA_E5B08B = { /* 尋 */
    .next = &GlyTJA_E5A1B5,
    .width = 11,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B08BTiles,
};

const struct GlyphNew GlyTJA_E8BFB0 = { /* 述 */
    .next = &GlyTJA_E8B3AD,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8BFB0Tiles,
};

const struct GlyphNew GlyTJA_E7B98B = { /* 繋 */
    .next = &GlyTJA_E799BB,
    .width = 11,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B98BTiles,
};

const struct GlyphNew GlyTJA_E699BA = { /* 智 */
    .next = &GlyTJA_E6ADAA,
    .width = 11,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E699BATiles,
};

const struct GlyphNew GlyTJA_E5B18D = { /* 屍 */
    .next = &GlyTJA_E5B08B,
    .width = 11,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B18DTiles,
};

const struct GlyphNew GlyTJA_E6AEB2 = { /* 殲 */
    .next = &GlyTJA_E699BA,
    .width = 11,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6AEB2Tiles,
};

const struct GlyphNew GlyTJA_E5BEA8 = { /* 徨 */
    .next = &GlyTJA_E5B18D,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BEA8Tiles,
};

const struct GlyphNew GlyTJA_E4B898 = { /* 丘 */
    .next = &GlyTJA_E4BCBA,
    .width = 10,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4B898Tiles,
};

const struct GlyphNew GlyTJA_E79EAC = { /* 瞬 */
    .next = &GlyTJA_E7B98B,
    .width = 12,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79EACTiles,
};

const struct GlyphNew GlyTJA_E8BF85 = { /* 迅 */
    .next = &GlyTJA_E8BFB0,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8BF85Tiles,
};

const struct GlyphNew GlyTJA_E38090 = { /* 【 */
    .next = &GlyTJA_E38293,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38090Tiles,
};

const struct GlyphNew GlyTJA_E58F8A = { /* 及 */
    .next = &GlyTJA_E5BEA8,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58F8ATiles,
};

const struct GlyphNew GlyTJA_E8AC81 = { /* 謁 */
    .next = &GlyTJA_E8BF85,
    .width = 11,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8AC81Tiles,
};

const struct GlyphNew GlyTJA_E9A6B3 = { /* 馳 */
    .next = &GlyTJA_E99C87,
    .width = 11,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9A6B3Tiles,
};

const struct GlyphNew GlyTJA_E981A5 = { /* 遥 */
    .next = &GlyTJA_E9A6B3,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E981A5Tiles,
};

const struct GlyphNew GlyTJA_E38091 = { /* 】 */
    .next = &GlyTJA_E38090,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E38091Tiles,
};

const struct GlyphNew GlyTJA_E5A594 = { /* 奔 */
    .next = &GlyTJA_E58F8A,
    .width = 11,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A594Tiles,
};

const struct GlyphNew GlyTJA_EFBC8D = { /* － */
    .next = &GlyTJA_EFBD99,
    .width = 10,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBC8DTiles,
};

const struct GlyphNew GlyTJA_E68A91 = { /* 抑 */
    .next = &GlyTJA_E6AEB2,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68A91Tiles,
};

const struct GlyphNew GlyTJA_E598B2 = { /* 嘲 */
    .next = &GlyTJA_E5A594,
    .width = 12,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E598B2Tiles,
};

const struct GlyphNew GlyTJA_E69CBD = { /* 朽 */
    .next = &GlyTJA_E68A91,
    .width = 11,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69CBDTiles,
};

const struct GlyphNew GlyTJA_E59C92 = { /* 園 */
    .next = &GlyTJA_E598B2,
    .width = 11,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59C92Tiles,
};

const struct GlyphNew GlyTJA_E9A699 = { /* 香 */
    .next = &GlyTJA_E981A5,
    .width = 11,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9A699Tiles,
};

const struct GlyphNew GlyTJA_E6B5B4 = { /* 浴 */
    .next = &GlyTJA_E69CBD,
    .width = 11,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B5B4Tiles,
};

const struct GlyphNew GlyTJA_E78489 = { /* 焉 */
    .next = &GlyTJA_E79EAC,
    .width = 11,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E78489Tiles,
};

const struct GlyphNew GlyTJA_E589B2 = { /* 割 */
    .next = &GlyTJA_E59C92,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E589B2Tiles,
};

const struct GlyphNew GlyTJA_E99A99 = { /* 隙 */
    .next = &GlyTJA_E9A699,
    .width = 11,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99A99Tiles,
};

const struct GlyphNew GlyTJA_E8BEA3 = { /* 辣 */
    .next = &GlyTJA_E8AC81,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8BEA3Tiles,
};

const struct GlyphNew GlyTJA_E7BE85 = { /* 羅 */
    .next = &GlyTJA_E78489,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7BE85Tiles,
};

const struct GlyphNew GlyTJA_E58291 = { /* 傑 */
    .next = &GlyTJA_E589B2,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58291Tiles,
};

const struct GlyphNew GlyTJA_E7B4AB = { /* 紫 */
    .next = &GlyTJA_E7BE85,
    .width = 11,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B4ABTiles,
};

const struct GlyphNew GlyTJA_E79DA1 = { /* 睡 */
    .next = &GlyTJA_E7B4AB,
    .width = 12,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79DA1Tiles,
};

const struct GlyphNew GlyTJA_E6BC94 = { /* 演 */
    .next = &GlyTJA_E6B5B4,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6BC94Tiles,
};

const struct GlyphNew GlyTJA_E6BD94 = { /* 潔 */
    .next = &GlyTJA_E6BC94,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6BD94Tiles,
};

const struct GlyphNew GlyTJA_E7A9B4 = { /* 穴 */
    .next = &GlyTJA_E79DA1,
    .width = 11,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A9B4Tiles,
};

const struct GlyphNew GlyTJA_E6BB91 = { /* 滑 */
    .next = &GlyTJA_E6BD94,
    .width = 11,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6BB91Tiles,
};

const struct GlyphNew GlyTJA_E69A91 = { /* 暑 */
    .next = &GlyTJA_E6BB91,
    .width = 11,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69A91Tiles,
};

const struct GlyphNew GlyTJA_E69FB1 = { /* 柱 */
    .next = &GlyTJA_E69A91,
    .width = 11,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69FB1Tiles,
};

const struct GlyphNew GlyTJA_E589A5 = { /* 剥 */
    .next = &GlyTJA_E58291,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E589A5Tiles,
};

const struct GlyphNew GlyTJA_E69E95 = { /* 枕 */
    .next = &GlyTJA_E69FB1,
    .width = 12,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69E95Tiles,
};

const struct GlyphNew GlyTJA_E5858B = { /* 克 */
    .next = &GlyTJA_E589A5,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5858BTiles,
};

const struct GlyphNew GlyTJA_E881A1 = { /* 聡 */
    .next = &GlyTJA_E8BEA3,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E881A1Tiles,
};

const struct GlyphNew GlyTJA_E99A8F = { /* 随 */
    .next = &GlyTJA_E99A99,
    .width = 10,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99A8FTiles,
};

const struct GlyphNew GlyTJA_E58FB6 = { /* 叶 */
    .next = &GlyTJA_E5858B,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58FB6Tiles,
};

const struct GlyphNew GlyTJA_E6B38A = { /* 泊 */
    .next = &GlyTJA_E69E95,
    .width = 11,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B38ATiles,
};

const struct GlyphNew GlyTJA_E5B487 = { /* 崇 */
    .next = &GlyTJA_E58FB6,
    .width = 11,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B487Tiles,
};

const struct GlyphNew GlyTJA_E8B39C = { /* 賜 */
    .next = &GlyTJA_E881A1,
    .width = 11,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B39CTiles,
};

const struct GlyphNew GlyTJA_E892BC = { /* 蒼 */
    .next = &GlyTJA_E8B39C,
    .width = 11,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E892BCTiles,
};

const struct GlyphNew GlyTJA_E585BC = { /* 兼 */
    .next = &GlyTJA_E5B487,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E585BCTiles,
};

const struct GlyphNew GlyTJA_EFBC86 = { /* ＆ */
    .next = &GlyTJA_EFBC8D,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBC86Tiles,
};

const struct GlyphNew GlyTJA_E5859C = { /* 兜 */
    .next = &GlyTJA_E585BC,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5859CTiles,
};

const struct GlyphNew GlyTJA_E89684 = { /* 薄 */
    .next = &GlyTJA_E892BC,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E89684Tiles,
};

const struct GlyphNew GlyTJA_E981AD = { /* 遭 */
    .next = &GlyTJA_E99A8F,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E981ADTiles,
};

const struct GlyphNew GlyTJA_E4BE8D = { /* 侍 */
    .next = &GlyTJA_E4B898,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BE8DTiles,
};

const struct GlyphNew GlyTJA_E5BE90 = { /* 徐 */
    .next = &GlyTJA_E5859C,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BE90Tiles,
};

const struct GlyphNew GlyTJA_E78886 = { /* 爆 */
    .next = &GlyTJA_E7A9B4,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E78886Tiles,
};

const struct GlyphNew GlyTJA_E9A892 = { /* 騒 */
    .next = &GlyTJA_E981AD,
    .width = 11,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9A892Tiles,
};

const struct GlyphNew GlyTJA_E9AD9A = { /* 魚 */
    .next = &GlyTJA_E9A892,
    .width = 11,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9AD9ATiles,
};

const struct GlyphNew GlyTJA_E58586 = { /* 兆 */
    .next = &GlyTJA_E5BE90,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58586Tiles,
};

const struct GlyphNew GlyTJA_E589AF = { /* 副 */
    .next = &GlyTJA_E58586,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E589AFTiles,
};

const struct GlyphNew GlyTJA_E7B89B = { /* 縛 */
    .next = &GlyTJA_E78886,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B89BTiles,
};

const struct GlyphNew GlyTJA_E7B396 = { /* 糖 */
    .next = &GlyTJA_E7B89B,
    .width = 12,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B396Tiles,
};

const struct GlyphNew GlyTJA_E5968B = { /* 喋 */
    .next = &GlyTJA_E589AF,
    .width = 12,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5968BTiles,
};

const struct GlyphNew GlyTJA_E6ADA4 = { /* 此 */
    .next = &GlyTJA_E6B38A,
    .width = 11,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6ADA4Tiles,
};

const struct GlyphNew GlyTJA_E88793 = { /* 臓 */
    .next = &GlyTJA_E89684,
    .width = 11,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E88793Tiles,
};

const struct GlyphNew GlyTJA_E6BCAB = { /* 漫 */
    .next = &GlyTJA_E6ADA4,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6BCABTiles,
};

const struct GlyphNew GlyTJA_E8B488 = { /* 贈 */
    .next = &GlyTJA_E88793,
    .width = 11,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B488Tiles,
};

const struct GlyphNew GlyTJA_E8A686 = { /* 覆 */
    .next = &GlyTJA_E8B488,
    .width = 11,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A686Tiles,
};

const struct GlyphNew GlyTJA_E6AEB4 = { /* 殴 */
    .next = &GlyTJA_E6BCAB,
    .width = 11,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6AEB4Tiles,
};

const struct GlyphNew GlyTJA_E78CAE = { /* 献 */
    .next = &GlyTJA_E7B396,
    .width = 11,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E78CAETiles,
};

const struct GlyphNew GlyTJA_E68CA8 = { /* 挨 */
    .next = &GlyTJA_E6AEB4,
    .width = 11,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68CA8Tiles,
};

const struct GlyphNew GlyTJA_E58987 = { /* 則 */
    .next = &GlyTJA_E5968B,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58987Tiles,
};

const struct GlyphNew GlyTJA_E99A98 = { /* 隘 */
    .next = &GlyTJA_E9AD9A,
    .width = 11,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99A98Tiles,
};

const struct GlyphNew GlyTJA_E6B2B8 = { /* 沸 */
    .next = &GlyTJA_E68CA8,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B2B8Tiles,
};

const struct GlyphNew GlyTJA_E9808F = { /* 透 */
    .next = &GlyTJA_E99A98,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9808FTiles,
};

const struct GlyphNew GlyTJA_E58B98 = { /* 勘 */
    .next = &GlyTJA_E58987,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58B98Tiles,
};

const struct GlyphNew GlyTJA_E89C9C = { /* 蜜 */
    .next = &GlyTJA_E8A686,
    .width = 11,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E89C9CTiles,
};

const struct GlyphNew GlyTJA_E999B6 = { /* 陶 */
    .next = &GlyTJA_E9808F,
    .width = 11,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E999B6Tiles,
};

const struct GlyphNew GlyTJA_E6B8AC = { /* 測 */
    .next = &GlyTJA_E6B2B8,
    .width = 12,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B8ACTiles,
};

const struct GlyphNew GlyTJA_E5969A = { /* 喚 */
    .next = &GlyTJA_E58B98,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5969ATiles,
};

const struct GlyphNew GlyTJA_E79795 = { /* 痕 */
    .next = &GlyTJA_E78CAE,
    .width = 11,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79795Tiles,
};

const struct GlyphNew GlyTJA_E686A4 = { /* 憤 */
    .next = &GlyTJA_E6B8AC,
    .width = 11,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E686A4Tiles,
};

const struct GlyphNew GlyTJA_E680AF = { /* 怯 */
    .next = &GlyTJA_E686A4,
    .width = 10,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E680AFTiles,
};

const struct GlyphNew GlyTJA_E88786 = { /* 臆 */
    .next = &GlyTJA_E89C9C,
    .width = 11,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E88786Tiles,
};

const struct GlyphNew GlyTJA_E5AF9B = { /* 寛 */
    .next = &GlyTJA_E5969A,
    .width = 11,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AF9BTiles,
};

const struct GlyphNew GlyTJA_E4BA9B = { /* 些 */
    .next = &GlyTJA_E4BE8D,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BA9BTiles,
};

const struct GlyphNew GlyTJA_E5A5AE = { /* 奮 */
    .next = &GlyTJA_E5AF9B,
    .width = 11,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A5AETiles,
};

const struct GlyphNew GlyTJA_E58D92 = { /* 卒 */
    .next = &GlyTJA_E5A5AE,
    .width = 11,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58D92Tiles,
};

const struct GlyphNew GlyTJA_E5B399 = { /* 峙 */
    .next = &GlyTJA_E58D92,
    .width = 11,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B399Tiles,
};

const struct GlyphNew GlyTJA_E8B7B3 = { /* 跳 */
    .next = &GlyTJA_E88786,
    .width = 11,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B7B3Tiles,
};

const struct GlyphNew GlyTJA_E68F83 = { /* 揃 */
    .next = &GlyTJA_E680AF,
    .width = 12,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68F83Tiles,
};

const struct GlyphNew GlyTJA_E58FB1 = { /* 叱 */
    .next = &GlyTJA_E5B399,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58FB1Tiles,
};

const struct GlyphNew GlyTJA_E686BE = { /* 憾 */
    .next = &GlyTJA_E68F83,
    .width = 11,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E686BETiles,
};

const struct GlyphNew GlyTJA_E78BAD = { /* 狭 */
    .next = &GlyTJA_E79795,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E78BADTiles,
};

const struct GlyphNew GlyTJA_E69FBB = { /* 査 */
    .next = &GlyTJA_E686BE,
    .width = 11,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69FBBTiles,
};

const struct GlyphNew GlyTJA_E695A2 = { /* 敢 */
    .next = &GlyTJA_E69FBB,
    .width = 11,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E695A2Tiles,
};

const struct GlyphNew GlyTJA_E88485 = { /* 脅 */
    .next = &GlyTJA_E8B7B3,
    .width = 11,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E88485Tiles,
};

const struct GlyphNew GlyTJA_E4BCB4 = { /* 伴 */
    .next = &GlyTJA_E4BA9B,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BCB4Tiles,
};

const struct GlyphNew GlyTJA_E8A3BD = { /* 製 */
    .next = &GlyTJA_E88485,
    .width = 11,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A3BDTiles,
};

const struct GlyphNew GlyTJA_E699B6 = { /* 晶 */
    .next = &GlyTJA_E695A2,
    .width = 11,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E699B6Tiles,
};

const struct GlyphNew GlyTJA_E5878C = { /* 凌 */
    .next = &GlyTJA_E58FB1,
    .width = 11,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5878CTiles,
};

const struct GlyphNew GlyTJA_E6BCA2 = { /* 漢 */
    .next = &GlyTJA_E699B6,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6BCA2Tiles,
};

const struct GlyphNew GlyTJA_E78F8D = { /* 珍 */
    .next = &GlyTJA_E78BAD,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E78F8DTiles,
};

const struct GlyphNew GlyTJA_E79CA9 = { /* 眩 */
    .next = &GlyTJA_E78F8D,
    .width = 11,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79CA9Tiles,
};

const struct GlyphNew GlyTJA_E6A281 = { /* 梁 */
    .next = &GlyTJA_E6BCA2,
    .width = 11,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6A281Tiles,
};

const struct GlyphNew GlyTJA_E6B2BC = { /* 沼 */
    .next = &GlyTJA_E6A281,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B2BCTiles,
};

const struct GlyphNew GlyTJA_E98A98 = { /* 銘 */
    .next = &GlyTJA_E999B6,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E98A98Tiles,
};

const struct GlyphNew GlyTJA_E594BE = { /* 唾 */
    .next = &GlyTJA_E5878C,
    .width = 12,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E594BETiles,
};

const struct GlyphNew GlyTJA_E6B6BC = { /* 涼 */
    .next = &GlyTJA_E6B2BC,
    .width = 11,
    .utf_byte_2 = 0xb6,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B6BCTiles,
};

const struct GlyphNew GlyTJA_E4BBB0 = { /* 仰 */
    .next = &GlyTJA_E4BCB4,
    .width = 11,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BBB0Tiles,
};

const struct GlyphNew GlyTJA_E5A095 = { /* 堕 */
    .next = &GlyTJA_E594BE,
    .width = 11,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A095Tiles,
};

const struct GlyphNew GlyTJA_E79982 = { /* 療 */
    .next = &GlyTJA_E79CA9,
    .width = 11,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79982Tiles,
};

const struct GlyphNew GlyTJA_E8B2AA = { /* 貪 */
    .next = &GlyTJA_E8A3BD,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B2AATiles,
};

const struct GlyphNew GlyTJA_E79C8B = { /* 看 */
    .next = &GlyTJA_E79982,
    .width = 11,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79C8BTiles,
};

const struct GlyphNew GlyTJA_E78AAF = { /* 犯 */
    .next = &GlyTJA_E79C8B,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E78AAFTiles,
};

const struct GlyphNew GlyTJA_E7B3A7 = { /* 糧 */
    .next = &GlyTJA_E78AAF,
    .width = 11,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B3A7Tiles,
};

const struct GlyphNew GlyTJA_E88486 = { /* 脆 */
    .next = &GlyTJA_E8B2AA,
    .width = 11,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E88486Tiles,
};

const struct GlyphNew GlyTJA_E99ABB = { /* 隻 */
    .next = &GlyTJA_E98A98,
    .width = 10,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99ABBTiles,
};

const struct GlyphNew GlyTJA_E79996 = { /* 癖 */
    .next = &GlyTJA_E7B3A7,
    .width = 11,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79996Tiles,
};

const struct GlyphNew GlyTJA_E69A87 = { /* 暇 */
    .next = &GlyTJA_E6B6BC,
    .width = 11,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69A87Tiles,
};

const struct GlyphNew GlyTJA_E5BAAB = { /* 庫 */
    .next = &GlyTJA_E5A095,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BAABTiles,
};

const struct GlyphNew GlyTJA_E7A2A7 = { /* 碧 */
    .next = &GlyTJA_E79996,
    .width = 11,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A2A7Tiles,
};

const struct GlyphNew GlyTJA_E4BC8A = { /* 伊 */
    .next = &GlyTJA_E4BBB0,
    .width = 12,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BC8ATiles,
};

const struct GlyphNew GlyTJA_E7B7A9 = { /* 緩 */
    .next = &GlyTJA_E7A2A7,
    .width = 11,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B7A9Tiles,
};

const struct GlyphNew GlyTJA_E9A784 = { /* 駄 */
    .next = &GlyTJA_E99ABB,
    .width = 11,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9A784Tiles,
};

const struct GlyphNew GlyTJA_E888AC = { /* 般 */
    .next = &GlyTJA_E88486,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E888ACTiles,
};

const struct GlyphNew GlyTJA_E4BE9D = { /* 依 */
    .next = &GlyTJA_E4BC8A,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BE9DTiles,
};

const struct GlyphNew GlyTJA_E688B8 = { /* 戸 */
    .next = &GlyTJA_E69A87,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E688B8Tiles,
};

const struct GlyphNew GlyTJA_E8829D = { /* 肝 */
    .next = &GlyTJA_E888AC,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8829DTiles,
};

const struct GlyphNew GlyTJA_E89491 = { /* 蔑 */
    .next = &GlyTJA_E8829D,
    .width = 11,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E89491Tiles,
};

const struct GlyphNew GlyTJA_E88C82 = { /* 茂 */
    .next = &GlyTJA_E89491,
    .width = 11,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E88C82Tiles,
};

const struct GlyphNew GlyTJA_E58BA4 = { /* 勤 */
    .next = &GlyTJA_E5BAAB,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58BA4Tiles,
};

const struct GlyphNew GlyTJA_E78B90 = { /* 狐 */
    .next = &GlyTJA_E7B7A9,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E78B90Tiles,
};

const struct GlyphNew GlyTJA_E785A9 = { /* 煩 */
    .next = &GlyTJA_E78B90,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E785A9Tiles,
};

const struct GlyphNew GlyTJA_E8A6B3 = { /* 観 */
    .next = &GlyTJA_E88C82,
    .width = 11,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A6B3Tiles,
};

const struct GlyphNew GlyTJA_E785AE = { /* 煮 */
    .next = &GlyTJA_E785A9,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E785AETiles,
};

const struct GlyphNew GlyTJA_E59D87 = { /* 均 */
    .next = &GlyTJA_E58BA4,
    .width = 11,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59D87Tiles,
};

const struct GlyphNew GlyTJA_E9A3AF = { /* 飯 */
    .next = &GlyTJA_E9A784,
    .width = 11,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9A3AFTiles,
};

const struct GlyphNew GlyTJA_E8B484 = { /* 贄 */
    .next = &GlyTJA_E8A6B3,
    .width = 11,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B484Tiles,
};

const struct GlyphNew GlyTJA_E88296 = { /* 肖 */
    .next = &GlyTJA_E8B484,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E88296Tiles,
};

const struct GlyphNew GlyTJA_E7B6B2 = { /* 網 */
    .next = &GlyTJA_E785AE,
    .width = 12,
    .utf_byte_2 = 0xb6,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B6B2Tiles,
};

const struct GlyphNew GlyTJA_E685B0 = { /* 慰 */
    .next = &GlyTJA_E688B8,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E685B0Tiles,
};

const struct GlyphNew GlyTJA_E8A282 = { /* 袂 */
    .next = &GlyTJA_E88296,
    .width = 11,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A282Tiles,
};

const struct GlyphNew GlyTJA_E88B9B = { /* 苛 */
    .next = &GlyTJA_E8A282,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E88B9BTiles,
};

const struct GlyphNew GlyTJA_E69BBF = { /* 替 */
    .next = &GlyTJA_E685B0,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69BBFTiles,
};

const struct GlyphNew GlyTJA_E89B87 = { /* 蛇 */
    .next = &GlyTJA_E88B9B,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E89B87Tiles,
};

const struct GlyphNew GlyTJA_E6BDB0 = { /* 潰 */
    .next = &GlyTJA_E69BBF,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6BDB0Tiles,
};

const struct GlyphNew GlyTJA_E6B28C = { /* 沌 */
    .next = &GlyTJA_E6BDB0,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B28CTiles,
};

const struct GlyphNew GlyTJA_E8BC89 = { /* 載 */
    .next = &GlyTJA_E89B87,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8BC89Tiles,
};

const struct GlyphNew GlyTJA_E9BC93 = { /* 鼓 */
    .next = &GlyTJA_E9A3AF,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9BC93Tiles,
};

const struct GlyphNew GlyTJA_E4B8B8 = { /* 丸 */
    .next = &GlyTJA_E4BE9D,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4B8B8Tiles,
};

const struct GlyphNew GlyTJA_E59191 = { /* 呑 */
    .next = &GlyTJA_E59D87,
    .width = 11,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59191Tiles,
};

const struct GlyphNew GlyTJA_E58BBF = { /* 勿 */
    .next = &GlyTJA_E59191,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58BBFTiles,
};

const struct GlyphNew GlyTJA_E590AB = { /* 含 */
    .next = &GlyTJA_E58BBF,
    .width = 11,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E590ABTiles,
};

const struct GlyphNew GlyTJA_E5908A = { /* 吊 */
    .next = &GlyTJA_E590AB,
    .width = 11,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5908ATiles,
};

const struct GlyphNew GlyTJA_E5BA87 = { /* 庇 */
    .next = &GlyTJA_E5908A,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BA87Tiles,
};

const struct GlyphNew GlyTJA_E68691 = { /* 憑 */
    .next = &GlyTJA_E6B28C,
    .width = 12,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68691Tiles,
};

const struct GlyphNew GlyTJA_E68AAB = { /* 披 */
    .next = &GlyTJA_E68691,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68AABTiles,
};

const struct GlyphNew GlyTJA_E5AF82 = { /* 寂 */
    .next = &GlyTJA_E5BA87,
    .width = 11,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AF82Tiles,
};

const struct GlyphNew GlyTJA_E99E98 = { /* 鞘 */
    .next = &GlyTJA_E9BC93,
    .width = 11,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99E98Tiles,
};

const struct GlyphNew GlyTJA_E683B9 = { /* 惹 */
    .next = &GlyTJA_E68AAB,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E683B9Tiles,
};

const struct GlyphNew GlyTJA_E796B2 = { /* 疲 */
    .next = &GlyTJA_E7B6B2,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E796B2Tiles,
};

const struct GlyphNew GlyTJA_E79AAE = { /* 皮 */
    .next = &GlyTJA_E796B2,
    .width = 11,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79AAETiles,
};

const struct GlyphNew GlyTJA_E4BC81 = { /* 企 */
    .next = &GlyTJA_E4B8B8,
    .width = 10,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BC81Tiles,
};

const struct GlyphNew GlyTJA_E9B7B9 = { /* 鷹 */
    .next = &GlyTJA_E99E98,
    .width = 11,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9B7B9Tiles,
};

const struct GlyphNew GlyTJA_E9A6B4 = { /* 馴 */
    .next = &GlyTJA_E9B7B9,
    .width = 11,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9A6B4Tiles,
};

const struct GlyphNew GlyTJA_E7B884 = { /* 縄 */
    .next = &GlyTJA_E79AAE,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B884Tiles,
};

const struct GlyphNew GlyTJA_E9B489 = { /* 鴉 */
    .next = &GlyTJA_E9A6B4,
    .width = 11,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9B489Tiles,
};

const struct GlyphNew GlyTJA_E9BA97 = { /* 麗 */
    .next = &GlyTJA_E9B489,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9BA97Tiles,
};

const struct GlyphNew GlyTJA_E5898A = { /* 削 */
    .next = &GlyTJA_E5AF82,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5898ATiles,
};

const struct GlyphNew GlyTJA_E4B99E = { /* 乞 */
    .next = &GlyTJA_E4BC81,
    .width = 11,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4B99ETiles,
};

const struct GlyphNew GlyTJA_E68987 = { /* 扇 */
    .next = &GlyTJA_E683B9,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68987Tiles,
};

const struct GlyphNew GlyTJA_E9BDA2 = { /* 齢 */
    .next = &GlyTJA_E9BA97,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9BDA2Tiles,
};

const struct GlyphNew GlyTJA_E9A792 = { /* 駒 */
    .next = &GlyTJA_E9BDA2,
    .width = 11,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9A792Tiles,
};

const struct GlyphNew GlyTJA_E58E84 = { /* 厄 */
    .next = &GlyTJA_E5898A,
    .width = 11,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58E84Tiles,
};

const struct GlyphNew GlyTJA_E8B2BB = { /* 費 */
    .next = &GlyTJA_E8BC89,
    .width = 10,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B2BBTiles,
};

const struct GlyphNew GlyTJA_E698A8 = { /* 昨 */
    .next = &GlyTJA_E68987,
    .width = 12,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E698A8Tiles,
};

const struct GlyphNew GlyTJA_E5AC89 = { /* 嬉 */
    .next = &GlyTJA_E58E84,
    .width = 11,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AC89Tiles,
};

const struct GlyphNew GlyTJA_E6849A = { /* 愚 */
    .next = &GlyTJA_E698A8,
    .width = 11,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6849ATiles,
};

const struct GlyphNew GlyTJA_E68F90 = { /* 提 */
    .next = &GlyTJA_E6849A,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68F90Tiles,
};

const struct GlyphNew GlyTJA_E58897 = { /* 列 */
    .next = &GlyTJA_E5AC89,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58897Tiles,
};

const struct GlyphNew GlyTJA_E6B2A2 = { /* 沢 */
    .next = &GlyTJA_E68F90,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B2A2Tiles,
};

const struct GlyphNew GlyTJA_E5A589 = { /* 奉 */
    .next = &GlyTJA_E58897,
    .width = 11,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A589Tiles,
};

const struct GlyphNew GlyTJA_E6B497 = { /* 洗 */
    .next = &GlyTJA_E6B2A2,
    .width = 11,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B497Tiles,
};

const struct GlyphNew GlyTJA_E59286 = { /* 咆 */
    .next = &GlyTJA_E5A589,
    .width = 11,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59286Tiles,
};

const struct GlyphNew GlyTJA_E5BF8C = { /* 忌 */
    .next = &GlyTJA_E59286,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BF8CTiles,
};

const struct GlyphNew GlyTJA_E7B4A2 = { /* 索 */
    .next = &GlyTJA_E7B884,
    .width = 11,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B4A2Tiles,
};

const struct GlyphNew GlyTJA_E8B391 = { /* 賑 */
    .next = &GlyTJA_E8B2BB,
    .width = 11,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B391Tiles,
};

const struct GlyphNew GlyTJA_E5B0BE = { /* 尾 */
    .next = &GlyTJA_E5BF8C,
    .width = 11,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B0BETiles,
};

const struct GlyphNew GlyTJA_E6BD9C = { /* 潜 */
    .next = &GlyTJA_E6B497,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6BD9CTiles,
};

const struct GlyphNew GlyTJA_E892B8 = { /* 蒸 */
    .next = &GlyTJA_E8B391,
    .width = 11,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E892B8Tiles,
};

const struct GlyphNew GlyTJA_E6A8B9 = { /* 樹 */
    .next = &GlyTJA_E6BD9C,
    .width = 11,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6A8B9Tiles,
};

const struct GlyphNew GlyTJA_E8ADB2 = { /* 譲 */
    .next = &GlyTJA_E892B8,
    .width = 11,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8ADB2Tiles,
};

const struct GlyphNew GlyTJA_E8ABBE = { /* 諾 */
    .next = &GlyTJA_E8ADB2,
    .width = 11,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8ABBETiles,
};

const struct GlyphNew GlyTJA_E792A7 = { /* 璧 */
    .next = &GlyTJA_E7B4A2,
    .width = 11,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E792A7Tiles,
};

const struct GlyphNew GlyTJA_E8B982 = { /* 蹂 */
    .next = &GlyTJA_E8ABBE,
    .width = 11,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B982Tiles,
};

const struct GlyphNew GlyTJA_E68DA7 = { /* 捧 */
    .next = &GlyTJA_E6A8B9,
    .width = 11,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68DA7Tiles,
};

const struct GlyphNew GlyTJA_E697A2 = { /* 既 */
    .next = &GlyTJA_E68DA7,
    .width = 11,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E697A2Tiles,
};

const struct GlyphNew GlyTJA_E8ABA6 = { /* 諦 */
    .next = &GlyTJA_E8B982,
    .width = 11,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8ABA6Tiles,
};

const struct GlyphNew GlyTJA_E7A38A = { /* 磊 */
    .next = &GlyTJA_E792A7,
    .width = 11,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A38ATiles,
};

const struct GlyphNew GlyTJA_E79C89 = { /* 眉 */
    .next = &GlyTJA_E7A38A,
    .width = 11,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79C89Tiles,
};

const struct GlyphNew GlyTJA_E79992 = { /* 癒 */
    .next = &GlyTJA_E79C89,
    .width = 11,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79992Tiles,
};

const struct GlyphNew GlyTJA_E5B0B1 = { /* 就 */
    .next = &GlyTJA_E5B0BE,
    .width = 11,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B0B1Tiles,
};

const struct GlyphNew GlyTJA_E6BBB4 = { /* 滴 */
    .next = &GlyTJA_E697A2,
    .width = 11,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6BBB4Tiles,
};

const struct GlyphNew GlyTJA_E5B7A7 = { /* 巧 */
    .next = &GlyTJA_E5B0B1,
    .width = 11,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B7A7Tiles,
};

const struct GlyphNew GlyTJA_E99683 = { /* 閃 */
    .next = &GlyTJA_E9A792,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99683Tiles,
};

const struct GlyphNew GlyTJA_E5B496 = { /* 崖 */
    .next = &GlyTJA_E5B7A7,
    .width = 11,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B496Tiles,
};

const struct GlyphNew GlyTJA_E89E8D = { /* 融 */
    .next = &GlyTJA_E8ABA6,
    .width = 11,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E89E8DTiles,
};

const struct GlyphNew GlyTJA_E5AA9A = { /* 媚 */
    .next = &GlyTJA_E5B496,
    .width = 11,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AA9ATiles,
};

const struct GlyphNew GlyTJA_E59A87 = { /* 嚇 */
    .next = &GlyTJA_E5AA9A,
    .width = 11,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59A87Tiles,
};

const struct GlyphNew GlyTJA_E896AA = { /* 薪 */
    .next = &GlyTJA_E89E8D,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E896AATiles,
};

const struct GlyphNew GlyTJA_E690BA = { /* 携 */
    .next = &GlyTJA_E6BBB4,
    .width = 11,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E690BATiles,
};

const struct GlyphNew GlyTJA_E69B9C = { /* 曜 */
    .next = &GlyTJA_E690BA,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69B9CTiles,
};

const struct GlyphNew GlyTJA_E6B893 = { /* 渓 */
    .next = &GlyTJA_E69B9C,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B893Tiles,
};

const struct GlyphNew GlyTJA_E882AF = { /* 肯 */
    .next = &GlyTJA_E896AA,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E882AFTiles,
};

const struct GlyphNew GlyTJA_E8B393 = { /* 賓 */
    .next = &GlyTJA_E882AF,
    .width = 11,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B393Tiles,
};

const struct GlyphNew GlyTJA_E5BB83 = { /* 廃 */
    .next = &GlyTJA_E59A87,
    .width = 11,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BB83Tiles,
};

const struct GlyphNew GlyTJA_E89B8D = { /* 蛍 */
    .next = &GlyTJA_E8B393,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E89B8DTiles,
};

const struct GlyphNew GlyTJA_E788BD = { /* 爽 */
    .next = &GlyTJA_E79992,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E788BDTiles,
};

const struct GlyphNew GlyTJA_E587A0 = { /* 几 */
    .next = &GlyTJA_E5BB83,
    .width = 11,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E587A0Tiles,
};

const struct GlyphNew GlyTJA_E5AA92 = { /* 媒 */
    .next = &GlyTJA_E587A0,
    .width = 11,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AA92Tiles,
};

const struct GlyphNew GlyTJA_E5969D = { /* 喝 */
    .next = &GlyTJA_E5AA92,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5969DTiles,
};

const struct GlyphNew GlyTJA_E8A3B8 = { /* 裸 */
    .next = &GlyTJA_E89B8D,
    .width = 11,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A3B8Tiles,
};

const struct GlyphNew GlyTJA_E6B2BF = { /* 沿 */
    .next = &GlyTJA_E6B893,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B2BFTiles,
};

const struct GlyphNew GlyTJA_E7899B = { /* 牛 */
    .next = &GlyTJA_E788BD,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7899BTiles,
};

const struct GlyphNew GlyTJA_E9A3BC = { /* 飼 */
    .next = &GlyTJA_E99683,
    .width = 11,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9A3BCTiles,
};

const struct GlyphNew GlyTJA_E8999A = { /* 虚 */
    .next = &GlyTJA_E8A3B8,
    .width = 11,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8999ATiles,
};

const struct GlyphNew GlyTJA_E5BE80 = { /* 往 */
    .next = &GlyTJA_E5969D,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BE80Tiles,
};

const struct GlyphNew GlyTJA_E5B8B3 = { /* 帳 */
    .next = &GlyTJA_E5BE80,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B8B3Tiles,
};

const struct GlyphNew GlyTJA_E6B7B5 = { /* 淵 */
    .next = &GlyTJA_E6B2BF,
    .width = 11,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B7B5Tiles,
};

const struct GlyphNew GlyTJA_E58784 = { /* 凄 */
    .next = &GlyTJA_E5B8B3,
    .width = 11,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58784Tiles,
};

const struct GlyphNew GlyTJA_E7B292 = { /* 粒 */
    .next = &GlyTJA_E7899B,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B292Tiles,
};

const struct GlyphNew GlyTJA_E4BD90 = { /* 佐 */
    .next = &GlyTJA_E4B99E,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BD90Tiles,
};

const struct GlyphNew GlyTJA_E7B289 = { /* 粉 */
    .next = &GlyTJA_E7B292,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B289Tiles,
};

const struct GlyphNew GlyTJA_E586A5 = { /* 冥 */
    .next = &GlyTJA_E58784,
    .width = 11,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E586A5Tiles,
};

const struct GlyphNew GlyTJA_E6B9BF = { /* 湿 */
    .next = &GlyTJA_E6B7B5,
    .width = 11,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B9BFTiles,
};

const struct GlyphNew GlyTJA_E88A9D = { /* 芝 */
    .next = &GlyTJA_E8999A,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E88A9DTiles,
};

const struct GlyphNew GlyTJA_E69A81 = { /* 暁 */
    .next = &GlyTJA_E6B9BF,
    .width = 11,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69A81Tiles,
};

const struct GlyphNew GlyTJA_E7A791 = { /* 科 */
    .next = &GlyTJA_E7B289,
    .width = 11,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A791Tiles,
};

const struct GlyphNew GlyTJA_E5BDA9 = { /* 彩 */
    .next = &GlyTJA_E586A5,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5BDA9Tiles,
};

const struct GlyphNew GlyTJA_E79BA4 = { /* 盤 */
    .next = &GlyTJA_E7A791,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79BA4Tiles,
};

const struct GlyphNew GlyTJA_E688B4 = { /* 戴 */
    .next = &GlyTJA_E69A81,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E688B4Tiles,
};

const struct GlyphNew GlyTJA_E7B78B = { /* 緋 */
    .next = &GlyTJA_E79BA4,
    .width = 11,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B78BTiles,
};

const struct GlyphNew GlyTJA_E5B096 = { /* 尖 */
    .next = &GlyTJA_E5BDA9,
    .width = 11,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B096Tiles,
};

const struct GlyphNew GlyTJA_E5B3B0 = { /* 峰 */
    .next = &GlyTJA_E5B096,
    .width = 11,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B3B0Tiles,
};

const struct GlyphNew GlyTJA_28 = { /* ( */
    .next = NULL,
    .width = 3,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_28Tiles,
};

const struct GlyphNew GlyTJA_EFBE8C = { /* ﾌ */
    .next = &GlyTJA_EFBC86,
    .width = 5,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBE8CTiles,
};

const struct GlyphNew GlyTJA_EFBDBD = { /* ｽ */
    .next = &GlyTJA_EFBE8C,
    .width = 5,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBDBDTiles,
};

const struct GlyphNew GlyTJA_EFBE84 = { /* ﾄ */
    .next = &GlyTJA_EFBDBD,
    .width = 5,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBE84Tiles,
};

const struct GlyphNew GlyTJA_EFBE85 = { /* ﾅ */
    .next = &GlyTJA_EFBE84,
    .width = 5,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBE85Tiles,
};

const struct GlyphNew GlyTJA_EFBDB2 = { /* ｲ */
    .next = &GlyTJA_EFBE85,
    .width = 5,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBDB2Tiles,
};

const struct GlyphNew GlyTJA_29 = { /* ) */
    .next = NULL,
    .width = 3,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_29Tiles,
};

const struct GlyphNew GlyTJA_EFBE9E = { /* ﾞ */
    .next = &GlyTJA_EFBDB2,
    .width = 3,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBE9ETiles,
};

const struct GlyphNew GlyTJA_EFBE97 = { /* ﾗ */
    .next = &GlyTJA_EFBE9E,
    .width = 5,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBE97Tiles,
};

const struct GlyphNew GlyTJA_EFBDBA = { /* ｺ */
    .next = &GlyTJA_EFBE97,
    .width = 5,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBDBATiles,
};

const struct GlyphNew GlyTJA_EFBE9D = { /* ﾝ */
    .next = &GlyTJA_EFBDBA,
    .width = 5,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBE9DTiles,
};

const struct GlyphNew GlyTJA_EFBE8F = { /* ﾏ */
    .next = &GlyTJA_EFBE9D,
    .width = 5,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBE8FTiles,
};

const struct GlyphNew GlyTJA_EFBE80 = { /* ﾀ */
    .next = &GlyTJA_EFBE8F,
    .width = 5,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBE80Tiles,
};

const struct GlyphNew GlyTJA_EFBDB0 = { /* ｰ */
    .next = &GlyTJA_EFBE80,
    .width = 5,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBDB0Tiles,
};

const struct GlyphNew GlyTJA_EFBDA7 = { /* ｧ */
    .next = &GlyTJA_EFBDB0,
    .width = 5,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBDA7Tiles,
};

const struct GlyphNew GlyTJA_EFBE99 = { /* ﾙ */
    .next = &GlyTJA_EFBDA7,
    .width = 5,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBE99Tiles,
};

const struct GlyphNew GlyTJA_EFBDBB = { /* ｻ */
    .next = &GlyTJA_EFBE99,
    .width = 5,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBDBBTiles,
};

const struct GlyphNew GlyTJA_EFBE91 = { /* ﾑ */
    .next = &GlyTJA_EFBDBB,
    .width = 5,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBE91Tiles,
};

const struct GlyphNew GlyTJA_4D = { /* M */
    .next = NULL,
    .width = 8,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_4DTiles,
};

const struct GlyphNew GlyTJA_23 = { /* # */
    .next = NULL,
    .width = 7,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_23Tiles,
};

const struct GlyphNew GlyTJA_30 = { /* 0 */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_30Tiles,
};

const struct GlyphNew GlyTJA_32 = { /* 2 */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_32Tiles,
};

const struct GlyphNew GlyTJA_34 = { /* 4 */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_34Tiles,
};

const struct GlyphNew GlyTJA_2F = { /* / */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_2FTiles,
};

const struct GlyphNew GlyTJA_39 = { /* 9 */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_39Tiles,
};

const struct GlyphNew GlyTJA_54 = { /* T */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_54Tiles,
};

const struct GlyphNew GlyTJA_48 = { /* H */
    .next = NULL,
    .width = 7,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_48Tiles,
};

const struct GlyphNew GlyTJA_55 = { /* U */
    .next = NULL,
    .width = 7,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_55Tiles,
};

const struct GlyphNew GlyTJA_20 = { /*   */
    .next = NULL,
    .width = 1,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_20Tiles,
};

const struct GlyphNew GlyTJA_31 = { /* 1 */
    .next = NULL,
    .width = 4,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_31Tiles,
};

const struct GlyphNew GlyTJA_33 = { /* 3 */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_33Tiles,
};

const struct GlyphNew GlyTJA_3A = { /* : */
    .next = NULL,
    .width = 2,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_3ATiles,
};

const struct GlyphNew GlyTJA_35 = { /* 5 */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_35Tiles,
};

const struct GlyphNew GlyTJA_36 = { /* 6 */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_36Tiles,
};

const struct GlyphNew GlyTJA_E6A2B0 = { /* 械 */
    .next = &GlyTJA_E688B4,
    .width = 11,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6A2B0Tiles,
};

const struct GlyphNew GlyTJA_E59EA2 = { /* 垢 */
    .next = &GlyTJA_E5B3B0,
    .width = 11,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59EA2Tiles,
};

const struct GlyphNew GlyTJA_E59182 = { /* 呂 */
    .next = &GlyTJA_E59EA2,
    .width = 11,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59182Tiles,
};

const struct GlyphNew GlyTJA_EFBC9A = { /* ： */
    .next = &GlyTJA_EFBE91,
    .width = 4,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBC9ATiles,
};

const struct GlyphNew GlyTJA_E88AA5 = { /* 芥 */
    .next = &GlyTJA_E88A9D,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E88AA5Tiles,
};

const struct GlyphNew GlyTJA_E78BB8 = { /* 狸 */
    .next = &GlyTJA_E7B78B,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E78BB8Tiles,
};

const struct GlyphNew GlyTJA_E982A6 = { /* 邦 */
    .next = &GlyTJA_E9A3BC,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E982A6Tiles,
};

const struct GlyphNew GlyTJA_E8BB8C = { /* 軌 */
    .next = &GlyTJA_E88AA5,
    .width = 11,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8BB8CTiles,
};

const struct GlyphNew GlyTJA_E886A0 = { /* 膠 */
    .next = &GlyTJA_E8BB8C,
    .width = 11,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E886A0Tiles,
};

const struct GlyphNew GlyTJA_E8BD8D = { /* 轍 */
    .next = &GlyTJA_E886A0,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8BD8DTiles,
};

const struct GlyphNew GlyTJA_E6BC8F = { /* 漏 */
    .next = &GlyTJA_E6A2B0,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6BC8FTiles,
};

const struct GlyphNew GlyTJA_E9869C = { /* 醜 */
    .next = &GlyTJA_E982A6,
    .width = 11,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9869CTiles,
};

const struct GlyphNew GlyTJA_E8A9B2 = { /* 該 */
    .next = &GlyTJA_E8BD8D,
    .width = 11,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8A9B2Tiles,
};

const struct GlyphNew GlyTJA_E7939C = { /* 瓜 */
    .next = &GlyTJA_E78BB8,
    .width = 11,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7939CTiles,
};

const struct GlyphNew GlyTJA_E6ACBA = { /* 欺 */
    .next = &GlyTJA_E6BC8F,
    .width = 11,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6ACBATiles,
};

const struct GlyphNew GlyTJA_E8AE83 = { /* 讃 */
    .next = &GlyTJA_E8A9B2,
    .width = 11,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8AE83Tiles,
};

const struct GlyphNew GlyTJA_E7968E = { /* 疎 */
    .next = &GlyTJA_E7939C,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7968ETiles,
};

const struct GlyphNew GlyTJA_E7B4A1 = { /* 紡 */
    .next = &GlyTJA_E7968E,
    .width = 11,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B4A1Tiles,
};

const struct GlyphNew GlyTJA_E9A48C = { /* 餌 */
    .next = &GlyTJA_E9869C,
    .width = 11,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9A48CTiles,
};

const struct GlyphNew GlyTJA_E7A792 = { /* 秒 */
    .next = &GlyTJA_E7B4A1,
    .width = 11,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A792Tiles,
};

const struct GlyphNew GlyTJA_E7B8A6 = { /* 縦 */
    .next = &GlyTJA_E7A792,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B8A6Tiles,
};

const struct GlyphNew GlyTJA_E886A8 = { /* 膨 */
    .next = &GlyTJA_E8AE83,
    .width = 11,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E886A8Tiles,
};

const struct GlyphNew GlyTJA_E98A83 = { /* 銃 */
    .next = &GlyTJA_E9A48C,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E98A83Tiles,
};

const struct GlyphNew GlyTJA_E68EB2 = { /* 掲 */
    .next = &GlyTJA_E6ACBA,
    .width = 11,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68EB2Tiles,
};

const struct GlyphNew GlyTJA_E989BE = { /* 鉾 */
    .next = &GlyTJA_E98A83,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E989BETiles,
};

const struct GlyphNew GlyTJA_E89887 = { /* 蘇 */
    .next = &GlyTJA_E886A8,
    .width = 11,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E89887Tiles,
};

const struct GlyphNew GlyTJA_E7B59E = { /* 絞 */
    .next = &GlyTJA_E7B8A6,
    .width = 11,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B59ETiles,
};

const struct GlyphNew GlyTJA_E597A3 = { /* 嗣 */
    .next = &GlyTJA_E59182,
    .width = 11,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E597A3Tiles,
};

const struct GlyphNew GlyTJA_E7BDB5 = { /* 罵 */
    .next = &GlyTJA_E7B59E,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7BDB5Tiles,
};

const struct GlyphNew GlyTJA_E78095 = { /* 瀕 */
    .next = &GlyTJA_E7BDB5,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E78095Tiles,
};

const struct GlyphNew GlyTJA_E69CB4 = { /* 朴 */
    .next = &GlyTJA_E68EB2,
    .width = 11,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69CB4Tiles,
};

const struct GlyphNew GlyTJA_E596AA = { /* 喪 */
    .next = &GlyTJA_E597A3,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E596AATiles,
};

const struct GlyphNew GlyTJA_E68E92 = { /* 排 */
    .next = &GlyTJA_E69CB4,
    .width = 11,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68E92Tiles,
};

const struct GlyphNew GlyTJA_E8849A = { /* 脚 */
    .next = &GlyTJA_E89887,
    .width = 11,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8849ATiles,
};

const struct GlyphNew GlyTJA_E7949A = { /* 甚 */
    .next = &GlyTJA_E78095,
    .width = 11,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7949ATiles,
};

const struct GlyphNew GlyTJA_E5B3BB = { /* 峻 */
    .next = &GlyTJA_E596AA,
    .width = 11,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B3BBTiles,
};

const struct GlyphNew GlyTJA_E88080 = { /* 耀 */
    .next = &GlyTJA_E8849A,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E88080Tiles,
};

const struct GlyphNew GlyTJA_E8B2A2 = { /* 貢 */
    .next = &GlyTJA_E88080,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B2A2Tiles,
};

const struct GlyphNew GlyTJA_E5B2B3 = { /* 岳 */
    .next = &GlyTJA_E5B3BB,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B2B3Tiles,
};

const struct GlyphNew GlyTJA_E682A6 = { /* 悦 */
    .next = &GlyTJA_E68E92,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E682A6Tiles,
};

const struct GlyphNew GlyTJA_E9A7BF = { /* 駿 */
    .next = &GlyTJA_E989BE,
    .width = 11,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9A7BFTiles,
};

const struct GlyphNew GlyTJA_E697A8 = { /* 旨 */
    .next = &GlyTJA_E682A6,
    .width = 10,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E697A8Tiles,
};

const struct GlyphNew GlyTJA_E7BFBB = { /* 翻 */
    .next = &GlyTJA_E7949A,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7BFBBTiles,
};

const struct GlyphNew GlyTJA_E6BDA4 = { /* 潤 */
    .next = &GlyTJA_E697A8,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6BDA4Tiles,
};

const struct GlyphNew GlyTJA_E59E82 = { /* 垂 */
    .next = &GlyTJA_E5B2B3,
    .width = 11,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E59E82Tiles,
};

const struct GlyphNew GlyTJA_E7ACA6 = { /* 符 */
    .next = &GlyTJA_E7BFBB,
    .width = 11,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7ACA6Tiles,
};

const struct GlyphNew GlyTJA_E98099 = { /* 這 */
    .next = &GlyTJA_E9A7BF,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E98099Tiles,
};

const struct GlyphNew GlyTJA_E8AD9C = { /* 譜 */
    .next = &GlyTJA_E8B2A2,
    .width = 11,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8AD9CTiles,
};

const struct GlyphNew GlyTJA_E68BB7 = { /* 拷 */
    .next = &GlyTJA_E6BDA4,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68BB7Tiles,
};

const struct GlyphNew GlyTJA_E7BFA0 = { /* 翠 */
    .next = &GlyTJA_E7ACA6,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7BFA0Tiles,
};

const struct GlyphNew GlyTJA_E7B3BE = { /* 糾 */
    .next = &GlyTJA_E7BFA0,
    .width = 11,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B3BETiles,
};

const struct GlyphNew GlyTJA_E7AA93 = { /* 窓 */
    .next = &GlyTJA_E7B3BE,
    .width = 11,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7AA93Tiles,
};

const struct GlyphNew GlyTJA_E8919B = { /* 葛 */
    .next = &GlyTJA_E8AD9C,
    .width = 11,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8919BTiles,
};

const struct GlyphNew GlyTJA_E8BD9F = { /* 轟 */
    .next = &GlyTJA_E8919B,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8BD9FTiles,
};

const struct GlyphNew GlyTJA_E78795 = { /* 燕 */
    .next = &GlyTJA_E7AA93,
    .width = 11,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E78795Tiles,
};

const struct GlyphNew GlyTJA_E58D9A = { /* 博 */
    .next = &GlyTJA_E59E82,
    .width = 11,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58D9ATiles,
};

const struct GlyphNew GlyTJA_E78CBF = { /* 猿 */
    .next = &GlyTJA_E78795,
    .width = 11,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E78CBFTiles,
};

const struct GlyphNew GlyTJA_E692AB = { /* 撫 */
    .next = &GlyTJA_E68BB7,
    .width = 11,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E692ABTiles,
};

const struct GlyphNew GlyTJA_E889B6 = { /* 艶 */
    .next = &GlyTJA_E8BD9F,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E889B6Tiles,
};

const struct GlyphNew GlyTJA_E8ACB3 = { /* 謳 */
    .next = &GlyTJA_E889B6,
    .width = 11,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8ACB3Tiles,
};

const struct GlyphNew GlyTJA_E9AB84 = { /* 髄 */
    .next = &GlyTJA_E98099,
    .width = 11,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9AB84Tiles,
};

const struct GlyphNew GlyTJA_E6B9AF = { /* 湯 */
    .next = &GlyTJA_E692AB,
    .width = 11,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6B9AFTiles,
};

const struct GlyphNew GlyTJA_EFBC85 = { /* ％ */
    .next = &GlyTJA_EFBC9A,
    .width = 10,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_EFBC85Tiles,
};

const struct GlyphNew GlyTJA_E99B8C = { /* 雌 */
    .next = &GlyTJA_E9AB84,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99B8CTiles,
};

const struct GlyphNew GlyTJA_E691AF = { /* 摯 */
    .next = &GlyTJA_E6B9AF,
    .width = 11,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E691AFTiles,
};

const struct GlyphNew GlyTJA_E78CAA = { /* 猪 */
    .next = &GlyTJA_E78CBF,
    .width = 11,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E78CAATiles,
};

const struct GlyphNew GlyTJA_E898AD = { /* 蘭 */
    .next = &GlyTJA_E8ACB3,
    .width = 11,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E898ADTiles,
};

const struct GlyphNew GlyTJA_E596A7 = { /* 喧 */
    .next = &GlyTJA_E58D9A,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E596A7Tiles,
};

const struct GlyphNew GlyTJA_E89197 = { /* 著 */
    .next = &GlyTJA_E898AD,
    .width = 11,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E89197Tiles,
};

const struct GlyphNew GlyTJA_E98E8C = { /* 鎌 */
    .next = &GlyTJA_E99B8C,
    .width = 11,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E98E8CTiles,
};

const struct GlyphNew GlyTJA_E29885 = { /* ★ */
    .next = &GlyTJA_E2809D,
    .width = 11,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E29885Tiles,
};

const struct GlyphNew GlyTJA_E99C9C = { /* 霜 */
    .next = &GlyTJA_E98E8C,
    .width = 11,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99C9CTiles,
};

const struct GlyphNew GlyTJA_E6839A = { /* 惚 */
    .next = &GlyTJA_E691AF,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6839ATiles,
};

const struct GlyphNew GlyTJA_E99B80 = { /* 雀 */
    .next = &GlyTJA_E99C9C,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99B80Tiles,
};

const struct GlyphNew GlyTJA_E9BAA6 = { /* 麦 */
    .next = &GlyTJA_E99B80,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9BAA6Tiles,
};

const struct GlyphNew GlyTJA_E58888 = { /* 刈 */
    .next = &GlyTJA_E596A7,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58888Tiles,
};

const struct GlyphNew GlyTJA_E697BA = { /* 旺 */
    .next = &GlyTJA_E6839A,
    .width = 11,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E697BATiles,
};

const struct GlyphNew GlyTJA_E4BEA0 = { /* 侠 */
    .next = &GlyTJA_E4BD90,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BEA0Tiles,
};

const struct GlyphNew GlyTJA_E897A4 = { /* 藤 */
    .next = &GlyTJA_E89197,
    .width = 11,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E897A4Tiles,
};

const struct GlyphNew GlyTJA_E998BF = { /* 阿 */
    .next = &GlyTJA_E9BAA6,
    .width = 11,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E998BFTiles,
};

const struct GlyphNew GlyTJA_E793A6 = { /* 瓦 */
    .next = &GlyTJA_E78CAA,
    .width = 11,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E793A6Tiles,
};

const struct GlyphNew GlyTJA_E4B9BE = { /* 乾 */
    .next = &GlyTJA_E4BEA0,
    .width = 11,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4B9BETiles,
};

const struct GlyphNew GlyTJA_E5B2AC = { /* 岬 */
    .next = &GlyTJA_E58888,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B2ACTiles,
};

const struct GlyphNew GlyTJA_E68787 = { /* 懇 */
    .next = &GlyTJA_E697BA,
    .width = 11,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68787Tiles,
};

const struct GlyphNew GlyTJA_E68D89 = { /* 捉 */
    .next = &GlyTJA_E68787,
    .width = 11,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E68D89Tiles,
};

const struct GlyphNew GlyTJA_E5AEB5 = { /* 宵 */
    .next = &GlyTJA_E5B2AC,
    .width = 11,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AEB5Tiles,
};

const struct GlyphNew GlyTJA_E5A2B3 = { /* 墳 */
    .next = &GlyTJA_E5AEB5,
    .width = 11,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A2B3Tiles,
};

const struct GlyphNew GlyTJA_E6BA9C = { /* 溜 */
    .next = &GlyTJA_E68D89,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6BA9CTiles,
};

const struct GlyphNew GlyTJA_E697AD = { /* 旭 */
    .next = &GlyTJA_E6BA9C,
    .width = 11,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E697ADTiles,
};

const struct GlyphNew GlyTJA_E98DB5 = { /* 鍵 */
    .next = &GlyTJA_E998BF,
    .width = 11,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E98DB5Tiles,
};

const struct GlyphNew GlyTJA_E9A195 = { /* 顕 */
    .next = &GlyTJA_E98DB5,
    .width = 11,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9A195Tiles,
};

const struct GlyphNew GlyTJA_E5A180 = { /* 塀 */
    .next = &GlyTJA_E5A2B3,
    .width = 11,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A180Tiles,
};

const struct GlyphNew GlyTJA_E69DBE = { /* 松 */
    .next = &GlyTJA_E697AD,
    .width = 11,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69DBETiles,
};

const struct GlyphNew GlyTJA_E98E96 = { /* 鎖 */
    .next = &GlyTJA_E9A195,
    .width = 11,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E98E96Tiles,
};

const struct GlyphNew GlyTJA_E58CBF = { /* 匿 */
    .next = &GlyTJA_E5A180,
    .width = 11,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58CBFTiles,
};

const struct GlyphNew GlyTJA_E4BDB3 = { /* 佳 */
    .next = &GlyTJA_E4B9BE,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BDB3Tiles,
};

const struct GlyphNew GlyTJA_E69DBF = { /* 板 */
    .next = &GlyTJA_E69DBE,
    .width = 11,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69DBFTiles,
};

const struct GlyphNew GlyTJA_E69689 = { /* 斉 */
    .next = &GlyTJA_E69DBF,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69689Tiles,
};

const struct GlyphNew GlyTJA_E7BF94 = { /* 翔 */
    .next = &GlyTJA_E793A6,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7BF94Tiles,
};

const struct GlyphNew GlyTJA_E683B0 = { /* 惰 */
    .next = &GlyTJA_E69689,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E683B0Tiles,
};

const struct GlyphNew GlyTJA_E7B6BF = { /* 綿 */
    .next = &GlyTJA_E7BF94,
    .width = 11,
    .utf_byte_2 = 0xb6,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B6BFTiles,
};

const struct GlyphNew GlyTJA_E696A5 = { /* 斥 */
    .next = &GlyTJA_E683B0,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E696A5Tiles,
};

const struct GlyphNew GlyTJA_E6969C = { /* 斜 */
    .next = &GlyTJA_E696A5,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6969CTiles,
};

const struct GlyphNew GlyTJA_E5A684 = { /* 妄 */
    .next = &GlyTJA_E58CBF,
    .width = 11,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A684Tiles,
};

const struct GlyphNew GlyTJA_E5A29F = { /* 墟 */
    .next = &GlyTJA_E5A684,
    .width = 11,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5A29FTiles,
};

const struct GlyphNew GlyTJA_E5AF85 = { /* 寅 */
    .next = &GlyTJA_E5A29F,
    .width = 11,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AF85Tiles,
};

const struct GlyphNew GlyTJA_E7A68D = { /* 禍 */
    .next = &GlyTJA_E7B6BF,
    .width = 11,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A68DTiles,
};

const struct GlyphNew GlyTJA_E79BB2 = { /* 盲 */
    .next = &GlyTJA_E7A68D,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E79BB2Tiles,
};

const struct GlyphNew GlyTJA_E981AE = { /* 遮 */
    .next = &GlyTJA_E98E96,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E981AETiles,
};

const struct GlyphNew GlyTJA_E8B19A = { /* 豚 */
    .next = &GlyTJA_E897A4,
    .width = 11,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B19ATiles,
};

const struct GlyphNew GlyTJA_E9B197 = { /* 鱗 */
    .next = &GlyTJA_E981AE,
    .width = 11,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9B197Tiles,
};

const struct GlyphNew GlyTJA_E5B0BA = { /* 尺 */
    .next = &GlyTJA_E5AF85,
    .width = 11,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5B0BATiles,
};

const struct GlyphNew GlyTJA_E7B7AF = { /* 緯 */
    .next = &GlyTJA_E79BB2,
    .width = 11,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B7AFTiles,
};

const struct GlyphNew GlyTJA_E7B4AF = { /* 累 */
    .next = &GlyTJA_E7B7AF,
    .width = 10,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7B4AFTiles,
};

const struct GlyphNew GlyTJA_E78EA9 = { /* 玩 */
    .next = &GlyTJA_E7B4AF,
    .width = 11,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E78EA9Tiles,
};

const struct GlyphNew GlyTJA_E5819C = { /* 停 */
    .next = &GlyTJA_E5B0BA,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5819CTiles,
};

const struct GlyphNew GlyTJA_E69690 = { /* 斐 */
    .next = &GlyTJA_E6969C,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69690Tiles,
};

const struct GlyphNew GlyTJA_E4BA95 = { /* 井 */
    .next = &GlyTJA_E4BDB3,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4BA95Tiles,
};

const struct GlyphNew GlyTJA_E7A982 = { /* 穂 */
    .next = &GlyTJA_E78EA9,
    .width = 11,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A982Tiles,
};

const struct GlyphNew GlyTJA_E88ABD = { /* 芽 */
    .next = &GlyTJA_E8B19A,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E88ABDTiles,
};

const struct GlyphNew GlyTJA_E98381 = { /* 郁 */
    .next = &GlyTJA_E9B197,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E98381Tiles,
};

const struct GlyphNew GlyTJA_E69CB1 = { /* 朱 */
    .next = &GlyTJA_E69690,
    .width = 11,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E69CB1Tiles,
};

const struct GlyphNew GlyTJA_E99BB6 = { /* 零 */
    .next = &GlyTJA_E98381,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E99BB6Tiles,
};

const struct GlyphNew GlyTJA_E9B7BA = { /* 鷺 */
    .next = &GlyTJA_E99BB6,
    .width = 11,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E9B7BATiles,
};

const struct GlyphNew GlyTJA_E882A5 = { /* 肥 */
    .next = &GlyTJA_E88ABD,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E882A5Tiles,
};

const struct GlyphNew GlyTJA_E6BAA2 = { /* 溢 */
    .next = &GlyTJA_E69CB1,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E6BAA2Tiles,
};

const struct GlyphNew GlyTJA_E5AFBF = { /* 寿 */
    .next = &GlyTJA_E5819C,
    .width = 11,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E5AFBFTiles,
};

const struct GlyphNew GlyTJA_E7A9A3 = { /* 穣 */
    .next = &GlyTJA_E7A982,
    .width = 11,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E7A9A3Tiles,
};

const struct GlyphNew GlyTJA_E899B9 = { /* 虹 */
    .next = &GlyTJA_E882A5,
    .width = 11,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E899B9Tiles,
};

const struct GlyphNew GlyTJA_E4B8B2 = { /* 串 */
    .next = &GlyTJA_E4BA95,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E4B8B2Tiles,
};

const struct GlyphNew GlyTJA_E8B984 = { /* 蹄 */
    .next = &GlyTJA_E899B9,
    .width = 11,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E8B984Tiles,
};

const struct GlyphNew GlyTJA_E58FAA = { /* 只 */
    .next = &GlyTJA_E5AFBF,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_E58FAATiles,
};

const struct GlyphNew GlyTJA_21 = { /* ! */
    .next = NULL,
    .width = 3,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_21Tiles,
};

const struct GlyphNew GlyTJA_22 = { /* " */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_22Tiles,
};

const struct GlyphNew GlyTJA_24 = { /* $ */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_24Tiles,
};

const struct GlyphNew GlyTJA_25 = { /* % */
    .next = NULL,
    .width = 8,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_25Tiles,
};

const struct GlyphNew GlyTJA_26 = { /* & */
    .next = NULL,
    .width = 7,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_26Tiles,
};

const struct GlyphNew GlyTJA_27 = { /* ' */
    .next = NULL,
    .width = 2,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_27Tiles,
};

const struct GlyphNew GlyTJA_2A = { /* * */
    .next = NULL,
    .width = 8,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_2ATiles,
};

const struct GlyphNew GlyTJA_2B = { /* + */
    .next = NULL,
    .width = 8,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_2BTiles,
};

const struct GlyphNew GlyTJA_2C = { /* , */
    .next = NULL,
    .width = 2,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_2CTiles,
};

const struct GlyphNew GlyTJA_2D = { /* - */
    .next = NULL,
    .width = 4,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_2DTiles,
};

const struct GlyphNew GlyTJA_2E = { /* . */
    .next = NULL,
    .width = 2,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_2ETiles,
};

const struct GlyphNew GlyTJA_37 = { /* 7 */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_37Tiles,
};

const struct GlyphNew GlyTJA_38 = { /* 8 */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_38Tiles,
};

const struct GlyphNew GlyTJA_3B = { /* ; */
    .next = NULL,
    .width = 2,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_3BTiles,
};

const struct GlyphNew GlyTJA_3C = { /* < */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_3CTiles,
};

const struct GlyphNew GlyTJA_3E = { /* > */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_3ETiles,
};

const struct GlyphNew GlyTJA_3F = { /* ? */
    .next = NULL,
    .width = 7,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_3FTiles,
};

const struct GlyphNew GlyTJA_40 = { /* @ */
    .next = NULL,
    .width = 8,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_40Tiles,
};

const struct GlyphNew GlyTJA_41 = { /* A */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_41Tiles,
};

const struct GlyphNew GlyTJA_42 = { /* B */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_42Tiles,
};

const struct GlyphNew GlyTJA_43 = { /* C */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_43Tiles,
};

const struct GlyphNew GlyTJA_44 = { /* D */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_44Tiles,
};

const struct GlyphNew GlyTJA_45 = { /* E */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_45Tiles,
};

const struct GlyphNew GlyTJA_46 = { /* F */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_46Tiles,
};

const struct GlyphNew GlyTJA_47 = { /* G */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_47Tiles,
};

const struct GlyphNew GlyTJA_49 = { /* I */
    .next = NULL,
    .width = 4,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_49Tiles,
};

const struct GlyphNew GlyTJA_4A = { /* J */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_4ATiles,
};

const struct GlyphNew GlyTJA_4B = { /* K */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_4BTiles,
};

const struct GlyphNew GlyTJA_4C = { /* L */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_4CTiles,
};

const struct GlyphNew GlyTJA_4E = { /* N */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_4ETiles,
};

const struct GlyphNew GlyTJA_4F = { /* O */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_4FTiles,
};

const struct GlyphNew GlyTJA_50 = { /* P */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_50Tiles,
};

const struct GlyphNew GlyTJA_51 = { /* Q */
    .next = NULL,
    .width = 7,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_51Tiles,
};

const struct GlyphNew GlyTJA_52 = { /* R */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_52Tiles,
};

const struct GlyphNew GlyTJA_53 = { /* S */
    .next = NULL,
    .width = 7,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_53Tiles,
};

const struct GlyphNew GlyTJA_56 = { /* V */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_56Tiles,
};

const struct GlyphNew GlyTJA_57 = { /* W */
    .next = NULL,
    .width = 8,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_57Tiles,
};

const struct GlyphNew GlyTJA_58 = { /* X */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_58Tiles,
};

const struct GlyphNew GlyTJA_59 = { /* Y */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_59Tiles,
};

const struct GlyphNew GlyTJA_5A = { /* Z */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_5ATiles,
};

const struct GlyphNew GlyTJA_5B = { /* [ */
    .next = NULL,
    .width = 3,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_5BTiles,
};

const struct GlyphNew GlyTJA_5C = { /* \ */
    .next = NULL,
    .width = 8,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_5CTiles,
};

const struct GlyphNew GlyTJA_5D = { /* ] */
    .next = NULL,
    .width = 3,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_5DTiles,
};

const struct GlyphNew GlyTJA_5E = { /* ^ */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_5ETiles,
};

const struct GlyphNew GlyTJA_5F = { /* _ */
    .next = NULL,
    .width = 4,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_5FTiles,
};

const struct GlyphNew GlyTJA_60 = { /* ` */
    .next = NULL,
    .width = 2,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_60Tiles,
};

const struct GlyphNew GlyTJA_61 = { /* a */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_61Tiles,
};

const struct GlyphNew GlyTJA_62 = { /* b */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_62Tiles,
};

const struct GlyphNew GlyTJA_63 = { /* c */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_63Tiles,
};

const struct GlyphNew GlyTJA_64 = { /* d */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_64Tiles,
};

const struct GlyphNew GlyTJA_65 = { /* e */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_65Tiles,
};

const struct GlyphNew GlyTJA_66 = { /* f */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_66Tiles,
};

const struct GlyphNew GlyTJA_67 = { /* g */
    .next = NULL,
    .width = 7,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_67Tiles,
};

const struct GlyphNew GlyTJA_68 = { /* h */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_68Tiles,
};

const struct GlyphNew GlyTJA_69 = { /* i */
    .next = NULL,
    .width = 2,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_69Tiles,
};

const struct GlyphNew GlyTJA_6A = { /* j */
    .next = NULL,
    .width = 3,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_6ATiles,
};

const struct GlyphNew GlyTJA_6B = { /* k */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_6BTiles,
};

const struct GlyphNew GlyTJA_6C = { /* l */
    .next = NULL,
    .width = 2,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_6CTiles,
};

const struct GlyphNew GlyTJA_6D = { /* m */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_6DTiles,
};

const struct GlyphNew GlyTJA_6E = { /* n */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_6ETiles,
};

const struct GlyphNew GlyTJA_6F = { /* o */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_6FTiles,
};

const struct GlyphNew GlyTJA_70 = { /* p */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_70Tiles,
};

const struct GlyphNew GlyTJA_71 = { /* q */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_71Tiles,
};

const struct GlyphNew GlyTJA_72 = { /* r */
    .next = NULL,
    .width = 4,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_72Tiles,
};

const struct GlyphNew GlyTJA_73 = { /* s */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_73Tiles,
};

const struct GlyphNew GlyTJA_74 = { /* t */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_74Tiles,
};

const struct GlyphNew GlyTJA_75 = { /* u */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_75Tiles,
};

const struct GlyphNew GlyTJA_76 = { /* v */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_76Tiles,
};

const struct GlyphNew GlyTJA_77 = { /* w */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_77Tiles,
};

const struct GlyphNew GlyTJA_78 = { /* x */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_78Tiles,
};

const struct GlyphNew GlyTJA_79 = { /* y */
    .next = NULL,
    .width = 4,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_79Tiles,
};

const struct GlyphNew GlyTJA_7A = { /* z */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_7ATiles,
};

const struct GlyphNew GlyTJA_7B = { /* { */
    .next = NULL,
    .width = 4,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_7BTiles,
};

const struct GlyphNew GlyTJA_7C = { /* | */
    .next = NULL,
    .width = 2,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_7CTiles,
};

const struct GlyphNew GlyTJA_7D = { /* } */
    .next = NULL,
    .width = 4,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_7DTiles,
};

const struct GlyphNew GlyTJA_7E = { /* ~ */
    .next = NULL,
    .width = 7,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlyTJA_7ETiles,
};

struct GlyphNew const * const GlyTJANew[0x100 - 0x20] = {
    [0xe3 - 0x20] = &GlyTJA_E38091,
    [0xe2 - 0x20] = &GlyTJA_E29885,
    [0xe6 - 0x20] = &GlyTJA_E6BAA2,
    [0xe9 - 0x20] = &GlyTJA_E9B7BA,
    [0xe5 - 0x20] = &GlyTJA_E58FAA,
    [0xe8 - 0x20] = &GlyTJA_E8B984,
    [0xe7 - 0x20] = &GlyTJA_E7A9A3,
    [0xe4 - 0x20] = &GlyTJA_E4B8B2,
    [0xef - 0x20] = &GlyTJA_EFBC85,
    [0xc3 - 0x20] = &GlyTJA_C397,
    [0x3d - 0x20] = &GlyTJA_3D,
    [0x28 - 0x20] = &GlyTJA_28,
    [0x29 - 0x20] = &GlyTJA_29,
    [0x4d - 0x20] = &GlyTJA_4D,
    [0x23 - 0x20] = &GlyTJA_23,
    [0x30 - 0x20] = &GlyTJA_30,
    [0x32 - 0x20] = &GlyTJA_32,
    [0x34 - 0x20] = &GlyTJA_34,
    [0x2f - 0x20] = &GlyTJA_2F,
    [0x39 - 0x20] = &GlyTJA_39,
    [0x54 - 0x20] = &GlyTJA_54,
    [0x48 - 0x20] = &GlyTJA_48,
    [0x55 - 0x20] = &GlyTJA_55,
    [0x20 - 0x20] = &GlyTJA_20,
    [0x31 - 0x20] = &GlyTJA_31,
    [0x33 - 0x20] = &GlyTJA_33,
    [0x3a - 0x20] = &GlyTJA_3A,
    [0x35 - 0x20] = &GlyTJA_35,
    [0x36 - 0x20] = &GlyTJA_36,
    [0x21 - 0x20] = &GlyTJA_21,
    [0x22 - 0x20] = &GlyTJA_22,
    [0x24 - 0x20] = &GlyTJA_24,
    [0x25 - 0x20] = &GlyTJA_25,
    [0x26 - 0x20] = &GlyTJA_26,
    [0x27 - 0x20] = &GlyTJA_27,
    [0x2a - 0x20] = &GlyTJA_2A,
    [0x2b - 0x20] = &GlyTJA_2B,
    [0x2c - 0x20] = &GlyTJA_2C,
    [0x2d - 0x20] = &GlyTJA_2D,
    [0x2e - 0x20] = &GlyTJA_2E,
    [0x37 - 0x20] = &GlyTJA_37,
    [0x38 - 0x20] = &GlyTJA_38,
    [0x3b - 0x20] = &GlyTJA_3B,
    [0x3c - 0x20] = &GlyTJA_3C,
    [0x3e - 0x20] = &GlyTJA_3E,
    [0x3f - 0x20] = &GlyTJA_3F,
    [0x40 - 0x20] = &GlyTJA_40,
    [0x41 - 0x20] = &GlyTJA_41,
    [0x42 - 0x20] = &GlyTJA_42,
    [0x43 - 0x20] = &GlyTJA_43,
    [0x44 - 0x20] = &GlyTJA_44,
    [0x45 - 0x20] = &GlyTJA_45,
    [0x46 - 0x20] = &GlyTJA_46,
    [0x47 - 0x20] = &GlyTJA_47,
    [0x49 - 0x20] = &GlyTJA_49,
    [0x4a - 0x20] = &GlyTJA_4A,
    [0x4b - 0x20] = &GlyTJA_4B,
    [0x4c - 0x20] = &GlyTJA_4C,
    [0x4e - 0x20] = &GlyTJA_4E,
    [0x4f - 0x20] = &GlyTJA_4F,
    [0x50 - 0x20] = &GlyTJA_50,
    [0x51 - 0x20] = &GlyTJA_51,
    [0x52 - 0x20] = &GlyTJA_52,
    [0x53 - 0x20] = &GlyTJA_53,
    [0x56 - 0x20] = &GlyTJA_56,
    [0x57 - 0x20] = &GlyTJA_57,
    [0x58 - 0x20] = &GlyTJA_58,
    [0x59 - 0x20] = &GlyTJA_59,
    [0x5a - 0x20] = &GlyTJA_5A,
    [0x5b - 0x20] = &GlyTJA_5B,
    [0x5c - 0x20] = &GlyTJA_5C,
    [0x5d - 0x20] = &GlyTJA_5D,
    [0x5e - 0x20] = &GlyTJA_5E,
    [0x5f - 0x20] = &GlyTJA_5F,
    [0x60 - 0x20] = &GlyTJA_60,
    [0x61 - 0x20] = &GlyTJA_61,
    [0x62 - 0x20] = &GlyTJA_62,
    [0x63 - 0x20] = &GlyTJA_63,
    [0x64 - 0x20] = &GlyTJA_64,
    [0x65 - 0x20] = &GlyTJA_65,
    [0x66 - 0x20] = &GlyTJA_66,
    [0x67 - 0x20] = &GlyTJA_67,
    [0x68 - 0x20] = &GlyTJA_68,
    [0x69 - 0x20] = &GlyTJA_69,
    [0x6a - 0x20] = &GlyTJA_6A,
    [0x6b - 0x20] = &GlyTJA_6B,
    [0x6c - 0x20] = &GlyTJA_6C,
    [0x6d - 0x20] = &GlyTJA_6D,
    [0x6e - 0x20] = &GlyTJA_6E,
    [0x6f - 0x20] = &GlyTJA_6F,
    [0x70 - 0x20] = &GlyTJA_70,
    [0x71 - 0x20] = &GlyTJA_71,
    [0x72 - 0x20] = &GlyTJA_72,
    [0x73 - 0x20] = &GlyTJA_73,
    [0x74 - 0x20] = &GlyTJA_74,
    [0x75 - 0x20] = &GlyTJA_75,
    [0x76 - 0x20] = &GlyTJA_76,
    [0x77 - 0x20] = &GlyTJA_77,
    [0x78 - 0x20] = &GlyTJA_78,
    [0x79 - 0x20] = &GlyTJA_79,
    [0x7a - 0x20] = &GlyTJA_7A,
    [0x7b - 0x20] = &GlyTJA_7B,
    [0x7c - 0x20] = &GlyTJA_7C,
    [0x7d - 0x20] = &GlyTJA_7D,
    [0x7e - 0x20] = &GlyTJA_7E,
};
