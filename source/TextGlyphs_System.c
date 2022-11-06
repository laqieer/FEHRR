#include <stddef.h>
#include "textNew.h"
#include "all_gfx.h"
#include "TextGlyphs_System.h"

const struct GlyphNew TextGlyphs_System_E382A1 = { /* ァ */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E382A1Tiles,
};

const struct GlyphNew TextGlyphs_System_E285B0 = { /* ⅰ */
    .next = NULL,
    .width = 7,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E285B0Tiles,
};

const struct GlyphNew TextGlyphs_System_E38080 = { /* 　 */
    .next = &TextGlyphs_System_E382A1,
    .width = 8,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38080Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B395 = { /* 法 */
    .next = NULL,
    .width = 8,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B395Tiles,
};

const struct GlyphNew TextGlyphs_System_E999A2 = { /* 院 */
    .next = NULL,
    .width = 9,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E999A2Tiles,
};

const struct GlyphNew TextGlyphs_System_E6A99F = { /* 機 */
    .next = &TextGlyphs_System_E6B395,
    .width = 8,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A99FTiles,
};

const struct GlyphNew TextGlyphs_System_E68E98 = { /* 掘 */
    .next = &TextGlyphs_System_E6A99F,
    .width = 9,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68E98Tiles,
};

const struct GlyphNew TextGlyphs_System_E58FA9 = { /* 叩 */
    .next = NULL,
    .width = 8,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58FA9Tiles,
};

const struct GlyphNew TextGlyphs_System_E291A0 = { /* ① */
    .next = &TextGlyphs_System_E285B0,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E291A0Tiles,
};

const struct GlyphNew TextGlyphs_System_E893AE = { /* 蓮 */
    .next = NULL,
    .width = 8,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E893AETiles,
};

const struct GlyphNew TextGlyphs_System_E382A2 = { /* ア */
    .next = &TextGlyphs_System_E38080,
    .width = 7,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E382A2Tiles,
};

const struct GlyphNew TextGlyphs_System_E285B1 = { /* ⅱ */
    .next = &TextGlyphs_System_E291A0,
    .width = 7,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E285B1Tiles,
};

const struct GlyphNew TextGlyphs_System_E38081 = { /* 、 */
    .next = &TextGlyphs_System_E382A2,
    .width = 6,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38081Tiles,
};

const struct GlyphNew TextGlyphs_System_E999B0 = { /* 陰 */
    .next = &TextGlyphs_System_E999A2,
    .width = 9,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E999B0Tiles,
};

const struct GlyphNew TextGlyphs_System_E980A3 = { /* 連 */
    .next = &TextGlyphs_System_E999B0,
    .width = 8,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E980A3Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B8B0 = { /* 帰 */
    .next = &TextGlyphs_System_E58FA9,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B8B0Tiles,
};

const struct GlyphNew TextGlyphs_System_E291A1 = { /* ② */
    .next = &TextGlyphs_System_E285B1,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E291A1Tiles,
};

const struct GlyphNew TextGlyphs_System_E8BCB8 = { /* 輸 */
    .next = &TextGlyphs_System_E893AE,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BCB8Tiles,
};

const struct GlyphNew TextGlyphs_System_E7AA9F = { /* 窟 */
    .next = NULL,
    .width = 8,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7AA9FTiles,
};

const struct GlyphNew TextGlyphs_System_E382A3 = { /* ィ */
    .next = &TextGlyphs_System_E38081,
    .width = 6,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E382A3Tiles,
};

const struct GlyphNew TextGlyphs_System_E285B2 = { /* ⅲ */
    .next = &TextGlyphs_System_E291A1,
    .width = 7,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E285B2Tiles,
};

const struct GlyphNew TextGlyphs_System_E38082 = { /* 。 */
    .next = &TextGlyphs_System_E382A3,
    .width = 6,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38082Tiles,
};

const struct GlyphNew TextGlyphs_System_E594AF = { /* 唯 */
    .next = &TextGlyphs_System_E5B8B0,
    .width = 8,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E594AFTiles,
};

const struct GlyphNew TextGlyphs_System_E98194 = { /* 達 */
    .next = &TextGlyphs_System_E980A3,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E98194Tiles,
};

const struct GlyphNew TextGlyphs_System_E99AA0 = { /* 隠 */
    .next = &TextGlyphs_System_E98194,
    .width = 8,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99AA0Tiles,
};

const struct GlyphNew TextGlyphs_System_E291A2 = { /* ③ */
    .next = &TextGlyphs_System_E285B2,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E291A2Tiles,
};

const struct GlyphNew TextGlyphs_System_E382A4 = { /* イ */
    .next = &TextGlyphs_System_E38082,
    .width = 7,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E382A4Tiles,
};

const struct GlyphNew TextGlyphs_System_E285B3 = { /* ⅳ */
    .next = &TextGlyphs_System_E291A2,
    .width = 7,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E285B3Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBC8C = { /* ， */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBC8CTiles,
};

const struct GlyphNew TextGlyphs_System_E6B097 = { /* 気 */
    .next = &TextGlyphs_System_E68E98,
    .width = 8,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B097Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B5B7 = { /* 海 */
    .next = &TextGlyphs_System_E6B097,
    .width = 8,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B5B7Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BFAE = { /* 修 */
    .next = NULL,
    .width = 9,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BFAETiles,
};

const struct GlyphNew TextGlyphs_System_E4BBBB = { /* 任 */
    .next = &TextGlyphs_System_E4BFAE,
    .width = 8,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BBBBTiles,
};

const struct GlyphNew TextGlyphs_System_E291A3 = { /* ④ */
    .next = &TextGlyphs_System_E285B3,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E291A3Tiles,
};

const struct GlyphNew TextGlyphs_System_E382A5 = { /* ゥ */
    .next = &TextGlyphs_System_E382A4,
    .width = 6,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E382A5Tiles,
};

const struct GlyphNew TextGlyphs_System_E285B4 = { /* ⅴ */
    .next = &TextGlyphs_System_E291A3,
    .width = 7,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E285B4Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBC8E = { /* ． */
    .next = &TextGlyphs_System_EFBC8C,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBC8ETiles,
};

const struct GlyphNew TextGlyphs_System_E5A5BD = { /* 好 */
    .next = &TextGlyphs_System_E594AF,
    .width = 8,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A5BDTiles,
};

const struct GlyphNew TextGlyphs_System_E5A5AA = { /* 奪 */
    .next = &TextGlyphs_System_E5A5BD,
    .width = 9,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A5AATiles,
};

const struct GlyphNew TextGlyphs_System_E7B994 = { /* 織 */
    .next = &TextGlyphs_System_E7AA9F,
    .width = 9,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B994Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B3A5 = { /* 泥 */
    .next = &TextGlyphs_System_E6B5B7,
    .width = 8,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B3A5Tiles,
};

const struct GlyphNew TextGlyphs_System_E584AA = { /* 優 */
    .next = &TextGlyphs_System_E5A5AA,
    .width = 9,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E584AATiles,
};

const struct GlyphNew TextGlyphs_System_E291A4 = { /* ⑤ */
    .next = &TextGlyphs_System_E285B4,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E291A4Tiles,
};

const struct GlyphNew TextGlyphs_System_E781B0 = { /* 灰 */
    .next = &TextGlyphs_System_E7B994,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E781B0Tiles,
};

const struct GlyphNew TextGlyphs_System_E382A6 = { /* ウ */
    .next = &TextGlyphs_System_E382A5,
    .width = 7,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E382A6Tiles,
};

const struct GlyphNew TextGlyphs_System_E285B5 = { /* ⅵ */
    .next = &TextGlyphs_System_E291A4,
    .width = 7,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E285B5Tiles,
};

const struct GlyphNew TextGlyphs_System_E383BB = { /* ・ */
    .next = &TextGlyphs_System_E382A6,
    .width = 6,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E383BBTiles,
};

const struct GlyphNew TextGlyphs_System_E58B87 = { /* 勇 */
    .next = &TextGlyphs_System_E584AA,
    .width = 7,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58B87Tiles,
};

const struct GlyphNew TextGlyphs_System_E6AEBA = { /* 殺 */
    .next = &TextGlyphs_System_E6B3A5,
    .width = 9,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6AEBATiles,
};

const struct GlyphNew TextGlyphs_System_E7958C = { /* 界 */
    .next = &TextGlyphs_System_E781B0,
    .width = 9,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7958CTiles,
};

const struct GlyphNew TextGlyphs_System_E884B1 = { /* 脱 */
    .next = &TextGlyphs_System_E8BCB8,
    .width = 9,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E884B1Tiles,
};

const struct GlyphNew TextGlyphs_System_E881B7 = { /* 職 */
    .next = &TextGlyphs_System_E884B1,
    .width = 10,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E881B7Tiles,
};

const struct GlyphNew TextGlyphs_System_E58FB3 = { /* 右 */
    .next = &TextGlyphs_System_E58B87,
    .width = 8,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58FB3Tiles,
};

const struct GlyphNew TextGlyphs_System_E291A5 = { /* ⑥ */
    .next = &TextGlyphs_System_E285B5,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E291A5Tiles,
};

const struct GlyphNew TextGlyphs_System_E382A7 = { /* ェ */
    .next = &TextGlyphs_System_E383BB,
    .width = 6,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E382A7Tiles,
};

const struct GlyphNew TextGlyphs_System_E285B6 = { /* ⅶ */
    .next = &TextGlyphs_System_E291A5,
    .width = 7,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E285B6Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBC9A = { /* ： */
    .next = &TextGlyphs_System_EFBC8E,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBC9ATiles,
};

const struct GlyphNew TextGlyphs_System_E58F8B = { /* 友 */
    .next = &TextGlyphs_System_E58FB3,
    .width = 8,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58F8BTiles,
};

const struct GlyphNew TextGlyphs_System_E79A86 = { /* 皆 */
    .next = &TextGlyphs_System_E7958C,
    .width = 8,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79A86Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AA8D = { /* 認 */
    .next = &TextGlyphs_System_E881B7,
    .width = 9,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AA8DTiles,
};

const struct GlyphNew TextGlyphs_System_E5AD9D = { /* 孝 */
    .next = &TextGlyphs_System_E58F8B,
    .width = 9,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AD9DTiles,
};

const struct GlyphNew TextGlyphs_System_E291A6 = { /* ⑦ */
    .next = &TextGlyphs_System_E285B6,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E291A6Tiles,
};

const struct GlyphNew TextGlyphs_System_E889B2 = { /* 色 */
    .next = &TextGlyphs_System_E8AA8D,
    .width = 8,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E889B2Tiles,
};

const struct GlyphNew TextGlyphs_System_E382A8 = { /* エ */
    .next = &TextGlyphs_System_E382A7,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E382A8Tiles,
};

const struct GlyphNew TextGlyphs_System_E285B7 = { /* ⅷ */
    .next = &TextGlyphs_System_E291A6,
    .width = 7,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E285B7Tiles,
};

const struct GlyphNew TextGlyphs_System_E695B5 = { /* 敵 */
    .next = &TextGlyphs_System_E6AEBA,
    .width = 9,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E695B5Tiles,
};

const struct GlyphNew TextGlyphs_System_E99B91 = { /* 雑 */
    .next = &TextGlyphs_System_E99AA0,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99B91Tiles,
};

const struct GlyphNew TextGlyphs_System_E7A780 = { /* 秀 */
    .next = &TextGlyphs_System_E79A86,
    .width = 8,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A780Tiles,
};

const struct GlyphNew TextGlyphs_System_E382A9 = { /* ォ */
    .next = &TextGlyphs_System_E382A8,
    .width = 7,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E382A9Tiles,
};

const struct GlyphNew TextGlyphs_System_E285B8 = { /* ⅸ */
    .next = &TextGlyphs_System_E285B7,
    .width = 7,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E285B8Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBC9F = { /* ？ */
    .next = &TextGlyphs_System_EFBC9A,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBC9FTiles,
};

const struct GlyphNew TextGlyphs_System_E8B7AF = { /* 路 */
    .next = &TextGlyphs_System_E889B2,
    .width = 8,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B7AFTiles,
};

const struct GlyphNew TextGlyphs_System_E7BEBD = { /* 羽 */
    .next = &TextGlyphs_System_E7A780,
    .width = 8,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BEBDTiles,
};

const struct GlyphNew TextGlyphs_System_E382AA = { /* オ */
    .next = &TextGlyphs_System_E382A9,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E382AATiles,
};

const struct GlyphNew TextGlyphs_System_E285B9 = { /* ⅹ */
    .next = &TextGlyphs_System_E285B8,
    .width = 7,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E285B9Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBC81 = { /* ！ */
    .next = &TextGlyphs_System_EFBC9F,
    .width = 6,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBC81Tiles,
};

const struct GlyphNew TextGlyphs_System_E79A84 = { /* 的 */
    .next = &TextGlyphs_System_E7BEBD,
    .width = 8,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79A84Tiles,
};

const struct GlyphNew TextGlyphs_System_E981B8 = { /* 選 */
    .next = &TextGlyphs_System_E99B91,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E981B8Tiles,
};

const struct GlyphNew TextGlyphs_System_E7B582 = { /* 終 */
    .next = &TextGlyphs_System_E79A84,
    .width = 8,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B582Tiles,
};

const struct GlyphNew TextGlyphs_System_E89C82 = { /* 蜂 */
    .next = &TextGlyphs_System_E8B7AF,
    .width = 8,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E89C82Tiles,
};

const struct GlyphNew TextGlyphs_System_E382AB = { /* カ */
    .next = &TextGlyphs_System_E382AA,
    .width = 7,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E382ABTiles,
};

const struct GlyphNew TextGlyphs_System_E8B0B7 = { /* 谷 */
    .next = &TextGlyphs_System_E89C82,
    .width = 8,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B0B7Tiles,
};

const struct GlyphNew TextGlyphs_System_E9968B = { /* 開 */
    .next = &TextGlyphs_System_E981B8,
    .width = 8,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9968BTiles,
};

const struct GlyphNew TextGlyphs_System_E58AB4 = { /* 労 */
    .next = &TextGlyphs_System_E5AD9D,
    .width = 8,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58AB4Tiles,
};

const struct GlyphNew TextGlyphs_System_E99BA8 = { /* 雨 */
    .next = &TextGlyphs_System_E9968B,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99BA8Tiles,
};

const struct GlyphNew TextGlyphs_System_E291AA = { /* ⑪ */
    .next = &TextGlyphs_System_E285B9,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E291AATiles,
};

const struct GlyphNew TextGlyphs_System_E3829B = { /* ゛ */
    .next = &TextGlyphs_System_E382AB,
    .width = 6,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E3829BTiles,
};

const struct GlyphNew TextGlyphs_System_E382AC = { /* ガ */
    .next = &TextGlyphs_System_E3829B,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E382ACTiles,
};

const struct GlyphNew TextGlyphs_System_E68F96 = { /* 揖 */
    .next = &TextGlyphs_System_E695B5,
    .width = 7,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68F96Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BF85 = { /* 必 */
    .next = &TextGlyphs_System_E58AB4,
    .width = 8,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BF85Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B9B8 = { /* 幸 */
    .next = &TextGlyphs_System_E5BF85,
    .width = 8,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B9B8Tiles,
};

const struct GlyphNew TextGlyphs_System_E8A8AA = { /* 訪 */
    .next = &TextGlyphs_System_E8B0B7,
    .width = 8,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A8AATiles,
};

const struct GlyphNew TextGlyphs_System_E8A68F = { /* 規 */
    .next = &TextGlyphs_System_E8A8AA,
    .width = 8,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A68FTiles,
};

const struct GlyphNew TextGlyphs_System_E99A8E = { /* 階 */
    .next = &TextGlyphs_System_E99BA8,
    .width = 8,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99A8ETiles,
};

const struct GlyphNew TextGlyphs_System_E291AB = { /* ⑫ */
    .next = &TextGlyphs_System_E291AA,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E291ABTiles,
};

const struct GlyphNew TextGlyphs_System_E3829C = { /* ゜ */
    .next = &TextGlyphs_System_E382AC,
    .width = 6,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E3829CTiles,
};

const struct GlyphNew TextGlyphs_System_E7BF92 = { /* 習 */
    .next = &TextGlyphs_System_E7B582,
    .width = 8,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BF92Tiles,
};

const struct GlyphNew TextGlyphs_System_E382AD = { /* キ */
    .next = &TextGlyphs_System_E3829C,
    .width = 7,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E382ADTiles,
};

const struct GlyphNew TextGlyphs_System_E8B18A = { /* 豊 */
    .next = &TextGlyphs_System_E8A68F,
    .width = 8,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B18ATiles,
};

const struct GlyphNew TextGlyphs_System_E8A898 = { /* 記 */
    .next = &TextGlyphs_System_E8B18A,
    .width = 8,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A898Tiles,
};

const struct GlyphNew TextGlyphs_System_E69C89 = { /* 有 */
    .next = &TextGlyphs_System_E68F96,
    .width = 8,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69C89Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BA83 = { /* 広 */
    .next = &TextGlyphs_System_E5B9B8,
    .width = 8,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BA83Tiles,
};

const struct GlyphNew TextGlyphs_System_E291AC = { /* ⑬ */
    .next = &TextGlyphs_System_E291AB,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E291ACTiles,
};

const struct GlyphNew TextGlyphs_System_E78CAB = { /* 猫 */
    .next = &TextGlyphs_System_E7BF92,
    .width = 8,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78CABTiles,
};

const struct GlyphNew TextGlyphs_System_E382AE = { /* ギ */
    .next = &TextGlyphs_System_E382AD,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E382AETiles,
};

const struct GlyphNew TextGlyphs_System_E8B2B4 = { /* 貴 */
    .next = &TextGlyphs_System_E8A898,
    .width = 8,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B2B4Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BFA1 = { /* 信 */
    .next = &TextGlyphs_System_E4BBBB,
    .width = 8,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BFA1Tiles,
};

const struct GlyphNew TextGlyphs_System_E786B1 = { /* 熱 */
    .next = &TextGlyphs_System_E78CAB,
    .width = 9,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E786B1Tiles,
};

const struct GlyphNew TextGlyphs_System_E587B1 = { /* 凱 */
    .next = &TextGlyphs_System_E5BA83,
    .width = 9,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E587B1Tiles,
};

const struct GlyphNew TextGlyphs_System_E58BB2 = { /* 勲 */
    .next = &TextGlyphs_System_E587B1,
    .width = 9,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58BB2Tiles,
};

const struct GlyphNew TextGlyphs_System_E291AD = { /* ⑭ */
    .next = &TextGlyphs_System_E291AC,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E291ADTiles,
};

const struct GlyphNew TextGlyphs_System_E382AF = { /* ク */
    .next = &TextGlyphs_System_E382AE,
    .width = 7,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E382AFTiles,
};

const struct GlyphNew TextGlyphs_System_E5B9B4 = { /* 年 */
    .next = &TextGlyphs_System_E58BB2,
    .width = 8,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B9B4Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BEB5 = { /* 侵 */
    .next = &TextGlyphs_System_E4BFA1,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BEB5Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B5B7 = { /* 起 */
    .next = &TextGlyphs_System_E8B2B4,
    .width = 8,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B5B7Tiles,
};

const struct GlyphNew TextGlyphs_System_E5909B = { /* 君 */
    .next = &TextGlyphs_System_E5B9B4,
    .width = 8,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5909BTiles,
};

const struct GlyphNew TextGlyphs_System_E8AAB0 = { /* 誰 */
    .next = &TextGlyphs_System_E8B5B7,
    .width = 8,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AAB0Tiles,
};

const struct GlyphNew TextGlyphs_System_E291AE = { /* ⑮ */
    .next = &TextGlyphs_System_E291AD,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E291AETiles,
};

const struct GlyphNew TextGlyphs_System_E69C97 = { /* 朗 */
    .next = &TextGlyphs_System_E69C89,
    .width = 8,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69C97Tiles,
};

const struct GlyphNew TextGlyphs_System_E382B0 = { /* グ */
    .next = &TextGlyphs_System_E382AF,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E382B0Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBC90 = { /* ０ */
    .next = &TextGlyphs_System_EFBC81,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBC90Tiles,
};

const struct GlyphNew TextGlyphs_System_E5898D = { /* 前 */
    .next = &TextGlyphs_System_E5909B,
    .width = 8,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5898DTiles,
};

const struct GlyphNew TextGlyphs_System_E5A496 = { /* 外 */
    .next = &TextGlyphs_System_E5898D,
    .width = 8,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A496Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BFB5 = { /* 念 */
    .next = &TextGlyphs_System_E5A496,
    .width = 8,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BFB5Tiles,
};

const struct GlyphNew TextGlyphs_System_E4B889 = { /* 三 */
    .next = &TextGlyphs_System_E4BEB5,
    .width = 8,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B889Tiles,
};

const struct GlyphNew TextGlyphs_System_E291AF = { /* ⑯ */
    .next = &TextGlyphs_System_E291AE,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E291AFTiles,
};

const struct GlyphNew TextGlyphs_System_E382B1 = { /* ケ */
    .next = &TextGlyphs_System_E382B0,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E382B1Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBC91 = { /* １ */
    .next = &TextGlyphs_System_EFBC90,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBC91Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A7AB = { /* 姫 */
    .next = &TextGlyphs_System_E5BFB5,
    .width = 9,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A7ABTiles,
};

const struct GlyphNew TextGlyphs_System_E59684 = { /* 善 */
    .next = &TextGlyphs_System_E5A7AB,
    .width = 8,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59684Tiles,
};

const struct GlyphNew TextGlyphs_System_E58D98 = { /* 単 */
    .next = &TextGlyphs_System_E59684,
    .width = 8,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58D98Tiles,
};

const struct GlyphNew TextGlyphs_System_E291B0 = { /* ⑰ */
    .next = &TextGlyphs_System_E291AF,
    .width = 7,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E291B0Tiles,
};

const struct GlyphNew TextGlyphs_System_E382B2 = { /* ゲ */
    .next = &TextGlyphs_System_E382B1,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E382B2Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBC92 = { /* ２ */
    .next = &TextGlyphs_System_EFBC91,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBC92Tiles,
};

const struct GlyphNew TextGlyphs_System_E59886 = { /* 嘆 */
    .next = &TextGlyphs_System_E58D98,
    .width = 9,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59886Tiles,
};

const struct GlyphNew TextGlyphs_System_E58F82 = { /* 参 */
    .next = &TextGlyphs_System_E59886,
    .width = 8,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58F82Tiles,
};

const struct GlyphNew TextGlyphs_System_E5AEB3 = { /* 害 */
    .next = &TextGlyphs_System_E58F82,
    .width = 8,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AEB3Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B5AA = { /* 浪 */
    .next = &TextGlyphs_System_E69C97,
    .width = 8,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B5AATiles,
};

const struct GlyphNew TextGlyphs_System_E7BEA4 = { /* 群 */
    .next = &TextGlyphs_System_E786B1,
    .width = 8,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BEA4Tiles,
};

const struct GlyphNew TextGlyphs_System_E382B3 = { /* コ */
    .next = &TextGlyphs_System_E382B2,
    .width = 6,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E382B3Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBC93 = { /* ３ */
    .next = &TextGlyphs_System_EFBC92,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBC93Tiles,
};

const struct GlyphNew TextGlyphs_System_E8BB8D = { /* 軍 */
    .next = &TextGlyphs_System_E8AAB0,
    .width = 8,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BB8DTiles,
};

const struct GlyphNew TextGlyphs_System_E9A88E = { /* 騎 */
    .next = &TextGlyphs_System_E99A8E,
    .width = 9,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A88ETiles,
};

const struct GlyphNew TextGlyphs_System_E5B1B1 = { /* 山 */
    .next = &TextGlyphs_System_E5AEB3,
    .width = 8,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B1B1Tiles,
};

const struct GlyphNew TextGlyphs_System_E784B6 = { /* 然 */
    .next = &TextGlyphs_System_E7BEA4,
    .width = 9,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E784B6Tiles,
};

const struct GlyphNew TextGlyphs_System_E794B1 = { /* 由 */
    .next = &TextGlyphs_System_E784B6,
    .width = 8,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E794B1Tiles,
};

const struct GlyphNew TextGlyphs_System_E68A97 = { /* 抗 */
    .next = &TextGlyphs_System_E6B5AA,
    .width = 9,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68A97Tiles,
};

const struct GlyphNew TextGlyphs_System_E382B4 = { /* ゴ */
    .next = &TextGlyphs_System_E382B3,
    .width = 7,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E382B4Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBC94 = { /* ４ */
    .next = &TextGlyphs_System_EFBC93,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBC94Tiles,
};

const struct GlyphNew TextGlyphs_System_E585A8 = { /* 全 */
    .next = &TextGlyphs_System_E5B1B1,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E585A8Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BAA1 = { /* 亡 */
    .next = &TextGlyphs_System_E4B889,
    .width = 8,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BAA1Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BF83 = { /* 心 */
    .next = &TextGlyphs_System_E585A8,
    .width = 8,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BF83Tiles,
};

const struct GlyphNew TextGlyphs_System_E98984 = { /* 鉄 */
    .next = &TextGlyphs_System_E9A88E,
    .width = 8,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E98984Tiles,
};

const struct GlyphNew TextGlyphs_System_E799BE = { /* 百 */
    .next = &TextGlyphs_System_E794B1,
    .width = 8,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E799BETiles,
};

const struct GlyphNew TextGlyphs_System_E683A8 = { /* 惨 */
    .next = &TextGlyphs_System_E68A97,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E683A8Tiles,
};

const struct GlyphNew TextGlyphs_System_E68B85 = { /* 担 */
    .next = &TextGlyphs_System_E683A8,
    .width = 8,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68B85Tiles,
};

const struct GlyphNew TextGlyphs_System_E789A2 = { /* 牢 */
    .next = &TextGlyphs_System_E799BE,
    .width = 8,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E789A2Tiles,
};

const struct GlyphNew TextGlyphs_System_E9ACBC = { /* 鬼 */
    .next = &TextGlyphs_System_E98984,
    .width = 8,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9ACBCTiles,
};

const struct GlyphNew TextGlyphs_System_E382B5 = { /* サ */
    .next = &TextGlyphs_System_E382B4,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E382B5Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBC95 = { /* ５ */
    .next = &TextGlyphs_System_EFBC94,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBC95Tiles,
};

const struct GlyphNew TextGlyphs_System_E78BBC = { /* 狼 */
    .next = &TextGlyphs_System_E789A2,
    .width = 9,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78BBCTiles,
};

const struct GlyphNew TextGlyphs_System_E68EA7 = { /* 控 */
    .next = &TextGlyphs_System_E68B85,
    .width = 8,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68EA7Tiles,
};

const struct GlyphNew TextGlyphs_System_E68EA2 = { /* 探 */
    .next = &TextGlyphs_System_E68EA7,
    .width = 9,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68EA2Tiles,
};

const struct GlyphNew TextGlyphs_System_E585B8 = { /* 典 */
    .next = &TextGlyphs_System_E5BF83,
    .width = 9,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E585B8Tiles,
};

const struct GlyphNew TextGlyphs_System_E285A0 = { /* Ⅰ */
    .next = &TextGlyphs_System_E291B0,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E285A0Tiles,
};

const struct GlyphNew TextGlyphs_System_E382B6 = { /* ザ */
    .next = &TextGlyphs_System_E382B5,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E382B6Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBC96 = { /* ６ */
    .next = &TextGlyphs_System_EFBC95,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBC96Tiles,
};

const struct GlyphNew TextGlyphs_System_E694BB = { /* 攻 */
    .next = &TextGlyphs_System_E68EA2,
    .width = 8,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E694BBTiles,
};

const struct GlyphNew TextGlyphs_System_E695A3 = { /* 散 */
    .next = &TextGlyphs_System_E694BB,
    .width = 8,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E695A3Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AA98 = { /* 誘 */
    .next = &TextGlyphs_System_E8BB8D,
    .width = 8,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AA98Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B6AF = { /* 涯 */
    .next = &TextGlyphs_System_E695A3,
    .width = 8,
    .utf_byte_2 = 0xb6,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B6AFTiles,
};

const struct GlyphNew TextGlyphs_System_E285A1 = { /* Ⅱ */
    .next = &TextGlyphs_System_E285A0,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E285A1Tiles,
};

const struct GlyphNew TextGlyphs_System_E382B7 = { /* シ */
    .next = &TextGlyphs_System_E382B6,
    .width = 7,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E382B7Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBC97 = { /* ７ */
    .next = &TextGlyphs_System_EFBC96,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBC97Tiles,
};

const struct GlyphNew TextGlyphs_System_E88081 = { /* 老 */
    .next = &TextGlyphs_System_E8AA98,
    .width = 8,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88081Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A4A9 = { /* 天 */
    .next = &TextGlyphs_System_E585B8,
    .width = 8,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A4A9Tiles,
};

const struct GlyphNew TextGlyphs_System_E696B0 = { /* 新 */
    .next = &TextGlyphs_System_E6B6AF,
    .width = 8,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E696B0Tiles,
};

const struct GlyphNew TextGlyphs_System_E9818A = { /* 遊 */
    .next = &TextGlyphs_System_E9ACBC,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9818ATiles,
};

const struct GlyphNew TextGlyphs_System_E58480 = { /* 儀 */
    .next = &TextGlyphs_System_E5A4A9,
    .width = 8,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58480Tiles,
};

const struct GlyphNew TextGlyphs_System_E285A2 = { /* Ⅲ */
    .next = &TextGlyphs_System_E285A1,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E285A2Tiles,
};

const struct GlyphNew TextGlyphs_System_E382B8 = { /* ジ */
    .next = &TextGlyphs_System_E382B7,
    .width = 7,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E382B8Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBC98 = { /* ８ */
    .next = &TextGlyphs_System_EFBC97,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBC98Tiles,
};

const struct GlyphNew TextGlyphs_System_E99B86 = { /* 集 */
    .next = &TextGlyphs_System_E9818A,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99B86Tiles,
};

const struct GlyphNew TextGlyphs_System_E6A899 = { /* 標 */
    .next = &TextGlyphs_System_E696B0,
    .width = 9,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A899Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BF82 = { /* 係 */
    .next = &TextGlyphs_System_E4BAA1,
    .width = 8,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BF82Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B195 = { /* 展 */
    .next = &TextGlyphs_System_E58480,
    .width = 8,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B195Tiles,
};

const struct GlyphNew TextGlyphs_System_E285A3 = { /* Ⅳ */
    .next = &TextGlyphs_System_E285A2,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E285A3Tiles,
};

const struct GlyphNew TextGlyphs_System_E382B9 = { /* ス */
    .next = &TextGlyphs_System_E382B8,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E382B9Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBC99 = { /* ９ */
    .next = &TextGlyphs_System_EFBC98,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBC99Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BA97 = { /* 店 */
    .next = &TextGlyphs_System_E5B195,
    .width = 8,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BA97Tiles,
};

const struct GlyphNew TextGlyphs_System_E38085 = { /* 々 */
    .next = &TextGlyphs_System_E382B9,
    .width = 7,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38085Tiles,
};

const struct GlyphNew TextGlyphs_System_E8A197 = { /* 街 */
    .next = &TextGlyphs_System_E88081,
    .width = 9,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A197Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B0B7 = { /* 氷 */
    .next = &TextGlyphs_System_E6A899,
    .width = 8,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B0B7Tiles,
};

const struct GlyphNew TextGlyphs_System_E6A3AE = { /* 森 */
    .next = &TextGlyphs_System_E6B0B7,
    .width = 9,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A3AETiles,
};

const struct GlyphNew TextGlyphs_System_E69BB4 = { /* 更 */
    .next = &TextGlyphs_System_E6A3AE,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69BB4Tiles,
};

const struct GlyphNew TextGlyphs_System_E285A4 = { /* Ⅴ */
    .next = &TextGlyphs_System_E285A3,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E285A4Tiles,
};

const struct GlyphNew TextGlyphs_System_E382BA = { /* ズ */
    .next = &TextGlyphs_System_E38085,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E382BATiles,
};

const struct GlyphNew TextGlyphs_System_E99B84 = { /* 雄 */
    .next = &TextGlyphs_System_E99B86,
    .width = 9,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99B84Tiles,
};

const struct GlyphNew TextGlyphs_System_E794A3 = { /* 産 */
    .next = &TextGlyphs_System_E78BBC,
    .width = 8,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E794A3Tiles,
};

const struct GlyphNew TextGlyphs_System_E58891 = { /* 刑 */
    .next = &TextGlyphs_System_E5BA97,
    .width = 9,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58891Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BF98 = { /* 忘 */
    .next = &TextGlyphs_System_E58891,
    .width = 8,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BF98Tiles,
};

const struct GlyphNew TextGlyphs_System_E9838E = { /* 郎 */
    .next = &TextGlyphs_System_E99B84,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9838ETiles,
};

const struct GlyphNew TextGlyphs_System_E285A5 = { /* Ⅵ */
    .next = &TextGlyphs_System_E285A4,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E285A5Tiles,
};

const struct GlyphNew TextGlyphs_System_E382BB = { /* セ */
    .next = &TextGlyphs_System_E382BA,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E382BBTiles,
};

const struct GlyphNew TextGlyphs_System_E68A80 = { /* 技 */
    .next = &TextGlyphs_System_E69BB4,
    .width = 8,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68A80Tiles,
};

const struct GlyphNew TextGlyphs_System_E58584 = { /* 兄 */
    .next = &TextGlyphs_System_E5BF98,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58584Tiles,
};

const struct GlyphNew TextGlyphs_System_E79FAD = { /* 短 */
    .next = &TextGlyphs_System_E794A3,
    .width = 8,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79FADTiles,
};

const struct GlyphNew TextGlyphs_System_E4BD8F = { /* 住 */
    .next = &TextGlyphs_System_E4BF82,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BD8FTiles,
};

const struct GlyphNew TextGlyphs_System_E6A0A1 = { /* 校 */
    .next = &TextGlyphs_System_E68A80,
    .width = 9,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A0A1Tiles,
};

const struct GlyphNew TextGlyphs_System_E585AD = { /* 六 */
    .next = &TextGlyphs_System_E58584,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E585ADTiles,
};

const struct GlyphNew TextGlyphs_System_E285A6 = { /* Ⅶ */
    .next = &TextGlyphs_System_E285A5,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E285A6Tiles,
};

const struct GlyphNew TextGlyphs_System_E382BC = { /* ゼ */
    .next = &TextGlyphs_System_E382BB,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E382BCTiles,
};

const struct GlyphNew TextGlyphs_System_E383BC = { /* ー */
    .next = &TextGlyphs_System_E382BC,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E383BCTiles,
};

const struct GlyphNew TextGlyphs_System_E6B7B1 = { /* 深 */
    .next = &TextGlyphs_System_E6A0A1,
    .width = 8,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B7B1Tiles,
};

const struct GlyphNew TextGlyphs_System_E7ABAF = { /* 端 */
    .next = &TextGlyphs_System_E79FAD,
    .width = 9,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7ABAFTiles,
};

const struct GlyphNew TextGlyphs_System_E382BD = { /* ソ */
    .next = &TextGlyphs_System_E383BC,
    .width = 7,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E382BDTiles,
};

const struct GlyphNew TextGlyphs_System_E8A1A8 = { /* 表 */
    .next = &TextGlyphs_System_E8A197,
    .width = 8,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A1A8Tiles,
};

const struct GlyphNew TextGlyphs_System_E883BD = { /* 能 */
    .next = &TextGlyphs_System_E8A1A8,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E883BDTiles,
};

const struct GlyphNew TextGlyphs_System_E794B3 = { /* 申 */
    .next = &TextGlyphs_System_E7ABAF,
    .width = 8,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E794B3Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BA88 = { /* 予 */
    .next = &TextGlyphs_System_E4BD8F,
    .width = 8,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BA88Tiles,
};

const struct GlyphNew TextGlyphs_System_E58D81 = { /* 十 */
    .next = &TextGlyphs_System_E585AD,
    .width = 8,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58D81Tiles,
};

const struct GlyphNew TextGlyphs_System_E382BE = { /* ゾ */
    .next = &TextGlyphs_System_E382BD,
    .width = 7,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E382BETiles,
};

const struct GlyphNew TextGlyphs_System_E5BE93 = { /* 従 */
    .next = &TextGlyphs_System_E58D81,
    .width = 8,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BE93Tiles,
};

const struct GlyphNew TextGlyphs_System_E69C9B = { /* 望 */
    .next = &TextGlyphs_System_E6B7B1,
    .width = 8,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69C9BTiles,
};

const struct GlyphNew TextGlyphs_System_E8BBA2 = { /* 転 */
    .next = &TextGlyphs_System_E883BD,
    .width = 8,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BBA2Tiles,
};

const struct GlyphNew TextGlyphs_System_E78AA0 = { /* 犠 */
    .next = &TextGlyphs_System_E794B3,
    .width = 9,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78AA0Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BD99 = { /* 余 */
    .next = &TextGlyphs_System_E4BA88,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BD99Tiles,
};

const struct GlyphNew TextGlyphs_System_E8A995 = { /* 評 */
    .next = &TextGlyphs_System_E8BBA2,
    .width = 9,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A995Tiles,
};

const struct GlyphNew TextGlyphs_System_E382BF = { /* タ */
    .next = &TextGlyphs_System_E382BE,
    .width = 7,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E382BFTiles,
};

const struct GlyphNew TextGlyphs_System_EFBC8F = { /* ／ */
    .next = &TextGlyphs_System_EFBC99,
    .width = 6,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBC8FTiles,
};

const struct GlyphNew TextGlyphs_System_E9818B = { /* 運 */
    .next = &TextGlyphs_System_E9838E,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9818BTiles,
};

const struct GlyphNew TextGlyphs_System_E79C9F = { /* 真 */
    .next = &TextGlyphs_System_E78AA0,
    .width = 8,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79C9FTiles,
};

const struct GlyphNew TextGlyphs_System_E98CB2 = { /* 録 */
    .next = &TextGlyphs_System_E9818B,
    .width = 9,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E98CB2Tiles,
};

const struct GlyphNew TextGlyphs_System_E4B88E = { /* 与 */
    .next = &TextGlyphs_System_E4BD99,
    .width = 8,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B88ETiles,
};

const struct GlyphNew TextGlyphs_System_E38380 = { /* ダ */
    .next = &TextGlyphs_System_E382BF,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38380Tiles,
};

const struct GlyphNew TextGlyphs_System_E7A59E = { /* 神 */
    .next = &TextGlyphs_System_E79C9F,
    .width = 9,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A59ETiles,
};

const struct GlyphNew TextGlyphs_System_E99BB2 = { /* 雲 */
    .next = &TextGlyphs_System_E98CB2,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99BB2Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AA89 = { /* 誉 */
    .next = &TextGlyphs_System_E8A995,
    .width = 9,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AA89Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A591 = { /* 契 */
    .next = &TextGlyphs_System_E5BE93,
    .width = 8,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A591Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBCBC = { /* ＼ */
    .next = &TextGlyphs_System_EFBC8F,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBCBCTiles,
};

const struct GlyphNew TextGlyphs_System_E782B9 = { /* 点 */
    .next = &TextGlyphs_System_E7A59E,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E782B9Tiles,
};

const struct GlyphNew TextGlyphs_System_E38381 = { /* チ */
    .next = &TextGlyphs_System_E38380,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38381Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBD9E = { /* ～ */
    .next = &TextGlyphs_System_EFBCBC,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBD9ETiles,
};

const struct GlyphNew TextGlyphs_System_EFBCA1 = { /* Ａ */
    .next = &TextGlyphs_System_EFBD9E,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBCA1Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B8AF = { /* 港 */
    .next = &TextGlyphs_System_E69C9B,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B8AFTiles,
};

const struct GlyphNew TextGlyphs_System_E7BEA9 = { /* 義 */
    .next = &TextGlyphs_System_E782B9,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BEA9Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BC9D = { /* 伝 */
    .next = &TextGlyphs_System_E4B88E,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BC9DTiles,
};

const struct GlyphNew TextGlyphs_System_E5BDA2 = { /* 形 */
    .next = &TextGlyphs_System_E5A591,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BDA2Tiles,
};

const struct GlyphNew TextGlyphs_System_E580AD = { /* 倭 */
    .next = &TextGlyphs_System_E5BDA2,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E580ADTiles,
};

const struct GlyphNew TextGlyphs_System_E38382 = { /* ヂ */
    .next = &TextGlyphs_System_E38381,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38382Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBCA2 = { /* Ｂ */
    .next = &TextGlyphs_System_EFBCA1,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBCA2Tiles,
};

const struct GlyphNew TextGlyphs_System_E6AEBF = { /* 殿 */
    .next = &TextGlyphs_System_E6B8AF,
    .width = 9,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6AEBFTiles,
};

const struct GlyphNew TextGlyphs_System_E5928C = { /* 和 */
    .next = &TextGlyphs_System_E580AD,
    .width = 8,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5928CTiles,
};

const struct GlyphNew TextGlyphs_System_E79785 = { /* 病 */
    .next = &TextGlyphs_System_E7BEA9,
    .width = 8,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79785Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AA95 = { /* 誕 */
    .next = &TextGlyphs_System_E8AA89,
    .width = 9,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AA95Tiles,
};

const struct GlyphNew TextGlyphs_System_E9A090 = { /* 預 */
    .next = &TextGlyphs_System_E99BB2,
    .width = 8,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A090Tiles,
};

const struct GlyphNew TextGlyphs_System_E38383 = { /* ッ */
    .next = &TextGlyphs_System_E38382,
    .width = 6,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38383Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBCA3 = { /* Ｃ */
    .next = &TextGlyphs_System_EFBCA2,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBCA3Tiles,
};

const struct GlyphNew TextGlyphs_System_E8A9B1 = { /* 話 */
    .next = &TextGlyphs_System_E8AA95,
    .width = 8,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A9B1Tiles,
};

const struct GlyphNew TextGlyphs_System_E582AD = { /* 傭 */
    .next = &TextGlyphs_System_E5928C,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E582ADTiles,
};

const struct GlyphNew TextGlyphs_System_E887A3 = { /* 臣 */
    .next = &TextGlyphs_System_E8A9B1,
    .width = 7,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E887A3Tiles,
};

const struct GlyphNew TextGlyphs_System_E794B2 = { /* 甲 */
    .next = &TextGlyphs_System_E79785,
    .width = 8,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E794B2Tiles,
};

const struct GlyphNew TextGlyphs_System_E38384 = { /* ツ */
    .next = &TextGlyphs_System_E38383,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38384Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBCA4 = { /* Ｄ */
    .next = &TextGlyphs_System_EFBCA3,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBCA4Tiles,
};

const struct GlyphNew TextGlyphs_System_E79A87 = { /* 皇 */
    .next = &TextGlyphs_System_E794B2,
    .width = 8,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79A87Tiles,
};

const struct GlyphNew TextGlyphs_System_E59BA3 = { /* 団 */
    .next = &TextGlyphs_System_E582AD,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59BA3Tiles,
};

const struct GlyphNew TextGlyphs_System_E7A596 = { /* 祖 */
    .next = &TextGlyphs_System_E79A87,
    .width = 9,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A596Tiles,
};

const struct GlyphNew TextGlyphs_System_E6AE8B = { /* 残 */
    .next = &TextGlyphs_System_E6AEBF,
    .width = 8,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6AE8BTiles,
};

const struct GlyphNew TextGlyphs_System_E8ADB0 = { /* 議 */
    .next = &TextGlyphs_System_E887A3,
    .width = 9,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8ADB0Tiles,
};

const struct GlyphNew TextGlyphs_System_E596B6 = { /* 営 */
    .next = &TextGlyphs_System_E59BA3,
    .width = 8,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E596B6Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B9BC = { /* 幼 */
    .next = &TextGlyphs_System_E596B6,
    .width = 8,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B9BCTiles,
};

const struct GlyphNew TextGlyphs_System_E38385 = { /* ヅ */
    .next = &TextGlyphs_System_E38384,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38385Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBCA5 = { /* Ｅ */
    .next = &TextGlyphs_System_EFBCA4,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBCA5Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A387 = { /* 壇 */
    .next = &TextGlyphs_System_E5B9BC,
    .width = 9,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A387Tiles,
};

const struct GlyphNew TextGlyphs_System_E99BBB = { /* 電 */
    .next = &TextGlyphs_System_E9A090,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99BBBTiles,
};

const struct GlyphNew TextGlyphs_System_E9878D = { /* 重 */
    .next = &TextGlyphs_System_E99BBB,
    .width = 8,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9878DTiles,
};

const struct GlyphNew TextGlyphs_System_E4BB95 = { /* 仕 */
    .next = &TextGlyphs_System_E4BC9D,
    .width = 8,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BB95Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AC80 = { /* 謀 */
    .next = &TextGlyphs_System_E8ADB0,
    .width = 8,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AC80Tiles,
};

const struct GlyphNew TextGlyphs_System_E38386 = { /* テ */
    .next = &TextGlyphs_System_E38385,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38386Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBCA6 = { /* Ｆ */
    .next = &TextGlyphs_System_EFBCA5,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBCA6Tiles,
};

const struct GlyphNew TextGlyphs_System_E8A6AA = { /* 親 */
    .next = &TextGlyphs_System_E8AC80,
    .width = 9,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A6AATiles,
};

const struct GlyphNew TextGlyphs_System_E59084 = { /* 各 */
    .next = &TextGlyphs_System_E5A387,
    .width = 8,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59084Tiles,
};

const struct GlyphNew TextGlyphs_System_E8A687 = { /* 覇 */
    .next = &TextGlyphs_System_E8A6AA,
    .width = 9,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A687Tiles,
};

const struct GlyphNew TextGlyphs_System_E5AEB9 = { /* 容 */
    .next = &TextGlyphs_System_E59084,
    .width = 8,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AEB9Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BDB1 = { /* 影 */
    .next = &TextGlyphs_System_E5AEB9,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BDB1Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BCBE = { /* 弾 */
    .next = &TextGlyphs_System_E5BDB1,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BCBETiles,
};

const struct GlyphNew TextGlyphs_System_E38387 = { /* デ */
    .next = &TextGlyphs_System_E38386,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38387Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBCA7 = { /* Ｇ */
    .next = &TextGlyphs_System_EFBCA6,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBCA7Tiles,
};

const struct GlyphNew TextGlyphs_System_E696AD = { /* 断 */
    .next = &TextGlyphs_System_E6AE8B,
    .width = 8,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E696ADTiles,
};

const struct GlyphNew TextGlyphs_System_E8B2BF = { /* 貿 */
    .next = &TextGlyphs_System_E8A687,
    .width = 8,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B2BFTiles,
};

const struct GlyphNew TextGlyphs_System_E68391 = { /* 惑 */
    .next = &TextGlyphs_System_E696AD,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68391Tiles,
};

const struct GlyphNew TextGlyphs_System_E7B4A0 = { /* 素 */
    .next = &TextGlyphs_System_E7A596,
    .width = 8,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B4A0Tiles,
};

const struct GlyphNew TextGlyphs_System_E38388 = { /* ト */
    .next = &TextGlyphs_System_E38387,
    .width = 6,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38388Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBCA8 = { /* Ｈ */
    .next = &TextGlyphs_System_EFBCA7,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBCA8Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BDBF = { /* 使 */
    .next = &TextGlyphs_System_E4BB95,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BDBFTiles,
};

const struct GlyphNew TextGlyphs_System_E8BAAB = { /* 身 */
    .next = &TextGlyphs_System_E8B2BF,
    .width = 9,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BAABTiles,
};

const struct GlyphNew TextGlyphs_System_E7B485 = { /* 紅 */
    .next = &TextGlyphs_System_E7B4A0,
    .width = 8,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B485Tiles,
};

const struct GlyphNew TextGlyphs_System_E69A96 = { /* 暖 */
    .next = &TextGlyphs_System_E68391,
    .width = 8,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69A96Tiles,
};

const struct GlyphNew TextGlyphs_System_E7B584 = { /* 組 */
    .next = &TextGlyphs_System_E7B485,
    .width = 8,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B584Tiles,
};

const struct GlyphNew TextGlyphs_System_E68BA1 = { /* 拡 */
    .next = &TextGlyphs_System_E69A96,
    .width = 8,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68BA1Tiles,
};

const struct GlyphNew TextGlyphs_System_E38389 = { /* ド */
    .next = &TextGlyphs_System_E38388,
    .width = 6,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38389Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBCA9 = { /* Ｉ */
    .next = &TextGlyphs_System_EFBCA8,
    .width = 6,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBCA9Tiles,
};

const struct GlyphNew TextGlyphs_System_E8BE9B = { /* 辛 */
    .next = &TextGlyphs_System_E8BAAB,
    .width = 8,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BE9BTiles,
};

const struct GlyphNew TextGlyphs_System_E998B2 = { /* 防 */
    .next = &TextGlyphs_System_E9878D,
    .width = 8,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E998B2Tiles,
};

const struct GlyphNew TextGlyphs_System_E6A084 = { /* 栄 */
    .next = &TextGlyphs_System_E68BA1,
    .width = 8,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A084Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B4BE = { /* 派 */
    .next = &TextGlyphs_System_E6A084,
    .width = 8,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B4BETiles,
};

const struct GlyphNew TextGlyphs_System_E5AEBF = { /* 宿 */
    .next = &TextGlyphs_System_E5BCBE,
    .width = 8,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AEBFTiles,
};

const struct GlyphNew TextGlyphs_System_E695AC = { /* 敬 */
    .next = &TextGlyphs_System_E6B4BE,
    .width = 9,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E695ACTiles,
};

const struct GlyphNew TextGlyphs_System_E3838A = { /* ナ */
    .next = &TextGlyphs_System_E38389,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E3838ATiles,
};

const struct GlyphNew TextGlyphs_System_EFBC88 = { /* （ */
    .next = &TextGlyphs_System_EFBCA9,
    .width = 6,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBC88Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBCAA = { /* Ｊ */
    .next = &TextGlyphs_System_EFBC88,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBCAATiles,
};

const struct GlyphNew TextGlyphs_System_E980B2 = { /* 進 */
    .next = &TextGlyphs_System_E998B2,
    .width = 8,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E980B2Tiles,
};

const struct GlyphNew TextGlyphs_System_E58FB8 = { /* 司 */
    .next = &TextGlyphs_System_E5AEBF,
    .width = 8,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58FB8Tiles,
};

const struct GlyphNew TextGlyphs_System_E699AF = { /* 景 */
    .next = &TextGlyphs_System_E695AC,
    .width = 8,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E699AFTiles,
};

const struct GlyphNew TextGlyphs_System_E6B0B8 = { /* 永 */
    .next = &TextGlyphs_System_E699AF,
    .width = 8,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B0B8Tiles,
};

const struct GlyphNew TextGlyphs_System_E6A0BC = { /* 格 */
    .next = &TextGlyphs_System_E6B0B8,
    .width = 8,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A0BCTiles,
};

const struct GlyphNew TextGlyphs_System_E6AEB5 = { /* 段 */
    .next = &TextGlyphs_System_E6A0BC,
    .width = 8,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6AEB5Tiles,
};

const struct GlyphNew TextGlyphs_System_E59381 = { /* 品 */
    .next = &TextGlyphs_System_E58FB8,
    .width = 8,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59381Tiles,
};

const struct GlyphNew TextGlyphs_System_E590A0 = { /* 吠 */
    .next = &TextGlyphs_System_E59381,
    .width = 8,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E590A0Tiles,
};

const struct GlyphNew TextGlyphs_System_E3838B = { /* ニ */
    .next = &TextGlyphs_System_E3838A,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E3838BTiles,
};

const struct GlyphNew TextGlyphs_System_EFBC89 = { /* ） */
    .next = &TextGlyphs_System_EFBCAA,
    .width = 6,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBC89Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBCAB = { /* Ｋ */
    .next = &TextGlyphs_System_EFBC89,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBCABTiles,
};

const struct GlyphNew TextGlyphs_System_E794B7 = { /* 男 */
    .next = &TextGlyphs_System_E7B584,
    .width = 7,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E794B7Tiles,
};

const struct GlyphNew TextGlyphs_System_E7A0B4 = { /* 破 */
    .next = &TextGlyphs_System_E794B7,
    .width = 9,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A0B4Tiles,
};

const struct GlyphNew TextGlyphs_System_E998BB = { /* 阻 */
    .next = &TextGlyphs_System_E980B2,
    .width = 9,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E998BBTiles,
};

const struct GlyphNew TextGlyphs_System_E58FB2 = { /* 史 */
    .next = &TextGlyphs_System_E590A0,
    .width = 8,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58FB2Tiles,
};

const struct GlyphNew TextGlyphs_System_E3838C = { /* ヌ */
    .next = &TextGlyphs_System_E3838B,
    .width = 6,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E3838CTiles,
};

const struct GlyphNew TextGlyphs_System_EFBCAC = { /* Ｌ */
    .next = &TextGlyphs_System_EFBCAB,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBCACTiles,
};

const struct GlyphNew TextGlyphs_System_E58C97 = { /* 北 */
    .next = &TextGlyphs_System_E58FB2,
    .width = 8,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58C97Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BE92 = { /* 徒 */
    .next = &TextGlyphs_System_E58C97,
    .width = 8,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BE92Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AB87 = { /* 談 */
    .next = &TextGlyphs_System_E8BE9B,
    .width = 9,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AB87Tiles,
};

const struct GlyphNew TextGlyphs_System_E3838D = { /* ネ */
    .next = &TextGlyphs_System_E3838C,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E3838DTiles,
};

const struct GlyphNew TextGlyphs_System_EFBCAD = { /* Ｍ */
    .next = &TextGlyphs_System_EFBCAC,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBCADTiles,
};

const struct GlyphNew TextGlyphs_System_E4BABA = { /* 人 */
    .next = &TextGlyphs_System_E4BDBF,
    .width = 8,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BABATiles,
};

const struct GlyphNew TextGlyphs_System_E6A798 = { /* 様 */
    .next = &TextGlyphs_System_E6AEB5,
    .width = 9,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A798Tiles,
};

const struct GlyphNew TextGlyphs_System_E580A4 = { /* 値 */
    .next = &TextGlyphs_System_E5BE92,
    .width = 8,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E580A4Tiles,
};

const struct GlyphNew TextGlyphs_System_E7B29B = { /* 粛 */
    .next = &TextGlyphs_System_E7A0B4,
    .width = 9,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B29BTiles,
};

const struct GlyphNew TextGlyphs_System_E59B9B = { /* 四 */
    .next = &TextGlyphs_System_E580A4,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59B9BTiles,
};

const struct GlyphNew TextGlyphs_System_E3838E = { /* ノ */
    .next = &TextGlyphs_System_E3838D,
    .width = 6,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E3838ETiles,
};

const struct GlyphNew TextGlyphs_System_EFBCAE = { /* Ｎ */
    .next = &TextGlyphs_System_EFBCAD,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBCAETiles,
};

const struct GlyphNew TextGlyphs_System_E5A3AB = { /* 士 */
    .next = &TextGlyphs_System_E59B9B,
    .width = 8,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A3ABTiles,
};

const struct GlyphNew TextGlyphs_System_E79FA5 = { /* 知 */
    .next = &TextGlyphs_System_E7B29B,
    .width = 8,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79FA5Tiles,
};

const struct GlyphNew TextGlyphs_System_E583A7 = { /* 僧 */
    .next = &TextGlyphs_System_E5A3AB,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E583A7Tiles,
};

const struct GlyphNew TextGlyphs_System_E7A2BA = { /* 確 */
    .next = &TextGlyphs_System_E79FA5,
    .width = 9,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A2BATiles,
};

const struct GlyphNew TextGlyphs_System_E3838F = { /* ハ */
    .next = &TextGlyphs_System_E3838E,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E3838FTiles,
};

const struct GlyphNew TextGlyphs_System_EFBCAF = { /* Ｏ */
    .next = &TextGlyphs_System_EFBCAE,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBCAFTiles,
};

const struct GlyphNew TextGlyphs_System_E7B3BB = { /* 系 */
    .next = &TextGlyphs_System_E7A2BA,
    .width = 8,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B3BBTiles,
};

const struct GlyphNew TextGlyphs_System_E59CB0 = { /* 地 */
    .next = &TextGlyphs_System_E583A7,
    .width = 9,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59CB0Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A78B = { /* 始 */
    .next = &TextGlyphs_System_E59CB0,
    .width = 9,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A78BTiles,
};

const struct GlyphNew TextGlyphs_System_E9A6AC = { /* 馬 */
    .next = &TextGlyphs_System_E998BB,
    .width = 8,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A6ACTiles,
};

const struct GlyphNew TextGlyphs_System_E6BAB6 = { /* 溶 */
    .next = &TextGlyphs_System_E6A798,
    .width = 8,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6BAB6Tiles,
};

const struct GlyphNew TextGlyphs_System_E589B5 = { /* 創 */
    .next = &TextGlyphs_System_E5A78B,
    .width = 9,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E589B5Tiles,
};

const struct GlyphNew TextGlyphs_System_E58883 = { /* 刃 */
    .next = &TextGlyphs_System_E589B5,
    .width = 8,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58883Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B8A1 = { /* 渡 */
    .next = &TextGlyphs_System_E6BAB6,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B8A1Tiles,
};

const struct GlyphNew TextGlyphs_System_E38390 = { /* バ */
    .next = &TextGlyphs_System_E3838F,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38390Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBCB0 = { /* Ｐ */
    .next = &TextGlyphs_System_EFBCAF,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBCB0Tiles,
};

const struct GlyphNew TextGlyphs_System_E587BA = { /* 出 */
    .next = &TextGlyphs_System_E58883,
    .width = 8,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E587BATiles,
};

const struct GlyphNew TextGlyphs_System_E5A789 = { /* 姉 */
    .next = &TextGlyphs_System_E587BA,
    .width = 9,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A789Tiles,
};

const struct GlyphNew TextGlyphs_System_E7B58C = { /* 経 */
    .next = &TextGlyphs_System_E7B3BB,
    .width = 9,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B58CTiles,
};

const struct GlyphNew TextGlyphs_System_E58F8C = { /* 双 */
    .next = &TextGlyphs_System_E5A789,
    .width = 8,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58F8CTiles,
};

const struct GlyphNew TextGlyphs_System_E8A69A = { /* 覚 */
    .next = &TextGlyphs_System_E8AB87,
    .width = 8,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A69ATiles,
};

const struct GlyphNew TextGlyphs_System_E38391 = { /* パ */
    .next = &TextGlyphs_System_E38390,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38391Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBCB1 = { /* Ｑ */
    .next = &TextGlyphs_System_EFBCB0,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBCB1Tiles,
};

const struct GlyphNew TextGlyphs_System_E794A8 = { /* 用 */
    .next = &TextGlyphs_System_E7B58C,
    .width = 8,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E794A8Tiles,
};

const struct GlyphNew TextGlyphs_System_E88BB1 = { /* 英 */
    .next = &TextGlyphs_System_E8A69A,
    .width = 8,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88BB1Tiles,
};

const struct GlyphNew TextGlyphs_System_E8A193 = { /* 術 */
    .next = &TextGlyphs_System_E88BB1,
    .width = 9,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A193Tiles,
};

const struct GlyphNew TextGlyphs_System_E7B699 = { /* 継 */
    .next = &TextGlyphs_System_E794A8,
    .width = 9,
    .utf_byte_2 = 0xb6,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B699Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A7BF = { /* 姿 */
    .next = &TextGlyphs_System_E58F8C,
    .width = 8,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A7BFTiles,
};

const struct GlyphNew TextGlyphs_System_E58DB4 = { /* 却 */
    .next = &TextGlyphs_System_E5A7BF,
    .width = 8,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58DB4Tiles,
};

const struct GlyphNew TextGlyphs_System_E681A5 = { /* 恥 */
    .next = &TextGlyphs_System_E6B8A1,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E681A5Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BB83 = { /* 廃 */
    .next = &TextGlyphs_System_E58DB4,
    .width = 8,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BB83Tiles,
};

const struct GlyphNew TextGlyphs_System_E38392 = { /* ヒ */
    .next = &TextGlyphs_System_E38391,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38392Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBCB2 = { /* Ｒ */
    .next = &TextGlyphs_System_EFBCB1,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBCB2Tiles,
};

const struct GlyphNew TextGlyphs_System_E5AD90 = { /* 子 */
    .next = &TextGlyphs_System_E5BB83,
    .width = 8,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AD90Tiles,
};

const struct GlyphNew TextGlyphs_System_E8A19B = { /* 衛 */
    .next = &TextGlyphs_System_E8A193,
    .width = 9,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A19BTiles,
};

const struct GlyphNew TextGlyphs_System_E789A7 = { /* 牧 */
    .next = &TextGlyphs_System_E7B699,
    .width = 9,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E789A7Tiles,
};

const struct GlyphNew TextGlyphs_System_E38393 = { /* ビ */
    .next = &TextGlyphs_System_E38392,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38393Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBCB3 = { /* Ｓ */
    .next = &TextGlyphs_System_EFBCB2,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBCB3Tiles,
};

const struct GlyphNew TextGlyphs_System_E88D92 = { /* 荒 */
    .next = &TextGlyphs_System_E8A19B,
    .width = 8,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88D92Tiles,
};

const struct GlyphNew TextGlyphs_System_E98094 = { /* 途 */
    .next = &TextGlyphs_System_E9A6AC,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E98094Tiles,
};

const struct GlyphNew TextGlyphs_System_E88595 = { /* 腕 */
    .next = &TextGlyphs_System_E88D92,
    .width = 9,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88595Tiles,
};

const struct GlyphNew TextGlyphs_System_E38394 = { /* ピ */
    .next = &TextGlyphs_System_E38393,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38394Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBCB4 = { /* Ｔ */
    .next = &TextGlyphs_System_EFBCB3,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBCB4Tiles,
};

const struct GlyphNew TextGlyphs_System_E8A18C = { /* 行 */
    .next = &TextGlyphs_System_E88595,
    .width = 8,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A18CTiles,
};

const struct GlyphNew TextGlyphs_System_E983BD = { /* 都 */
    .next = &TextGlyphs_System_E98094,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E983BDTiles,
};

const struct GlyphNew TextGlyphs_System_E5B882 = { /* 市 */
    .next = &TextGlyphs_System_E5AD90,
    .width = 8,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B882Tiles,
};

const struct GlyphNew TextGlyphs_System_E69597 = { /* 敗 */
    .next = &TextGlyphs_System_E681A5,
    .width = 8,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69597Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A3AE = { /* 壮 */
    .next = &TextGlyphs_System_E5B882,
    .width = 8,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A3AETiles,
};

const struct GlyphNew TextGlyphs_System_E98BAD = { /* 鋭 */
    .next = &TextGlyphs_System_E983BD,
    .width = 9,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E98BADTiles,
};

const struct GlyphNew TextGlyphs_System_E4B88D = { /* 不 */
    .next = &TextGlyphs_System_E4BABA,
    .width = 8,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B88DTiles,
};

const struct GlyphNew TextGlyphs_System_E5B0BD = { /* 尽 */
    .next = &TextGlyphs_System_E5A3AE,
    .width = 8,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B0BDTiles,
};

const struct GlyphNew TextGlyphs_System_E89990 = { /* 虐 */
    .next = &TextGlyphs_System_E8A18C,
    .width = 8,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E89990Tiles,
};

const struct GlyphNew TextGlyphs_System_E38395 = { /* フ */
    .next = &TextGlyphs_System_E38394,
    .width = 6,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38395Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBCB5 = { /* Ｕ */
    .next = &TextGlyphs_System_EFBCB4,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBCB5Tiles,
};

const struct GlyphNew TextGlyphs_System_E98086 = { /* 逆 */
    .next = &TextGlyphs_System_E98BAD,
    .width = 8,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E98086Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B8AB = { /* 師 */
    .next = &TextGlyphs_System_E5B0BD,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B8ABTiles,
};

const struct GlyphNew TextGlyphs_System_E4BB98 = { /* 付 */
    .next = &TextGlyphs_System_E4B88D,
    .width = 8,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BB98Tiles,
};

const struct GlyphNew TextGlyphs_System_E89189 = { /* 葉 */
    .next = &TextGlyphs_System_E89990,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E89189Tiles,
};

const struct GlyphNew TextGlyphs_System_E698A5 = { /* 春 */
    .next = &TextGlyphs_System_E69597,
    .width = 8,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E698A5Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A58F = { /* 奏 */
    .next = &TextGlyphs_System_E5B8AB,
    .width = 8,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A58FTiles,
};

const struct GlyphNew TextGlyphs_System_E38396 = { /* ブ */
    .next = &TextGlyphs_System_E38395,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38396Tiles,
};

const struct GlyphNew TextGlyphs_System_E3808C = { /* 「 */
    .next = &TextGlyphs_System_E38396,
    .width = 6,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E3808CTiles,
};

const struct GlyphNew TextGlyphs_System_EFBCB6 = { /* Ｖ */
    .next = &TextGlyphs_System_EFBCB5,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBCB6Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BF97 = { /* 志 */
    .next = &TextGlyphs_System_E5A58F,
    .width = 8,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BF97Tiles,
};

const struct GlyphNew TextGlyphs_System_E58B83 = { /* 勃 */
    .next = &TextGlyphs_System_E5BF97,
    .width = 8,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58B83Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BDAE = { /* 置 */
    .next = &TextGlyphs_System_E789A7,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BDAETiles,
};

const struct GlyphNew TextGlyphs_System_E38397 = { /* プ */
    .next = &TextGlyphs_System_E3808C,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38397Tiles,
};

const struct GlyphNew TextGlyphs_System_E3808D = { /* 」 */
    .next = &TextGlyphs_System_E38397,
    .width = 6,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E3808DTiles,
};

const struct GlyphNew TextGlyphs_System_EFBCB7 = { /* Ｗ */
    .next = &TextGlyphs_System_EFBCB6,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBCB7Tiles,
};

const struct GlyphNew TextGlyphs_System_E4B985 = { /* 久 */
    .next = &TextGlyphs_System_E4BB98,
    .width = 8,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B985Tiles,
};

const struct GlyphNew TextGlyphs_System_E8A681 = { /* 要 */
    .next = &TextGlyphs_System_E89189,
    .width = 8,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A681Tiles,
};

const struct GlyphNew TextGlyphs_System_E6809D = { /* 思 */
    .next = &TextGlyphs_System_E698A5,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6809DTiles,
};

const struct GlyphNew TextGlyphs_System_E5A4AB = { /* 夫 */
    .next = &TextGlyphs_System_E58B83,
    .width = 8,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A4ABTiles,
};

const struct GlyphNew TextGlyphs_System_E8A888 = { /* 計 */
    .next = &TextGlyphs_System_E8A681,
    .width = 8,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A888Tiles,
};

const struct GlyphNew TextGlyphs_System_E99DA9 = { /* 革 */
    .next = &TextGlyphs_System_E98086,
    .width = 8,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99DA9Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B2A1 = { /* 没 */
    .next = &TextGlyphs_System_E6809D,
    .width = 8,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B2A1Tiles,
};

const struct GlyphNew TextGlyphs_System_E79B8A = { /* 益 */
    .next = &TextGlyphs_System_E7BDAE,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79B8ATiles,
};

const struct GlyphNew TextGlyphs_System_E38398 = { /* ヘ */
    .next = &TextGlyphs_System_E3808D,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38398Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBCB8 = { /* Ｘ */
    .next = &TextGlyphs_System_EFBCB7,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBCB8Tiles,
};

const struct GlyphNew TextGlyphs_System_E68C87 = { /* 指 */
    .next = &TextGlyphs_System_E6B2A1,
    .width = 8,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68C87Tiles,
};

const struct GlyphNew TextGlyphs_System_E8838C = { /* 背 */
    .next = &TextGlyphs_System_E8A888,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8838CTiles,
};

const struct GlyphNew TextGlyphs_System_E5ADA6 = { /* 学 */
    .next = &TextGlyphs_System_E5A4AB,
    .width = 8,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5ADA6Tiles,
};

const struct GlyphNew TextGlyphs_System_E999A3 = { /* 陣 */
    .next = &TextGlyphs_System_E99DA9,
    .width = 8,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E999A3Tiles,
};

const struct GlyphNew TextGlyphs_System_E58AAA = { /* 努 */
    .next = &TextGlyphs_System_E5ADA6,
    .width = 8,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58AAATiles,
};

const struct GlyphNew TextGlyphs_System_E5A9A6 = { /* 婦 */
    .next = &TextGlyphs_System_E58AAA,
    .width = 9,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A9A6Tiles,
};

const struct GlyphNew TextGlyphs_System_E3808E = { /* 『 */
    .next = &TextGlyphs_System_E38398,
    .width = 6,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E3808ETiles,
};

const struct GlyphNew TextGlyphs_System_E38399 = { /* ベ */
    .next = &TextGlyphs_System_E3808E,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38399Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBCB9 = { /* Ｙ */
    .next = &TextGlyphs_System_EFBCB8,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBCB9Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BC91 = { /* 休 */
    .next = &TextGlyphs_System_E4B985,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BC91Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BAA6 = { /* 度 */
    .next = &TextGlyphs_System_E5A9A6,
    .width = 8,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BAA6Tiles,
};

const struct GlyphNew TextGlyphs_System_E694AF = { /* 支 */
    .next = &TextGlyphs_System_E68C87,
    .width = 8,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E694AFTiles,
};

const struct GlyphNew TextGlyphs_System_E8B88A = { /* 踊 */
    .next = &TextGlyphs_System_E8838C,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B88ATiles,
};

const struct GlyphNew TextGlyphs_System_E9838A = { /* 郊 */
    .next = &TextGlyphs_System_E999A3,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9838ATiles,
};

const struct GlyphNew TextGlyphs_System_E5AF8C = { /* 富 */
    .next = &TextGlyphs_System_E5BAA6,
    .width = 8,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AF8CTiles,
};

const struct GlyphNew TextGlyphs_System_E8ADA6 = { /* 警 */
    .next = &TextGlyphs_System_E8B88A,
    .width = 9,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8ADA6Tiles,
};

const struct GlyphNew TextGlyphs_System_E3808F = { /* 』 */
    .next = &TextGlyphs_System_E38399,
    .width = 6,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E3808FTiles,
};

const struct GlyphNew TextGlyphs_System_E3839A = { /* ペ */
    .next = &TextGlyphs_System_E3808F,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E3839ATiles,
};

const struct GlyphNew TextGlyphs_System_EFBCBA = { /* Ｚ */
    .next = &TextGlyphs_System_EFBCB9,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBCBATiles,
};

const struct GlyphNew TextGlyphs_System_E59C9F = { /* 土 */
    .next = &TextGlyphs_System_E5AF8C,
    .width = 8,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59C9FTiles,
};

const struct GlyphNew TextGlyphs_System_E8BBBD = { /* 軽 */
    .next = &TextGlyphs_System_E8ADA6,
    .width = 8,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BBBDTiles,
};

const struct GlyphNew TextGlyphs_System_E8BCA9 = { /* 輩 */
    .next = &TextGlyphs_System_E8BBBD,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BCA9Tiles,
};

const struct GlyphNew TextGlyphs_System_E6A5BD = { /* 楽 */
    .next = &TextGlyphs_System_E694AF,
    .width = 8,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A5BDTiles,
};

const struct GlyphNew TextGlyphs_System_E8AB8D = { /* 諍 */
    .next = &TextGlyphs_System_E8BCA9,
    .width = 9,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AB8DTiles,
};

const struct GlyphNew TextGlyphs_System_E3839B = { /* ホ */
    .next = &TextGlyphs_System_E3839A,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E3839BTiles,
};

const struct GlyphNew TextGlyphs_System_E5A5B4 = { /* 奴 */
    .next = &TextGlyphs_System_E59C9F,
    .width = 9,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A5B4Tiles,
};

const struct GlyphNew TextGlyphs_System_E7AF89 = { /* 築 */
    .next = &TextGlyphs_System_E79B8A,
    .width = 8,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7AF89Tiles,
};

const struct GlyphNew TextGlyphs_System_E9858D = { /* 配 */
    .next = &TextGlyphs_System_E9838A,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9858DTiles,
};

const struct GlyphNew TextGlyphs_System_E999BD = { /* 陽 */
    .next = &TextGlyphs_System_E9858D,
    .width = 9,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E999BDTiles,
};

const struct GlyphNew TextGlyphs_System_E683B3 = { /* 想 */
    .next = &TextGlyphs_System_E6A5BD,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E683B3Tiles,
};

const struct GlyphNew TextGlyphs_System_E9A18D = { /* 額 */
    .next = &TextGlyphs_System_E999BD,
    .width = 8,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A18DTiles,
};

const struct GlyphNew TextGlyphs_System_E989B1 = { /* 鉱 */
    .next = &TextGlyphs_System_E9A18D,
    .width = 9,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E989B1Tiles,
};

const struct GlyphNew TextGlyphs_System_E3839C = { /* ボ */
    .next = &TextGlyphs_System_E3839B,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E3839CTiles,
};

const struct GlyphNew TextGlyphs_System_EFBC8B = { /* ＋ */
    .next = &TextGlyphs_System_EFBCBA,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBC8BTiles,
};

const struct GlyphNew TextGlyphs_System_E9A48A = { /* 養 */
    .next = &TextGlyphs_System_E989B1,
    .width = 8,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A48ATiles,
};

const struct GlyphNew TextGlyphs_System_E5AEAE = { /* 宮 */
    .next = &TextGlyphs_System_E5A5B4,
    .width = 8,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AEAETiles,
};

const struct GlyphNew TextGlyphs_System_E69CAC = { /* 本 */
    .next = &TextGlyphs_System_E683B3,
    .width = 8,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69CACTiles,
};

const struct GlyphNew TextGlyphs_System_E5808D = { /* 倍 */
    .next = &TextGlyphs_System_E5AEAE,
    .width = 8,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5808DTiles,
};

const struct GlyphNew TextGlyphs_System_E68092 = { /* 怒 */
    .next = &TextGlyphs_System_E69CAC,
    .width = 8,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68092Tiles,
};

const struct GlyphNew TextGlyphs_System_E68D9C = { /* 捜 */
    .next = &TextGlyphs_System_E68092,
    .width = 8,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68D9CTiles,
};

const struct GlyphNew TextGlyphs_System_E7959C = { /* 畜 */
    .next = &TextGlyphs_System_E7AF89,
    .width = 8,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7959CTiles,
};

const struct GlyphNew TextGlyphs_System_E3839D = { /* ポ */
    .next = &TextGlyphs_System_E3839C,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E3839DTiles,
};

const struct GlyphNew TextGlyphs_System_E58092 = { /* 倒 */
    .next = &TextGlyphs_System_E5808D,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58092Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BC93 = { /* 弓 */
    .next = &TextGlyphs_System_E58092,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BC93Tiles,
};

const struct GlyphNew TextGlyphs_System_E68096 = { /* 怖 */
    .next = &TextGlyphs_System_E68D9C,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68096Tiles,
};

const struct GlyphNew TextGlyphs_System_E68E83 = { /* 掃 */
    .next = &TextGlyphs_System_E68096,
    .width = 9,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68E83Tiles,
};

const struct GlyphNew TextGlyphs_System_E98BBC = { /* 鋼 */
    .next = &TextGlyphs_System_E9A48A,
    .width = 9,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E98BBCTiles,
};

const struct GlyphNew TextGlyphs_System_E68E9F = { /* 掟 */
    .next = &TextGlyphs_System_E68E83,
    .width = 8,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68E9FTiles,
};

const struct GlyphNew TextGlyphs_System_E88AB8 = { /* 芸 */
    .next = &TextGlyphs_System_E8AB8D,
    .width = 8,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88AB8Tiles,
};

const struct GlyphNew TextGlyphs_System_E3839E = { /* マ */
    .next = &TextGlyphs_System_E3839D,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E3839ETiles,
};

const struct GlyphNew TextGlyphs_System_E8BF8E = { /* 迎 */
    .next = &TextGlyphs_System_E88AB8,
    .width = 8,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BF8ETiles,
};

const struct GlyphNew TextGlyphs_System_E5859A = { /* 党 */
    .next = &TextGlyphs_System_E5BC93,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5859ATiles,
};

const struct GlyphNew TextGlyphs_System_E680A5 = { /* 急 */
    .next = &TextGlyphs_System_E68E9F,
    .width = 8,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E680A5Tiles,
};

const struct GlyphNew TextGlyphs_System_E59BB3 = { /* 図 */
    .next = &TextGlyphs_System_E5859A,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59BB3Tiles,
};

const struct GlyphNew TextGlyphs_System_E3839F = { /* ミ */
    .next = &TextGlyphs_System_E3839E,
    .width = 6,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E3839FTiles,
};

const struct GlyphNew TextGlyphs_System_E69591 = { /* 救 */
    .next = &TextGlyphs_System_E680A5,
    .width = 9,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69591Tiles,
};

const struct GlyphNew TextGlyphs_System_E6ADA2 = { /* 止 */
    .next = &TextGlyphs_System_E69591,
    .width = 8,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6ADA2Tiles,
};

const struct GlyphNew TextGlyphs_System_E9998D = { /* 降 */
    .next = &TextGlyphs_System_E98BBC,
    .width = 8,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9998DTiles,
};

const struct GlyphNew TextGlyphs_System_E6ACB2 = { /* 欲 */
    .next = &TextGlyphs_System_E6ADA2,
    .width = 8,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6ACB2Tiles,
};

const struct GlyphNew TextGlyphs_System_E586AC = { /* 冬 */
    .next = &TextGlyphs_System_E59BB3,
    .width = 8,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E586ACTiles,
};

const struct GlyphNew TextGlyphs_System_E383A0 = { /* ム */
    .next = &TextGlyphs_System_E3839F,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E383A0Tiles,
};

const struct GlyphNew TextGlyphs_System_E6ADBB = { /* 死 */
    .next = &TextGlyphs_System_E6ACB2,
    .width = 8,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6ADBBTiles,
};

const struct GlyphNew TextGlyphs_System_E696A7 = { /* 斧 */
    .next = &TextGlyphs_System_E6ADBB,
    .width = 8,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E696A7Tiles,
};

const struct GlyphNew TextGlyphs_System_E6BA96 = { /* 準 */
    .next = &TextGlyphs_System_E696A7,
    .width = 8,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6BA96Tiles,
};

const struct GlyphNew TextGlyphs_System_E5878D = { /* 凍 */
    .next = &TextGlyphs_System_E586AC,
    .width = 9,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5878DTiles,
};

const struct GlyphNew TextGlyphs_System_E98090 = { /* 逐 */
    .next = &TextGlyphs_System_E9998D,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E98090Tiles,
};

const struct GlyphNew TextGlyphs_System_E383A1 = { /* メ */
    .next = &TextGlyphs_System_E383A0,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E383A1Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBD81 = { /* ａ */
    .next = &TextGlyphs_System_EFBC8B,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBD81Tiles,
};

const struct GlyphNew TextGlyphs_System_E7A3A8 = { /* 磨 */
    .next = &TextGlyphs_System_E7959C,
    .width = 8,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A3A8Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B182 = { /* 求 */
    .next = &TextGlyphs_System_E6BA96,
    .width = 8,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B182Tiles,
};

const struct GlyphNew TextGlyphs_System_E697A9 = { /* 早 */
    .next = &TextGlyphs_System_E6B182,
    .width = 8,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E697A9Tiles,
};

const struct GlyphNew TextGlyphs_System_E58880 = { /* 刀 */
    .next = &TextGlyphs_System_E5878D,
    .width = 8,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58880Tiles,
};

const struct GlyphNew TextGlyphs_System_E699AE = { /* 普 */
    .next = &TextGlyphs_System_E697A9,
    .width = 8,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E699AETiles,
};

const struct GlyphNew TextGlyphs_System_E590B9 = { /* 吹 */
    .next = &TextGlyphs_System_E58880,
    .width = 9,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E590B9Tiles,
};

const struct GlyphNew TextGlyphs_System_E383A2 = { /* モ */
    .next = &TextGlyphs_System_E383A1,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E383A2Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBD82 = { /* ｂ */
    .next = &TextGlyphs_System_EFBD81,
    .width = 7,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBD82Tiles,
};

const struct GlyphNew TextGlyphs_System_E69283 = { /* 撃 */
    .next = &TextGlyphs_System_E699AE,
    .width = 8,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69283Tiles,
};

const struct GlyphNew TextGlyphs_System_E9AD94 = { /* 魔 */
    .next = &TextGlyphs_System_E98090,
    .width = 9,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9AD94Tiles,
};

const struct GlyphNew TextGlyphs_System_E9AB98 = { /* 高 */
    .next = &TextGlyphs_System_E9AD94,
    .width = 8,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9AB98Tiles,
};

const struct GlyphNew TextGlyphs_System_E79BBE = { /* 盾 */
    .next = &TextGlyphs_System_E7A3A8,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79BBETiles,
};

const struct GlyphNew TextGlyphs_System_E78D85 = { /* 獅 */
    .next = &TextGlyphs_System_E79BBE,
    .width = 9,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78D85Tiles,
};

const struct GlyphNew TextGlyphs_System_E383A3 = { /* ャ */
    .next = &TextGlyphs_System_E383A2,
    .width = 6,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E383A3Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBD83 = { /* ｃ */
    .next = &TextGlyphs_System_EFBD82,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBD83Tiles,
};

const struct GlyphNew TextGlyphs_System_E788B6 = { /* 父 */
    .next = &TextGlyphs_System_E78D85,
    .width = 8,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E788B6Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A194 = { /* 塔 */
    .next = &TextGlyphs_System_E590B9,
    .width = 8,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A194Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B7A3 = { /* 巣 */
    .next = &TextGlyphs_System_E5A194,
    .width = 8,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B7A3Tiles,
};

const struct GlyphNew TextGlyphs_System_E6BF80 = { /* 激 */
    .next = &TextGlyphs_System_E69283,
    .width = 9,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6BF80Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B2B7 = { /* 買 */
    .next = &TextGlyphs_System_E8BF8E,
    .width = 8,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B2B7Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B3A3 = { /* 泣 */
    .next = &TextGlyphs_System_E6BF80,
    .width = 8,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B3A3Tiles,
};

const struct GlyphNew TextGlyphs_System_E383A4 = { /* ヤ */
    .next = &TextGlyphs_System_E383A3,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E383A4Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBD84 = { /* ｄ */
    .next = &TextGlyphs_System_EFBD83,
    .width = 7,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBD84Tiles,
};

const struct GlyphNew TextGlyphs_System_E6A78D = { /* 槍 */
    .next = &TextGlyphs_System_E6B3A3,
    .width = 10,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A78DTiles,
};

const struct GlyphNew TextGlyphs_System_E5A3B2 = { /* 売 */
    .next = &TextGlyphs_System_E5B7A3,
    .width = 8,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A3B2Tiles,
};

const struct GlyphNew TextGlyphs_System_E59F8B = { /* 埋 */
    .next = &TextGlyphs_System_E5A3B2,
    .width = 9,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59F8BTiles,
};

const struct GlyphNew TextGlyphs_System_E7A781 = { /* 私 */
    .next = &TextGlyphs_System_E788B6,
    .width = 8,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A781Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BBB6 = { /* 延 */
    .next = &TextGlyphs_System_E59F8B,
    .width = 8,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BBB6Tiles,
};

const struct GlyphNew TextGlyphs_System_E5899B = { /* 剛 */
    .next = &TextGlyphs_System_E5BBB6,
    .width = 9,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5899BTiles,
};

const struct GlyphNew TextGlyphs_System_E383A5 = { /* ュ */
    .next = &TextGlyphs_System_E383A4,
    .width = 6,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E383A5Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBD85 = { /* ｅ */
    .next = &TextGlyphs_System_EFBD84,
    .width = 6,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBD85Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B0B4 = { /* 水 */
    .next = &TextGlyphs_System_E6A78D,
    .width = 9,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B0B4Tiles,
};

const struct GlyphNew TextGlyphs_System_E79D80 = { /* 着 */
    .next = &TextGlyphs_System_E7A781,
    .width = 8,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79D80Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A6B9 = { /* 妹 */
    .next = &TextGlyphs_System_E5899B,
    .width = 8,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A6B9Tiles,
};

const struct GlyphNew TextGlyphs_System_E7B3B8 = { /* 糸 */
    .next = &TextGlyphs_System_E79D80,
    .width = 8,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B3B8Tiles,
};

const struct GlyphNew TextGlyphs_System_E383A6 = { /* ユ */
    .next = &TextGlyphs_System_E383A5,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E383A6Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBD86 = { /* ｆ */
    .next = &TextGlyphs_System_EFBD85,
    .width = 7,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBD86Tiles,
};

const struct GlyphNew TextGlyphs_System_E4B8AD = { /* 中 */
    .next = &TextGlyphs_System_E4BC91,
    .width = 8,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B8ADTiles,
};

const struct GlyphNew TextGlyphs_System_E58FB7 = { /* 号 */
    .next = &TextGlyphs_System_E5A6B9,
    .width = 9,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58FB7Tiles,
};

const struct GlyphNew TextGlyphs_System_E7B499 = { /* 紙 */
    .next = &TextGlyphs_System_E7B3B8,
    .width = 8,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B499Tiles,
};

const struct GlyphNew TextGlyphs_System_E7A9B6 = { /* 究 */
    .next = &TextGlyphs_System_E7B499,
    .width = 8,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A9B6Tiles,
};

const struct GlyphNew TextGlyphs_System_E383A7 = { /* ョ */
    .next = &TextGlyphs_System_E383A6,
    .width = 6,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E383A7Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBD87 = { /* ｇ */
    .next = &TextGlyphs_System_EFBD86,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBD87Tiles,
};

const struct GlyphNew TextGlyphs_System_E68FB4 = { /* 援 */
    .next = &TextGlyphs_System_E6B0B4,
    .width = 8,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68FB4Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B3B6 = { /* 島 */
    .next = &TextGlyphs_System_E58FB7,
    .width = 8,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B3B6Tiles,
};

const struct GlyphNew TextGlyphs_System_E59088 = { /* 合 */
    .next = &TextGlyphs_System_E5B3B6,
    .width = 8,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59088Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BBB2 = { /* 仲 */
    .next = &TextGlyphs_System_E4B8AD,
    .width = 8,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BBB2Tiles,
};

const struct GlyphNew TextGlyphs_System_E9A086 = { /* 順 */
    .next = &TextGlyphs_System_E9AB98,
    .width = 9,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A086Tiles,
};

const struct GlyphNew TextGlyphs_System_E383A8 = { /* ヨ */
    .next = &TextGlyphs_System_E383A7,
    .width = 6,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E383A8Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBD88 = { /* ｈ */
    .next = &TextGlyphs_System_EFBD87,
    .width = 7,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBD88Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BA89 = { /* 争 */
    .next = &TextGlyphs_System_E4BBB2,
    .width = 8,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BA89Tiles,
};

const struct GlyphNew TextGlyphs_System_E69DA5 = { /* 来 */
    .next = &TextGlyphs_System_E68FB4,
    .width = 8,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69DA5Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B1BA = { /* 決 */
    .next = &TextGlyphs_System_E69DA5,
    .width = 8,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B1BATiles,
};

const struct GlyphNew TextGlyphs_System_E6B4BB = { /* 活 */
    .next = &TextGlyphs_System_E6B1BA,
    .width = 8,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B4BBTiles,
};

const struct GlyphNew TextGlyphs_System_E587A6 = { /* 処 */
    .next = &TextGlyphs_System_E59088,
    .width = 9,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E587A6Tiles,
};

const struct GlyphNew TextGlyphs_System_E6AF8E = { /* 毎 */
    .next = &TextGlyphs_System_E6B4BB,
    .width = 8,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6AF8ETiles,
};

const struct GlyphNew TextGlyphs_System_E383A9 = { /* ラ */
    .next = &TextGlyphs_System_E383A8,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E383A9Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBD89 = { /* ｉ */
    .next = &TextGlyphs_System_EFBD88,
    .width = 6,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBD89Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BFA0 = { /* 忠 */
    .next = &TextGlyphs_System_E587A6,
    .width = 8,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BFA0Tiles,
};

const struct GlyphNew TextGlyphs_System_E5889D = { /* 初 */
    .next = &TextGlyphs_System_E5BFA0,
    .width = 8,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5889DTiles,
};

const struct GlyphNew TextGlyphs_System_E8B2A0 = { /* 負 */
    .next = &TextGlyphs_System_E8B2B7,
    .width = 8,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B2A0Tiles,
};

const struct GlyphNew TextGlyphs_System_E7B49A = { /* 級 */
    .next = &TextGlyphs_System_E7A9B6,
    .width = 8,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B49ATiles,
};

const struct GlyphNew TextGlyphs_System_E383AA = { /* リ */
    .next = &TextGlyphs_System_E383A9,
    .width = 6,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E383AATiles,
};

const struct GlyphNew TextGlyphs_System_EFBD8A = { /* ｊ */
    .next = &TextGlyphs_System_EFBD89,
    .width = 6,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBD8ATiles,
};

const struct GlyphNew TextGlyphs_System_E68980 = { /* 所 */
    .next = &TextGlyphs_System_E6AF8E,
    .width = 8,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68980Tiles,
};

const struct GlyphNew TextGlyphs_System_E7828E = { /* 炎 */
    .next = &TextGlyphs_System_E7B49A,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7828ETiles,
};

const struct GlyphNew TextGlyphs_System_E79BB8 = { /* 相 */
    .next = &TextGlyphs_System_E7828E,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79BB8Tiles,
};

const struct GlyphNew TextGlyphs_System_E9A0BC = { /* 頼 */
    .next = &TextGlyphs_System_E9A086,
    .width = 8,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A0BCTiles,
};

const struct GlyphNew TextGlyphs_System_E8A1B0 = { /* 衰 */
    .next = &TextGlyphs_System_E8B2A0,
    .width = 8,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A1B0Tiles,
};

const struct GlyphNew TextGlyphs_System_E887B3 = { /* 至 */
    .next = &TextGlyphs_System_E8A1B0,
    .width = 8,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E887B3Tiles,
};

const struct GlyphNew TextGlyphs_System_E68A95 = { /* 投 */
    .next = &TextGlyphs_System_E68980,
    .width = 8,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68A95Tiles,
};

const struct GlyphNew TextGlyphs_System_E383AB = { /* ル */
    .next = &TextGlyphs_System_E383AA,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E383ABTiles,
};

const struct GlyphNew TextGlyphs_System_EFBD8B = { /* ｋ */
    .next = &TextGlyphs_System_EFBD8A,
    .width = 7,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBD8BTiles,
};

const struct GlyphNew TextGlyphs_System_E8A696 = { /* 視 */
    .next = &TextGlyphs_System_E887B3,
    .width = 8,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A696Tiles,
};

const struct GlyphNew TextGlyphs_System_E7B590 = { /* 結 */
    .next = &TextGlyphs_System_E79BB8,
    .width = 8,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B590Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B5B4 = { /* 赴 */
    .next = &TextGlyphs_System_E8A696,
    .width = 8,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B5B4Tiles,
};

const struct GlyphNew TextGlyphs_System_E698BC = { /* 昼 */
    .next = &TextGlyphs_System_E68A95,
    .width = 9,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E698BCTiles,
};

const struct GlyphNew TextGlyphs_System_E5B995 = { /* 幕 */
    .next = &TextGlyphs_System_E5889D,
    .width = 8,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B995Tiles,
};

const struct GlyphNew TextGlyphs_System_E99BB7 = { /* 雷 */
    .next = &TextGlyphs_System_E9A0BC,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99BB7Tiles,
};

const struct GlyphNew TextGlyphs_System_E7B5A6 = { /* 給 */
    .next = &TextGlyphs_System_E7B590,
    .width = 9,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B5A6Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B1AA = { /* 豪 */
    .next = &TextGlyphs_System_E8B5B4,
    .width = 8,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B1AATiles,
};

const struct GlyphNew TextGlyphs_System_E383AC = { /* レ */
    .next = &TextGlyphs_System_E383AB,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E383ACTiles,
};

const struct GlyphNew TextGlyphs_System_EFBD8C = { /* ｌ */
    .next = &TextGlyphs_System_EFBD8B,
    .width = 7,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBD8CTiles,
};

const struct GlyphNew TextGlyphs_System_E69DB1 = { /* 東 */
    .next = &TextGlyphs_System_E698BC,
    .width = 8,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69DB1Tiles,
};

const struct GlyphNew TextGlyphs_System_E8A180 = { /* 血 */
    .next = &TextGlyphs_System_E8B1AA,
    .width = 8,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A180Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BCAF = { /* 伯 */
    .next = &TextGlyphs_System_E4BA89,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BCAFTiles,
};

const struct GlyphNew TextGlyphs_System_E697A7 = { /* 旧 */
    .next = &TextGlyphs_System_E69DB1,
    .width = 8,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E697A7Tiles,
};

const struct GlyphNew TextGlyphs_System_E69FB1 = { /* 柱 */
    .next = &TextGlyphs_System_E697A7,
    .width = 9,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69FB1Tiles,
};

const struct GlyphNew TextGlyphs_System_E383AD = { /* ロ */
    .next = &TextGlyphs_System_E383AC,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E383ADTiles,
};

const struct GlyphNew TextGlyphs_System_EFBD8D = { /* ｍ */
    .next = &TextGlyphs_System_EFBD8C,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBD8DTiles,
};

const struct GlyphNew TextGlyphs_System_E6B3A8 = { /* 注 */
    .next = &TextGlyphs_System_E69FB1,
    .width = 8,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B3A8Tiles,
};

const struct GlyphNew TextGlyphs_System_E7B5A1 = { /* 絡 */
    .next = &TextGlyphs_System_E7B5A6,
    .width = 9,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B5A1Tiles,
};

const struct GlyphNew TextGlyphs_System_E7B78F = { /* 総 */
    .next = &TextGlyphs_System_E7B5A1,
    .width = 9,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B78FTiles,
};

const struct GlyphNew TextGlyphs_System_E8A9A9 = { /* 詩 */
    .next = &TextGlyphs_System_E8A180,
    .width = 8,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A9A9Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBD8E = { /* ｎ */
    .next = &TextGlyphs_System_EFBD8D,
    .width = 7,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBD8ETiles,
};

const struct GlyphNew TextGlyphs_System_E69C88 = { /* 月 */
    .next = &TextGlyphs_System_E6B3A8,
    .width = 7,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69C88Tiles,
};

const struct GlyphNew TextGlyphs_System_E58EBB = { /* 去 */
    .next = &TextGlyphs_System_E5B995,
    .width = 8,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58EBBTiles,
};

const struct GlyphNew TextGlyphs_System_E890BD = { /* 落 */
    .next = &TextGlyphs_System_E8A9A9,
    .width = 9,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E890BDTiles,
};

const struct GlyphNew TextGlyphs_System_E4BEAE = { /* 侮 */
    .next = &TextGlyphs_System_E4BCAF,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BEAETiles,
};

const struct GlyphNew TextGlyphs_System_E8A9A6 = { /* 試 */
    .next = &TextGlyphs_System_E890BD,
    .width = 8,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A9A6Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BAB6 = { /* 庶 */
    .next = &TextGlyphs_System_E58EBB,
    .width = 8,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BAB6Tiles,
};

const struct GlyphNew TextGlyphs_System_E383AF = { /* ワ */
    .next = &TextGlyphs_System_E383AD,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E383AFTiles,
};

const struct GlyphNew TextGlyphs_System_EFBD8F = { /* ｏ */
    .next = &TextGlyphs_System_EFBD8E,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBD8FTiles,
};

const struct GlyphNew TextGlyphs_System_E7B792 = { /* 緒 */
    .next = &TextGlyphs_System_E7B78F,
    .width = 8,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B792Tiles,
};

const struct GlyphNew TextGlyphs_System_E588BB = { /* 刻 */
    .next = &TextGlyphs_System_E5BAB6,
    .width = 8,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E588BBTiles,
};

const struct GlyphNew TextGlyphs_System_E5B185 = { /* 居 */
    .next = &TextGlyphs_System_E588BB,
    .width = 8,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B185Tiles,
};

const struct GlyphNew TextGlyphs_System_E68B8D = { /* 拍 */
    .next = &TextGlyphs_System_E69C88,
    .width = 8,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68B8DTiles,
};

const struct GlyphNew TextGlyphs_System_E4BBB6 = { /* 件 */
    .next = &TextGlyphs_System_E4BEAE,
    .width = 8,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BBB6Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBD90 = { /* ｐ */
    .next = &TextGlyphs_System_EFBD8F,
    .width = 7,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBD90Tiles,
};

const struct GlyphNew TextGlyphs_System_E88D89 = { /* 草 */
    .next = &TextGlyphs_System_E8A9A6,
    .width = 8,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88D89Tiles,
};

const struct GlyphNew TextGlyphs_System_E6ADA6 = { /* 武 */
    .next = &TextGlyphs_System_E68B8D,
    .width = 8,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6ADA6Tiles,
};

const struct GlyphNew TextGlyphs_System_E79B97 = { /* 盗 */
    .next = &TextGlyphs_System_E7B792,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79B97Tiles,
};

const struct GlyphNew TextGlyphs_System_E4B9B1 = { /* 乱 */
    .next = &TextGlyphs_System_E4BBB6,
    .width = 8,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B9B1Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B7A8 = { /* 巨 */
    .next = &TextGlyphs_System_E5B185,
    .width = 8,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B7A8Tiles,
};

const struct GlyphNew TextGlyphs_System_E5918A = { /* 告 */
    .next = &TextGlyphs_System_E5B7A8,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5918ATiles,
};

const struct GlyphNew TextGlyphs_System_EFBD91 = { /* ｑ */
    .next = &TextGlyphs_System_EFBD90,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBD91Tiles,
};

const struct GlyphNew TextGlyphs_System_E69BB8 = { /* 書 */
    .next = &TextGlyphs_System_E6ADA6,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69BB8Tiles,
};

const struct GlyphNew TextGlyphs_System_E59BBD = { /* 国 */
    .next = &TextGlyphs_System_E5918A,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59BBDTiles,
};

const struct GlyphNew TextGlyphs_System_E8889E = { /* 舞 */
    .next = &TextGlyphs_System_E88D89,
    .width = 8,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8889ETiles,
};

const struct GlyphNew TextGlyphs_System_E68B92 = { /* 拒 */
    .next = &TextGlyphs_System_E69BB8,
    .width = 8,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68B92Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B387 = { /* 資 */
    .next = &TextGlyphs_System_E8889E,
    .width = 8,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B387Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBD92 = { /* ｒ */
    .next = &TextGlyphs_System_EFBD91,
    .width = 7,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBD92Tiles,
};

const struct GlyphNew TextGlyphs_System_E383B2 = { /* ヲ */
    .next = &TextGlyphs_System_E383AF,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E383B2Tiles,
};

const struct GlyphNew TextGlyphs_System_E799BD = { /* 白 */
    .next = &TextGlyphs_System_E79B97,
    .width = 7,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E799BDTiles,
};

const struct GlyphNew TextGlyphs_System_E68BA0 = { /* 拠 */
    .next = &TextGlyphs_System_E68B92,
    .width = 10,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68BA0Tiles,
};

const struct GlyphNew TextGlyphs_System_E383B3 = { /* ン */
    .next = &TextGlyphs_System_E383B2,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E383B3Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBD93 = { /* ｓ */
    .next = &TextGlyphs_System_EFBD92,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBD93Tiles,
};

const struct GlyphNew TextGlyphs_System_E981A0 = { /* 遠 */
    .next = &TextGlyphs_System_E99BB7,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E981A0Tiles,
};

const struct GlyphNew TextGlyphs_System_E985B7 = { /* 酷 */
    .next = &TextGlyphs_System_E981A0,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E985B7Tiles,
};

const struct GlyphNew TextGlyphs_System_E68C99 = { /* 挙 */
    .next = &TextGlyphs_System_E68BA0,
    .width = 9,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68C99Tiles,
};

const struct GlyphNew TextGlyphs_System_E9A790 = { /* 駐 */
    .next = &TextGlyphs_System_E985B7,
    .width = 8,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A790Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBC85 = { /* ％ */
    .next = &TextGlyphs_System_EFBD93,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBC85Tiles,
};

const struct GlyphNew TextGlyphs_System_E383B4 = { /* ヴ */
    .next = &TextGlyphs_System_E383B3,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E383B4Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBD94 = { /* ｔ */
    .next = &TextGlyphs_System_EFBC85,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBD94Tiles,
};

const struct GlyphNew TextGlyphs_System_E695B0 = { /* 数 */
    .next = &TextGlyphs_System_E68C99,
    .width = 9,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E695B0Tiles,
};

const struct GlyphNew TextGlyphs_System_E983A8 = { /* 部 */
    .next = &TextGlyphs_System_E9A790,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E983A8Tiles,
};

const struct GlyphNew TextGlyphs_System_E8ABB8 = { /* 諸 */
    .next = &TextGlyphs_System_E8B387,
    .width = 8,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8ABB8Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBD95 = { /* ｕ */
    .next = &TextGlyphs_System_EFBD94,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBD95Tiles,
};

const struct GlyphNew TextGlyphs_System_E9BB92 = { /* 黒 */
    .next = &TextGlyphs_System_E983A8,
    .width = 8,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9BB92Tiles,
};

const struct GlyphNew TextGlyphs_System_E589A3 = { /* 剣 */
    .next = &TextGlyphs_System_E59BBD,
    .width = 8,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E589A3Tiles,
};

const struct GlyphNew TextGlyphs_System_E58AA9 = { /* 助 */
    .next = &TextGlyphs_System_E589A3,
    .width = 9,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58AA9Tiles,
};

const struct GlyphNew TextGlyphs_System_E69EA2 = { /* 枢 */
    .next = &TextGlyphs_System_E695B0,
    .width = 8,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69EA2Tiles,
};

const struct GlyphNew TextGlyphs_System_E8A385 = { /* 装 */
    .next = &TextGlyphs_System_E8ABB8,
    .width = 8,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A385Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B081 = { /* 封 */
    .next = &TextGlyphs_System_E58AA9,
    .width = 8,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B081Tiles,
};

const struct GlyphNew TextGlyphs_System_E6ADAF = { /* 歯 */
    .next = &TextGlyphs_System_E69EA2,
    .width = 9,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6ADAFTiles,
};

const struct GlyphNew TextGlyphs_System_EFBD96 = { /* ｖ */
    .next = &TextGlyphs_System_EFBD95,
    .width = 9,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBD96Tiles,
};

const struct GlyphNew TextGlyphs_System_E69CAB = { /* 末 */
    .next = &TextGlyphs_System_E6ADAF,
    .width = 8,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69CABTiles,
};

const struct GlyphNew TextGlyphs_System_E4BA8B = { /* 事 */
    .next = &TextGlyphs_System_E4B9B1,
    .width = 9,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BA8BTiles,
};

const struct GlyphNew TextGlyphs_System_E5BD93 = { /* 当 */
    .next = &TextGlyphs_System_E5B081,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BD93Tiles,
};

const struct GlyphNew TextGlyphs_System_E78D84 = { /* 獄 */
    .next = &TextGlyphs_System_E799BD,
    .width = 9,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78D84Tiles,
};

const struct GlyphNew TextGlyphs_System_E8A8B1 = { /* 許 */
    .next = &TextGlyphs_System_E8A385,
    .width = 8,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A8B1Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B5B0 = { /* 走 */
    .next = &TextGlyphs_System_E8A8B1,
    .width = 8,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B5B0Tiles,
};

const struct GlyphNew TextGlyphs_System_E58F99 = { /* 叙 */
    .next = &TextGlyphs_System_E5BD93,
    .width = 8,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58F99Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBD97 = { /* ｗ */
    .next = &TextGlyphs_System_EFBD96,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBD97Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A5B3 = { /* 女 */
    .next = &TextGlyphs_System_E58F99,
    .width = 8,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A5B3Tiles,
};

const struct GlyphNew TextGlyphs_System_E9A2A8 = { /* 風 */
    .next = &TextGlyphs_System_E9BB92,
    .width = 9,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A2A8Tiles,
};

const struct GlyphNew TextGlyphs_System_E8BFAB = { /* 迫 */
    .next = &TextGlyphs_System_E8B5B0,
    .width = 8,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BFABTiles,
};

const struct GlyphNew TextGlyphs_System_E98081 = { /* 送 */
    .next = &TextGlyphs_System_E9A2A8,
    .width = 8,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E98081Tiles,
};

const struct GlyphNew TextGlyphs_System_E8A6A7 = { /* 覧 */
    .next = &TextGlyphs_System_E8BFAB,
    .width = 8,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A6A7Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBD98 = { /* ｘ */
    .next = &TextGlyphs_System_EFBD97,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBD98Tiles,
};

const struct GlyphNew TextGlyphs_System_E588A9 = { /* 利 */
    .next = &TextGlyphs_System_E5A5B3,
    .width = 8,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E588A9Tiles,
};

const struct GlyphNew TextGlyphs_System_E885B0 = { /* 腰 */
    .next = &TextGlyphs_System_E8A6A7,
    .width = 9,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E885B0Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BA8F = { /* 序 */
    .next = &TextGlyphs_System_E588A9,
    .width = 9,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BA8FTiles,
};

const struct GlyphNew TextGlyphs_System_E6B19A = { /* 汚 */
    .next = &TextGlyphs_System_E69CAB,
    .width = 8,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B19ATiles,
};

const struct GlyphNew TextGlyphs_System_EFBD99 = { /* ｙ */
    .next = &TextGlyphs_System_EFBD98,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBD99Tiles,
};

const struct GlyphNew TextGlyphs_System_E6BCA0 = { /* 漠 */
    .next = &TextGlyphs_System_E6B19A,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6BCA0Tiles,
};

const struct GlyphNew TextGlyphs_System_E58590 = { /* 児 */
    .next = &TextGlyphs_System_E5BA8F,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58590Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B2AF = { /* 貯 */
    .next = &TextGlyphs_System_E885B0,
    .width = 8,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B2AFTiles,
};

const struct GlyphNew TextGlyphs_System_E6BC81 = { /* 漁 */
    .next = &TextGlyphs_System_E6BCA0,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6BC81Tiles,
};

const struct GlyphNew TextGlyphs_System_E7AD89 = { /* 等 */
    .next = &TextGlyphs_System_E78D84,
    .width = 8,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7AD89Tiles,
};

const struct GlyphNew TextGlyphs_System_E794A5 = { /* 甥 */
    .next = &TextGlyphs_System_E7AD89,
    .width = 8,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E794A5Tiles,
};

const struct GlyphNew TextGlyphs_System_EFBD9A = { /* ｚ */
    .next = &TextGlyphs_System_EFBD99,
    .width = 7,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_EFBD9ATiles,
};

const struct GlyphNew TextGlyphs_System_E5BBBA = { /* 建 */
    .next = &TextGlyphs_System_E58590,
    .width = 8,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BBBATiles,
};

const struct GlyphNew TextGlyphs_System_E4BC8F = { /* 伏 */
    .next = &TextGlyphs_System_E4BA8B,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BC8FTiles,
};

const struct GlyphNew TextGlyphs_System_E7AD94 = { /* 答 */
    .next = &TextGlyphs_System_E794A5,
    .width = 9,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7AD94Tiles,
};

const struct GlyphNew TextGlyphs_System_E5AD97 = { /* 字 */
    .next = &TextGlyphs_System_E5BBBA,
    .width = 8,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AD97Tiles,
};

const struct GlyphNew TextGlyphs_System_E2978B = { /* ○ */
    .next = &TextGlyphs_System_E285A6,
    .width = 7,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E2978BTiles,
};

const struct GlyphNew TextGlyphs_System_E5AFBA = { /* 寺 */
    .next = &TextGlyphs_System_E5AD97,
    .width = 8,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AFBATiles,
};

const struct GlyphNew TextGlyphs_System_E5A4AE = { /* 央 */
    .next = &TextGlyphs_System_E5AFBA,
    .width = 8,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A4AETiles,
};

const struct GlyphNew TextGlyphs_System_E5BEA9 = { /* 復 */
    .next = &TextGlyphs_System_E5A4AE,
    .width = 8,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BEA9Tiles,
};

const struct GlyphNew TextGlyphs_System_E5838F = { /* 像 */
    .next = &TextGlyphs_System_E5BEA9,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5838FTiles,
};

const struct GlyphNew TextGlyphs_System_E4B887 = { /* 万 */
    .next = &TextGlyphs_System_E4BC8F,
    .width = 8,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B887Tiles,
};

const struct GlyphNew TextGlyphs_System_E999A4 = { /* 除 */
    .next = &TextGlyphs_System_E98081,
    .width = 9,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E999A4Tiles,
};

const struct GlyphNew TextGlyphs_System_E68C81 = { /* 持 */
    .next = &TextGlyphs_System_E6BC81,
    .width = 9,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68C81Tiles,
};

const struct GlyphNew TextGlyphs_System_E7B5B1 = { /* 統 */
    .next = &TextGlyphs_System_E7AD94,
    .width = 9,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B5B1Tiles,
};

const struct GlyphNew TextGlyphs_System_E79086 = { /* 理 */
    .next = &TextGlyphs_System_E7B5B1,
    .width = 8,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79086Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A297 = { /* 増 */
    .next = &TextGlyphs_System_E5838F,
    .width = 9,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A297Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B985 = { /* 幅 */
    .next = &TextGlyphs_System_E5A297,
    .width = 8,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B985Tiles,
};

const struct GlyphNew TextGlyphs_System_E582B7 = { /* 傷 */
    .next = &TextGlyphs_System_E5B985,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E582B7Tiles,
};

const struct GlyphNew TextGlyphs_System_E685A2 = { /* 慢 */
    .next = &TextGlyphs_System_E68C81,
    .width = 9,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E685A2Tiles,
};

const struct GlyphNew TextGlyphs_System_E2978E = { /* ◎ */
    .next = &TextGlyphs_System_E2978B,
    .width = 10,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E2978ETiles,
};

const struct GlyphNew TextGlyphs_System_E8BEBC = { /* 込 */
    .next = &TextGlyphs_System_E8B2AF,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BEBCTiles,
};

const struct GlyphNew TextGlyphs_System_E69982 = { /* 時 */
    .next = &TextGlyphs_System_E685A2,
    .width = 9,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69982Tiles,
};

const struct GlyphNew TextGlyphs_System_E5849F = { /* 償 */
    .next = &TextGlyphs_System_E582B7,
    .width = 9,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5849FTiles,
};

const struct GlyphNew TextGlyphs_System_E69C8D = { /* 服 */
    .next = &TextGlyphs_System_E69982,
    .width = 9,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69C8DTiles,
};

const struct GlyphNew TextGlyphs_System_E5BF9C = { /* 応 */
    .next = &TextGlyphs_System_E5849F,
    .width = 8,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BF9CTiles,
};

const struct GlyphNew TextGlyphs_System_E588B0 = { /* 到 */
    .next = &TextGlyphs_System_E5BF9C,
    .width = 8,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E588B0Tiles,
};

const struct GlyphNew TextGlyphs_System_E6BA80 = { /* 満 */
    .next = &TextGlyphs_System_E69C8D,
    .width = 8,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6BA80Tiles,
};

const struct GlyphNew TextGlyphs_System_E6868E = { /* 憎 */
    .next = &TextGlyphs_System_E6BA80,
    .width = 9,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6868ETiles,
};

const struct GlyphNew TextGlyphs_System_E5AFB5 = { /* 寵 */
    .next = &TextGlyphs_System_E588B0,
    .width = 9,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AFB5Tiles,
};

const struct GlyphNew TextGlyphs_System_E38181 = { /* ぁ */
    .next = &TextGlyphs_System_E383B4,
    .width = 7,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38181Tiles,
};

const struct GlyphNew TextGlyphs_System_E58B9D = { /* 勝 */
    .next = &TextGlyphs_System_E5AFB5,
    .width = 8,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58B9DTiles,
};

const struct GlyphNew TextGlyphs_System_E7A68F = { /* 福 */
    .next = &TextGlyphs_System_E79086,
    .width = 8,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A68FTiles,
};

const struct GlyphNew TextGlyphs_System_E4BE9B = { /* 供 */
    .next = &TextGlyphs_System_E4B887,
    .width = 8,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BE9BTiles,
};

const struct GlyphNew TextGlyphs_System_E6ACA1 = { /* 次 */
    .next = &TextGlyphs_System_E6868E,
    .width = 8,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6ACA1Tiles,
};

const struct GlyphNew TextGlyphs_System_E68ABC = { /* 押 */
    .next = &TextGlyphs_System_E6ACA1,
    .width = 8,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68ABCTiles,
};

const struct GlyphNew TextGlyphs_System_E38182 = { /* あ */
    .next = &TextGlyphs_System_E38181,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38182Tiles,
};

const struct GlyphNew TextGlyphs_System_E7AEB1 = { /* 箱 */
    .next = &TextGlyphs_System_E7A68F,
    .width = 8,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7AEB1Tiles,
};

const struct GlyphNew TextGlyphs_System_E9A083 = { /* 頃 */
    .next = &TextGlyphs_System_E999A4,
    .width = 8,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A083Tiles,
};

const struct GlyphNew TextGlyphs_System_E6A8A9 = { /* 権 */
    .next = &TextGlyphs_System_E68ABC,
    .width = 9,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A8A9Tiles,
};

const struct GlyphNew TextGlyphs_System_E8A38F = { /* 裏 */
    .next = &TextGlyphs_System_E8BEBC,
    .width = 8,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A38FTiles,
};

const struct GlyphNew TextGlyphs_System_E885B9 = { /* 腹 */
    .next = &TextGlyphs_System_E8A38F,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E885B9Tiles,
};

const struct GlyphNew TextGlyphs_System_E38183 = { /* ぃ */
    .next = &TextGlyphs_System_E38182,
    .width = 7,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38183Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BB8A = { /* 今 */
    .next = &TextGlyphs_System_E4BE9B,
    .width = 8,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BB8ATiles,
};

const struct GlyphNew TextGlyphs_System_E6B2BB = { /* 治 */
    .next = &TextGlyphs_System_E6A8A9,
    .width = 8,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B2BBTiles,
};

const struct GlyphNew TextGlyphs_System_E591B3 = { /* 味 */
    .next = &TextGlyphs_System_E58B9D,
    .width = 9,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E591B3Tiles,
};

const struct GlyphNew TextGlyphs_System_E8A487 = { /* 複 */
    .next = &TextGlyphs_System_E885B9,
    .width = 9,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A487Tiles,
};

const struct GlyphNew TextGlyphs_System_E5AFB8 = { /* 寸 */
    .next = &TextGlyphs_System_E591B3,
    .width = 8,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AFB8Tiles,
};

const struct GlyphNew TextGlyphs_System_E38184 = { /* い */
    .next = &TextGlyphs_System_E38183,
    .width = 7,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38184Tiles,
};

const struct GlyphNew TextGlyphs_System_E8A88E = { /* 討 */
    .next = &TextGlyphs_System_E8A487,
    .width = 8,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A88ETiles,
};

const struct GlyphNew TextGlyphs_System_E4B896 = { /* 世 */
    .next = &TextGlyphs_System_E4BB8A,
    .width = 8,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B896Tiles,
};

const struct GlyphNew TextGlyphs_System_E69CAA = { /* 未 */
    .next = &TextGlyphs_System_E6B2BB,
    .width = 8,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69CAATiles,
};

const struct GlyphNew TextGlyphs_System_E5BC94 = { /* 弔 */
    .next = &TextGlyphs_System_E5AFB8,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BC94Tiles,
};

const struct GlyphNew TextGlyphs_System_E980A0 = { /* 造 */
    .next = &TextGlyphs_System_E9A083,
    .width = 8,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E980A0Tiles,
};

const struct GlyphNew TextGlyphs_System_E78AAC = { /* 犬 */
    .next = &TextGlyphs_System_E7AEB1,
    .width = 8,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78AACTiles,
};

const struct GlyphNew TextGlyphs_System_E59BB0 = { /* 困 */
    .next = &TextGlyphs_System_E5BC94,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59BB0Tiles,
};

const struct GlyphNew TextGlyphs_System_E9878C = { /* 里 */
    .next = &TextGlyphs_System_E980A0,
    .width = 8,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9878CTiles,
};

const struct GlyphNew TextGlyphs_System_E296B3 = { /* △ */
    .next = &TextGlyphs_System_E2978E,
    .width = 9,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E296B3Tiles,
};

const struct GlyphNew TextGlyphs_System_E38185 = { /* ぅ */
    .next = &TextGlyphs_System_E38184,
    .width = 7,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38185Tiles,
};

const struct GlyphNew TextGlyphs_System_E99BA2 = { /* 離 */
    .next = &TextGlyphs_System_E9878C,
    .width = 10,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99BA2Tiles,
};

const struct GlyphNew TextGlyphs_System_E59380 = { /* 哀 */
    .next = &TextGlyphs_System_E59BB0,
    .width = 8,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59380Tiles,
};

const struct GlyphNew TextGlyphs_System_E38186 = { /* う */
    .next = &TextGlyphs_System_E38185,
    .width = 7,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38186Tiles,
};

const struct GlyphNew TextGlyphs_System_E78E8B = { /* 王 */
    .next = &TextGlyphs_System_E78AAC,
    .width = 8,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78E8BTiles,
};

const struct GlyphNew TextGlyphs_System_E6849B = { /* 愛 */
    .next = &TextGlyphs_System_E69CAA,
    .width = 9,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6849BTiles,
};

const struct GlyphNew TextGlyphs_System_E999B8 = { /* 陸 */
    .next = &TextGlyphs_System_E99BA2,
    .width = 8,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E999B8Tiles,
};

const struct GlyphNew TextGlyphs_System_E59586 = { /* 商 */
    .next = &TextGlyphs_System_E59380,
    .width = 8,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59586Tiles,
};

const struct GlyphNew TextGlyphs_System_E585B1 = { /* 共 */
    .next = &TextGlyphs_System_E59586,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E585B1Tiles,
};

const struct GlyphNew TextGlyphs_System_E581B4 = { /* 側 */
    .next = &TextGlyphs_System_E585B1,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E581B4Tiles,
};

const struct GlyphNew TextGlyphs_System_E7AD88 = { /* 筈 */
    .next = &TextGlyphs_System_E78E8B,
    .width = 8,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7AD88Tiles,
};

const struct GlyphNew TextGlyphs_System_E7A094 = { /* 研 */
    .next = &TextGlyphs_System_E7AD88,
    .width = 9,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A094Tiles,
};

const struct GlyphNew TextGlyphs_System_E38187 = { /* ぇ */
    .next = &TextGlyphs_System_E38186,
    .width = 7,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38187Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A99A = { /* 婚 */
    .next = &TextGlyphs_System_E581B4,
    .width = 9,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A99ATiles,
};

const struct GlyphNew TextGlyphs_System_E68995 = { /* 払 */
    .next = &TextGlyphs_System_E6849B,
    .width = 8,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68995Tiles,
};

const struct GlyphNew TextGlyphs_System_E594B1 = { /* 唱 */
    .next = &TextGlyphs_System_E5A99A,
    .width = 8,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E594B1Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BEB4 = { /* 徴 */
    .next = &TextGlyphs_System_E594B1,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BEB4Tiles,
};

const struct GlyphNew TextGlyphs_System_E38188 = { /* え */
    .next = &TextGlyphs_System_E38187,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38188Tiles,
};

const struct GlyphNew TextGlyphs_System_E78E87 = { /* 率 */
    .next = &TextGlyphs_System_E7A094,
    .width = 8,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78E87Tiles,
};

const struct GlyphNew TextGlyphs_System_E7A4BA = { /* 示 */
    .next = &TextGlyphs_System_E78E87,
    .width = 8,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A4BATiles,
};

const struct GlyphNew TextGlyphs_System_E58D94 = { /* 協 */
    .next = &TextGlyphs_System_E5BEB4,
    .width = 9,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58D94Tiles,
};

const struct GlyphNew TextGlyphs_System_E98083 = { /* 逃 */
    .next = &TextGlyphs_System_E999B8,
    .width = 8,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E98083Tiles,
};

const struct GlyphNew TextGlyphs_System_E38189 = { /* ぉ */
    .next = &TextGlyphs_System_E38188,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38189Tiles,
};

const struct GlyphNew TextGlyphs_System_E38092 = { /* 〒 */
    .next = &TextGlyphs_System_E38189,
    .width = 8,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38092Tiles,
};

const struct GlyphNew TextGlyphs_System_E68C91 = { /* 挑 */
    .next = &TextGlyphs_System_E68995,
    .width = 8,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68C91Tiles,
};

const struct GlyphNew TextGlyphs_System_E7AB8B = { /* 立 */
    .next = &TextGlyphs_System_E7A4BA,
    .width = 8,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7AB8BTiles,
};

const struct GlyphNew TextGlyphs_System_E588B6 = { /* 制 */
    .next = &TextGlyphs_System_E58D94,
    .width = 8,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E588B6Tiles,
};

const struct GlyphNew TextGlyphs_System_E5AF86 = { /* 密 */
    .next = &TextGlyphs_System_E588B6,
    .width = 8,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AF86Tiles,
};

const struct GlyphNew TextGlyphs_System_E8828C = { /* 肌 */
    .next = &TextGlyphs_System_E8A88E,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8828CTiles,
};

const struct GlyphNew TextGlyphs_System_E681AF = { /* 息 */
    .next = &TextGlyphs_System_E68C91,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E681AFTiles,
};

const struct GlyphNew TextGlyphs_System_E3818A = { /* お */
    .next = &TextGlyphs_System_E38092,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E3818ATiles,
};

const struct GlyphNew TextGlyphs_System_E28692 = { /* → */
    .next = &TextGlyphs_System_E296B3,
    .width = 6,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E28692Tiles,
};

const struct GlyphNew TextGlyphs_System_E789A9 = { /* 物 */
    .next = &TextGlyphs_System_E7AB8B,
    .width = 8,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E789A9Tiles,
};

const struct GlyphNew TextGlyphs_System_E58DBF = { /* 卿 */
    .next = &TextGlyphs_System_E5AF86,
    .width = 9,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58DBFTiles,
};

const struct GlyphNew TextGlyphs_System_E880B3 = { /* 耳 */
    .next = &TextGlyphs_System_E8828C,
    .width = 8,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E880B3Tiles,
};

const struct GlyphNew TextGlyphs_System_E58BA2 = { /* 勢 */
    .next = &TextGlyphs_System_E58DBF,
    .width = 9,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58BA2Tiles,
};

const struct GlyphNew TextGlyphs_System_E882A9 = { /* 肩 */
    .next = &TextGlyphs_System_E880B3,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E882A9Tiles,
};

const struct GlyphNew TextGlyphs_System_E3818B = { /* か */
    .next = &TextGlyphs_System_E3818A,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E3818BTiles,
};

const struct GlyphNew TextGlyphs_System_E887AA = { /* 自 */
    .next = &TextGlyphs_System_E882A9,
    .width = 7,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E887AATiles,
};

const struct GlyphNew TextGlyphs_System_E7BDA0 = { /* 罠 */
    .next = &TextGlyphs_System_E789A9,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BDA0Tiles,
};

const struct GlyphNew TextGlyphs_System_E8A68B = { /* 見 */
    .next = &TextGlyphs_System_E887AA,
    .width = 8,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A68BTiles,
};

const struct GlyphNew TextGlyphs_System_E9BB84 = { /* 黄 */
    .next = &TextGlyphs_System_E98083,
    .width = 8,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9BB84Tiles,
};

const struct GlyphNew TextGlyphs_System_E69D9F = { /* 束 */
    .next = &TextGlyphs_System_E681AF,
    .width = 8,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69D9FTiles,
};

const struct GlyphNew TextGlyphs_System_E69C9D = { /* 朝 */
    .next = &TextGlyphs_System_E69D9F,
    .width = 8,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69C9DTiles,
};

const struct GlyphNew TextGlyphs_System_E3818C = { /* が */
    .next = &TextGlyphs_System_E3818B,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E3818CTiles,
};

const struct GlyphNew TextGlyphs_System_E58886 = { /* 分 */
    .next = &TextGlyphs_System_E58BA2,
    .width = 8,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58886Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BE81 = { /* 征 */
    .next = &TextGlyphs_System_E58886,
    .width = 8,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BE81Tiles,
};

const struct GlyphNew TextGlyphs_System_E795A5 = { /* 略 */
    .next = &TextGlyphs_System_E7BDA0,
    .width = 9,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E795A5Tiles,
};

const struct GlyphNew TextGlyphs_System_E9A0AD = { /* 頭 */
    .next = &TextGlyphs_System_E9BB84,
    .width = 8,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A0ADTiles,
};

const struct GlyphNew TextGlyphs_System_E5B7BB = { /* 巻 */
    .next = &TextGlyphs_System_E5BE81,
    .width = 8,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B7BBTiles,
};

const struct GlyphNew TextGlyphs_System_E6A0B9 = { /* 根 */
    .next = &TextGlyphs_System_E69C9D,
    .width = 8,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A0B9Tiles,
};

const struct GlyphNew TextGlyphs_System_E585AB = { /* 八 */
    .next = &TextGlyphs_System_E5B7BB,
    .width = 9,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E585ABTiles,
};

const struct GlyphNew TextGlyphs_System_E3818D = { /* き */
    .next = &TextGlyphs_System_E3818C,
    .width = 7,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E3818DTiles,
};

const struct GlyphNew TextGlyphs_System_E5A283 = { /* 境 */
    .next = &TextGlyphs_System_E585AB,
    .width = 9,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A283Tiles,
};

const struct GlyphNew TextGlyphs_System_E682AA = { /* 悪 */
    .next = &TextGlyphs_System_E6A0B9,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E682AATiles,
};

const struct GlyphNew TextGlyphs_System_E5B086 = { /* 将 */
    .next = &TextGlyphs_System_E5A283,
    .width = 9,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B086Tiles,
};

const struct GlyphNew TextGlyphs_System_E680A7 = { /* 性 */
    .next = &TextGlyphs_System_E682AA,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E680A7Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B3A2 = { /* 賢 */
    .next = &TextGlyphs_System_E8A68B,
    .width = 8,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B3A2Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B6B3 = { /* 足 */
    .next = &TextGlyphs_System_E8B3A2,
    .width = 8,
    .utf_byte_2 = 0xb6,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B6B3Tiles,
};

const struct GlyphNew TextGlyphs_System_E8BE9E = { /* 辞 */
    .next = &TextGlyphs_System_E8B6B3,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BE9ETiles,
};

const struct GlyphNew TextGlyphs_System_E3818E = { /* ぎ */
    .next = &TextGlyphs_System_E3818D,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E3818ETiles,
};

const struct GlyphNew TextGlyphs_System_E99798 = { /* 闘 */
    .next = &TextGlyphs_System_E9A0AD,
    .width = 8,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99798Tiles,
};

const struct GlyphNew TextGlyphs_System_E9809F = { /* 速 */
    .next = &TextGlyphs_System_E99798,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9809FTiles,
};

const struct GlyphNew TextGlyphs_System_E5B08F = { /* 小 */
    .next = &TextGlyphs_System_E5B086,
    .width = 8,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B08FTiles,
};

const struct GlyphNew TextGlyphs_System_E794BA = { /* 町 */
    .next = &TextGlyphs_System_E795A5,
    .width = 8,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E794BATiles,
};

const struct GlyphNew TextGlyphs_System_E5B3A1 = { /* 峡 */
    .next = &TextGlyphs_System_E5B08F,
    .width = 9,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B3A1Tiles,
};

const struct GlyphNew TextGlyphs_System_E68890 = { /* 成 */
    .next = &TextGlyphs_System_E680A7,
    .width = 8,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68890Tiles,
};

const struct GlyphNew TextGlyphs_System_E88488 = { /* 脈 */
    .next = &TextGlyphs_System_E8BE9E,
    .width = 9,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88488Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B581 = { /* 流 */
    .next = &TextGlyphs_System_E68890,
    .width = 9,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B581Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B7B7 = { /* 混 */
    .next = &TextGlyphs_System_E6B581,
    .width = 8,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B7B7Tiles,
};

const struct GlyphNew TextGlyphs_System_E68FA1 = { /* 握 */
    .next = &TextGlyphs_System_E6B7B7,
    .width = 9,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68FA1Tiles,
};

const struct GlyphNew TextGlyphs_System_E3818F = { /* く */
    .next = &TextGlyphs_System_E3818E,
    .width = 6,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E3818FTiles,
};

const struct GlyphNew TextGlyphs_System_E5BCB7 = { /* 強 */
    .next = &TextGlyphs_System_E5B3A1,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BCB7Tiles,
};

const struct GlyphNew TextGlyphs_System_E799BA = { /* 発 */
    .next = &TextGlyphs_System_E794BA,
    .width = 9,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E799BATiles,
};

const struct GlyphNew TextGlyphs_System_E694BF = { /* 政 */
    .next = &TextGlyphs_System_E68FA1,
    .width = 8,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E694BFTiles,
};

const struct GlyphNew TextGlyphs_System_E5B091 = { /* 少 */
    .next = &TextGlyphs_System_E5BCB7,
    .width = 8,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B091Tiles,
};

const struct GlyphNew TextGlyphs_System_E981A3 = { /* 遣 */
    .next = &TextGlyphs_System_E9809F,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E981A3Tiles,
};

const struct GlyphNew TextGlyphs_System_E5838D = { /* 働 */
    .next = &TextGlyphs_System_E5B091,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5838DTiles,
};

const struct GlyphNew TextGlyphs_System_E5A699 = { /* 妙 */
    .next = &TextGlyphs_System_E5838D,
    .width = 9,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A699Tiles,
};

const struct GlyphNew TextGlyphs_System_E9B9BF = { /* 鹿 */
    .next = &TextGlyphs_System_E981A3,
    .width = 8,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9B9BFTiles,
};

const struct GlyphNew TextGlyphs_System_E38190 = { /* ぐ */
    .next = &TextGlyphs_System_E3818F,
    .width = 7,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38190Tiles,
};

const struct GlyphNew TextGlyphs_System_E58B95 = { /* 動 */
    .next = &TextGlyphs_System_E5A699,
    .width = 8,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58B95Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B18B = { /* 屋 */
    .next = &TextGlyphs_System_E58B95,
    .width = 8,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B18BTiles,
};

const struct GlyphNew TextGlyphs_System_E5AE8C = { /* 完 */
    .next = &TextGlyphs_System_E5B18B,
    .width = 8,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AE8CTiles,
};

const struct GlyphNew TextGlyphs_System_E5BC8F = { /* 式 */
    .next = &TextGlyphs_System_E5AE8C,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BC8FTiles,
};

const struct GlyphNew TextGlyphs_System_E5B19E = { /* 属 */
    .next = &TextGlyphs_System_E5BC8F,
    .width = 8,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B19ETiles,
};

const struct GlyphNew TextGlyphs_System_E695B4 = { /* 整 */
    .next = &TextGlyphs_System_E694BF,
    .width = 8,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E695B4Tiles,
};

const struct GlyphNew TextGlyphs_System_E38191 = { /* け */
    .next = &TextGlyphs_System_E38190,
    .width = 7,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38191Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B38A = { /* 賊 */
    .next = &TextGlyphs_System_E88488,
    .width = 9,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B38ATiles,
};

const struct GlyphNew TextGlyphs_System_E6989F = { /* 星 */
    .next = &TextGlyphs_System_E695B4,
    .width = 8,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6989FTiles,
};

const struct GlyphNew TextGlyphs_System_E5908C = { /* 同 */
    .next = &TextGlyphs_System_E5B19E,
    .width = 8,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5908CTiles,
};

const struct GlyphNew TextGlyphs_System_E6B091 = { /* 民 */
    .next = &TextGlyphs_System_E6989F,
    .width = 8,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B091Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AD98 = { /* 識 */
    .next = &TextGlyphs_System_E8B38A,
    .width = 9,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AD98Tiles,
};

const struct GlyphNew TextGlyphs_System_E5AE98 = { /* 官 */
    .next = &TextGlyphs_System_E5908C,
    .width = 8,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AE98Tiles,
};

const struct GlyphNew TextGlyphs_System_E686B6 = { /* 憶 */
    .next = &TextGlyphs_System_E6B091,
    .width = 10,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E686B6Tiles,
};

const struct GlyphNew TextGlyphs_System_E79599 = { /* 留 */
    .next = &TextGlyphs_System_E799BA,
    .width = 8,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79599Tiles,
};

const struct GlyphNew TextGlyphs_System_E999BA = { /* 険 */
    .next = &TextGlyphs_System_E9B9BF,
    .width = 8,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E999BATiles,
};

const struct GlyphNew TextGlyphs_System_E38192 = { /* げ */
    .next = &TextGlyphs_System_E38191,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38192Tiles,
};

const struct GlyphNew TextGlyphs_System_E68190 = { /* 恐 */
    .next = &TextGlyphs_System_E686B6,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68190Tiles,
};

const struct GlyphNew TextGlyphs_System_E6978F = { /* 族 */
    .next = &TextGlyphs_System_E68190,
    .width = 9,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6978FTiles,
};

const struct GlyphNew TextGlyphs_System_E4BC90 = { /* 伐 */
    .next = &TextGlyphs_System_E4B896,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BC90Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A082 = { /* 堂 */
    .next = &TextGlyphs_System_E5AE98,
    .width = 8,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A082Tiles,
};

const struct GlyphNew TextGlyphs_System_E9AD82 = { /* 魂 */
    .next = &TextGlyphs_System_E999BA,
    .width = 8,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9AD82Tiles,
};

const struct GlyphNew TextGlyphs_System_E699B4 = { /* 晴 */
    .next = &TextGlyphs_System_E6978F,
    .width = 9,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E699B4Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BA8A = { /* 床 */
    .next = &TextGlyphs_System_E5A082,
    .width = 8,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BA8ATiles,
};

const struct GlyphNew TextGlyphs_System_E38193 = { /* こ */
    .next = &TextGlyphs_System_E38192,
    .width = 6,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38193Tiles,
};

const struct GlyphNew TextGlyphs_System_E7B69A = { /* 続 */
    .next = &TextGlyphs_System_E79599,
    .width = 9,
    .utf_byte_2 = 0xb6,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B69ATiles,
};

const struct GlyphNew TextGlyphs_System_E58B99 = { /* 務 */
    .next = &TextGlyphs_System_E5BA8A,
    .width = 9,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58B99Tiles,
};

const struct GlyphNew TextGlyphs_System_E9A893 = { /* 験 */
    .next = &TextGlyphs_System_E9AD82,
    .width = 9,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A893Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B08E = { /* 導 */
    .next = &TextGlyphs_System_E58B99,
    .width = 8,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B08ETiles,
};

const struct GlyphNew TextGlyphs_System_E7BDB0 = { /* 罰 */
    .next = &TextGlyphs_System_E7B69A,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BDB0Tiles,
};

const struct GlyphNew TextGlyphs_System_E38194 = { /* ご */
    .next = &TextGlyphs_System_E38193,
    .width = 7,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38194Tiles,
};

const struct GlyphNew TextGlyphs_System_E68C9F = { /* 挟 */
    .next = &TextGlyphs_System_E699B4,
    .width = 9,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68C9FTiles,
};

const struct GlyphNew TextGlyphs_System_E68A9C = { /* 抜 */
    .next = &TextGlyphs_System_E68C9F,
    .width = 8,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68A9CTiles,
};

const struct GlyphNew TextGlyphs_System_E8AABF = { /* 調 */
    .next = &TextGlyphs_System_E8AD98,
    .width = 9,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AABFTiles,
};

const struct GlyphNew TextGlyphs_System_E5A4A2 = { /* 夢 */
    .next = &TextGlyphs_System_E5B08E,
    .width = 8,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A4A2Tiles,
};

const struct GlyphNew TextGlyphs_System_E38195 = { /* さ */
    .next = &TextGlyphs_System_E38194,
    .width = 6,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38195Tiles,
};

const struct GlyphNew TextGlyphs_System_E58583 = { /* 元 */
    .next = &TextGlyphs_System_E5A4A2,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58583Tiles,
};

const struct GlyphNew TextGlyphs_System_E7AB9C = { /* 竜 */
    .next = &TextGlyphs_System_E7BDB0,
    .width = 8,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7AB9CTiles,
};

const struct GlyphNew TextGlyphs_System_E784A1 = { /* 無 */
    .next = &TextGlyphs_System_E7AB9C,
    .width = 9,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E784A1Tiles,
};

const struct GlyphNew TextGlyphs_System_E6ADA3 = { /* 正 */
    .next = &TextGlyphs_System_E68A9C,
    .width = 8,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6ADA3Tiles,
};

const struct GlyphNew TextGlyphs_System_E59CA7 = { /* 圧 */
    .next = &TextGlyphs_System_E58583,
    .width = 8,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59CA7Tiles,
};

const struct GlyphNew TextGlyphs_System_E69599 = { /* 教 */
    .next = &TextGlyphs_System_E6ADA3,
    .width = 9,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69599Tiles,
};

const struct GlyphNew TextGlyphs_System_E689BF = { /* 承 */
    .next = &TextGlyphs_System_E69599,
    .width = 9,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E689BFTiles,
};

const struct GlyphNew TextGlyphs_System_E38196 = { /* ざ */
    .next = &TextGlyphs_System_E38195,
    .width = 7,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38196Tiles,
};

const struct GlyphNew TextGlyphs_System_E58E9F = { /* 原 */
    .next = &TextGlyphs_System_E59CA7,
    .width = 8,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58E9FTiles,
};

const struct GlyphNew TextGlyphs_System_E4BFBA = { /* 俺 */
    .next = &TextGlyphs_System_E4BC90,
    .width = 8,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BFBATiles,
};

const struct GlyphNew TextGlyphs_System_E6A98B = { /* 橋 */
    .next = &TextGlyphs_System_E689BF,
    .width = 9,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A98BTiles,
};

const struct GlyphNew TextGlyphs_System_E6849F = { /* 感 */
    .next = &TextGlyphs_System_E6A98B,
    .width = 8,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6849FTiles,
};

const struct GlyphNew TextGlyphs_System_E8B685 = { /* 超 */
    .next = &TextGlyphs_System_E8AABF,
    .width = 8,
    .utf_byte_2 = 0xb6,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B685Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B885 = { /* 清 */
    .next = &TextGlyphs_System_E6849F,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B885Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B49E = { /* 洞 */
    .next = &TextGlyphs_System_E6B885,
    .width = 8,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B49ETiles,
};

const struct GlyphNew TextGlyphs_System_E38197 = { /* し */
    .next = &TextGlyphs_System_E38196,
    .width = 7,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38197Tiles,
};

const struct GlyphNew TextGlyphs_System_E689B1 = { /* 扱 */
    .next = &TextGlyphs_System_E6B49E,
    .width = 8,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E689B1Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BEB6 = { /* 侶 */
    .next = &TextGlyphs_System_E4BFBA,
    .width = 8,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BEB6Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B381 = { /* 況 */
    .next = &TextGlyphs_System_E689B1,
    .width = 8,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B381Tiles,
};

const struct GlyphNew TextGlyphs_System_E789B2 = { /* 牲 */
    .next = &TextGlyphs_System_E784A1,
    .width = 8,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E789B2Tiles,
};

const struct GlyphNew TextGlyphs_System_E68B9B = { /* 招 */
    .next = &TextGlyphs_System_E6B381,
    .width = 8,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68B9BTiles,
};

const struct GlyphNew TextGlyphs_System_E4B883 = { /* 七 */
    .next = &TextGlyphs_System_E4BEB6,
    .width = 8,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B883Tiles,
};

const struct GlyphNew TextGlyphs_System_E38198 = { /* じ */
    .next = &TextGlyphs_System_E38197,
    .width = 7,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38198Tiles,
};

const struct GlyphNew TextGlyphs_System_E681A9 = { /* 恩 */
    .next = &TextGlyphs_System_E68B9B,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E681A9Tiles,
};

const struct GlyphNew TextGlyphs_System_E7949F = { /* 生 */
    .next = &TextGlyphs_System_E789B2,
    .width = 8,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7949FTiles,
};

const struct GlyphNew TextGlyphs_System_E69687 = { /* 文 */
    .next = &TextGlyphs_System_E681A9,
    .width = 8,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69687Tiles,
};

const struct GlyphNew TextGlyphs_System_E78B82 = { /* 狂 */
    .next = &TextGlyphs_System_E7949F,
    .width = 8,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78B82Tiles,
};

const struct GlyphNew TextGlyphs_System_E5AD98 = { /* 存 */
    .next = &TextGlyphs_System_E58E9F,
    .width = 8,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AD98Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B7A6 = { /* 左 */
    .next = &TextGlyphs_System_E5AD98,
    .width = 8,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B7A6Tiles,
};

const struct GlyphNew TextGlyphs_System_E99CA7 = { /* 霧 */
    .next = &TextGlyphs_System_E9A893,
    .width = 8,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99CA7Tiles,
};

const struct GlyphNew TextGlyphs_System_E38199 = { /* す */
    .next = &TextGlyphs_System_E38198,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38199Tiles,
};

const struct GlyphNew TextGlyphs_System_E69785 = { /* 旅 */
    .next = &TextGlyphs_System_E69687,
    .width = 9,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69785Tiles,
};

const struct GlyphNew TextGlyphs_System_E995B7 = { /* 長 */
    .next = &TextGlyphs_System_E99CA7,
    .width = 8,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E995B7Tiles,
};

const struct GlyphNew TextGlyphs_System_E5ADAB = { /* 孫 */
    .next = &TextGlyphs_System_E5B7A6,
    .width = 9,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5ADABTiles,
};

const struct GlyphNew TextGlyphs_System_E79B9B = { /* 盛 */
    .next = &TextGlyphs_System_E78B82,
    .width = 9,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79B9BTiles,
};

const struct GlyphNew TextGlyphs_System_E8819E = { /* 聞 */
    .next = &TextGlyphs_System_E8B685,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8819ETiles,
};

const struct GlyphNew TextGlyphs_System_E5B7AE = { /* 差 */
    .next = &TextGlyphs_System_E5ADAB,
    .width = 8,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B7AETiles,
};

const struct GlyphNew TextGlyphs_System_E6B8A9 = { /* 温 */
    .next = &TextGlyphs_System_E69785,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B8A9Tiles,
};

const struct GlyphNew TextGlyphs_System_E68F9B = { /* 換 */
    .next = &TextGlyphs_System_E6B8A9,
    .width = 9,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68F9BTiles,
};

const struct GlyphNew TextGlyphs_System_E3819A = { /* ず */
    .next = &TextGlyphs_System_E38199,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E3819ATiles,
};

const struct GlyphNew TextGlyphs_System_E5A4B1 = { /* 失 */
    .next = &TextGlyphs_System_E5B7AE,
    .width = 8,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A4B1Tiles,
};

const struct GlyphNew TextGlyphs_System_E7B2BE = { /* 精 */
    .next = &TextGlyphs_System_E79B9B,
    .width = 8,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B2BETiles,
};

const struct GlyphNew TextGlyphs_System_E6B89B = { /* 減 */
    .next = &TextGlyphs_System_E68F9B,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B89BTiles,
};

const struct GlyphNew TextGlyphs_System_E69887 = { /* 昇 */
    .next = &TextGlyphs_System_E6B89B,
    .width = 8,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69887Tiles,
};

const struct GlyphNew TextGlyphs_System_E8999C = { /* 虜 */
    .next = &TextGlyphs_System_E8819E,
    .width = 8,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8999CTiles,
};

const struct GlyphNew TextGlyphs_System_E5B08A = { /* 尊 */
    .next = &TextGlyphs_System_E5A4B1,
    .width = 9,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B08ATiles,
};

const struct GlyphNew TextGlyphs_System_E9A082 = { /* 頂 */
    .next = &TextGlyphs_System_E995B7,
    .width = 8,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A082Tiles,
};

const struct GlyphNew TextGlyphs_System_E3819B = { /* せ */
    .next = &TextGlyphs_System_E3819A,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E3819BTiles,
};

const struct GlyphNew TextGlyphs_System_E88196 = { /* 聖 */
    .next = &TextGlyphs_System_E8999C,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88196Tiles,
};

const struct GlyphNew TextGlyphs_System_E98193 = { /* 道 */
    .next = &TextGlyphs_System_E9A082,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E98193Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BDB5 = { /* 併 */
    .next = &TextGlyphs_System_E4B883,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BDB5Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BA86 = { /* 了 */
    .next = &TextGlyphs_System_E4BDB5,
    .width = 8,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BA86Tiles,
};

const struct GlyphNew TextGlyphs_System_E99FB3 = { /* 音 */
    .next = &TextGlyphs_System_E98193,
    .width = 8,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99FB3Tiles,
};

const struct GlyphNew TextGlyphs_System_E9B3A5 = { /* 鳥 */
    .next = &TextGlyphs_System_E99FB3,
    .width = 8,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9B3A5Tiles,
};

const struct GlyphNew TextGlyphs_System_E6908D = { /* 損 */
    .next = &TextGlyphs_System_E69887,
    .width = 8,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6908DTiles,
};

const struct GlyphNew TextGlyphs_System_E99ABC = { /* 隼 */
    .next = &TextGlyphs_System_E9B3A5,
    .width = 8,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99ABCTiles,
};

const struct GlyphNew TextGlyphs_System_E3819C = { /* ぜ */
    .next = &TextGlyphs_System_E3819B,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E3819CTiles,
};

const struct GlyphNew TextGlyphs_System_E585B5 = { /* 兵 */
    .next = &TextGlyphs_System_E5B08A,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E585B5Tiles,
};

const struct GlyphNew TextGlyphs_System_E69D91 = { /* 村 */
    .next = &TextGlyphs_System_E6908D,
    .width = 8,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69D91Tiles,
};

const struct GlyphNew TextGlyphs_System_E4B88B = { /* 下 */
    .next = &TextGlyphs_System_E4BA86,
    .width = 8,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B88BTiles,
};

const struct GlyphNew TextGlyphs_System_E5A3B0 = { /* 声 */
    .next = &TextGlyphs_System_E585B5,
    .width = 8,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A3B0Tiles,
};

const struct GlyphNew TextGlyphs_System_E5AEA4 = { /* 室 */
    .next = &TextGlyphs_System_E5A3B0,
    .width = 8,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AEA4Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A898 = { /* 娘 */
    .next = &TextGlyphs_System_E5AEA4,
    .width = 8,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A898Tiles,
};

const struct GlyphNew TextGlyphs_System_E28A86 = { /* ⊆ */
    .next = &TextGlyphs_System_E28692,
    .width = 8,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E28A86Tiles,
};

const struct GlyphNew TextGlyphs_System_E3819D = { /* そ */
    .next = &TextGlyphs_System_E3819C,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E3819DTiles,
};

const struct GlyphNew TextGlyphs_System_E78FBE = { /* 現 */
    .next = &TextGlyphs_System_E7B2BE,
    .width = 8,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78FBETiles,
};

const struct GlyphNew TextGlyphs_System_E7A082 = { /* 砂 */
    .next = &TextGlyphs_System_E78FBE,
    .width = 9,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A082Tiles,
};

const struct GlyphNew TextGlyphs_System_E88888 = { /* 興 */
    .next = &TextGlyphs_System_E88196,
    .width = 8,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88888Tiles,
};

const struct GlyphNew TextGlyphs_System_E58C96 = { /* 化 */
    .next = &TextGlyphs_System_E5A898,
    .width = 8,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58C96Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B3A0 = { /* 峠 */
    .next = &TextGlyphs_System_E58C96,
    .width = 8,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B3A0Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A180 = { /* 塀 */
    .next = &TextGlyphs_System_E5B3A0,
    .width = 9,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A180Tiles,
};

const struct GlyphNew TextGlyphs_System_E588A4 = { /* 判 */
    .next = &TextGlyphs_System_E5A180,
    .width = 8,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E588A4Tiles,
};

const struct GlyphNew TextGlyphs_System_E28A87 = { /* ⊇ */
    .next = &TextGlyphs_System_E28A86,
    .width = 7,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E28A87Tiles,
};

const struct GlyphNew TextGlyphs_System_E3819E = { /* ぞ */
    .next = &TextGlyphs_System_E3819D,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E3819ETiles,
};

const struct GlyphNew TextGlyphs_System_E4B8A1 = { /* 両 */
    .next = &TextGlyphs_System_E4B88B,
    .width = 8,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B8A1Tiles,
};

const struct GlyphNew TextGlyphs_System_E8A5BF = { /* 西 */
    .next = &TextGlyphs_System_E88888,
    .width = 8,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A5BFTiles,
};

const struct GlyphNew TextGlyphs_System_E4BB96 = { /* 他 */
    .next = &TextGlyphs_System_E4B8A1,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BB96Tiles,
};

const struct GlyphNew TextGlyphs_System_E5908D = { /* 名 */
    .next = &TextGlyphs_System_E588A4,
    .width = 7,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5908DTiles,
};

const struct GlyphNew TextGlyphs_System_E58D8A = { /* 半 */
    .next = &TextGlyphs_System_E5908D,
    .width = 8,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58D8ATiles,
};

const struct GlyphNew TextGlyphs_System_E4BBAE = { /* 仮 */
    .next = &TextGlyphs_System_E4BB96,
    .width = 8,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BBAETiles,
};

const struct GlyphNew TextGlyphs_System_E79BB4 = { /* 直 */
    .next = &TextGlyphs_System_E7A082,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79BB4Tiles,
};

const struct GlyphNew TextGlyphs_System_E3819F = { /* た */
    .next = &TextGlyphs_System_E3819E,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E3819FTiles,
};

const struct GlyphNew TextGlyphs_System_E4BD95 = { /* 何 */
    .next = &TextGlyphs_System_E4BBAE,
    .width = 9,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BD95Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A49A = { /* 多 */
    .next = &TextGlyphs_System_E58D8A,
    .width = 7,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A49ATiles,
};

const struct GlyphNew TextGlyphs_System_E591BD = { /* 命 */
    .next = &TextGlyphs_System_E5A49A,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E591BDTiles,
};

const struct GlyphNew TextGlyphs_System_E5B9B3 = { /* 平 */
    .next = &TextGlyphs_System_E591BD,
    .width = 8,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B9B3Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AAA0 = { /* 誠 */
    .next = &TextGlyphs_System_E8A5BF,
    .width = 9,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AAA0Tiles,
};

const struct GlyphNew TextGlyphs_System_E58F8D = { /* 反 */
    .next = &TextGlyphs_System_E5B9B3,
    .width = 8,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58F8DTiles,
};

const struct GlyphNew TextGlyphs_System_E6AD93 = { /* 歓 */
    .next = &TextGlyphs_System_E69D91,
    .width = 9,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6AD93Tiles,
};

const struct GlyphNew TextGlyphs_System_E983B7 = { /* 郷 */
    .next = &TextGlyphs_System_E99ABC,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E983B7Tiles,
};

const struct GlyphNew TextGlyphs_System_E381A0 = { /* だ */
    .next = &TextGlyphs_System_E3819F,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E381A0Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B288 = { /* 沈 */
    .next = &TextGlyphs_System_E6AD93,
    .width = 8,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B288Tiles,
};

const struct GlyphNew TextGlyphs_System_E8A880 = { /* 言 */
    .next = &TextGlyphs_System_E8AAA0,
    .width = 8,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A880Tiles,
};

const struct GlyphNew TextGlyphs_System_E6988E = { /* 明 */
    .next = &TextGlyphs_System_E6B288,
    .width = 8,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6988ETiles,
};

const struct GlyphNew TextGlyphs_System_E5A4AA = { /* 太 */
    .next = &TextGlyphs_System_E58F8D,
    .width = 8,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A4AATiles,
};

const struct GlyphNew TextGlyphs_System_E5BE97 = { /* 得 */
    .next = &TextGlyphs_System_E5A4AA,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BE97Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AA93 = { /* 誓 */
    .next = &TextGlyphs_System_E8A880,
    .width = 8,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AA93Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B197 = { /* 汗 */
    .next = &TextGlyphs_System_E6988E,
    .width = 8,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B197Tiles,
};

const struct GlyphNew TextGlyphs_System_E796BE = { /* 疾 */
    .next = &TextGlyphs_System_E79BB4,
    .width = 8,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E796BETiles,
};

const struct GlyphNew TextGlyphs_System_E381A1 = { /* ち */
    .next = &TextGlyphs_System_E381A0,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E381A1Tiles,
};

const struct GlyphNew TextGlyphs_System_E79B9F = { /* 盟 */
    .next = &TextGlyphs_System_E796BE,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79B9FTiles,
};

const struct GlyphNew TextGlyphs_System_E8B3AA = { /* 質 */
    .next = &TextGlyphs_System_E8AA93,
    .width = 8,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B3AATiles,
};

const struct GlyphNew TextGlyphs_System_E8AB8B = { /* 請 */
    .next = &TextGlyphs_System_E8B3AA,
    .width = 8,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AB8BTiles,
};

const struct GlyphNew TextGlyphs_System_E69F84 = { /* 柄 */
    .next = &TextGlyphs_System_E6B197,
    .width = 8,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69F84Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BEA1 = { /* 価 */
    .next = &TextGlyphs_System_E4BD95,
    .width = 8,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BEA1Tiles,
};

const struct GlyphNew TextGlyphs_System_E69699 = { /* 料 */
    .next = &TextGlyphs_System_E69F84,
    .width = 9,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69699Tiles,
};

const struct GlyphNew TextGlyphs_System_E99FBF = { /* 響 */
    .next = &TextGlyphs_System_E983B7,
    .width = 9,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99FBFTiles,
};

const struct GlyphNew TextGlyphs_System_E381A2 = { /* ぢ */
    .next = &TextGlyphs_System_E381A1,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E381A2Tiles,
};

const struct GlyphNew TextGlyphs_System_E5AE89 = { /* 安 */
    .next = &TextGlyphs_System_E5BE97,
    .width = 8,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AE89Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BAA7 = { /* 座 */
    .next = &TextGlyphs_System_E5AE89,
    .width = 8,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BAA7Tiles,
};

const struct GlyphNew TextGlyphs_System_E8BFB7 = { /* 迷 */
    .next = &TextGlyphs_System_E8AB8B,
    .width = 8,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BFB7Tiles,
};

const struct GlyphNew TextGlyphs_System_E99990 = { /* 限 */
    .next = &TextGlyphs_System_E99FBF,
    .width = 8,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99990Tiles,
};

const struct GlyphNew TextGlyphs_System_E5AE9F = { /* 実 */
    .next = &TextGlyphs_System_E5BAA7,
    .width = 8,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AE9FTiles,
};

const struct GlyphNew TextGlyphs_System_E9809D = { /* 逝 */
    .next = &TextGlyphs_System_E99990,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9809DTiles,
};

const struct GlyphNew TextGlyphs_System_E381A3 = { /* っ */
    .next = &TextGlyphs_System_E381A2,
    .width = 6,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E381A3Tiles,
};

const struct GlyphNew TextGlyphs_System_E58AA0 = { /* 加 */
    .next = &TextGlyphs_System_E5AE9F,
    .width = 8,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58AA0Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B688 = { /* 消 */
    .next = &TextGlyphs_System_E69699,
    .width = 8,
    .utf_byte_2 = 0xb6,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B688Tiles,
};

const struct GlyphNew TextGlyphs_System_E789B9 = { /* 特 */
    .next = &TextGlyphs_System_E79B9F,
    .width = 9,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E789B9Tiles,
};

const struct GlyphNew TextGlyphs_System_E381A4 = { /* つ */
    .next = &TextGlyphs_System_E381A3,
    .width = 7,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E381A4Tiles,
};

const struct GlyphNew TextGlyphs_System_E58FAF = { /* 可 */
    .next = &TextGlyphs_System_E58AA0,
    .width = 8,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58FAFTiles,
};

const struct GlyphNew TextGlyphs_System_E5808B = { /* 個 */
    .next = &TextGlyphs_System_E58FAF,
    .width = 8,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5808BTiles,
};

const struct GlyphNew TextGlyphs_System_E78C9F = { /* 猟 */
    .next = &TextGlyphs_System_E789B9,
    .width = 9,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78C9FTiles,
};

const struct GlyphNew TextGlyphs_System_E99689 = { /* 閉 */
    .next = &TextGlyphs_System_E9809D,
    .width = 8,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99689Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B889 = { /* 渉 */
    .next = &TextGlyphs_System_E6B688,
    .width = 8,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B889Tiles,
};

const struct GlyphNew TextGlyphs_System_E99D92 = { /* 青 */
    .next = &TextGlyphs_System_E99689,
    .width = 8,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99D92Tiles,
};

const struct GlyphNew TextGlyphs_System_E381A5 = { /* づ */
    .next = &TextGlyphs_System_E381A4,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E381A5Tiles,
};

const struct GlyphNew TextGlyphs_System_CEB5 = { /* ε */
    .next = NULL,
    .width = 7,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_CEB5Tiles,
};

const struct GlyphNew TextGlyphs_System_E69A97 = { /* 暗 */
    .next = &TextGlyphs_System_E6B889,
    .width = 9,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69A97Tiles,
};

const struct GlyphNew TextGlyphs_System_E58FA4 = { /* 古 */
    .next = &TextGlyphs_System_E5808B,
    .width = 8,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58FA4Tiles,
};

const struct GlyphNew TextGlyphs_System_E9999B = { /* 陛 */
    .next = &TextGlyphs_System_E99D92,
    .width = 9,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9999BTiles,
};

const struct GlyphNew TextGlyphs_System_E5A7AA = { /* 姪 */
    .next = &TextGlyphs_System_E58FA4,
    .width = 9,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A7AATiles,
};

const struct GlyphNew TextGlyphs_System_E79498 = { /* 甘 */
    .next = &TextGlyphs_System_E78C9F,
    .width = 8,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79498Tiles,
};

const struct GlyphNew TextGlyphs_System_E99D99 = { /* 静 */
    .next = &TextGlyphs_System_E9999B,
    .width = 9,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99D99Tiles,
};

const struct GlyphNew TextGlyphs_System_E381A6 = { /* て */
    .next = &TextGlyphs_System_E381A5,
    .width = 7,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E381A6Tiles,
};

const struct GlyphNew TextGlyphs_System_E5868D = { /* 再 */
    .next = &TextGlyphs_System_E5A7AA,
    .width = 8,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5868DTiles,
};

const struct GlyphNew TextGlyphs_System_E784BC = { /* 焼 */
    .next = &TextGlyphs_System_E79498,
    .width = 9,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E784BCTiles,
};

const struct GlyphNew TextGlyphs_System_E591BC = { /* 呼 */
    .next = &TextGlyphs_System_E5868D,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E591BCTiles,
};

const struct GlyphNew TextGlyphs_System_E6A188 = { /* 案 */
    .next = &TextGlyphs_System_E69A97,
    .width = 8,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A188Tiles,
};

const struct GlyphNew TextGlyphs_System_E7899D = { /* 牝 */
    .next = &TextGlyphs_System_E784BC,
    .width = 8,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7899DTiles,
};

const struct GlyphNew TextGlyphs_System_E381A7 = { /* で */
    .next = &TextGlyphs_System_E381A6,
    .width = 7,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E381A7Tiles,
};

const struct GlyphNew TextGlyphs_System_E69C80 = { /* 最 */
    .next = &TextGlyphs_System_E6A188,
    .width = 8,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69C80Tiles,
};

const struct GlyphNew TextGlyphs_System_E7A88E = { /* 税 */
    .next = &TextGlyphs_System_E7899D,
    .width = 8,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A88ETiles,
};

const struct GlyphNew TextGlyphs_System_E6BB85 = { /* 滅 */
    .next = &TextGlyphs_System_E69C80,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6BB85Tiles,
};

const struct GlyphNew TextGlyphs_System_E68993 = { /* 打 */
    .next = &TextGlyphs_System_E6BB85,
    .width = 8,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68993Tiles,
};

const struct GlyphNew TextGlyphs_System_E99787 = { /* 闇 */
    .next = &TextGlyphs_System_E99D99,
    .width = 8,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99787Tiles,
};

const struct GlyphNew TextGlyphs_System_E5AB81 = { /* 嫁 */
    .next = &TextGlyphs_System_E591BC,
    .width = 9,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AB81Tiles,
};

const struct GlyphNew TextGlyphs_System_E59BBA = { /* 固 */
    .next = &TextGlyphs_System_E5AB81,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59BBATiles,
};

const struct GlyphNew TextGlyphs_System_E6AF92 = { /* 毒 */
    .next = &TextGlyphs_System_E68993,
    .width = 8,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6AF92Tiles,
};

const struct GlyphNew TextGlyphs_System_E784A6 = { /* 焦 */
    .next = &TextGlyphs_System_E7A88E,
    .width = 9,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E784A6Tiles,
};

const struct GlyphNew TextGlyphs_System_E381A8 = { /* と */
    .next = &TextGlyphs_System_E381A7,
    .width = 7,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E381A8Tiles,
};

const struct GlyphNew TextGlyphs_System_E5AEB6 = { /* 家 */
    .next = &TextGlyphs_System_E59BBA,
    .width = 8,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AEB6Tiles,
};

const struct GlyphNew TextGlyphs_System_E78BAC = { /* 独 */
    .next = &TextGlyphs_System_E784A6,
    .width = 9,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78BACTiles,
};

const struct GlyphNew TextGlyphs_System_E6A5AD = { /* 業 */
    .next = &TextGlyphs_System_E6AF92,
    .width = 8,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A5ADTiles,
};

const struct GlyphNew TextGlyphs_System_E381A9 = { /* ど */
    .next = &TextGlyphs_System_E381A8,
    .width = 7,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E381A9Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A19E = { /* 塞 */
    .next = &TextGlyphs_System_E5AEB6,
    .width = 8,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A19ETiles,
};

const struct GlyphNew TextGlyphs_System_E8BFBD = { /* 追 */
    .next = &TextGlyphs_System_E8BFB7,
    .width = 8,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BFBDTiles,
};

const struct GlyphNew TextGlyphs_System_E5ADA4 = { /* 孤 */
    .next = &TextGlyphs_System_E5A19E,
    .width = 10,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5ADA4Tiles,
};

const struct GlyphNew TextGlyphs_System_E889AF = { /* 良 */
    .next = &TextGlyphs_System_E8BFBD,
    .width = 7,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E889AFTiles,
};

const struct GlyphNew TextGlyphs_System_E5B180 = { /* 局 */
    .next = &TextGlyphs_System_E5ADA4,
    .width = 8,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B180Tiles,
};

const struct GlyphNew TextGlyphs_System_E7AEA1 = { /* 管 */
    .next = &TextGlyphs_System_E78BAC,
    .width = 9,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7AEA1Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A381 = { /* 壁 */
    .next = &TextGlyphs_System_E5B180,
    .width = 9,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A381Tiles,
};

const struct GlyphNew TextGlyphs_System_E5AFA1 = { /* 寡 */
    .next = &TextGlyphs_System_E5A381,
    .width = 9,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AFA1Tiles,
};

const struct GlyphNew TextGlyphs_System_E381AA = { /* な */
    .next = &TextGlyphs_System_E381A9,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E381AATiles,
};

const struct GlyphNew TextGlyphs_System_E4BBA5 = { /* 以 */
    .next = &TextGlyphs_System_E4BEA1,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BBA5Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A6BB = { /* 妻 */
    .next = &TextGlyphs_System_E5AFA1,
    .width = 8,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A6BBTiles,
};

const struct GlyphNew TextGlyphs_System_E7B0A1 = { /* 簡 */
    .next = &TextGlyphs_System_E7AEA1,
    .width = 8,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B0A1Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B7B1 = { /* 己 */
    .next = &TextGlyphs_System_E5A6BB,
    .width = 7,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B7B1Tiles,
};

const struct GlyphNew TextGlyphs_System_E381AB = { /* に */
    .next = &TextGlyphs_System_E381AA,
    .width = 7,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E381ABTiles,
};

const struct GlyphNew TextGlyphs_System_E7979B = { /* 痛 */
    .next = &TextGlyphs_System_E7B0A1,
    .width = 8,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7979BTiles,
};

const struct GlyphNew TextGlyphs_System_E6839C = { /* 惜 */
    .next = &TextGlyphs_System_E6A5AD,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6839CTiles,
};

const struct GlyphNew TextGlyphs_System_E5AEB0 = { /* 宰 */
    .next = &TextGlyphs_System_E5B7B1,
    .width = 8,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AEB0Tiles,
};

const struct GlyphNew TextGlyphs_System_E6A5B5 = { /* 極 */
    .next = &TextGlyphs_System_E6839C,
    .width = 9,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A5B5Tiles,
};

const struct GlyphNew TextGlyphs_System_E381AC = { /* ぬ */
    .next = &TextGlyphs_System_E381AB,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E381ACTiles,
};

const struct GlyphNew TextGlyphs_System_E4BD8D = { /* 位 */
    .next = &TextGlyphs_System_E4BBA5,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BD8DTiles,
};

const struct GlyphNew TextGlyphs_System_E58699 = { /* 写 */
    .next = &TextGlyphs_System_E5AEB0,
    .width = 8,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58699Tiles,
};

const struct GlyphNew TextGlyphs_System_E78E89 = { /* 玉 */
    .next = &TextGlyphs_System_E7979B,
    .width = 8,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78E89Tiles,
};

const struct GlyphNew TextGlyphs_System_E69E9C = { /* 果 */
    .next = &TextGlyphs_System_E6A5B5,
    .width = 8,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69E9CTiles,
};

const struct GlyphNew TextGlyphs_System_E588A5 = { /* 別 */
    .next = &TextGlyphs_System_E58699,
    .width = 8,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E588A5Tiles,
};

const struct GlyphNew TextGlyphs_System_E99DA2 = { /* 面 */
    .next = &TextGlyphs_System_E99787,
    .width = 8,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99DA2Tiles,
};

const struct GlyphNew TextGlyphs_System_E9809A = { /* 通 */
    .next = &TextGlyphs_System_E99DA2,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9809ATiles,
};

const struct GlyphNew TextGlyphs_System_E9878F = { /* 量 */
    .next = &TextGlyphs_System_E9809A,
    .width = 8,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9878FTiles,
};

const struct GlyphNew TextGlyphs_System_E381AD = { /* ね */
    .next = &TextGlyphs_System_E381AC,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E381ADTiles,
};

const struct GlyphNew TextGlyphs_System_E6898D = { /* 才 */
    .next = &TextGlyphs_System_E69E9C,
    .width = 8,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6898DTiles,
};

const struct GlyphNew TextGlyphs_System_E7AA81 = { /* 突 */
    .next = &TextGlyphs_System_E78E89,
    .width = 8,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7AA81Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B084 = { /* 射 */
    .next = &TextGlyphs_System_E588A5,
    .width = 9,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B084Tiles,
};

const struct GlyphNew TextGlyphs_System_E381AE = { /* の */
    .next = &TextGlyphs_System_E381AD,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E381AETiles,
};

const struct GlyphNew TextGlyphs_System_E9A098 = { /* 領 */
    .next = &TextGlyphs_System_E9878F,
    .width = 8,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A098Tiles,
};

const struct GlyphNew TextGlyphs_System_E58189 = { /* 偉 */
    .next = &TextGlyphs_System_E5B084,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58189Tiles,
};

const struct GlyphNew TextGlyphs_System_E69894 = { /* 昔 */
    .next = &TextGlyphs_System_E6898D,
    .width = 8,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69894Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BD93 = { /* 体 */
    .next = &TextGlyphs_System_E4BD8D,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BD93Tiles,
};

const struct GlyphNew TextGlyphs_System_E7A7B0 = { /* 称 */
    .next = &TextGlyphs_System_E7AA81,
    .width = 9,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A7B0Tiles,
};

const struct GlyphNew TextGlyphs_System_E68DA8 = { /* 捨 */
    .next = &TextGlyphs_System_E69894,
    .width = 9,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68DA8Tiles,
};

const struct GlyphNew TextGlyphs_System_E6AD8C = { /* 歌 */
    .next = &TextGlyphs_System_E68DA8,
    .width = 9,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6AD8CTiles,
};

const struct GlyphNew TextGlyphs_System_E69585 = { /* 故 */
    .next = &TextGlyphs_System_E6AD8C,
    .width = 8,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69585Tiles,
};

const struct GlyphNew TextGlyphs_System_E381AF = { /* は */
    .next = &TextGlyphs_System_E381AE,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E381AFTiles,
};

const struct GlyphNew TextGlyphs_System_E58A9B = { /* 力 */
    .next = &TextGlyphs_System_E58189,
    .width = 8,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58A9BTiles,
};

const struct GlyphNew TextGlyphs_System_E59BB2 = { /* 囲 */
    .next = &TextGlyphs_System_E58A9B,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59BB2Tiles,
};

const struct GlyphNew TextGlyphs_System_E7ABA0 = { /* 章 */
    .next = &TextGlyphs_System_E7A7B0,
    .width = 8,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7ABA0Tiles,
};

const struct GlyphNew TextGlyphs_System_E6A8A1 = { /* 模 */
    .next = &TextGlyphs_System_E69585,
    .width = 8,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A8A1Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B2B3 = { /* 河 */
    .next = &TextGlyphs_System_E6A8A1,
    .width = 8,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B2B3Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B5A6 = { /* 赦 */
    .next = &TextGlyphs_System_E889AF,
    .width = 9,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B5A6Tiles,
};

const struct GlyphNew TextGlyphs_System_E381B0 = { /* ば */
    .next = &TextGlyphs_System_E381AF,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E381B0Tiles,
};

const struct GlyphNew TextGlyphs_System_E79FB3 = { /* 石 */
    .next = &TextGlyphs_System_E7ABA0,
    .width = 8,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79FB3Tiles,
};

const struct GlyphNew TextGlyphs_System_E781AB = { /* 火 */
    .next = &TextGlyphs_System_E79FB3,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E781ABTiles,
};

const struct GlyphNew TextGlyphs_System_E5AFBE = { /* 対 */
    .next = &TextGlyphs_System_E59BB2,
    .width = 8,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AFBETiles,
};

const struct GlyphNew TextGlyphs_System_E7B791 = { /* 緑 */
    .next = &TextGlyphs_System_E781AB,
    .width = 9,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B791Tiles,
};

const struct GlyphNew TextGlyphs_System_E7AC91 = { /* 笑 */
    .next = &TextGlyphs_System_E7B791,
    .width = 8,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7AC91Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B996 = { /* 湖 */
    .next = &TextGlyphs_System_E6B2B3,
    .width = 9,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B996Tiles,
};

const struct GlyphNew TextGlyphs_System_E381B1 = { /* ぱ */
    .next = &TextGlyphs_System_E381B0,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E381B1Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A489 = { /* 変 */
    .next = &TextGlyphs_System_E5AFBE,
    .width = 8,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A489Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A794 = { /* 委 */
    .next = &TextGlyphs_System_E5A489,
    .width = 8,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A794Tiles,
};

const struct GlyphNew TextGlyphs_System_E7A98D = { /* 積 */
    .next = &TextGlyphs_System_E7AC91,
    .width = 8,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A98DTiles,
};

const struct GlyphNew TextGlyphs_System_E6B888 = { /* 済 */
    .next = &TextGlyphs_System_E6B996,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B888Tiles,
};

const struct GlyphNew TextGlyphs_System_E381B2 = { /* ひ */
    .next = &TextGlyphs_System_E381B1,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E381B2Tiles,
};

const struct GlyphNew TextGlyphs_System_E781BD = { /* 災 */
    .next = &TextGlyphs_System_E7A98D,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E781BDTiles,
};

const struct GlyphNew TextGlyphs_System_E5A881 = { /* 威 */
    .next = &TextGlyphs_System_E5A794,
    .width = 9,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A881Tiles,
};

const struct GlyphNew TextGlyphs_System_E78987 = { /* 片 */
    .next = &TextGlyphs_System_E781BD,
    .width = 8,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78987Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AB8C = { /* 諌 */
    .next = &TextGlyphs_System_E8B5A6,
    .width = 8,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AB8CTiles,
};

const struct GlyphNew TextGlyphs_System_E5A29F = { /* 墟 */
    .next = &TextGlyphs_System_E5A881,
    .width = 9,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A29FTiles,
};

const struct GlyphNew TextGlyphs_System_E381B3 = { /* び */
    .next = &TextGlyphs_System_E381B2,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E381B3Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B8AF = { /* 帯 */
    .next = &TextGlyphs_System_E5A29F,
    .width = 8,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B8AFTiles,
};

const struct GlyphNew TextGlyphs_System_E69E97 = { /* 林 */
    .next = &TextGlyphs_System_E6B888,
    .width = 9,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69E97Tiles,
};

const struct GlyphNew TextGlyphs_System_E7B8BE = { /* 績 */
    .next = &TextGlyphs_System_E78987,
    .width = 8,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B8BETiles,
};

const struct GlyphNew TextGlyphs_System_E6AF9B = { /* 毛 */
    .next = &TextGlyphs_System_E69E97,
    .width = 8,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6AF9BTiles,
};

const struct GlyphNew TextGlyphs_System_E381B4 = { /* ぴ */
    .next = &TextGlyphs_System_E381B3,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E381B4Tiles,
};

const struct GlyphNew TextGlyphs_System_E88085 = { /* 者 */
    .next = &TextGlyphs_System_E8AB8C,
    .width = 8,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88085Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BE85 = { /* 待 */
    .next = &TextGlyphs_System_E5B8AF,
    .width = 8,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BE85Tiles,
};

const struct GlyphNew TextGlyphs_System_E78C9B = { /* 猛 */
    .next = &TextGlyphs_System_E7B8BE,
    .width = 9,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78C9BTiles,
};

const struct GlyphNew TextGlyphs_System_E98284 = { /* 還 */
    .next = &TextGlyphs_System_E9A098,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E98284Tiles,
};

const struct GlyphNew TextGlyphs_System_E7B7A8 = { /* 編 */
    .next = &TextGlyphs_System_E78C9B,
    .width = 8,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B7A8Tiles,
};

const struct GlyphNew TextGlyphs_System_E7A8BC = { /* 稼 */
    .next = &TextGlyphs_System_E7B7A8,
    .width = 9,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A8BCTiles,
};

const struct GlyphNew TextGlyphs_System_E381B5 = { /* ふ */
    .next = &TextGlyphs_System_E381B4,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E381B5Tiles,
};

const struct GlyphNew TextGlyphs_System_E8BEBA = { /* 辺 */
    .next = &TextGlyphs_System_E88085,
    .width = 8,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BEBATiles,
};

const struct GlyphNew TextGlyphs_System_E6848F = { /* 意 */
    .next = &TextGlyphs_System_E6AF9B,
    .width = 8,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6848FTiles,
};

const struct GlyphNew TextGlyphs_System_E8B2AC = { /* 責 */
    .next = &TextGlyphs_System_E8BEBA,
    .width = 8,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B2ACTiles,
};

const struct GlyphNew TextGlyphs_System_E7A095 = { /* 砕 */
    .next = &TextGlyphs_System_E7A8BC,
    .width = 8,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A095Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AC9D = { /* 謝 */
    .next = &TextGlyphs_System_E8B2AC,
    .width = 9,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AC9DTiles,
};

const struct GlyphNew TextGlyphs_System_E381B6 = { /* ぶ */
    .next = &TextGlyphs_System_E381B5,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E381B6Tiles,
};

const struct GlyphNew TextGlyphs_System_E7A0A6 = { /* 砦 */
    .next = &TextGlyphs_System_E7A095,
    .width = 8,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A0A6Tiles,
};

const struct GlyphNew TextGlyphs_System_E99693 = { /* 間 */
    .next = &TextGlyphs_System_E98284,
    .width = 8,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99693Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B5A4 = { /* 赤 */
    .next = &TextGlyphs_System_E8AC9D,
    .width = 8,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B5A4Tiles,
};

const struct GlyphNew TextGlyphs_System_E8BF94 = { /* 返 */
    .next = &TextGlyphs_System_E8B5A4,
    .width = 8,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BF94Tiles,
};

const struct GlyphNew TextGlyphs_System_E8BB8A = { /* 車 */
    .next = &TextGlyphs_System_E8BF94,
    .width = 8,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BB8ATiles,
};

const struct GlyphNew TextGlyphs_System_E6858B = { /* 態 */
    .next = &TextGlyphs_System_E6848F,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6858BTiles,
};

const struct GlyphNew TextGlyphs_System_E795AA = { /* 番 */
    .next = &TextGlyphs_System_E7A0A6,
    .width = 8,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E795AATiles,
};

const struct GlyphNew TextGlyphs_System_E88AB1 = { /* 花 */
    .next = &TextGlyphs_System_E8BB8A,
    .width = 8,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88AB1Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B1AF = { /* 屯 */
    .next = &TextGlyphs_System_E5BE85,
    .width = 8,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B1AFTiles,
};

const struct GlyphNew TextGlyphs_System_E381B7 = { /* ぷ */
    .next = &TextGlyphs_System_E381B6,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E381B7Tiles,
};

const struct GlyphNew TextGlyphs_System_E7A5AD = { /* 祭 */
    .next = &TextGlyphs_System_E795AA,
    .width = 8,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A5ADTiles,
};

const struct GlyphNew TextGlyphs_System_E69893 = { /* 易 */
    .next = &TextGlyphs_System_E6858B,
    .width = 8,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69893Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B7A1 = { /* 跡 */
    .next = &TextGlyphs_System_E88AB1,
    .width = 9,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B7A1Tiles,
};

const struct GlyphNew TextGlyphs_System_E887A8 = { /* 臨 */
    .next = &TextGlyphs_System_E8B7A1,
    .width = 9,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E887A8Tiles,
};

const struct GlyphNew TextGlyphs_System_E8998E = { /* 虎 */
    .next = &TextGlyphs_System_E887A8,
    .width = 9,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8998ETiles,
};

const struct GlyphNew TextGlyphs_System_E381B8 = { /* へ */
    .next = &TextGlyphs_System_E381B7,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E381B8Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AA87 = { /* 誇 */
    .next = &TextGlyphs_System_E8998E,
    .width = 9,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AA87Tiles,
};

const struct GlyphNew TextGlyphs_System_E996A2 = { /* 関 */
    .next = &TextGlyphs_System_E99693,
    .width = 8,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E996A2Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BEBF = { /* 便 */
    .next = &TextGlyphs_System_E4BD93,
    .width = 8,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BEBFTiles,
};

const struct GlyphNew TextGlyphs_System_E7A681 = { /* 禁 */
    .next = &TextGlyphs_System_E7A5AD,
    .width = 8,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A681Tiles,
};

const struct GlyphNew TextGlyphs_System_E8BCAA = { /* 輪 */
    .next = &TextGlyphs_System_E8AA87,
    .width = 10,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BCAATiles,
};

const struct GlyphNew TextGlyphs_System_E69BBF = { /* 替 */
    .next = &TextGlyphs_System_E69893,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69BBFTiles,
};

const struct GlyphNew TextGlyphs_System_E381B9 = { /* べ */
    .next = &TextGlyphs_System_E381B8,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E381B9Tiles,
};

const struct GlyphNew TextGlyphs_System_E99AA3 = { /* 隣 */
    .next = &TextGlyphs_System_E996A2,
    .width = 9,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99AA3Tiles,
};

const struct GlyphNew TextGlyphs_System_E982AA = { /* 邪 */
    .next = &TextGlyphs_System_E99AA3,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E982AATiles,
};

const struct GlyphNew TextGlyphs_System_E58B89 = { /* 勉 */
    .next = &TextGlyphs_System_E5B1AF,
    .width = 8,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58B89Tiles,
};

const struct GlyphNew TextGlyphs_System_E7B4B0 = { /* 細 */
    .next = &TextGlyphs_System_E7A681,
    .width = 9,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B4B0Tiles,
};

const struct GlyphNew TextGlyphs_System_E999A5 = { /* 陥 */
    .next = &TextGlyphs_System_E982AA,
    .width = 8,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E999A5Tiles,
};

const struct GlyphNew TextGlyphs_System_E782BA = { /* 為 */
    .next = &TextGlyphs_System_E7B4B0,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E782BATiles,
};

const struct GlyphNew TextGlyphs_System_E88DB7 = { /* 荷 */
    .next = &TextGlyphs_System_E8BCAA,
    .width = 8,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88DB7Tiles,
};

const struct GlyphNew TextGlyphs_System_E381BA = { /* ぺ */
    .next = &TextGlyphs_System_E381B9,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E381BATiles,
};

const struct GlyphNew TextGlyphs_System_E7AD8B = { /* 筋 */
    .next = &TextGlyphs_System_E782BA,
    .width = 8,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7AD8BTiles,
};

const struct GlyphNew TextGlyphs_System_E58887 = { /* 切 */
    .next = &TextGlyphs_System_E58B89,
    .width = 8,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58887Tiles,
};

const struct GlyphNew TextGlyphs_System_E89BAE = { /* 蛮 */
    .next = &TextGlyphs_System_E88DB7,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E89BAETiles,
};

const struct GlyphNew TextGlyphs_System_E5809F = { /* 借 */
    .next = &TextGlyphs_System_E58887,
    .width = 8,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5809FTiles,
};

const struct GlyphNew TextGlyphs_System_E8A8BC = { /* 証 */
    .next = &TextGlyphs_System_E89BAE,
    .width = 8,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A8BCTiles,
};

const struct GlyphNew TextGlyphs_System_E69CA8 = { /* 木 */
    .next = &TextGlyphs_System_E69BBF,
    .width = 8,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69CA8Tiles,
};

const struct GlyphNew TextGlyphs_System_E381BB = { /* ほ */
    .next = &TextGlyphs_System_E381BA,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E381BBTiles,
};

const struct GlyphNew TextGlyphs_System_E9BB99 = { /* 黙 */
    .next = &TextGlyphs_System_E999A5,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9BB99Tiles,
};

const struct GlyphNew TextGlyphs_System_E795B0 = { /* 異 */
    .next = &TextGlyphs_System_E7AD8B,
    .width = 8,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E795B0Tiles,
};

const struct GlyphNew TextGlyphs_System_E99B87 = { /* 雇 */
    .next = &TextGlyphs_System_E9BB99,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99B87Tiles,
};

const struct GlyphNew TextGlyphs_System_E8838E = { /* 胎 */
    .next = &TextGlyphs_System_E8A8BC,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8838ETiles,
};

const struct GlyphNew TextGlyphs_System_E5BC81 = { /* 弁 */
    .next = &TextGlyphs_System_E5809F,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BC81Tiles,
};

const struct GlyphNew TextGlyphs_System_E9A4A8 = { /* 館 */
    .next = &TextGlyphs_System_E99B87,
    .width = 9,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A4A8Tiles,
};

const struct GlyphNew TextGlyphs_System_E88F93 = { /* 菓 */
    .next = &TextGlyphs_System_E8838E,
    .width = 8,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88F93Tiles,
};

const struct GlyphNew TextGlyphs_System_E381BC = { /* ぼ */
    .next = &TextGlyphs_System_E381BB,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E381BCTiles,
};

const struct GlyphNew TextGlyphs_System_E79BAE = { /* 目 */
    .next = &TextGlyphs_System_E795B0,
    .width = 7,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79BAETiles,
};

const struct GlyphNew TextGlyphs_System_E7A7BB = { /* 移 */
    .next = &TextGlyphs_System_E79BAE,
    .width = 8,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A7BBTiles,
};

const struct GlyphNew TextGlyphs_System_E68EA5 = { /* 接 */
    .next = &TextGlyphs_System_E69CA8,
    .width = 8,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68EA5Tiles,
};

const struct GlyphNew TextGlyphs_System_E58D91 = { /* 卑 */
    .next = &TextGlyphs_System_E5BC81,
    .width = 8,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58D91Tiles,
};

const struct GlyphNew TextGlyphs_System_E9A1A7 = { /* 顧 */
    .next = &TextGlyphs_System_E9A4A8,
    .width = 9,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A1A7Tiles,
};

const struct GlyphNew TextGlyphs_System_E8A9B3 = { /* 詳 */
    .next = &TextGlyphs_System_E88F93,
    .width = 8,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A9B3Tiles,
};

const struct GlyphNew TextGlyphs_System_E381BD = { /* ぽ */
    .next = &TextGlyphs_System_E381BC,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E381BDTiles,
};

const struct GlyphNew TextGlyphs_System_E4BF9D = { /* 保 */
    .next = &TextGlyphs_System_E4BEBF,
    .width = 9,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BF9DTiles,
};

const struct GlyphNew TextGlyphs_System_E590A6 = { /* 否 */
    .next = &TextGlyphs_System_E58D91,
    .width = 8,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E590A6Tiles,
};

const struct GlyphNew TextGlyphs_System_E7B6AD = { /* 維 */
    .next = &TextGlyphs_System_E7A7BB,
    .width = 8,
    .utf_byte_2 = 0xb6,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B6ADTiles,
};

const struct GlyphNew TextGlyphs_System_E381BE = { /* ま */
    .next = &TextGlyphs_System_E381BD,
    .width = 7,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E381BETiles,
};

const struct GlyphNew TextGlyphs_System_E8B39E = { /* 賞 */
    .next = &TextGlyphs_System_E8A9B3,
    .width = 8,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B39ETiles,
};

const struct GlyphNew TextGlyphs_System_E781BC = { /* 灼 */
    .next = &TextGlyphs_System_E7B6AD,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E781BCTiles,
};

const struct GlyphNew TextGlyphs_System_E6B699 = { /* 涙 */
    .next = &TextGlyphs_System_E68EA5,
    .width = 8,
    .utf_byte_2 = 0xb6,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B699Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A683 = { /* 妃 */
    .next = &TextGlyphs_System_E590A6,
    .width = 8,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A683Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BA94 = { /* 五 */
    .next = &TextGlyphs_System_E4BF9D,
    .width = 8,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BA94Tiles,
};

const struct GlyphNew TextGlyphs_System_E381BF = { /* み */
    .next = &TextGlyphs_System_E381BE,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E381BFTiles,
};

const struct GlyphNew TextGlyphs_System_E5B2B8 = { /* 岸 */
    .next = &TextGlyphs_System_E5A683,
    .width = 8,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B2B8Tiles,
};

const struct GlyphNew TextGlyphs_System_E788B5 = { /* 爵 */
    .next = &TextGlyphs_System_E781BC,
    .width = 9,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E788B5Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B2A8 = { /* 貨 */
    .next = &TextGlyphs_System_E8B39E,
    .width = 8,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B2A8Tiles,
};

const struct GlyphNew TextGlyphs_System_E59CA8 = { /* 在 */
    .next = &TextGlyphs_System_E5B2B8,
    .width = 8,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59CA8Tiles,
};

const struct GlyphNew TextGlyphs_System_E8A8AD = { /* 設 */
    .next = &TextGlyphs_System_E8B2A8,
    .width = 9,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A8ADTiles,
};

const struct GlyphNew TextGlyphs_System_E9888D = { /* 鈍 */
    .next = &TextGlyphs_System_E9A1A7,
    .width = 8,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9888DTiles,
};

const struct GlyphNew TextGlyphs_System_E8B2B8 = { /* 貸 */
    .next = &TextGlyphs_System_E8A8AD,
    .width = 8,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B2B8Tiles,
};

const struct GlyphNew TextGlyphs_System_E38280 = { /* む */
    .next = &TextGlyphs_System_E381BF,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38280Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BDBC = { /* 彼 */
    .next = &TextGlyphs_System_E59CA8,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BDBCTiles,
};

const struct GlyphNew TextGlyphs_System_E98080 = { /* 退 */
    .next = &TextGlyphs_System_E9888D,
    .width = 8,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E98080Tiles,
};

const struct GlyphNew TextGlyphs_System_E9A19E = { /* 類 */
    .next = &TextGlyphs_System_E98080,
    .width = 9,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A19ETiles,
};

const struct GlyphNew TextGlyphs_System_E5B7AB = { /* 巫 */
    .next = &TextGlyphs_System_E5BDBC,
    .width = 8,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B7ABTiles,
};

const struct GlyphNew TextGlyphs_System_E38281 = { /* め */
    .next = &TextGlyphs_System_E38280,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38281Tiles,
};

const struct GlyphNew TextGlyphs_System_E8BF91 = { /* 近 */
    .next = &TextGlyphs_System_E8B2B8,
    .width = 8,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BF91Tiles,
};

const struct GlyphNew TextGlyphs_System_E68D95 = { /* 捕 */
    .next = &TextGlyphs_System_E6B699,
    .width = 9,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68D95Tiles,
};

const struct GlyphNew TextGlyphs_System_E682B2 = { /* 悲 */
    .next = &TextGlyphs_System_E68D95,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E682B2Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BDAA = { /* 罪 */
    .next = &TextGlyphs_System_E788B5,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BDAATiles,
};

const struct GlyphNew TextGlyphs_System_E4BBA4 = { /* 令 */
    .next = &TextGlyphs_System_E4BA94,
    .width = 8,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BBA4Tiles,
};

const struct GlyphNew TextGlyphs_System_E7AF80 = { /* 節 */
    .next = &TextGlyphs_System_E7BDAA,
    .width = 8,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7AF80Tiles,
};

const struct GlyphNew TextGlyphs_System_E688BB = { /* 戻 */
    .next = &TextGlyphs_System_E682B2,
    .width = 8,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E688BBTiles,
};

const struct GlyphNew TextGlyphs_System_E9818E = { /* 過 */
    .next = &TextGlyphs_System_E9A19E,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9818ETiles,
};

const struct GlyphNew TextGlyphs_System_E8A1A3 = { /* 衣 */
    .next = &TextGlyphs_System_E8BF91,
    .width = 8,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A1A3Tiles,
};

const struct GlyphNew TextGlyphs_System_E38282 = { /* も */
    .next = &TextGlyphs_System_E38281,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38282Tiles,
};

const struct GlyphNew TextGlyphs_System_E58685 = { /* 内 */
    .next = &TextGlyphs_System_E5B7AB,
    .width = 8,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58685Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B2A1 = { /* 財 */
    .next = &TextGlyphs_System_E8A1A3,
    .width = 8,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B2A1Tiles,
};

const struct GlyphNew TextGlyphs_System_E98791 = { /* 金 */
    .next = &TextGlyphs_System_E9818E,
    .width = 9,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E98791Tiles,
};

const struct GlyphNew TextGlyphs_System_E99A8A = { /* 隊 */
    .next = &TextGlyphs_System_E98791,
    .width = 9,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99A8ATiles,
};

const struct GlyphNew TextGlyphs_System_E6ADA9 = { /* 歩 */
    .next = &TextGlyphs_System_E688BB,
    .width = 8,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6ADA9Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AAAC = { /* 説 */
    .next = &TextGlyphs_System_E8B2A1,
    .width = 8,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AAACTiles,
};

const struct GlyphNew TextGlyphs_System_E68989 = { /* 扉 */
    .next = &TextGlyphs_System_E6ADA9,
    .width = 8,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68989Tiles,
};

const struct GlyphNew TextGlyphs_System_E38283 = { /* ゃ */
    .next = &TextGlyphs_System_E38282,
    .width = 7,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38283Tiles,
};

const struct GlyphNew TextGlyphs_System_E88BA5 = { /* 若 */
    .next = &TextGlyphs_System_E8AAAC,
    .width = 8,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88BA5Tiles,
};

const struct GlyphNew TextGlyphs_System_E79CBC = { /* 眼 */
    .next = &TextGlyphs_System_E7AF80,
    .width = 9,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79CBCTiles,
};

const struct GlyphNew TextGlyphs_System_E4BD8E = { /* 低 */
    .next = &TextGlyphs_System_E4BBA4,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BD8ETiles,
};

const struct GlyphNew TextGlyphs_System_E8A394 = { /* 裔 */
    .next = &TextGlyphs_System_E88BA5,
    .width = 8,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A394Tiles,
};

const struct GlyphNew TextGlyphs_System_E99A9C = { /* 障 */
    .next = &TextGlyphs_System_E99A8A,
    .width = 9,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99A9CTiles,
};

const struct GlyphNew TextGlyphs_System_E5909F = { /* 吟 */
    .next = &TextGlyphs_System_E58685,
    .width = 9,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5909FTiles,
};

const struct GlyphNew TextGlyphs_System_E99BAA = { /* 雪 */
    .next = &TextGlyphs_System_E99A9C,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99BAATiles,
};

const struct GlyphNew TextGlyphs_System_E4BE8B = { /* 例 */
    .next = &TextGlyphs_System_E4BD8E,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BE8BTiles,
};

const struct GlyphNew TextGlyphs_System_E38284 = { /* や */
    .next = &TextGlyphs_System_E38283,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38284Tiles,
};

const struct GlyphNew TextGlyphs_System_E7B5B6 = { /* 絶 */
    .next = &TextGlyphs_System_E79CBC,
    .width = 8,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B5B6Tiles,
};

const struct GlyphNew TextGlyphs_System_E98A80 = { /* 銀 */
    .next = &TextGlyphs_System_E99BAA,
    .width = 8,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E98A80Tiles,
};

const struct GlyphNew TextGlyphs_System_E586B7 = { /* 冷 */
    .next = &TextGlyphs_System_E5909F,
    .width = 9,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E586B7Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B2A9 = { /* 岩 */
    .next = &TextGlyphs_System_E586B7,
    .width = 8,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B2A9Tiles,
};

const struct GlyphNew TextGlyphs_System_E981BA = { /* 遺 */
    .next = &TextGlyphs_System_E98A80,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E981BATiles,
};

const struct GlyphNew TextGlyphs_System_E5958F = { /* 問 */
    .next = &TextGlyphs_System_E5B2A9,
    .width = 8,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5958FTiles,
};

const struct GlyphNew TextGlyphs_System_E5819C = { /* 停 */
    .next = &TextGlyphs_System_E5958F,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5819CTiles,
};

const struct GlyphNew TextGlyphs_System_E38285 = { /* ゅ */
    .next = &TextGlyphs_System_E38284,
    .width = 7,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38285Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BE8C = { /* 後 */
    .next = &TextGlyphs_System_E5819C,
    .width = 8,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BE8CTiles,
};

const struct GlyphNew TextGlyphs_System_E4B88A = { /* 上 */
    .next = &TextGlyphs_System_E4BE8B,
    .width = 8,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B88ATiles,
};

const struct GlyphNew TextGlyphs_System_E4BBA3 = { /* 代 */
    .next = &TextGlyphs_System_E4B88A,
    .width = 8,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BBA3Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BCB1 = { /* 弱 */
    .next = &TextGlyphs_System_E5BE8C,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BCB1Tiles,
};

const struct GlyphNew TextGlyphs_System_E8888C = { /* 舌 */
    .next = &TextGlyphs_System_E8A394,
    .width = 8,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8888CTiles,
};

const struct GlyphNew TextGlyphs_System_E4B99D = { /* 九 */
    .next = &TextGlyphs_System_E4BBA3,
    .width = 8,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B99DTiles,
};

const struct GlyphNew TextGlyphs_System_E38286 = { /* ゆ */
    .next = &TextGlyphs_System_E38285,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38286Tiles,
};

const struct GlyphNew TextGlyphs_System_E7B48B = { /* 紋 */
    .next = &TextGlyphs_System_E7B5B6,
    .width = 9,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B48BTiles,
};

const struct GlyphNew TextGlyphs_System_E8AC8E = { /* 謎 */
    .next = &TextGlyphs_System_E8888C,
    .width = 9,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AC8ETiles,
};

const struct GlyphNew TextGlyphs_System_E5BEA1 = { /* 御 */
    .next = &TextGlyphs_System_E5BCB1,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BEA1Tiles,
};

const struct GlyphNew TextGlyphs_System_E68891 = { /* 我 */
    .next = &TextGlyphs_System_E68989,
    .width = 8,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68891Tiles,
};

const struct GlyphNew TextGlyphs_System_E58FB0 = { /* 台 */
    .next = &TextGlyphs_System_E5BEA1,
    .width = 8,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58FB0Tiles,
};

const struct GlyphNew TextGlyphs_System_E4B888 = { /* 丈 */
    .next = &TextGlyphs_System_E4B99D,
    .width = 8,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B888Tiles,
};

const struct GlyphNew TextGlyphs_System_E38287 = { /* ょ */
    .next = &TextGlyphs_System_E38286,
    .width = 6,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38287Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A4A7 = { /* 大 */
    .next = &TextGlyphs_System_E58FB0,
    .width = 8,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A4A7Tiles,
};

const struct GlyphNew TextGlyphs_System_E4B8BB = { /* 主 */
    .next = &TextGlyphs_System_E4B888,
    .width = 8,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B8BBTiles,
};

const struct GlyphNew TextGlyphs_System_E99680 = { /* 門 */
    .next = &TextGlyphs_System_E981BA,
    .width = 8,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99680Tiles,
};

const struct GlyphNew TextGlyphs_System_E78999 = { /* 牙 */
    .next = &TextGlyphs_System_E7B48B,
    .width = 8,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78999Tiles,
};

const struct GlyphNew TextGlyphs_System_E58B9F = { /* 募 */
    .next = &TextGlyphs_System_E5A4A7,
    .width = 8,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58B9FTiles,
};

const struct GlyphNew TextGlyphs_System_E6829F = { /* 悟 */
    .next = &TextGlyphs_System_E68891,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6829FTiles,
};

const struct GlyphNew TextGlyphs_System_E38288 = { /* よ */
    .next = &TextGlyphs_System_E38287,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38288Tiles,
};

const struct GlyphNew TextGlyphs_System_E58F96 = { /* 取 */
    .next = &TextGlyphs_System_E58B9F,
    .width = 8,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58F96Tiles,
};

const struct GlyphNew TextGlyphs_System_E59F9F = { /* 域 */
    .next = &TextGlyphs_System_E58F96,
    .width = 9,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59F9FTiles,
};

const struct GlyphNew TextGlyphs_System_E58588 = { /* 先 */
    .next = &TextGlyphs_System_E59F9F,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58588Tiles,
};

const struct GlyphNew TextGlyphs_System_E7ACAC = { /* 第 */
    .next = &TextGlyphs_System_E78999,
    .width = 8,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7ACACTiles,
};

const struct GlyphNew TextGlyphs_System_E5A293 = { /* 墓 */
    .next = &TextGlyphs_System_E58588,
    .width = 8,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A293Tiles,
};

const struct GlyphNew TextGlyphs_System_E4B997 = { /* 乗 */
    .next = &TextGlyphs_System_E4B8BB,
    .width = 8,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B997Tiles,
};

const struct GlyphNew TextGlyphs_System_E794BB = { /* 画 */
    .next = &TextGlyphs_System_E7ACAC,
    .width = 8,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E794BBTiles,
};

const struct GlyphNew TextGlyphs_System_E38289 = { /* ら */
    .next = &TextGlyphs_System_E38288,
    .width = 7,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38289Tiles,
};

const struct GlyphNew TextGlyphs_System_E5AE88 = { /* 守 */
    .next = &TextGlyphs_System_E5A293,
    .width = 8,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AE88Tiles,
};

const struct GlyphNew TextGlyphs_System_E58D83 = { /* 千 */
    .next = &TextGlyphs_System_E5AE88,
    .width = 8,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58D83Tiles,
};

const struct GlyphNew TextGlyphs_System_E7A4BC = { /* 礼 */
    .next = &TextGlyphs_System_E794BB,
    .width = 8,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A4BCTiles,
};

const struct GlyphNew TextGlyphs_System_E9A194 = { /* 顔 */
    .next = &TextGlyphs_System_E99680,
    .width = 9,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A194Tiles,
};

const struct GlyphNew TextGlyphs_System_E882B2 = { /* 育 */
    .next = &TextGlyphs_System_E8AC8E,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E882B2Tiles,
};

const struct GlyphNew TextGlyphs_System_E58697 = { /* 冗 */
    .next = &TextGlyphs_System_E58D83,
    .width = 8,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58697Tiles,
};

const struct GlyphNew TextGlyphs_System_E592B2 = { /* 咲 */
    .next = &TextGlyphs_System_E58697,
    .width = 8,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E592B2Tiles,
};

const struct GlyphNew TextGlyphs_System_E3828A = { /* り */
    .next = &TextGlyphs_System_E38289,
    .width = 6,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E3828ATiles,
};

const struct GlyphNew TextGlyphs_System_E58DA0 = { /* 占 */
    .next = &TextGlyphs_System_E592B2,
    .width = 7,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58DA0Tiles,
};

const struct GlyphNew TextGlyphs_System_E9A198 = { /* 願 */
    .next = &TextGlyphs_System_E9A194,
    .width = 9,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A198Tiles,
};

const struct GlyphNew TextGlyphs_System_E6898B = { /* 手 */
    .next = &TextGlyphs_System_E6829F,
    .width = 8,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6898BTiles,
};

const struct GlyphNew TextGlyphs_System_E5AE9A = { /* 定 */
    .next = &TextGlyphs_System_E58DA0,
    .width = 8,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AE9ATiles,
};

const struct GlyphNew TextGlyphs_System_E9A18C = { /* 題 */
    .next = &TextGlyphs_System_E9A198,
    .width = 8,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A18CTiles,
};

const struct GlyphNew TextGlyphs_System_E3828B = { /* る */
    .next = &TextGlyphs_System_E3828A,
    .width = 7,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E3828BTiles,
};

const struct GlyphNew TextGlyphs_System_E5B89D = { /* 帝 */
    .next = &TextGlyphs_System_E5AE9A,
    .width = 8,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B89DTiles,
};

const struct GlyphNew TextGlyphs_System_E59F8E = { /* 城 */
    .next = &TextGlyphs_System_E5B89D,
    .width = 9,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59F8ETiles,
};

const struct GlyphNew TextGlyphs_System_E7A798 = { /* 秘 */
    .next = &TextGlyphs_System_E7A4BC,
    .width = 9,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A798Tiles,
};

const struct GlyphNew TextGlyphs_System_E69AAE = { /* 暮 */
    .next = &TextGlyphs_System_E6898B,
    .width = 8,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69AAETiles,
};

const struct GlyphNew TextGlyphs_System_E5AEA3 = { /* 宣 */
    .next = &TextGlyphs_System_E59F8E,
    .width = 8,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AEA3Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A49C = { /* 夜 */
    .next = &TextGlyphs_System_E5AEA3,
    .width = 8,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A49CTiles,
};

const struct GlyphNew TextGlyphs_System_E3828C = { /* れ */
    .next = &TextGlyphs_System_E3828B,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E3828CTiles,
};

const struct GlyphNew TextGlyphs_System_E88BA6 = { /* 苦 */
    .next = &TextGlyphs_System_E882B2,
    .width = 8,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88BA6Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A0B4 = { /* 場 */
    .next = &TextGlyphs_System_E5A49C,
    .width = 9,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A0B4Tiles,
};

const struct GlyphNew TextGlyphs_System_E6AF8D = { /* 母 */
    .next = &TextGlyphs_System_E69AAE,
    .width = 9,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6AF8DTiles,
};

const struct GlyphNew TextGlyphs_System_E99AB7 = { /* 隷 */
    .next = &TextGlyphs_System_E9A18C,
    .width = 8,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99AB7Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AA9E = { /* 語 */
    .next = &TextGlyphs_System_E88BA6,
    .width = 8,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AA9ETiles,
};

const struct GlyphNew TextGlyphs_System_E6AE8A = { /* 殊 */
    .next = &TextGlyphs_System_E6AF8D,
    .width = 9,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6AE8ATiles,
};

const struct GlyphNew TextGlyphs_System_E4B880 = { /* 一 */
    .next = &TextGlyphs_System_E4B997,
    .width = 7,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B880Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BA95 = { /* 底 */
    .next = &TextGlyphs_System_E5A0B4,
    .width = 8,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BA95Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B082 = { /* 専 */
    .next = &TextGlyphs_System_E5BA95,
    .width = 8,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B082Tiles,
};

const struct GlyphNew TextGlyphs_System_E3828D = { /* ろ */
    .next = &TextGlyphs_System_E3828C,
    .width = 7,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E3828DTiles,
};

const struct GlyphNew TextGlyphs_System_E58DB1 = { /* 危 */
    .next = &TextGlyphs_System_E5B082,
    .width = 8,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58DB1Tiles,
};

const struct GlyphNew TextGlyphs_System_E99B85 = { /* 雅 */
    .next = &TextGlyphs_System_E99AB7,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99B85Tiles,
};

const struct GlyphNew TextGlyphs_System_E78BA9 = { /* 狩 */
    .next = &TextGlyphs_System_E7A798,
    .width = 8,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78BA9Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AAA4 = { /* 誤 */
    .next = &TextGlyphs_System_E8AA9E,
    .width = 9,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AAA4Tiles,
};

const struct GlyphNew TextGlyphs_System_E58D97 = { /* 南 */
    .next = &TextGlyphs_System_E58DB1,
    .width = 8,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58D97Tiles,
};

const struct GlyphNew TextGlyphs_System_E5969C = { /* 喜 */
    .next = &TextGlyphs_System_E58D97,
    .width = 8,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5969CTiles,
};

const struct GlyphNew TextGlyphs_System_E9878E = { /* 野 */
    .next = &TextGlyphs_System_E99B85,
    .width = 8,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9878ETiles,
};

const struct GlyphNew TextGlyphs_System_E5BBB7 = { /* 廷 */
    .next = &TextGlyphs_System_E5969C,
    .width = 8,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BBB7Tiles,
};

const struct GlyphNew TextGlyphs_System_E9A786 = { /* 駆 */
    .next = &TextGlyphs_System_E9878E,
    .width = 9,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A786Tiles,
};

const struct GlyphNew TextGlyphs_System_E8ADB7 = { /* 護 */
    .next = &TextGlyphs_System_E8AAA4,
    .width = 9,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8ADB7Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BD9C = { /* 作 */
    .next = &TextGlyphs_System_E4B880,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BD9CTiles,
};

const struct GlyphNew TextGlyphs_System_E5B79D = { /* 川 */
    .next = &TextGlyphs_System_E5BBB7,
    .width = 7,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B79DTiles,
};

const struct GlyphNew TextGlyphs_System_E99C8A = { /* 霊 */
    .next = &TextGlyphs_System_E9A786,
    .width = 8,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99C8ATiles,
};

const struct GlyphNew TextGlyphs_System_E3828F = { /* わ */
    .next = &TextGlyphs_System_E3828D,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E3828FTiles,
};

const struct GlyphNew TextGlyphs_System_E688A6 = { /* 戦 */
    .next = &TextGlyphs_System_E6AE8A,
    .width = 8,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E688A6Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BC9F = { /* 弟 */
    .next = &TextGlyphs_System_E5B79D,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BC9FTiles,
};

const struct GlyphNew TextGlyphs_System_E7A8AE = { /* 種 */
    .next = &TextGlyphs_System_E78BA9,
    .width = 9,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A8AETiles,
};

const struct GlyphNew TextGlyphs_System_E599A8 = { /* 器 */
    .next = &TextGlyphs_System_E5BC9F,
    .width = 8,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E599A8Tiles,
};

const struct GlyphNew TextGlyphs_System_E8A2AB = { /* 被 */
    .next = &TextGlyphs_System_E8ADB7,
    .width = 9,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A2ABTiles,
};

const struct GlyphNew TextGlyphs_System_E580A3 = { /* 倣 */
    .next = &TextGlyphs_System_E599A8,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E580A3Tiles,
};

const struct GlyphNew TextGlyphs_System_E5898A = { /* 削 */
    .next = &TextGlyphs_System_E580A3,
    .width = 8,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5898ATiles,
};

const struct GlyphNew TextGlyphs_System_E5B8B8 = { /* 常 */
    .next = &TextGlyphs_System_E5898A,
    .width = 8,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B8B8Tiles,
};

const struct GlyphNew TextGlyphs_System_E68385 = { /* 情 */
    .next = &TextGlyphs_System_E688A6,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68385Tiles,
};

const struct GlyphNew TextGlyphs_System_E79FA2 = { /* 矢 */
    .next = &TextGlyphs_System_E7A8AE,
    .width = 8,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79FA2Tiles,
};

const struct GlyphNew TextGlyphs_System_E59FBA = { /* 基 */
    .next = &TextGlyphs_System_E5B8B8,
    .width = 9,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59FBATiles,
};

const struct GlyphNew TextGlyphs_System_E7A8B2 = { /* 稲 */
    .next = &TextGlyphs_System_E79FA2,
    .width = 9,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A8B2Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BC9A = { /* 会 */
    .next = &TextGlyphs_System_E4BD9C,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BC9ATiles,
};

const struct GlyphNew TextGlyphs_System_E58C85 = { /* 包 */
    .next = &TextGlyphs_System_E59FBA,
    .width = 8,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58C85Tiles,
};

const struct GlyphNew TextGlyphs_System_E99BA3 = { /* 難 */
    .next = &TextGlyphs_System_E99C8A,
    .width = 9,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99BA3Tiles,
};

const struct GlyphNew TextGlyphs_System_E585B7 = { /* 具 */
    .next = &TextGlyphs_System_E58C85,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E585B7Tiles,
};

const struct GlyphNew TextGlyphs_System_E68AB5 = { /* 抵 */
    .next = &TextGlyphs_System_E68385,
    .width = 8,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68AB5Tiles,
};

const struct GlyphNew TextGlyphs_System_E69AA6 = { /* 暦 */
    .next = &TextGlyphs_System_E68AB5,
    .width = 8,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69AA6Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A587 = { /* 奇 */
    .next = &TextGlyphs_System_E585B7,
    .width = 8,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A587Tiles,
};

const struct GlyphNew TextGlyphs_System_E38292 = { /* を */
    .next = &TextGlyphs_System_E3828F,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38292Tiles,
};

const struct GlyphNew TextGlyphs_System_E8A7A3 = { /* 解 */
    .next = &TextGlyphs_System_E8A2AB,
    .width = 8,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A7A3Tiles,
};

const struct GlyphNew TextGlyphs_System_E6ADB4 = { /* 歴 */
    .next = &TextGlyphs_System_E69AA6,
    .width = 8,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6ADB4Tiles,
};

const struct GlyphNew TextGlyphs_System_E68A9E = { /* 択 */
    .next = &TextGlyphs_System_E6ADB4,
    .width = 8,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68A9ETiles,
};

const struct GlyphNew TextGlyphs_System_E5BDB9 = { /* 役 */
    .next = &TextGlyphs_System_E5A587,
    .width = 9,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BDB9Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BAA4 = { /* 交 */
    .next = &TextGlyphs_System_E4BC9A,
    .width = 8,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BAA4Tiles,
};

const struct GlyphNew TextGlyphs_System_E69DA1 = { /* 条 */
    .next = &TextGlyphs_System_E68A9E,
    .width = 8,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69DA1Tiles,
};

const struct GlyphNew TextGlyphs_System_E981BF = { /* 避 */
    .next = &TextGlyphs_System_E99BA3,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E981BFTiles,
};

const struct GlyphNew TextGlyphs_System_E6B19D = { /* 汝 */
    .next = &TextGlyphs_System_E69DA1,
    .width = 9,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B19DTiles,
};

const struct GlyphNew TextGlyphs_System_E98592 = { /* 酒 */
    .next = &TextGlyphs_System_E981BF,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E98592Tiles,
};

const struct GlyphNew TextGlyphs_System_E38293 = { /* ん */
    .next = &TextGlyphs_System_E38292,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38293Tiles,
};

const struct GlyphNew TextGlyphs_System_E69D96 = { /* 杖 */
    .next = &TextGlyphs_System_E6B19D,
    .width = 8,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69D96Tiles,
};

const struct GlyphNew TextGlyphs_System_E59B9E = { /* 回 */
    .next = &TextGlyphs_System_E5BDB9,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59B9ETiles,
};

const struct GlyphNew TextGlyphs_System_E99D9E = { /* 非 */
    .next = &TextGlyphs_System_E98592,
    .width = 8,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99D9ETiles,
};

const struct GlyphNew TextGlyphs_System_E5A0B1 = { /* 報 */
    .next = &TextGlyphs_System_E59B9E,
    .width = 8,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A0B1Tiles,
};

const struct GlyphNew TextGlyphs_System_E7B484 = { /* 約 */
    .next = &TextGlyphs_System_E7A8B2,
    .width = 8,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B484Tiles,
};

const struct GlyphNew TextGlyphs_System_E68B93 = { /* 拓 */
    .next = &TextGlyphs_System_E69D96,
    .width = 8,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68B93Tiles,
};

const struct GlyphNew TextGlyphs_System_E5AF84 = { /* 寄 */
    .next = &TextGlyphs_System_E5A0B1,
    .width = 8,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AF84Tiles,
};

const struct GlyphNew TextGlyphs_System_E9A696 = { /* 首 */
    .next = &TextGlyphs_System_E99D9E,
    .width = 8,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A696Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BA8C = { /* 二 */
    .next = &TextGlyphs_System_E4BAA4,
    .width = 7,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BA8CTiles,
};

const struct GlyphNew TextGlyphs_System_E9A39B = { /* 飛 */
    .next = &TextGlyphs_System_E9A696,
    .width = 8,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A39BTiles,
};

const struct GlyphNew TextGlyphs_System_E4BEAF = { /* 侯 */
    .next = &TextGlyphs_System_E4BA8C,
    .width = 8,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BEAFTiles,
};

const struct GlyphNew TextGlyphs_System_E58AA3 = { /* 劣 */
    .next = &TextGlyphs_System_E5AF84,
    .width = 8,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58AA3Tiles,
};

const struct GlyphNew TextGlyphs_System_E78AB6 = { /* 状 */
    .next = &TextGlyphs_System_E7B484,
    .width = 8,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78AB6Tiles,
};

const struct GlyphNew TextGlyphs_System_E5AE9D = { /* 宝 */
    .next = &TextGlyphs_System_E58AA3,
    .width = 8,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AE9DTiles,
};

const struct GlyphNew TextGlyphs_System_E58F97 = { /* 受 */
    .next = &TextGlyphs_System_E5AE9D,
    .width = 8,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58F97Tiles,
};

const struct GlyphNew TextGlyphs_System_E7A9BA = { /* 空 */
    .next = &TextGlyphs_System_E78AB6,
    .width = 8,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A9BATiles,
};

const struct GlyphNew TextGlyphs_System_E5A38A = { /* 壊 */
    .next = &TextGlyphs_System_E58F97,
    .width = 9,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A38ATiles,
};

const struct GlyphNew TextGlyphs_System_E58DB0 = { /* 印 */
    .next = &TextGlyphs_System_E5A38A,
    .width = 8,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58DB0Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B88C = { /* 希 */
    .next = &TextGlyphs_System_E58DB0,
    .width = 8,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B88CTiles,
};

const struct GlyphNew TextGlyphs_System_E8A8B3 = { /* 訳 */
    .next = &TextGlyphs_System_E8A7A3,
    .width = 8,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A8B3Tiles,
};

const struct GlyphNew TextGlyphs_System_E78388 = { /* 烈 */
    .next = &TextGlyphs_System_E7A9BA,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78388Tiles,
};

const struct GlyphNew TextGlyphs_System_E591AA = { /* 呪 */
    .next = &TextGlyphs_System_E5B88C,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E591AATiles,
};

const struct GlyphNew TextGlyphs_System_E8A382 = { /* 裂 */
    .next = &TextGlyphs_System_E8A8B3,
    .width = 8,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A382Tiles,
};

const struct GlyphNew TextGlyphs_System_E8BA8D = { /* 躍 */
    .next = &TextGlyphs_System_E8A382,
    .width = 9,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BA8DTiles,
};

const struct GlyphNew TextGlyphs_System_E58299 = { /* 備 */
    .next = &TextGlyphs_System_E591AA,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58299Tiles,
};

const struct GlyphNew TextGlyphs_System_E58589 = { /* 光 */
    .next = &TextGlyphs_System_E58299,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58589Tiles,
};

const struct GlyphNew TextGlyphs_System_E593A1 = { /* 員 */
    .next = &TextGlyphs_System_E58589,
    .width = 8,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E593A1Tiles,
};

const struct GlyphNew TextGlyphs_System_E8A897 = { /* 託 */
    .next = &TextGlyphs_System_E8BA8D,
    .width = 8,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A897Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BFAB = { /* 快 */
    .next = &TextGlyphs_System_E593A1,
    .width = 9,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BFABTiles,
};

const struct GlyphNew TextGlyphs_System_E58C82 = { /* 匂 */
    .next = &TextGlyphs_System_E5BFAB,
    .width = 8,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58C82Tiles,
};

const struct GlyphNew TextGlyphs_System_E585AC = { /* 公 */
    .next = &TextGlyphs_System_E58C82,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E585ACTiles,
};

const struct GlyphNew TextGlyphs_System_E68FAE = { /* 揮 */
    .next = &TextGlyphs_System_E68B93,
    .width = 9,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68FAETiles,
};

const struct GlyphNew TextGlyphs_System_E6818B = { /* 恋 */
    .next = &TextGlyphs_System_E68FAE,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6818BTiles,
};

const struct GlyphNew TextGlyphs_System_E5B4A9 = { /* 崩 */
    .next = &TextGlyphs_System_E585AC,
    .width = 8,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B4A9Tiles,
};

const struct GlyphNew TextGlyphs_System_E68E88 = { /* 授 */
    .next = &TextGlyphs_System_E6818B,
    .width = 9,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68E88Tiles,
};

const struct GlyphNew TextGlyphs_System_E680AA = { /* 怪 */
    .next = &TextGlyphs_System_E68E88,
    .width = 8,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E680AATiles,
};

const struct GlyphNew TextGlyphs_System_E59BA0 = { /* 因 */
    .next = &TextGlyphs_System_E5B4A9,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59BA0Tiles,
};

const struct GlyphNew TextGlyphs_System_E7A88B = { /* 程 */
    .next = &TextGlyphs_System_E78388,
    .width = 8,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A88BTiles,
};

const struct GlyphNew TextGlyphs_System_E68294 = { /* 悔 */
    .next = &TextGlyphs_System_E680AA,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68294Tiles,
};

const struct GlyphNew TextGlyphs_System_E88289 = { /* 肉 */
    .next = &TextGlyphs_System_E8A897,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88289Tiles,
};

const struct GlyphNew TextGlyphs_System_E58A9F = { /* 功 */
    .next = &TextGlyphs_System_E59BA0,
    .width = 8,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58A9FTiles,
};

const struct GlyphNew TextGlyphs_System_E5BEAE = { /* 微 */
    .next = &TextGlyphs_System_E58A9F,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BEAETiles,
};

const struct GlyphNew TextGlyphs_System_E68690 = { /* 憐 */
    .next = &TextGlyphs_System_E68294,
    .width = 9,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68690Tiles,
};

const struct GlyphNew TextGlyphs_System_E58AB9 = { /* 効 */
    .next = &TextGlyphs_System_E5BEAE,
    .width = 9,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58AB9Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BC95 = { /* 引 */
    .next = &TextGlyphs_System_E58AB9,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BC95Tiles,
};

const struct GlyphNew TextGlyphs_System_E69797 = { /* 旗 */
    .next = &TextGlyphs_System_E68690,
    .width = 9,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69797Tiles,
};

const struct GlyphNew TextGlyphs_System_E68AB1 = { /* 抱 */
    .next = &TextGlyphs_System_E69797,
    .width = 8,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68AB1Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A5A2 = { /* 奢 */
    .next = &TextGlyphs_System_E5BC95,
    .width = 8,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A5A2Tiles,
};

const struct GlyphNew TextGlyphs_System_E6978B = { /* 旋 */
    .next = &TextGlyphs_System_E68AB1,
    .width = 9,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6978BTiles,
};

const struct GlyphNew TextGlyphs_System_E9A3B2 = { /* 飲 */
    .next = &TextGlyphs_System_E9A39B,
    .width = 9,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A3B2Tiles,
};

const struct GlyphNew TextGlyphs_System_E697A5 = { /* 日 */
    .next = &TextGlyphs_System_E6978B,
    .width = 7,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E697A5Tiles,
};

const struct GlyphNew TextGlyphs_System_E694BE = { /* 放 */
    .next = &TextGlyphs_System_E697A5,
    .width = 9,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E694BETiles,
};

const struct GlyphNew TextGlyphs_System_E69C9F = { /* 期 */
    .next = &TextGlyphs_System_E694BE,
    .width = 9,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69C9FTiles,
};

const struct GlyphNew TextGlyphs_System_E6AA84 = { /* 檄 */
    .next = &TextGlyphs_System_E69C9F,
    .width = 10,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6AA84Tiles,
};

const struct GlyphNew TextGlyphs_System_E59B9A = { /* 囚 */
    .next = &TextGlyphs_System_E5A5A2,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59B9ATiles,
};

const struct GlyphNew TextGlyphs_System_E58E9A = { /* 厚 */
    .next = &TextGlyphs_System_E59B9A,
    .width = 8,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58E9ATiles,
};

const struct GlyphNew TextGlyphs_System_E696B9 = { /* 方 */
    .next = &TextGlyphs_System_E6AA84,
    .width = 8,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E696B9Tiles,
};

const struct GlyphNew TextGlyphs_System_E68B90 = { /* 拐 */
    .next = &TextGlyphs_System_E696B9,
    .width = 8,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68B90Tiles,
};

const struct GlyphNew TextGlyphs_System_E58FA3 = { /* 口 */
    .next = &TextGlyphs_System_E58E9A,
    .width = 7,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58FA3Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B2B9 = { /* 油 */
    .next = &TextGlyphs_System_E68B90,
    .width = 8,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B2B9Tiles,
};

const struct GlyphNew TextGlyphs_System_E7B7B4 = { /* 練 */
    .next = &TextGlyphs_System_E7A88B,
    .width = 8,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B7B4Tiles,
};

const struct GlyphNew TextGlyphs_System_E585A5 = { /* 入 */
    .next = &TextGlyphs_System_E58FA3,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E585A5Tiles,
};

const struct GlyphNew TextGlyphs_System_E59091 = { /* 向 */
    .next = &TextGlyphs_System_E585A5,
    .width = 8,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59091Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BE8E = { /* 美 */
    .next = &TextGlyphs_System_E7B7B4,
    .width = 8,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BE8ETiles,
};

const struct GlyphNew TextGlyphs_System_E5B188 = { /* 屈 */
    .next = &TextGlyphs_System_E59091,
    .width = 8,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B188Tiles,
};

const struct GlyphNew TextGlyphs_System_E694B9 = { /* 改 */
    .next = &TextGlyphs_System_E6B2B9,
    .width = 8,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E694B9Tiles,
};

const struct GlyphNew TextGlyphs_System_E7B79A = { /* 線 */
    .next = &TextGlyphs_System_E7BE8E,
    .width = 8,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B79ATiles,
};

const struct GlyphNew TextGlyphs_System_E591A8 = { /* 周 */
    .next = &TextGlyphs_System_E5B188,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E591A8Tiles,
};

const struct GlyphNew TextGlyphs_System_20 = { /*   */
    .next = NULL,
    .width = 3,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_20Tiles,
};

const struct GlyphNew TextGlyphs_System_21 = { /* ! */
    .next = NULL,
    .width = 4,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_21Tiles,
};

const struct GlyphNew TextGlyphs_System_22 = { /* " */
    .next = NULL,
    .width = 4,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_22Tiles,
};

const struct GlyphNew TextGlyphs_System_23 = { /* # */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_23Tiles,
};

const struct GlyphNew TextGlyphs_System_24 = { /* $ */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_24Tiles,
};

const struct GlyphNew TextGlyphs_System_25 = { /* % */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_25Tiles,
};

const struct GlyphNew TextGlyphs_System_26 = { /* & */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_26Tiles,
};

const struct GlyphNew TextGlyphs_System_27 = { /* ' */
    .next = NULL,
    .width = 2,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_27Tiles,
};

const struct GlyphNew TextGlyphs_System_28 = { /* ( */
    .next = NULL,
    .width = 4,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_28Tiles,
};

const struct GlyphNew TextGlyphs_System_29 = { /* ) */
    .next = NULL,
    .width = 4,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_29Tiles,
};

const struct GlyphNew TextGlyphs_System_2A = { /* * */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_2ATiles,
};

const struct GlyphNew TextGlyphs_System_2B = { /* + */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_2BTiles,
};

const struct GlyphNew TextGlyphs_System_2C = { /* , */
    .next = NULL,
    .width = 2,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_2CTiles,
};

const struct GlyphNew TextGlyphs_System_2D = { /* - */
    .next = NULL,
    .width = 4,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_2DTiles,
};

const struct GlyphNew TextGlyphs_System_2E = { /* . */
    .next = NULL,
    .width = 2,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_2ETiles,
};

const struct GlyphNew TextGlyphs_System_2F = { /* / */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_2FTiles,
};

const struct GlyphNew TextGlyphs_System_30 = { /* 0 */
    .next = NULL,
    .width = 7,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_30Tiles,
};

const struct GlyphNew TextGlyphs_System_31 = { /* 1 */
    .next = NULL,
    .width = 7,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_31Tiles,
};

const struct GlyphNew TextGlyphs_System_32 = { /* 2 */
    .next = NULL,
    .width = 7,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_32Tiles,
};

const struct GlyphNew TextGlyphs_System_33 = { /* 3 */
    .next = NULL,
    .width = 7,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_33Tiles,
};

const struct GlyphNew TextGlyphs_System_34 = { /* 4 */
    .next = NULL,
    .width = 7,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_34Tiles,
};

const struct GlyphNew TextGlyphs_System_35 = { /* 5 */
    .next = NULL,
    .width = 7,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_35Tiles,
};

const struct GlyphNew TextGlyphs_System_36 = { /* 6 */
    .next = NULL,
    .width = 7,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_36Tiles,
};

const struct GlyphNew TextGlyphs_System_37 = { /* 7 */
    .next = NULL,
    .width = 7,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_37Tiles,
};

const struct GlyphNew TextGlyphs_System_38 = { /* 8 */
    .next = NULL,
    .width = 7,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_38Tiles,
};

const struct GlyphNew TextGlyphs_System_39 = { /* 9 */
    .next = NULL,
    .width = 7,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_39Tiles,
};

const struct GlyphNew TextGlyphs_System_3A = { /* : */
    .next = NULL,
    .width = 2,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_3ATiles,
};

const struct GlyphNew TextGlyphs_System_3B = { /* ; */
    .next = NULL,
    .width = 2,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_3BTiles,
};

const struct GlyphNew TextGlyphs_System_3C = { /* < */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_3CTiles,
};

const struct GlyphNew TextGlyphs_System_3D = { /* = */
    .next = NULL,
    .width = 4,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_3DTiles,
};

const struct GlyphNew TextGlyphs_System_3E = { /* > */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_3ETiles,
};

const struct GlyphNew TextGlyphs_System_3F = { /* ? */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_3FTiles,
};

const struct GlyphNew TextGlyphs_System_40 = { /* @ */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_40Tiles,
};

const struct GlyphNew TextGlyphs_System_41 = { /* A */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_41Tiles,
};

const struct GlyphNew TextGlyphs_System_42 = { /* B */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_42Tiles,
};

const struct GlyphNew TextGlyphs_System_43 = { /* C */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_43Tiles,
};

const struct GlyphNew TextGlyphs_System_44 = { /* D */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_44Tiles,
};

const struct GlyphNew TextGlyphs_System_45 = { /* E */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_45Tiles,
};

const struct GlyphNew TextGlyphs_System_46 = { /* F */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_46Tiles,
};

const struct GlyphNew TextGlyphs_System_47 = { /* G */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_47Tiles,
};

const struct GlyphNew TextGlyphs_System_48 = { /* H */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_48Tiles,
};

const struct GlyphNew TextGlyphs_System_49 = { /* I */
    .next = NULL,
    .width = 2,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_49Tiles,
};

const struct GlyphNew TextGlyphs_System_4A = { /* J */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_4ATiles,
};

const struct GlyphNew TextGlyphs_System_4B = { /* K */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_4BTiles,
};

const struct GlyphNew TextGlyphs_System_4C = { /* L */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_4CTiles,
};

const struct GlyphNew TextGlyphs_System_4D = { /* M */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_4DTiles,
};

const struct GlyphNew TextGlyphs_System_4E = { /* N */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_4ETiles,
};

const struct GlyphNew TextGlyphs_System_4F = { /* O */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_4FTiles,
};

const struct GlyphNew TextGlyphs_System_50 = { /* P */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_50Tiles,
};

const struct GlyphNew TextGlyphs_System_51 = { /* Q */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_51Tiles,
};

const struct GlyphNew TextGlyphs_System_52 = { /* R */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_52Tiles,
};

const struct GlyphNew TextGlyphs_System_53 = { /* S */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_53Tiles,
};

const struct GlyphNew TextGlyphs_System_54 = { /* T */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_54Tiles,
};

const struct GlyphNew TextGlyphs_System_55 = { /* U */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_55Tiles,
};

const struct GlyphNew TextGlyphs_System_56 = { /* V */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_56Tiles,
};

const struct GlyphNew TextGlyphs_System_57 = { /* W */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_57Tiles,
};

const struct GlyphNew TextGlyphs_System_58 = { /* X */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_58Tiles,
};

const struct GlyphNew TextGlyphs_System_59 = { /* Y */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_59Tiles,
};

const struct GlyphNew TextGlyphs_System_5A = { /* Z */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_5ATiles,
};

const struct GlyphNew TextGlyphs_System_5B = { /* [ */
    .next = NULL,
    .width = 3,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_5BTiles,
};

const struct GlyphNew TextGlyphs_System_5C = { /* \ */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_5CTiles,
};

const struct GlyphNew TextGlyphs_System_5D = { /* ] */
    .next = NULL,
    .width = 3,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_5DTiles,
};

const struct GlyphNew TextGlyphs_System_5E = { /* ^ */
    .next = NULL,
    .width = 4,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_5ETiles,
};

const struct GlyphNew TextGlyphs_System_5F = { /* _ */
    .next = NULL,
    .width = 4,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_5FTiles,
};

const struct GlyphNew TextGlyphs_System_60 = { /* ` */
    .next = NULL,
    .width = 2,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_60Tiles,
};

const struct GlyphNew TextGlyphs_System_61 = { /* a */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_61Tiles,
};

const struct GlyphNew TextGlyphs_System_62 = { /* b */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_62Tiles,
};

const struct GlyphNew TextGlyphs_System_63 = { /* c */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_63Tiles,
};

const struct GlyphNew TextGlyphs_System_64 = { /* d */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_64Tiles,
};

const struct GlyphNew TextGlyphs_System_65 = { /* e */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_65Tiles,
};

const struct GlyphNew TextGlyphs_System_66 = { /* f */
    .next = NULL,
    .width = 4,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_66Tiles,
};

const struct GlyphNew TextGlyphs_System_67 = { /* g */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_67Tiles,
};

const struct GlyphNew TextGlyphs_System_68 = { /* h */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_68Tiles,
};

const struct GlyphNew TextGlyphs_System_69 = { /* i */
    .next = NULL,
    .width = 2,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_69Tiles,
};

const struct GlyphNew TextGlyphs_System_6A = { /* j */
    .next = NULL,
    .width = 4,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_6ATiles,
};

const struct GlyphNew TextGlyphs_System_6B = { /* k */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_6BTiles,
};

const struct GlyphNew TextGlyphs_System_6C = { /* l */
    .next = NULL,
    .width = 2,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_6CTiles,
};

const struct GlyphNew TextGlyphs_System_6D = { /* m */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_6DTiles,
};

const struct GlyphNew TextGlyphs_System_6E = { /* n */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_6ETiles,
};

const struct GlyphNew TextGlyphs_System_6F = { /* o */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_6FTiles,
};

const struct GlyphNew TextGlyphs_System_70 = { /* p */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_70Tiles,
};

const struct GlyphNew TextGlyphs_System_71 = { /* q */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_71Tiles,
};

const struct GlyphNew TextGlyphs_System_72 = { /* r */
    .next = NULL,
    .width = 4,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_72Tiles,
};

const struct GlyphNew TextGlyphs_System_73 = { /* s */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_73Tiles,
};

const struct GlyphNew TextGlyphs_System_74 = { /* t */
    .next = NULL,
    .width = 4,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_74Tiles,
};

const struct GlyphNew TextGlyphs_System_75 = { /* u */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_75Tiles,
};

const struct GlyphNew TextGlyphs_System_76 = { /* v */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_76Tiles,
};

const struct GlyphNew TextGlyphs_System_77 = { /* w */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_77Tiles,
};

const struct GlyphNew TextGlyphs_System_78 = { /* x */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_78Tiles,
};

const struct GlyphNew TextGlyphs_System_79 = { /* y */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_79Tiles,
};

const struct GlyphNew TextGlyphs_System_7A = { /* z */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_7ATiles,
};

const struct GlyphNew TextGlyphs_System_7B = { /* { */
    .next = NULL,
    .width = 4,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_7BTiles,
};

const struct GlyphNew TextGlyphs_System_7C = { /* | */
    .next = NULL,
    .width = 2,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_7CTiles,
};

const struct GlyphNew TextGlyphs_System_7D = { /* } */
    .next = NULL,
    .width = 4,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_7DTiles,
};

const struct GlyphNew TextGlyphs_System_7E = { /* ~ */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_7ETiles,
};

const struct GlyphNew TextGlyphs_System_7F = { /*  */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_7FTiles,
};

const struct GlyphNew TextGlyphs_System_C28C = { /*  */
    .next = NULL,
    .width = 7,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C28CTiles,
};

const struct GlyphNew TextGlyphs_System_C291 = { /*  */
    .next = &TextGlyphs_System_C28C,
    .width = 3,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C291Tiles,
};

const struct GlyphNew TextGlyphs_System_C292 = { /*  */
    .next = &TextGlyphs_System_C291,
    .width = 2,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C292Tiles,
};

const struct GlyphNew TextGlyphs_System_C293 = { /*  */
    .next = &TextGlyphs_System_C292,
    .width = 5,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C293Tiles,
};

const struct GlyphNew TextGlyphs_System_C294 = { /*  */
    .next = &TextGlyphs_System_C293,
    .width = 4,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C294Tiles,
};

const struct GlyphNew TextGlyphs_System_C29C = { /*  */
    .next = &TextGlyphs_System_C294,
    .width = 7,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C29CTiles,
};

const struct GlyphNew TextGlyphs_System_C2A1 = { /* ¡ */
    .next = &TextGlyphs_System_C29C,
    .width = 4,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C2A1Tiles,
};

const struct GlyphNew TextGlyphs_System_C2AA = { /* ª */
    .next = &TextGlyphs_System_C2A1,
    .width = 5,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C2AATiles,
};

const struct GlyphNew TextGlyphs_System_C2AB = { /* « */
    .next = &TextGlyphs_System_C2AA,
    .width = 6,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C2ABTiles,
};

const struct GlyphNew TextGlyphs_System_C2BA = { /* º */
    .next = &TextGlyphs_System_C2AB,
    .width = 4,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C2BATiles,
};

const struct GlyphNew TextGlyphs_System_C2BB = { /* » */
    .next = &TextGlyphs_System_C2BA,
    .width = 6,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C2BBTiles,
};

const struct GlyphNew TextGlyphs_System_C2BF = { /* ¿ */
    .next = &TextGlyphs_System_C2BB,
    .width = 6,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C2BFTiles,
};

const struct GlyphNew TextGlyphs_System_C380 = { /* À */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C380Tiles,
};

const struct GlyphNew TextGlyphs_System_C381 = { /* Á */
    .next = &TextGlyphs_System_C380,
    .width = 5,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C381Tiles,
};

const struct GlyphNew TextGlyphs_System_C382 = { /* Â */
    .next = &TextGlyphs_System_C381,
    .width = 5,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C382Tiles,
};

const struct GlyphNew TextGlyphs_System_C384 = { /* Ä */
    .next = &TextGlyphs_System_C382,
    .width = 5,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C384Tiles,
};

const struct GlyphNew TextGlyphs_System_C387 = { /* Ç */
    .next = &TextGlyphs_System_C384,
    .width = 6,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C387Tiles,
};

const struct GlyphNew TextGlyphs_System_C388 = { /* È */
    .next = &TextGlyphs_System_C387,
    .width = 5,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C388Tiles,
};

const struct GlyphNew TextGlyphs_System_C389 = { /* É */
    .next = &TextGlyphs_System_C388,
    .width = 5,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C389Tiles,
};

const struct GlyphNew TextGlyphs_System_C38A = { /* Ê */
    .next = &TextGlyphs_System_C389,
    .width = 5,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C38ATiles,
};

const struct GlyphNew TextGlyphs_System_C38B = { /* Ë */
    .next = &TextGlyphs_System_C38A,
    .width = 5,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C38BTiles,
};

const struct GlyphNew TextGlyphs_System_C38C = { /* Ì */
    .next = &TextGlyphs_System_C38B,
    .width = 3,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C38CTiles,
};

const struct GlyphNew TextGlyphs_System_C38D = { /* Í */
    .next = &TextGlyphs_System_C38C,
    .width = 3,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C38DTiles,
};

const struct GlyphNew TextGlyphs_System_C38E = { /* Î */
    .next = &TextGlyphs_System_C38D,
    .width = 4,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C38ETiles,
};

const struct GlyphNew TextGlyphs_System_C38F = { /* Ï */
    .next = &TextGlyphs_System_C38E,
    .width = 4,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C38FTiles,
};

const struct GlyphNew TextGlyphs_System_C391 = { /* Ñ */
    .next = &TextGlyphs_System_C38F,
    .width = 5,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C391Tiles,
};

const struct GlyphNew TextGlyphs_System_C392 = { /* Ò */
    .next = &TextGlyphs_System_C391,
    .width = 5,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C392Tiles,
};

const struct GlyphNew TextGlyphs_System_C393 = { /* Ó */
    .next = &TextGlyphs_System_C392,
    .width = 5,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C393Tiles,
};

const struct GlyphNew TextGlyphs_System_C394 = { /* Ô */
    .next = &TextGlyphs_System_C393,
    .width = 5,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C394Tiles,
};

const struct GlyphNew TextGlyphs_System_C396 = { /* Ö */
    .next = &TextGlyphs_System_C394,
    .width = 5,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C396Tiles,
};

const struct GlyphNew TextGlyphs_System_C399 = { /* Ù */
    .next = &TextGlyphs_System_C396,
    .width = 5,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C399Tiles,
};

const struct GlyphNew TextGlyphs_System_C39A = { /* Ú */
    .next = &TextGlyphs_System_C399,
    .width = 5,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C39ATiles,
};

const struct GlyphNew TextGlyphs_System_C39B = { /* Û */
    .next = &TextGlyphs_System_C39A,
    .width = 5,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C39BTiles,
};

const struct GlyphNew TextGlyphs_System_C39C = { /* Ü */
    .next = &TextGlyphs_System_C39B,
    .width = 5,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C39CTiles,
};

const struct GlyphNew TextGlyphs_System_C39F = { /* ß */
    .next = &TextGlyphs_System_C39C,
    .width = 6,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C39FTiles,
};

const struct GlyphNew TextGlyphs_System_C3A0 = { /* à */
    .next = &TextGlyphs_System_C39F,
    .width = 6,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C3A0Tiles,
};

const struct GlyphNew TextGlyphs_System_C3A1 = { /* á */
    .next = &TextGlyphs_System_C3A0,
    .width = 6,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C3A1Tiles,
};

const struct GlyphNew TextGlyphs_System_C3A2 = { /* â */
    .next = &TextGlyphs_System_C3A1,
    .width = 6,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C3A2Tiles,
};

const struct GlyphNew TextGlyphs_System_C3A4 = { /* ä */
    .next = &TextGlyphs_System_C3A2,
    .width = 6,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C3A4Tiles,
};

const struct GlyphNew TextGlyphs_System_C3A7 = { /* ç */
    .next = &TextGlyphs_System_C3A4,
    .width = 5,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C3A7Tiles,
};

const struct GlyphNew TextGlyphs_System_C3A8 = { /* è */
    .next = &TextGlyphs_System_C3A7,
    .width = 5,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C3A8Tiles,
};

const struct GlyphNew TextGlyphs_System_C3A9 = { /* é */
    .next = &TextGlyphs_System_C3A8,
    .width = 5,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C3A9Tiles,
};

const struct GlyphNew TextGlyphs_System_C3AA = { /* ê */
    .next = &TextGlyphs_System_C3A9,
    .width = 5,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C3AATiles,
};

const struct GlyphNew TextGlyphs_System_C3AB = { /* ë */
    .next = &TextGlyphs_System_C3AA,
    .width = 5,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C3ABTiles,
};

const struct GlyphNew TextGlyphs_System_C3AC = { /* ì */
    .next = &TextGlyphs_System_C3AB,
    .width = 3,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C3ACTiles,
};

const struct GlyphNew TextGlyphs_System_C3AD = { /* í */
    .next = &TextGlyphs_System_C3AC,
    .width = 3,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C3ADTiles,
};

const struct GlyphNew TextGlyphs_System_C3AE = { /* î */
    .next = &TextGlyphs_System_C3AD,
    .width = 4,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C3AETiles,
};

const struct GlyphNew TextGlyphs_System_C3AF = { /* ï */
    .next = &TextGlyphs_System_C3AE,
    .width = 4,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C3AFTiles,
};

const struct GlyphNew TextGlyphs_System_C3B1 = { /* ñ */
    .next = &TextGlyphs_System_C3AF,
    .width = 5,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C3B1Tiles,
};

const struct GlyphNew TextGlyphs_System_C3B2 = { /* ò */
    .next = &TextGlyphs_System_C3B1,
    .width = 5,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C3B2Tiles,
};

const struct GlyphNew TextGlyphs_System_C3B3 = { /* ó */
    .next = &TextGlyphs_System_C3B2,
    .width = 5,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C3B3Tiles,
};

const struct GlyphNew TextGlyphs_System_C3B4 = { /* ô */
    .next = &TextGlyphs_System_C3B3,
    .width = 5,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C3B4Tiles,
};

const struct GlyphNew TextGlyphs_System_C3B6 = { /* ö */
    .next = &TextGlyphs_System_C3B4,
    .width = 5,
    .utf_byte_2 = 0xb6,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C3B6Tiles,
};

const struct GlyphNew TextGlyphs_System_C3B9 = { /* ù */
    .next = &TextGlyphs_System_C3B6,
    .width = 5,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C3B9Tiles,
};

const struct GlyphNew TextGlyphs_System_C3BA = { /* ú */
    .next = &TextGlyphs_System_C3B9,
    .width = 5,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C3BATiles,
};

const struct GlyphNew TextGlyphs_System_C3BB = { /* û */
    .next = &TextGlyphs_System_C3BA,
    .width = 5,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C3BBTiles,
};

const struct GlyphNew TextGlyphs_System_C3BC = { /* ü */
    .next = &TextGlyphs_System_C3BB,
    .width = 5,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C3BCTiles,
};

struct GlyphNew const * const TextGlyphs_SystemNew[0x100 - 0x20] = {
    [0xe3 - 0x20] = &TextGlyphs_System_E38293,
    [0xe2 - 0x20] = &TextGlyphs_System_E28A87,
    [0xe6 - 0x20] = &TextGlyphs_System_E694B9,
    [0xe9 - 0x20] = &TextGlyphs_System_E9A3B2,
    [0xe5 - 0x20] = &TextGlyphs_System_E591A8,
    [0xe8 - 0x20] = &TextGlyphs_System_E88289,
    [0xe7 - 0x20] = &TextGlyphs_System_E7B79A,
    [0xef - 0x20] = &TextGlyphs_System_EFBD9A,
    [0xe4 - 0x20] = &TextGlyphs_System_E4BEAF,
    [0xce - 0x20] = &TextGlyphs_System_CEB5,
    [0x20 - 0x20] = &TextGlyphs_System_20,
    [0x21 - 0x20] = &TextGlyphs_System_21,
    [0x22 - 0x20] = &TextGlyphs_System_22,
    [0x23 - 0x20] = &TextGlyphs_System_23,
    [0x24 - 0x20] = &TextGlyphs_System_24,
    [0x25 - 0x20] = &TextGlyphs_System_25,
    [0x26 - 0x20] = &TextGlyphs_System_26,
    [0x27 - 0x20] = &TextGlyphs_System_27,
    [0x28 - 0x20] = &TextGlyphs_System_28,
    [0x29 - 0x20] = &TextGlyphs_System_29,
    [0x2a - 0x20] = &TextGlyphs_System_2A,
    [0x2b - 0x20] = &TextGlyphs_System_2B,
    [0x2c - 0x20] = &TextGlyphs_System_2C,
    [0x2d - 0x20] = &TextGlyphs_System_2D,
    [0x2e - 0x20] = &TextGlyphs_System_2E,
    [0x2f - 0x20] = &TextGlyphs_System_2F,
    [0x30 - 0x20] = &TextGlyphs_System_30,
    [0x31 - 0x20] = &TextGlyphs_System_31,
    [0x32 - 0x20] = &TextGlyphs_System_32,
    [0x33 - 0x20] = &TextGlyphs_System_33,
    [0x34 - 0x20] = &TextGlyphs_System_34,
    [0x35 - 0x20] = &TextGlyphs_System_35,
    [0x36 - 0x20] = &TextGlyphs_System_36,
    [0x37 - 0x20] = &TextGlyphs_System_37,
    [0x38 - 0x20] = &TextGlyphs_System_38,
    [0x39 - 0x20] = &TextGlyphs_System_39,
    [0x3a - 0x20] = &TextGlyphs_System_3A,
    [0x3b - 0x20] = &TextGlyphs_System_3B,
    [0x3c - 0x20] = &TextGlyphs_System_3C,
    [0x3d - 0x20] = &TextGlyphs_System_3D,
    [0x3e - 0x20] = &TextGlyphs_System_3E,
    [0x3f - 0x20] = &TextGlyphs_System_3F,
    [0x40 - 0x20] = &TextGlyphs_System_40,
    [0x41 - 0x20] = &TextGlyphs_System_41,
    [0x42 - 0x20] = &TextGlyphs_System_42,
    [0x43 - 0x20] = &TextGlyphs_System_43,
    [0x44 - 0x20] = &TextGlyphs_System_44,
    [0x45 - 0x20] = &TextGlyphs_System_45,
    [0x46 - 0x20] = &TextGlyphs_System_46,
    [0x47 - 0x20] = &TextGlyphs_System_47,
    [0x48 - 0x20] = &TextGlyphs_System_48,
    [0x49 - 0x20] = &TextGlyphs_System_49,
    [0x4a - 0x20] = &TextGlyphs_System_4A,
    [0x4b - 0x20] = &TextGlyphs_System_4B,
    [0x4c - 0x20] = &TextGlyphs_System_4C,
    [0x4d - 0x20] = &TextGlyphs_System_4D,
    [0x4e - 0x20] = &TextGlyphs_System_4E,
    [0x4f - 0x20] = &TextGlyphs_System_4F,
    [0x50 - 0x20] = &TextGlyphs_System_50,
    [0x51 - 0x20] = &TextGlyphs_System_51,
    [0x52 - 0x20] = &TextGlyphs_System_52,
    [0x53 - 0x20] = &TextGlyphs_System_53,
    [0x54 - 0x20] = &TextGlyphs_System_54,
    [0x55 - 0x20] = &TextGlyphs_System_55,
    [0x56 - 0x20] = &TextGlyphs_System_56,
    [0x57 - 0x20] = &TextGlyphs_System_57,
    [0x58 - 0x20] = &TextGlyphs_System_58,
    [0x59 - 0x20] = &TextGlyphs_System_59,
    [0x5a - 0x20] = &TextGlyphs_System_5A,
    [0x5b - 0x20] = &TextGlyphs_System_5B,
    [0x5c - 0x20] = &TextGlyphs_System_5C,
    [0x5d - 0x20] = &TextGlyphs_System_5D,
    [0x5e - 0x20] = &TextGlyphs_System_5E,
    [0x5f - 0x20] = &TextGlyphs_System_5F,
    [0x60 - 0x20] = &TextGlyphs_System_60,
    [0x61 - 0x20] = &TextGlyphs_System_61,
    [0x62 - 0x20] = &TextGlyphs_System_62,
    [0x63 - 0x20] = &TextGlyphs_System_63,
    [0x64 - 0x20] = &TextGlyphs_System_64,
    [0x65 - 0x20] = &TextGlyphs_System_65,
    [0x66 - 0x20] = &TextGlyphs_System_66,
    [0x67 - 0x20] = &TextGlyphs_System_67,
    [0x68 - 0x20] = &TextGlyphs_System_68,
    [0x69 - 0x20] = &TextGlyphs_System_69,
    [0x6a - 0x20] = &TextGlyphs_System_6A,
    [0x6b - 0x20] = &TextGlyphs_System_6B,
    [0x6c - 0x20] = &TextGlyphs_System_6C,
    [0x6d - 0x20] = &TextGlyphs_System_6D,
    [0x6e - 0x20] = &TextGlyphs_System_6E,
    [0x6f - 0x20] = &TextGlyphs_System_6F,
    [0x70 - 0x20] = &TextGlyphs_System_70,
    [0x71 - 0x20] = &TextGlyphs_System_71,
    [0x72 - 0x20] = &TextGlyphs_System_72,
    [0x73 - 0x20] = &TextGlyphs_System_73,
    [0x74 - 0x20] = &TextGlyphs_System_74,
    [0x75 - 0x20] = &TextGlyphs_System_75,
    [0x76 - 0x20] = &TextGlyphs_System_76,
    [0x77 - 0x20] = &TextGlyphs_System_77,
    [0x78 - 0x20] = &TextGlyphs_System_78,
    [0x79 - 0x20] = &TextGlyphs_System_79,
    [0x7a - 0x20] = &TextGlyphs_System_7A,
    [0x7b - 0x20] = &TextGlyphs_System_7B,
    [0x7c - 0x20] = &TextGlyphs_System_7C,
    [0x7d - 0x20] = &TextGlyphs_System_7D,
    [0x7e - 0x20] = &TextGlyphs_System_7E,
    [0x7f - 0x20] = &TextGlyphs_System_7F,
    [0xc2 - 0x20] = &TextGlyphs_System_C2BF,
    [0xc3 - 0x20] = &TextGlyphs_System_C3BC,
};
