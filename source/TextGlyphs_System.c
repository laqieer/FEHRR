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

const struct GlyphNew TextGlyphs_System_E38083 = { /* 〃 */
    .next = &TextGlyphs_System_E38293,
    .width = 5,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E38083Tiles,
};

const struct GlyphNew TextGlyphs_System_C2B0 = { /* ° */
    .next = &TextGlyphs_System_C2BF,
    .width = 5,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_C2B0Tiles,
};

const struct GlyphNew TextGlyphs_System_E595B0 = { /* 啰 */
    .next = &TextGlyphs_System_E591A8,
    .width = 11,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E595B0Tiles,
};

const struct GlyphNew TextGlyphs_System_E5958A = { /* 啊 */
    .next = &TextGlyphs_System_E595B0,
    .width = 9,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5958ATiles,
};

const struct GlyphNew TextGlyphs_System_E998BF = { /* 阿 */
    .next = &TextGlyphs_System_E9A3B2,
    .width = 9,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E998BFTiles,
};

const struct GlyphNew TextGlyphs_System_E59F83 = { /* 埃 */
    .next = &TextGlyphs_System_E5958A,
    .width = 9,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59F83Tiles,
};

const struct GlyphNew TextGlyphs_System_E68CA8 = { /* 挨 */
    .next = &TextGlyphs_System_E694B9,
    .width = 11,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68CA8Tiles,
};

const struct GlyphNew TextGlyphs_System_E5938E = { /* 哎 */
    .next = &TextGlyphs_System_E59F83,
    .width = 11,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5938ETiles,
};

const struct GlyphNew TextGlyphs_System_E59489 = { /* 唉 */
    .next = &TextGlyphs_System_E5938E,
    .width = 11,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59489Tiles,
};

const struct GlyphNew TextGlyphs_System_E894BC = { /* 蔼 */
    .next = &TextGlyphs_System_E88289,
    .width = 11,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E894BCTiles,
};

const struct GlyphNew TextGlyphs_System_E79FAE = { /* 矮 */
    .next = &TextGlyphs_System_E7B79A,
    .width = 11,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79FAETiles,
};

const struct GlyphNew TextGlyphs_System_E889BE = { /* 艾 */
    .next = &TextGlyphs_System_E894BC,
    .width = 9,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E889BETiles,
};

const struct GlyphNew TextGlyphs_System_E7A28D = { /* 碍 */
    .next = &TextGlyphs_System_E79FAE,
    .width = 11,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A28DTiles,
};

const struct GlyphNew TextGlyphs_System_E788B1 = { /* 爱 */
    .next = &TextGlyphs_System_E7A28D,
    .width = 9,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E788B1Tiles,
};

const struct GlyphNew TextGlyphs_System_E68C89 = { /* 按 */
    .next = &TextGlyphs_System_E68CA8,
    .width = 9,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68C89Tiles,
};

const struct GlyphNew TextGlyphs_System_E882AE = { /* 肮 */
    .next = &TextGlyphs_System_E889BE,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E882AETiles,
};

const struct GlyphNew TextGlyphs_System_E7BFB1 = { /* 翱 */
    .next = &TextGlyphs_System_E788B1,
    .width = 9,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BFB1Tiles,
};

const struct GlyphNew TextGlyphs_System_E582B2 = { /* 傲 */
    .next = &TextGlyphs_System_E59489,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E582B2Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A5A5 = { /* 奥 */
    .next = &TextGlyphs_System_E582B2,
    .width = 9,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A5A5Tiles,
};

const struct GlyphNew TextGlyphs_System_E590A7 = { /* 吧 */
    .next = &TextGlyphs_System_E5A5A5,
    .width = 9,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E590A7Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B7B4 = { /* 巴 */
    .next = &TextGlyphs_System_E590A7,
    .width = 8,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B7B4Tiles,
};

const struct GlyphNew TextGlyphs_System_E68B94 = { /* 拔 */
    .next = &TextGlyphs_System_E68C89,
    .width = 9,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68B94Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B78B = { /* 跋 */
    .next = &TextGlyphs_System_E882AE,
    .width = 11,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B78BTiles,
};

const struct GlyphNew TextGlyphs_System_E68A8A = { /* 把 */
    .next = &TextGlyphs_System_E68B94,
    .width = 9,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68A8ATiles,
};

const struct GlyphNew TextGlyphs_System_E99CB8 = { /* 霸 */
    .next = &TextGlyphs_System_E998BF,
    .width = 9,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99CB8Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BDA2 = { /* 罢 */
    .next = &TextGlyphs_System_E7BFB1,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BDA2Tiles,
};

const struct GlyphNew TextGlyphs_System_E788B8 = { /* 爸 */
    .next = &TextGlyphs_System_E7BDA2,
    .width = 9,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E788B8Tiles,
};

const struct GlyphNew TextGlyphs_System_E69186 = { /* 摆 */
    .next = &TextGlyphs_System_E68A8A,
    .width = 9,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69186Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B4A5 = { /* 败 */
    .next = &TextGlyphs_System_E8B78B,
    .width = 9,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B4A5Tiles,
};

const struct GlyphNew TextGlyphs_System_E68B9C = { /* 拜 */
    .next = &TextGlyphs_System_E69186,
    .width = 9,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68B9CTiles,
};

const struct GlyphNew TextGlyphs_System_E69691 = { /* 斑 */
    .next = &TextGlyphs_System_E68B9C,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69691Tiles,
};

const struct GlyphNew TextGlyphs_System_E78FAD = { /* 班 */
    .next = &TextGlyphs_System_E788B8,
    .width = 9,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78FADTiles,
};

const struct GlyphNew TextGlyphs_System_E690AC = { /* 搬 */
    .next = &TextGlyphs_System_E69691,
    .width = 11,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E690ACTiles,
};

const struct GlyphNew TextGlyphs_System_E689B3 = { /* 扳 */
    .next = &TextGlyphs_System_E690AC,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E689B3Tiles,
};

const struct GlyphNew TextGlyphs_System_E888AC = { /* 般 */
    .next = &TextGlyphs_System_E8B4A5,
    .width = 9,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E888ACTiles,
};

const struct GlyphNew TextGlyphs_System_E69DBF = { /* 板 */
    .next = &TextGlyphs_System_E689B3,
    .width = 9,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69DBFTiles,
};

const struct GlyphNew TextGlyphs_System_E78988 = { /* 版 */
    .next = &TextGlyphs_System_E78FAD,
    .width = 9,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78988Tiles,
};

const struct GlyphNew TextGlyphs_System_E689AE = { /* 扮 */
    .next = &TextGlyphs_System_E69DBF,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E689AETiles,
};

const struct GlyphNew TextGlyphs_System_E4BCB4 = { /* 伴 */
    .next = &TextGlyphs_System_E4BEAF,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BCB4Tiles,
};

const struct GlyphNew TextGlyphs_System_E58A9E = { /* 办 */
    .next = &TextGlyphs_System_E5B7B4,
    .width = 9,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58A9ETiles,
};

const struct GlyphNew TextGlyphs_System_E7BB8A = { /* 绊 */
    .next = &TextGlyphs_System_E78988,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BB8ATiles,
};

const struct GlyphNew TextGlyphs_System_E982A6 = { /* 邦 */
    .next = &TextGlyphs_System_E99CB8,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E982A6Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B8AE = { /* 帮 */
    .next = &TextGlyphs_System_E58A9E,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B8AETiles,
};

const struct GlyphNew TextGlyphs_System_E6A69C = { /* 榜 */
    .next = &TextGlyphs_System_E689AE,
    .width = 9,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A69CTiles,
};

const struct GlyphNew TextGlyphs_System_E88680 = { /* 膀 */
    .next = &TextGlyphs_System_E888AC,
    .width = 11,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88680Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BB91 = { /* 绑 */
    .next = &TextGlyphs_System_E7BB8A,
    .width = 11,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BB91Tiles,
};

const struct GlyphNew TextGlyphs_System_E6A392 = { /* 棒 */
    .next = &TextGlyphs_System_E6A69C,
    .width = 11,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A392Tiles,
};

const struct GlyphNew TextGlyphs_System_E5828D = { /* 傍 */
    .next = &TextGlyphs_System_E5B8AE,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5828DTiles,
};

const struct GlyphNew TextGlyphs_System_E8839E = { /* 胞 */
    .next = &TextGlyphs_System_E88680,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8839ETiles,
};

const struct GlyphNew TextGlyphs_System_E589A5 = { /* 剥 */
    .next = &TextGlyphs_System_E5828D,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E589A5Tiles,
};

const struct GlyphNew TextGlyphs_System_E89684 = { /* 薄 */
    .next = &TextGlyphs_System_E8839E,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E89684Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A0A1 = { /* 堡 */
    .next = &TextGlyphs_System_E589A5,
    .width = 11,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A0A1Tiles,
};

const struct GlyphNew TextGlyphs_System_E9A5B1 = { /* 饱 */
    .next = &TextGlyphs_System_E982A6,
    .width = 9,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A5B1Tiles,
};

const struct GlyphNew TextGlyphs_System_E68AA5 = { /* 报 */
    .next = &TextGlyphs_System_E6A392,
    .width = 9,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68AA5Tiles,
};

const struct GlyphNew TextGlyphs_System_E69AB4 = { /* 暴 */
    .next = &TextGlyphs_System_E68AA5,
    .width = 9,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69AB4Tiles,
};

const struct GlyphNew TextGlyphs_System_E9B28D = { /* 鲍 */
    .next = &TextGlyphs_System_E9A5B1,
    .width = 9,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9B28DTiles,
};

const struct GlyphNew TextGlyphs_System_E78886 = { /* 爆 */
    .next = &TextGlyphs_System_E7BB91,
    .width = 9,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78886Tiles,
};

const struct GlyphNew TextGlyphs_System_E69DAF = { /* 杯 */
    .next = &TextGlyphs_System_E69AB4,
    .width = 11,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69DAFTiles,
};

const struct GlyphNew TextGlyphs_System_E8BE88 = { /* 辈 */
    .next = &TextGlyphs_System_E89684,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BE88Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B49D = { /* 贝 */
    .next = &TextGlyphs_System_E8BE88,
    .width = 9,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B49DTiles,
};

const struct GlyphNew TextGlyphs_System_E5A487 = { /* 备 */
    .next = &TextGlyphs_System_E5A0A1,
    .width = 9,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A487Tiles,
};

const struct GlyphNew TextGlyphs_System_E683AB = { /* 惫 */
    .next = &TextGlyphs_System_E69DAF,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E683ABTiles,
};

const struct GlyphNew TextGlyphs_System_E5A594 = { /* 奔 */
    .next = &TextGlyphs_System_E5A487,
    .width = 9,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A594Tiles,
};

const struct GlyphNew TextGlyphs_System_E7ACA8 = { /* 笨 */
    .next = &TextGlyphs_System_E78886,
    .width = 11,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7ACA8Tiles,
};

const struct GlyphNew TextGlyphs_System_E8BFB8 = { /* 迸 */
    .next = &TextGlyphs_System_E8B49D,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BFB8Tiles,
};

const struct GlyphNew TextGlyphs_System_E980BC = { /* 逼 */
    .next = &TextGlyphs_System_E9B28D,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E980BCTiles,
};

const struct GlyphNew TextGlyphs_System_E9BCBB = { /* 鼻 */
    .next = &TextGlyphs_System_E980BC,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9BCBBTiles,
};

const struct GlyphNew TextGlyphs_System_E6AF94 = { /* 比 */
    .next = &TextGlyphs_System_E683AB,
    .width = 8,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6AF94Tiles,
};

const struct GlyphNew TextGlyphs_System_E98499 = { /* 鄙 */
    .next = &TextGlyphs_System_E9BCBB,
    .width = 11,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E98499Tiles,
};

const struct GlyphNew TextGlyphs_System_E7AC94 = { /* 笔 */
    .next = &TextGlyphs_System_E7ACA8,
    .width = 11,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7AC94Tiles,
};

const struct GlyphNew TextGlyphs_System_E7A2A7 = { /* 碧 */
    .next = &TextGlyphs_System_E7AC94,
    .width = 9,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A2A7Tiles,
};

const struct GlyphNew TextGlyphs_System_E894BD = { /* 蔽 */
    .next = &TextGlyphs_System_E8BFB8,
    .width = 11,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E894BDTiles,
};

const struct GlyphNew TextGlyphs_System_E6AF95 = { /* 毕 */
    .next = &TextGlyphs_System_E6AF94,
    .width = 9,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6AF95Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B881 = { /* 币 */
    .next = &TextGlyphs_System_E5A594,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B881Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BA87 = { /* 庇 */
    .next = &TextGlyphs_System_E5B881,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BA87Tiles,
};

const struct GlyphNew TextGlyphs_System_E997AD = { /* 闭 */
    .next = &TextGlyphs_System_E98499,
    .width = 8,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E997ADTiles,
};

const struct GlyphNew TextGlyphs_System_E88782 = { /* 臂 */
    .next = &TextGlyphs_System_E894BD,
    .width = 9,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88782Tiles,
};

const struct GlyphNew TextGlyphs_System_E99EAD = { /* 鞭 */
    .next = &TextGlyphs_System_E997AD,
    .width = 9,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99EADTiles,
};

const struct GlyphNew TextGlyphs_System_E8BEB9 = { /* 边 */
    .next = &TextGlyphs_System_E88782,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BEB9Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BC96 = { /* 编 */
    .next = &TextGlyphs_System_E7A2A7,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BC96Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B4AC = { /* 贬 */
    .next = &TextGlyphs_System_E8BEB9,
    .width = 11,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B4ACTiles,
};

const struct GlyphNew TextGlyphs_System_E58F98 = { /* 变 */
    .next = &TextGlyphs_System_E5BA87,
    .width = 9,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58F98Tiles,
};

const struct GlyphNew TextGlyphs_System_E8BEA8 = { /* 辨 */
    .next = &TextGlyphs_System_E8B4AC,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BEA8Tiles,
};

const struct GlyphNew TextGlyphs_System_E9818D = { /* 遍 */
    .next = &TextGlyphs_System_E99EAD,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9818DTiles,
};

const struct GlyphNew TextGlyphs_System_E6A087 = { /* 标 */
    .next = &TextGlyphs_System_E6AF95,
    .width = 9,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A087Tiles,
};

const struct GlyphNew TextGlyphs_System_E9B396 = { /* 鳖 */
    .next = &TextGlyphs_System_E9818D,
    .width = 11,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9B396Tiles,
};

const struct GlyphNew TextGlyphs_System_E588AB = { /* 别 */
    .next = &TextGlyphs_System_E58F98,
    .width = 9,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E588ABTiles,
};

const struct GlyphNew TextGlyphs_System_E586B0 = { /* 冰 */
    .next = &TextGlyphs_System_E588AB,
    .width = 9,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E586B0Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B9B6 = { /* 并 */
    .next = &TextGlyphs_System_E586B0,
    .width = 9,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B9B6Tiles,
};

const struct GlyphNew TextGlyphs_System_E692AD = { /* 播 */
    .next = &TextGlyphs_System_E6A087,
    .width = 9,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E692ADTiles,
};

const struct GlyphNew TextGlyphs_System_E6B3A2 = { /* 波 */
    .next = &TextGlyphs_System_E692AD,
    .width = 9,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B3A2Tiles,
};

const struct GlyphNew TextGlyphs_System_E58D9A = { /* 博 */
    .next = &TextGlyphs_System_E5B9B6,
    .width = 9,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58D9ATiles,
};

const struct GlyphNew TextGlyphs_System_E6908F = { /* 搏 */
    .next = &TextGlyphs_System_E6B3A2,
    .width = 11,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6908FTiles,
};

const struct GlyphNew TextGlyphs_System_E88496 = { /* 脖 */
    .next = &TextGlyphs_System_E8BEA8,
    .width = 11,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88496Tiles,
};

const struct GlyphNew TextGlyphs_System_E58D9C = { /* 卜 */
    .next = &TextGlyphs_System_E58D9A,
    .width = 9,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58D9CTiles,
};

const struct GlyphNew TextGlyphs_System_E8A1A5 = { /* 补 */
    .next = &TextGlyphs_System_E88496,
    .width = 9,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A1A5Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B883 = { /* 布 */
    .next = &TextGlyphs_System_E58D9C,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B883Tiles,
};

const struct GlyphNew TextGlyphs_System_E6ADA5 = { /* 步 */
    .next = &TextGlyphs_System_E6908F,
    .width = 9,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6ADA5Tiles,
};

const struct GlyphNew TextGlyphs_System_E693A6 = { /* 擦 */
    .next = &TextGlyphs_System_E6ADA5,
    .width = 9,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E693A6Tiles,
};

const struct GlyphNew TextGlyphs_System_E8A381 = { /* 裁 */
    .next = &TextGlyphs_System_E8A1A5,
    .width = 11,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A381Tiles,
};

const struct GlyphNew TextGlyphs_System_E69D90 = { /* 材 */
    .next = &TextGlyphs_System_E693A6,
    .width = 11,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69D90Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B4A2 = { /* 财 */
    .next = &TextGlyphs_System_E8A381,
    .width = 9,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B4A2Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B8A9 = { /* 踩 */
    .next = &TextGlyphs_System_E8B4A2,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B8A9Tiles,
};

const struct GlyphNew TextGlyphs_System_E98787 = { /* 采 */
    .next = &TextGlyphs_System_E9B396,
    .width = 11,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E98787Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BDA9 = { /* 彩 */
    .next = &TextGlyphs_System_E5B883,
    .width = 9,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BDA9Tiles,
};

const struct GlyphNew TextGlyphs_System_E88F9C = { /* 菜 */
    .next = &TextGlyphs_System_E8B8A9,
    .width = 9,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88F9CTiles,
};

const struct GlyphNew TextGlyphs_System_E9A490 = { /* 餐 */
    .next = &TextGlyphs_System_E98787,
    .width = 11,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A490Tiles,
};

const struct GlyphNew TextGlyphs_System_E88B8D = { /* 苍 */
    .next = &TextGlyphs_System_E88F9C,
    .width = 9,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88B8DTiles,
};

const struct GlyphNew TextGlyphs_System_E8978F = { /* 藏 */
    .next = &TextGlyphs_System_E88B8D,
    .width = 9,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8978FTiles,
};

const struct GlyphNew TextGlyphs_System_E6938D = { /* 操 */
    .next = &TextGlyphs_System_E69D90,
    .width = 9,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6938DTiles,
};

const struct GlyphNew TextGlyphs_System_E7AD96 = { /* 策 */
    .next = &TextGlyphs_System_E7BC96,
    .width = 9,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7AD96Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BEA7 = { /* 侧 */
    .next = &TextGlyphs_System_E4BCB4,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BEA7Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B58B = { /* 测 */
    .next = &TextGlyphs_System_E6938D,
    .width = 9,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B58BTiles,
};

const struct GlyphNew TextGlyphs_System_E5B182 = { /* 层 */
    .next = &TextGlyphs_System_E5BDA9,
    .width = 9,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B182Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B9AD = { /* 蹭 */
    .next = &TextGlyphs_System_E8978F,
    .width = 11,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B9ADTiles,
};

const struct GlyphNew TextGlyphs_System_E88CB6 = { /* 茶 */
    .next = &TextGlyphs_System_E8B9AD,
    .width = 11,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88CB6Tiles,
};

const struct GlyphNew TextGlyphs_System_E69FA5 = { /* 查 */
    .next = &TextGlyphs_System_E6B58B,
    .width = 9,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69FA5Tiles,
};

const struct GlyphNew TextGlyphs_System_E5AF9F = { /* 察 */
    .next = &TextGlyphs_System_E5B182,
    .width = 9,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AF9FTiles,
};

const struct GlyphNew TextGlyphs_System_E5B294 = { /* 岔 */
    .next = &TextGlyphs_System_E5AF9F,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B294Tiles,
};

const struct GlyphNew TextGlyphs_System_E69FB4 = { /* 柴 */
    .next = &TextGlyphs_System_E69FA5,
    .width = 11,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69FB4Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BCA0 = { /* 缠 */
    .next = &TextGlyphs_System_E7AD96,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BCA0Tiles,
};

const struct GlyphNew TextGlyphs_System_E993B2 = { /* 铲 */
    .next = &TextGlyphs_System_E9A490,
    .width = 9,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E993B2Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BAA7 = { /* 产 */
    .next = &TextGlyphs_System_E4BEA7,
    .width = 9,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BAA7Tiles,
};

const struct GlyphNew TextGlyphs_System_E9A2A4 = { /* 颤 */
    .next = &TextGlyphs_System_E993B2,
    .width = 11,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A2A4Tiles,
};

const struct GlyphNew TextGlyphs_System_E6988C = { /* 昌 */
    .next = &TextGlyphs_System_E69FB4,
    .width = 10,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6988CTiles,
};

const struct GlyphNew TextGlyphs_System_E59CBA = { /* 场 */
    .next = &TextGlyphs_System_E5B294,
    .width = 9,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59CBATiles,
};

const struct GlyphNew TextGlyphs_System_E5B09D = { /* 尝 */
    .next = &TextGlyphs_System_E59CBA,
    .width = 11,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B09DTiles,
};

const struct GlyphNew TextGlyphs_System_E995BF = { /* 长 */
    .next = &TextGlyphs_System_E9A2A4,
    .width = 9,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E995BFTiles,
};

const struct GlyphNew TextGlyphs_System_E581BF = { /* 偿 */
    .next = &TextGlyphs_System_E5B09D,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E581BFTiles,
};

const struct GlyphNew TextGlyphs_System_E882A0 = { /* 肠 */
    .next = &TextGlyphs_System_E88CB6,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E882A0Tiles,
};

const struct GlyphNew TextGlyphs_System_E79585 = { /* 畅 */
    .next = &TextGlyphs_System_E7BCA0,
    .width = 11,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79585Tiles,
};

const struct GlyphNew TextGlyphs_System_E68A84 = { /* 抄 */
    .next = &TextGlyphs_System_E6988C,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68A84Tiles,
};

const struct GlyphNew TextGlyphs_System_E6BDAE = { /* 潮 */
    .next = &TextGlyphs_System_E68A84,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6BDAETiles,
};

const struct GlyphNew TextGlyphs_System_E5B7A2 = { /* 巢 */
    .next = &TextGlyphs_System_E581BF,
    .width = 11,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B7A2Tiles,
};

const struct GlyphNew TextGlyphs_System_E590B5 = { /* 吵 */
    .next = &TextGlyphs_System_E5B7A2,
    .width = 9,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E590B5Tiles,
};

const struct GlyphNew TextGlyphs_System_E8BDA6 = { /* 车 */
    .next = &TextGlyphs_System_E882A0,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BDA6Tiles,
};

const struct GlyphNew TextGlyphs_System_E689AF = { /* 扯 */
    .next = &TextGlyphs_System_E6BDAE,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E689AFTiles,
};

const struct GlyphNew TextGlyphs_System_E692A4 = { /* 撤 */
    .next = &TextGlyphs_System_E689AF,
    .width = 9,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E692A4Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BDBB = { /* 彻 */
    .next = &TextGlyphs_System_E590B5,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BDBBTiles,
};

const struct GlyphNew TextGlyphs_System_E5B098 = { /* 尘 */
    .next = &TextGlyphs_System_E5BDBB,
    .width = 9,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B098Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B289 = { /* 沉 */
    .next = &TextGlyphs_System_E692A4,
    .width = 9,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B289Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B681 = { /* 趁 */
    .next = &TextGlyphs_System_E8BDA6,
    .width = 11,
    .utf_byte_2 = 0xb6,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B681Tiles,
};

const struct GlyphNew TextGlyphs_System_E69291 = { /* 撑 */
    .next = &TextGlyphs_System_E6B289,
    .width = 11,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69291Tiles,
};

const struct GlyphNew TextGlyphs_System_E59188 = { /* 呈 */
    .next = &TextGlyphs_System_E5B098,
    .width = 11,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59188Tiles,
};

const struct GlyphNew TextGlyphs_System_E4B998 = { /* 乘 */
    .next = &TextGlyphs_System_E4BAA7,
    .width = 9,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B998Tiles,
};

const struct GlyphNew TextGlyphs_System_E683A9 = { /* 惩 */
    .next = &TextGlyphs_System_E69291,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E683A9Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AF9A = { /* 诚 */
    .next = &TextGlyphs_System_E8B681,
    .width = 9,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AF9ATiles,
};

const struct GlyphNew TextGlyphs_System_E9809E = { /* 逞 */
    .next = &TextGlyphs_System_E995BF,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9809ETiles,
};

const struct GlyphNew TextGlyphs_System_E9AA8B = { /* 骋 */
    .next = &TextGlyphs_System_E9809E,
    .width = 11,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9AA8BTiles,
};

const struct GlyphNew TextGlyphs_System_E59083 = { /* 吃 */
    .next = &TextGlyphs_System_E59188,
    .width = 9,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59083Tiles,
};

const struct GlyphNew TextGlyphs_System_E797B4 = { /* 痴 */
    .next = &TextGlyphs_System_E79585,
    .width = 9,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E797B4Tiles,
};

const struct GlyphNew TextGlyphs_System_E58C99 = { /* 匙 */
    .next = &TextGlyphs_System_E59083,
    .width = 9,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58C99Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B1A0 = { /* 池 */
    .next = &TextGlyphs_System_E683A9,
    .width = 11,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B1A0Tiles,
};

const struct GlyphNew TextGlyphs_System_E8BF9F = { /* 迟 */
    .next = &TextGlyphs_System_E8AF9A,
    .width = 9,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BF9FTiles,
};

const struct GlyphNew TextGlyphs_System_E5BC9B = { /* 弛 */
    .next = &TextGlyphs_System_E58C99,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BC9BTiles,
};

const struct GlyphNew TextGlyphs_System_E9A9B0 = { /* 驰 */
    .next = &TextGlyphs_System_E9AA8B,
    .width = 9,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A9B0Tiles,
};

const struct GlyphNew TextGlyphs_System_E880BB = { /* 耻 */
    .next = &TextGlyphs_System_E8BF9F,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E880BBTiles,
};

const struct GlyphNew TextGlyphs_System_E7BF85 = { /* 翅 */
    .next = &TextGlyphs_System_E797B4,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BF85Tiles,
};

const struct GlyphNew TextGlyphs_System_E696A5 = { /* 斥 */
    .next = &TextGlyphs_System_E6B1A0,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E696A5Tiles,
};

const struct GlyphNew TextGlyphs_System_E58585 = { /* 充 */
    .next = &TextGlyphs_System_E5BC9B,
    .width = 9,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58585Tiles,
};

const struct GlyphNew TextGlyphs_System_E586B2 = { /* 冲 */
    .next = &TextGlyphs_System_E58585,
    .width = 9,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E586B2Tiles,
};

const struct GlyphNew TextGlyphs_System_E5AEA0 = { /* 宠 */
    .next = &TextGlyphs_System_E586B2,
    .width = 11,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AEA0Tiles,
};

const struct GlyphNew TextGlyphs_System_E985AC = { /* 酬 */
    .next = &TextGlyphs_System_E9A9B0,
    .width = 9,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E985ACTiles,
};

const struct GlyphNew TextGlyphs_System_E795B4 = { /* 畴 */
    .next = &TextGlyphs_System_E7BF85,
    .width = 11,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E795B4Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B88C = { /* 踌 */
    .next = &TextGlyphs_System_E880BB,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B88CTiles,
};

const struct GlyphNew TextGlyphs_System_E68481 = { /* 愁 */
    .next = &TextGlyphs_System_E696A5,
    .width = 11,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68481Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BB87 = { /* 仇 */
    .next = &TextGlyphs_System_E4B998,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BB87Tiles,
};

const struct GlyphNew TextGlyphs_System_E4B891 = { /* 丑 */
    .next = &TextGlyphs_System_E4BB87,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B891Tiles,
};

const struct GlyphNew TextGlyphs_System_E887AD = { /* 臭 */
    .next = &TextGlyphs_System_E8B88C,
    .width = 11,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E887ADTiles,
};

const struct GlyphNew TextGlyphs_System_E58EA8 = { /* 厨 */
    .next = &TextGlyphs_System_E5AEA0,
    .width = 9,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58EA8Tiles,
};

const struct GlyphNew TextGlyphs_System_E8BA87 = { /* 躇 */
    .next = &TextGlyphs_System_E887AD,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BA87Tiles,
};

const struct GlyphNew TextGlyphs_System_E6A59A = { /* 楚 */
    .next = &TextGlyphs_System_E68481,
    .width = 9,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A59ATiles,
};

const struct GlyphNew TextGlyphs_System_E7A180 = { /* 础 */
    .next = &TextGlyphs_System_E795B4,
    .width = 9,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A180Tiles,
};

const struct GlyphNew TextGlyphs_System_E582A8 = { /* 储 */
    .next = &TextGlyphs_System_E58EA8,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E582A8Tiles,
};

const struct GlyphNew TextGlyphs_System_E8A7A6 = { /* 触 */
    .next = &TextGlyphs_System_E8BA87,
    .width = 9,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A7A6Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A484 = { /* 处 */
    .next = &TextGlyphs_System_E582A8,
    .width = 9,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A484Tiles,
};

const struct GlyphNew TextGlyphs_System_E7A9BF = { /* 穿 */
    .next = &TextGlyphs_System_E7A180,
    .width = 9,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A9BFTiles,
};

const struct GlyphNew TextGlyphs_System_E4BCA0 = { /* 传 */
    .next = &TextGlyphs_System_E4B891,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BCA0Tiles,
};

const struct GlyphNew TextGlyphs_System_E888B9 = { /* 船 */
    .next = &TextGlyphs_System_E8A7A6,
    .width = 9,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E888B9Tiles,
};

const struct GlyphNew TextGlyphs_System_E59698 = { /* 喘 */
    .next = &TextGlyphs_System_E5A484,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59698Tiles,
};

const struct GlyphNew TextGlyphs_System_E4B8B2 = { /* 串 */
    .next = &TextGlyphs_System_E4BCA0,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B8B2Tiles,
};

const struct GlyphNew TextGlyphs_System_E7AA97 = { /* 窗 */
    .next = &TextGlyphs_System_E7A9BF,
    .width = 9,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7AA97Tiles,
};

const struct GlyphNew TextGlyphs_System_E997AF = { /* 闯 */
    .next = &TextGlyphs_System_E985AC,
    .width = 11,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E997AFTiles,
};

const struct GlyphNew TextGlyphs_System_E5889B = { /* 创 */
    .next = &TextGlyphs_System_E59698,
    .width = 9,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5889BTiles,
};

const struct GlyphNew TextGlyphs_System_E994A4 = { /* 锤 */
    .next = &TextGlyphs_System_E997AF,
    .width = 9,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E994A4Tiles,
};

const struct GlyphNew TextGlyphs_System_E59E82 = { /* 垂 */
    .next = &TextGlyphs_System_E5889B,
    .width = 9,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59E82Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BAAF = { /* 纯 */
    .next = &TextGlyphs_System_E7AA97,
    .width = 9,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BAAFTiles,
};

const struct GlyphNew TextGlyphs_System_E8A0A2 = { /* 蠢 */
    .next = &TextGlyphs_System_E888B9,
    .width = 9,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A0A2Tiles,
};

const struct GlyphNew TextGlyphs_System_E688B3 = { /* 戳 */
    .next = &TextGlyphs_System_E6A59A,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E688B3Tiles,
};

const struct GlyphNew TextGlyphs_System_E99B8C = { /* 雌 */
    .next = &TextGlyphs_System_E994A4,
    .width = 9,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99B8CTiles,
};

const struct GlyphNew TextGlyphs_System_E68588 = { /* 慈 */
    .next = &TextGlyphs_System_E688B3,
    .width = 9,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68588Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AF8D = { /* 词 */
    .next = &TextGlyphs_System_E8A0A2,
    .width = 11,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AF8DTiles,
};

const struct GlyphNew TextGlyphs_System_E6ADA4 = { /* 此 */
    .next = &TextGlyphs_System_E68588,
    .width = 9,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6ADA4Tiles,
};

const struct GlyphNew TextGlyphs_System_E588BA = { /* 刺 */
    .next = &TextGlyphs_System_E59E82,
    .width = 9,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E588BATiles,
};

const struct GlyphNew TextGlyphs_System_E8B590 = { /* 赐 */
    .next = &TextGlyphs_System_E8AF8D,
    .width = 9,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B590Tiles,
};

const struct GlyphNew TextGlyphs_System_E881AA = { /* 聪 */
    .next = &TextGlyphs_System_E8B590,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E881AATiles,
};

const struct GlyphNew TextGlyphs_System_E58C86 = { /* 匆 */
    .next = &TextGlyphs_System_E588BA,
    .width = 11,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58C86Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BB8E = { /* 从 */
    .next = &TextGlyphs_System_E4B8B2,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BB8ETiles,
};

const struct GlyphNew TextGlyphs_System_E7B297 = { /* 粗 */
    .next = &TextGlyphs_System_E7BAAF,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B297Tiles,
};

const struct GlyphNew TextGlyphs_System_E7AA9C = { /* 窜 */
    .next = &TextGlyphs_System_E7B297,
    .width = 11,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7AA9CTiles,
};

const struct GlyphNew TextGlyphs_System_E691A7 = { /* 摧 */
    .next = &TextGlyphs_System_E6ADA4,
    .width = 11,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E691A7Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B494 = { /* 崔 */
    .next = &TextGlyphs_System_E58C86,
    .width = 9,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B494Tiles,
};

const struct GlyphNew TextGlyphs_System_E88486 = { /* 脆 */
    .next = &TextGlyphs_System_E881AA,
    .width = 11,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88486Tiles,
};

const struct GlyphNew TextGlyphs_System_E79881 = { /* 瘁 */
    .next = &TextGlyphs_System_E7AA9C,
    .width = 11,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79881Tiles,
};

const struct GlyphNew TextGlyphs_System_E7B2B9 = { /* 粹 */
    .next = &TextGlyphs_System_E79881,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B2B9Tiles,
};

const struct GlyphNew TextGlyphs_System_E7A38B = { /* 磋 */
    .next = &TextGlyphs_System_E7B2B9,
    .width = 11,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A38BTiles,
};

const struct GlyphNew TextGlyphs_System_E69093 = { /* 搓 */
    .next = &TextGlyphs_System_E691A7,
    .width = 11,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69093Tiles,
};

const struct GlyphNew TextGlyphs_System_E99499 = { /* 错 */
    .next = &TextGlyphs_System_E99B8C,
    .width = 9,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99499Tiles,
};

const struct GlyphNew TextGlyphs_System_E690AD = { /* 搭 */
    .next = &TextGlyphs_System_E69093,
    .width = 9,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E690ADTiles,
};

const struct GlyphNew TextGlyphs_System_E8BEBE = { /* 达 */
    .next = &TextGlyphs_System_E88486,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BEBETiles,
};

const struct GlyphNew TextGlyphs_System_E59186 = { /* 呆 */
    .next = &TextGlyphs_System_E5B494,
    .width = 9,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59186Tiles,
};

const struct GlyphNew TextGlyphs_System_E6ADB9 = { /* 歹 */
    .next = &TextGlyphs_System_E690AD,
    .width = 11,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6ADB9Tiles,
};

const struct GlyphNew TextGlyphs_System_E688B4 = { /* 戴 */
    .next = &TextGlyphs_System_E6ADB9,
    .width = 9,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E688B4Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B8A6 = { /* 带 */
    .next = &TextGlyphs_System_E59186,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B8A6Tiles,
};

const struct GlyphNew TextGlyphs_System_E8A28B = { /* 袋 */
    .next = &TextGlyphs_System_E8BEBE,
    .width = 11,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A28BTiles,
};

const struct GlyphNew TextGlyphs_System_E980AE = { /* 逮 */
    .next = &TextGlyphs_System_E99499,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E980AETiles,
};

const struct GlyphNew TextGlyphs_System_E680A0 = { /* 怠 */
    .next = &TextGlyphs_System_E688B4,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E680A0Tiles,
};

const struct GlyphNew TextGlyphs_System_E58D95 = { /* 单 */
    .next = &TextGlyphs_System_E5B8A6,
    .width = 9,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58D95Tiles,
};

const struct GlyphNew TextGlyphs_System_E88386 = { /* 胆 */
    .next = &TextGlyphs_System_E8A28B,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88386Tiles,
};

const struct GlyphNew TextGlyphs_System_E697A6 = { /* 旦 */
    .next = &TextGlyphs_System_E680A0,
    .width = 9,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E697A6Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BD86 = { /* 但 */
    .next = &TextGlyphs_System_E4BB8E,
    .width = 9,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BD86Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B7A1 = { /* 淡 */
    .next = &TextGlyphs_System_E697A6,
    .width = 9,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B7A1Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AF9E = { /* 诞 */
    .next = &TextGlyphs_System_E88386,
    .width = 9,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AF9ETiles,
};

const struct GlyphNew TextGlyphs_System_E89B8B = { /* 蛋 */
    .next = &TextGlyphs_System_E8AF9E,
    .width = 9,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E89B8BTiles,
};

const struct GlyphNew TextGlyphs_System_E68CA1 = { /* 挡 */
    .next = &TextGlyphs_System_E6B7A1,
    .width = 9,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68CA1Tiles,
};

const struct GlyphNew TextGlyphs_System_E88DA1 = { /* 荡 */
    .next = &TextGlyphs_System_E89B8B,
    .width = 11,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88DA1Tiles,
};

const struct GlyphNew TextGlyphs_System_E6A1A3 = { /* 档 */
    .next = &TextGlyphs_System_E68CA1,
    .width = 9,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A1A3Tiles,
};

const struct GlyphNew TextGlyphs_System_E68DA3 = { /* 捣 */
    .next = &TextGlyphs_System_E6A1A3,
    .width = 11,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68DA3Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B988 = { /* 蹈 */
    .next = &TextGlyphs_System_E88DA1,
    .width = 9,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B988Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B29B = { /* 岛 */
    .next = &TextGlyphs_System_E58D95,
    .width = 9,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B29BTiles,
};

const struct GlyphNew TextGlyphs_System_E7A5B7 = { /* 祷 */
    .next = &TextGlyphs_System_E7A38B,
    .width = 9,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A5B7Tiles,
};

const struct GlyphNew TextGlyphs_System_E5AFBC = { /* 导 */
    .next = &TextGlyphs_System_E5B29B,
    .width = 9,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AFBCTiles,
};

const struct GlyphNew TextGlyphs_System_E5BEB7 = { /* 德 */
    .next = &TextGlyphs_System_E5AFBC,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BEB7Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B9AC = { /* 蹬 */
    .next = &TextGlyphs_System_E8B988,
    .width = 11,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B9ACTiles,
};

const struct GlyphNew TextGlyphs_System_E781AF = { /* 灯 */
    .next = &TextGlyphs_System_E7A5B7,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E781AFTiles,
};

const struct GlyphNew TextGlyphs_System_E799BB = { /* 登 */
    .next = &TextGlyphs_System_E781AF,
    .width = 9,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E799BBTiles,
};

const struct GlyphNew TextGlyphs_System_E79EAA = { /* 瞪 */
    .next = &TextGlyphs_System_E799BB,
    .width = 11,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79EAATiles,
};

const struct GlyphNew TextGlyphs_System_E8BFAA = { /* 迪 */
    .next = &TextGlyphs_System_E8B9AC,
    .width = 9,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BFAATiles,
};

const struct GlyphNew TextGlyphs_System_E6958C = { /* 敌 */
    .next = &TextGlyphs_System_E68DA3,
    .width = 9,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6958CTiles,
};

const struct GlyphNew TextGlyphs_System_E5ABA1 = { /* 嫡 */
    .next = &TextGlyphs_System_E5BEB7,
    .width = 11,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5ABA1Tiles,
};

const struct GlyphNew TextGlyphs_System_E89282 = { /* 蒂 */
    .next = &TextGlyphs_System_E8BFAA,
    .width = 9,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E89282Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BC94 = { /* 缔 */
    .next = &TextGlyphs_System_E79EAA,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BC94Tiles,
};

const struct GlyphNew TextGlyphs_System_E9A2A0 = { /* 颠 */
    .next = &TextGlyphs_System_E980AE,
    .width = 11,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A2A0Tiles,
};

const struct GlyphNew TextGlyphs_System_E59EAB = { /* 垫 */
    .next = &TextGlyphs_System_E5ABA1,
    .width = 11,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59EABTiles,
};

const struct GlyphNew TextGlyphs_System_E794B5 = { /* 电 */
    .next = &TextGlyphs_System_E7BC94,
    .width = 8,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E794B5Tiles,
};

const struct GlyphNew TextGlyphs_System_E58881 = { /* 刁 */
    .next = &TextGlyphs_System_E59EAB,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58881Tiles,
};

const struct GlyphNew TextGlyphs_System_E68E89 = { /* 掉 */
    .next = &TextGlyphs_System_E6958C,
    .width = 9,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68E89Tiles,
};

const struct GlyphNew TextGlyphs_System_E5908A = { /* 吊 */
    .next = &TextGlyphs_System_E58881,
    .width = 8,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5908ATiles,
};

const struct GlyphNew TextGlyphs_System_E99293 = { /* 钓 */
    .next = &TextGlyphs_System_E9A2A0,
    .width = 11,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99293Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B083 = { /* 调 */
    .next = &TextGlyphs_System_E89282,
    .width = 9,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B083Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B78C = { /* 跌 */
    .next = &TextGlyphs_System_E8B083,
    .width = 11,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B78CTiles,
};

const struct GlyphNew TextGlyphs_System_E7A29F = { /* 碟 */
    .next = &TextGlyphs_System_E794B5,
    .width = 11,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A29FTiles,
};

const struct GlyphNew TextGlyphs_System_E89DB6 = { /* 蝶 */
    .next = &TextGlyphs_System_E8B78C,
    .width = 11,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E89DB6Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B08D = { /* 谍 */
    .next = &TextGlyphs_System_E89DB6,
    .width = 11,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B08DTiles,
};

const struct GlyphNew TextGlyphs_System_E79BAF = { /* 盯 */
    .next = &TextGlyphs_System_E7A29F,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79BAFTiles,
};

const struct GlyphNew TextGlyphs_System_E99289 = { /* 钉 */
    .next = &TextGlyphs_System_E99293,
    .width = 11,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99289Tiles,
};

const struct GlyphNew TextGlyphs_System_E9A1B6 = { /* 顶 */
    .next = &TextGlyphs_System_E99289,
    .width = 9,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A1B6Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AEA2 = { /* 订 */
    .next = &TextGlyphs_System_E8B08D,
    .width = 11,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AEA2Tiles,
};

const struct GlyphNew TextGlyphs_System_E4B8A2 = { /* 丢 */
    .next = &TextGlyphs_System_E4BD86,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B8A2Tiles,
};

const struct GlyphNew TextGlyphs_System_E4B89C = { /* 东 */
    .next = &TextGlyphs_System_E4B8A2,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B89CTiles,
};

const struct GlyphNew TextGlyphs_System_E68782 = { /* 懂 */
    .next = &TextGlyphs_System_E68E89,
    .width = 9,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68782Tiles,
};

const struct GlyphNew TextGlyphs_System_E58AA8 = { /* 动 */
    .next = &TextGlyphs_System_E5908A,
    .width = 9,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58AA8Tiles,
};

const struct GlyphNew TextGlyphs_System_E586BB = { /* 冻 */
    .next = &TextGlyphs_System_E58AA8,
    .width = 9,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E586BBTiles,
};

const struct GlyphNew TextGlyphs_System_E5859C = { /* 兜 */
    .next = &TextGlyphs_System_E586BB,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5859CTiles,
};

const struct GlyphNew TextGlyphs_System_E68A96 = { /* 抖 */
    .next = &TextGlyphs_System_E68782,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68A96Tiles,
};

const struct GlyphNew TextGlyphs_System_E69697 = { /* 斗 */
    .next = &TextGlyphs_System_E68A96,
    .width = 9,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69697Tiles,
};

const struct GlyphNew TextGlyphs_System_E98097 = { /* 逗 */
    .next = &TextGlyphs_System_E9A1B6,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E98097Tiles,
};

const struct GlyphNew TextGlyphs_System_E79DA3 = { /* 督 */
    .next = &TextGlyphs_System_E79BAF,
    .width = 9,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79DA3Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AFBB = { /* 读 */
    .next = &TextGlyphs_System_E8AEA2,
    .width = 9,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AFBBTiles,
};

const struct GlyphNew TextGlyphs_System_E5A0B5 = { /* 堵 */
    .next = &TextGlyphs_System_E5859C,
    .width = 9,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A0B5Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B58C = { /* 赌 */
    .next = &TextGlyphs_System_E8AFBB,
    .width = 9,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B58CTiles,
};

const struct GlyphNew TextGlyphs_System_E8829A = { /* 肚 */
    .next = &TextGlyphs_System_E8B58C,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8829ATiles,
};

const struct GlyphNew TextGlyphs_System_E5A692 = { /* 妒 */
    .next = &TextGlyphs_System_E5A0B5,
    .width = 11,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A692Tiles,
};

const struct GlyphNew TextGlyphs_System_E994BB = { /* 锻 */
    .next = &TextGlyphs_System_E98097,
    .width = 9,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E994BBTiles,
};

const struct GlyphNew TextGlyphs_System_E5A086 = { /* 堆 */
    .next = &TextGlyphs_System_E5A692,
    .width = 11,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A086Tiles,
};

const struct GlyphNew TextGlyphs_System_E9989F = { /* 队 */
    .next = &TextGlyphs_System_E994BB,
    .width = 9,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9989FTiles,
};

const struct GlyphNew TextGlyphs_System_E5AFB9 = { /* 对 */
    .next = &TextGlyphs_System_E5A086,
    .width = 9,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AFB9Tiles,
};

const struct GlyphNew TextGlyphs_System_E9A1BF = { /* 顿 */
    .next = &TextGlyphs_System_E9989F,
    .width = 9,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A1BFTiles,
};

const struct GlyphNew TextGlyphs_System_E9929D = { /* 钝 */
    .next = &TextGlyphs_System_E9A1BF,
    .width = 11,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9929DTiles,
};

const struct GlyphNew TextGlyphs_System_E5A4BA = { /* 夺 */
    .next = &TextGlyphs_System_E5AFB9,
    .width = 9,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A4BATiles,
};

const struct GlyphNew TextGlyphs_System_E8BAB2 = { /* 躲 */
    .next = &TextGlyphs_System_E8829A,
    .width = 9,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BAB2Tiles,
};

const struct GlyphNew TextGlyphs_System_E69CB5 = { /* 朵 */
    .next = &TextGlyphs_System_E69697,
    .width = 11,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69CB5Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A095 = { /* 堕 */
    .next = &TextGlyphs_System_E5A4BA,
    .width = 11,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A095Tiles,
};

const struct GlyphNew TextGlyphs_System_E681B6 = { /* 恶 */
    .next = &TextGlyphs_System_E69CB5,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E681B6Tiles,
};

const struct GlyphNew TextGlyphs_System_E9A5BF = { /* 饿 */
    .next = &TextGlyphs_System_E9929D,
    .width = 11,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A5BFTiles,
};

const struct GlyphNew TextGlyphs_System_E8808C = { /* 而 */
    .next = &TextGlyphs_System_E8BAB2,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8808CTiles,
};

const struct GlyphNew TextGlyphs_System_E584BF = { /* 儿 */
    .next = &TextGlyphs_System_E5A095,
    .width = 9,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E584BFTiles,
};

const struct GlyphNew TextGlyphs_System_E5B094 = { /* 尔 */
    .next = &TextGlyphs_System_E584BF,
    .width = 9,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B094Tiles,
};

const struct GlyphNew TextGlyphs_System_E58F91 = { /* 发 */
    .next = &TextGlyphs_System_E5B094,
    .width = 9,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58F91Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BD9A = { /* 罚 */
    .next = &TextGlyphs_System_E79DA3,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BD9ATiles,
};

const struct GlyphNew TextGlyphs_System_E78F90 = { /* 珐 */
    .next = &TextGlyphs_System_E7BD9A,
    .width = 9,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78F90Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BFBB = { /* 翻 */
    .next = &TextGlyphs_System_E78F90,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BFBBTiles,
};

const struct GlyphNew TextGlyphs_System_E7B981 = { /* 繁 */
    .next = &TextGlyphs_System_E7BFBB,
    .width = 9,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B981Tiles,
};

const struct GlyphNew TextGlyphs_System_E587A1 = { /* 凡 */
    .next = &TextGlyphs_System_E58F91,
    .width = 9,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E587A1Tiles,
};

const struct GlyphNew TextGlyphs_System_E783A6 = { /* 烦 */
    .next = &TextGlyphs_System_E7B981,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E783A6Tiles,
};

const struct GlyphNew TextGlyphs_System_E88C83 = { /* 范 */
    .next = &TextGlyphs_System_E8808C,
    .width = 9,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88C83Tiles,
};

const struct GlyphNew TextGlyphs_System_E78AAF = { /* 犯 */
    .next = &TextGlyphs_System_E783A6,
    .width = 9,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78AAFTiles,
};

const struct GlyphNew TextGlyphs_System_E9A5AD = { /* 饭 */
    .next = &TextGlyphs_System_E9A5BF,
    .width = 11,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A5ADTiles,
};

const struct GlyphNew TextGlyphs_System_E88AB3 = { /* 芳 */
    .next = &TextGlyphs_System_E88C83,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88AB3Tiles,
};

const struct GlyphNew TextGlyphs_System_E688BF = { /* 房 */
    .next = &TextGlyphs_System_E681B6,
    .width = 9,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E688BFTiles,
};

const struct GlyphNew TextGlyphs_System_E5A6A8 = { /* 妨 */
    .next = &TextGlyphs_System_E587A1,
    .width = 11,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A6A8Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BBBF = { /* 仿 */
    .next = &TextGlyphs_System_E4B89C,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BBBFTiles,
};

const struct GlyphNew TextGlyphs_System_E8AEBF = { /* 访 */
    .next = &TextGlyphs_System_E88AB3,
    .width = 9,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AEBFTiles,
};

const struct GlyphNew TextGlyphs_System_E88FB2 = { /* 菲 */
    .next = &TextGlyphs_System_E8AEBF,
    .width = 9,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88FB2Tiles,
};

const struct GlyphNew TextGlyphs_System_E9A39E = { /* 飞 */
    .next = &TextGlyphs_System_E9A5AD,
    .width = 9,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A39ETiles,
};

const struct GlyphNew TextGlyphs_System_E58CAA = { /* 匪 */
    .next = &TextGlyphs_System_E5A6A8,
    .width = 11,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58CAATiles,
};

const struct GlyphNew TextGlyphs_System_E5BA9F = { /* 废 */
    .next = &TextGlyphs_System_E58CAA,
    .width = 9,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BA9FTiles,
};

const struct GlyphNew TextGlyphs_System_E6B2B8 = { /* 沸 */
    .next = &TextGlyphs_System_E688BF,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B2B8Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B4B9 = { /* 费 */
    .next = &TextGlyphs_System_E88FB2,
    .width = 9,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B4B9Tiles,
};

const struct GlyphNew TextGlyphs_System_E88AAC = { /* 芬 */
    .next = &TextGlyphs_System_E8B4B9,
    .width = 9,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88AACTiles,
};

const struct GlyphNew TextGlyphs_System_E590A9 = { /* 吩 */
    .next = &TextGlyphs_System_E5BA9F,
    .width = 11,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E590A9Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B09B = { /* 氛 */
    .next = &TextGlyphs_System_E6B2B8,
    .width = 11,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B09BTiles,
};

const struct GlyphNew TextGlyphs_System_E7B289 = { /* 粉 */
    .next = &TextGlyphs_System_E78AAF,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B289Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A58B = { /* 奋 */
    .next = &TextGlyphs_System_E590A9,
    .width = 9,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A58BTiles,
};

const struct GlyphNew TextGlyphs_System_E4BBBD = { /* 份 */
    .next = &TextGlyphs_System_E4BBBF,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BBBDTiles,
};

const struct GlyphNew TextGlyphs_System_E684A4 = { /* 愤 */
    .next = &TextGlyphs_System_E6B09B,
    .width = 9,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E684A4Tiles,
};

const struct GlyphNew TextGlyphs_System_E4B8B0 = { /* 丰 */
    .next = &TextGlyphs_System_E4BBBD,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B8B0Tiles,
};

const struct GlyphNew TextGlyphs_System_E9948B = { /* 锋 */
    .next = &TextGlyphs_System_E9A39E,
    .width = 9,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9948BTiles,
};

const struct GlyphNew TextGlyphs_System_E9A38E = { /* 风 */
    .next = &TextGlyphs_System_E9948B,
    .width = 9,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A38ETiles,
};

const struct GlyphNew TextGlyphs_System_E796AF = { /* 疯 */
    .next = &TextGlyphs_System_E7B289,
    .width = 9,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E796AFTiles,
};

const struct GlyphNew TextGlyphs_System_E980A2 = { /* 逢 */
    .next = &TextGlyphs_System_E9A38E,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E980A2Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BC9D = { /* 缝 */
    .next = &TextGlyphs_System_E796AF,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BC9DTiles,
};

const struct GlyphNew TextGlyphs_System_E8AEBD = { /* 讽 */
    .next = &TextGlyphs_System_E88AAC,
    .width = 11,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AEBDTiles,
};

const struct GlyphNew TextGlyphs_System_E5A589 = { /* 奉 */
    .next = &TextGlyphs_System_E5A58B,
    .width = 9,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A589Tiles,
};

const struct GlyphNew TextGlyphs_System_E882A4 = { /* 肤 */
    .next = &TextGlyphs_System_E8AEBD,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E882A4Tiles,
};

const struct GlyphNew TextGlyphs_System_E689B6 = { /* 扶 */
    .next = &TextGlyphs_System_E684A4,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E689B6Tiles,
};

const struct GlyphNew TextGlyphs_System_E68B82 = { /* 拂 */
    .next = &TextGlyphs_System_E689B6,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68B82Tiles,
};

const struct GlyphNew TextGlyphs_System_E7ACA6 = { /* 符 */
    .next = &TextGlyphs_System_E7BC9D,
    .width = 9,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7ACA6Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BF98 = { /* 俘 */
    .next = &TextGlyphs_System_E4B8B0,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BF98Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B5AE = { /* 浮 */
    .next = &TextGlyphs_System_E68B82,
    .width = 9,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B5AETiles,
};

const struct GlyphNew TextGlyphs_System_E5BC97 = { /* 弗 */
    .next = &TextGlyphs_System_E5A589,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BC97Tiles,
};

const struct GlyphNew TextGlyphs_System_E68A9A = { /* 抚 */
    .next = &TextGlyphs_System_E6B5AE,
    .width = 9,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68A9ATiles,
};

const struct GlyphNew TextGlyphs_System_E8BE85 = { /* 辅 */
    .next = &TextGlyphs_System_E882A4,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BE85Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BFAF = { /* 俯 */
    .next = &TextGlyphs_System_E4BF98,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BFAFTiles,
};

const struct GlyphNew TextGlyphs_System_E5BA9C = { /* 府 */
    .next = &TextGlyphs_System_E5BC97,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BA9CTiles,
};

const struct GlyphNew TextGlyphs_System_E88590 = { /* 腐 */
    .next = &TextGlyphs_System_E8BE85,
    .width = 9,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88590Tiles,
};

const struct GlyphNew TextGlyphs_System_E589AF = { /* 副 */
    .next = &TextGlyphs_System_E5BA9C,
    .width = 9,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E589AFTiles,
};

const struct GlyphNew TextGlyphs_System_E8A686 = { /* 覆 */
    .next = &TextGlyphs_System_E88590,
    .width = 9,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A686Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B58B = { /* 赋 */
    .next = &TextGlyphs_System_E8A686,
    .width = 9,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B58BTiles,
};

const struct GlyphNew TextGlyphs_System_E5A48D = { /* 复 */
    .next = &TextGlyphs_System_E589AF,
    .width = 9,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A48DTiles,
};

const struct GlyphNew TextGlyphs_System_E8B49F = { /* 负 */
    .next = &TextGlyphs_System_E8B58B,
    .width = 9,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B49FTiles,
};

const struct GlyphNew TextGlyphs_System_E99984 = { /* 附 */
    .next = &TextGlyphs_System_E980A2,
    .width = 9,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99984Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A687 = { /* 妇 */
    .next = &TextGlyphs_System_E5A48D,
    .width = 9,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A687Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BC9A = { /* 缚 */
    .next = &TextGlyphs_System_E7ACA6,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BC9ATiles,
};

const struct GlyphNew TextGlyphs_System_E59290 = { /* 咐 */
    .next = &TextGlyphs_System_E5A687,
    .width = 11,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59290Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AFA5 = { /* 该 */
    .next = &TextGlyphs_System_E8B49F,
    .width = 9,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AFA5Tiles,
};

const struct GlyphNew TextGlyphs_System_E6A682 = { /* 概 */
    .next = &TextGlyphs_System_E68A9A,
    .width = 9,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A682Tiles,
};

const struct GlyphNew TextGlyphs_System_E79B96 = { /* 盖 */
    .next = &TextGlyphs_System_E7BC9A,
    .width = 9,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79B96Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B9B2 = { /* 干 */
    .next = &TextGlyphs_System_E59290,
    .width = 11,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B9B2Tiles,
};

const struct GlyphNew TextGlyphs_System_E69D86 = { /* 杆 */
    .next = &TextGlyphs_System_E6A682,
    .width = 9,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69D86Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B5B6 = { /* 赶 */
    .next = &TextGlyphs_System_E8AFA5,
    .width = 9,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B5B6Tiles,
};

const struct GlyphNew TextGlyphs_System_E695A2 = { /* 敢 */
    .next = &TextGlyphs_System_E69D86,
    .width = 11,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E695A2Tiles,
};

const struct GlyphNew TextGlyphs_System_E58688 = { /* 冈 */
    .next = &TextGlyphs_System_E5B9B2,
    .width = 11,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58688Tiles,
};

const struct GlyphNew TextGlyphs_System_E5889A = { /* 刚 */
    .next = &TextGlyphs_System_E58688,
    .width = 9,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5889ATiles,
};

const struct GlyphNew TextGlyphs_System_E992A2 = { /* 钢 */
    .next = &TextGlyphs_System_E99984,
    .width = 9,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E992A2Tiles,
};

const struct GlyphNew TextGlyphs_System_E8868F = { /* 膏 */
    .next = &TextGlyphs_System_E8B5B6,
    .width = 11,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8868FTiles,
};

const struct GlyphNew TextGlyphs_System_E7BE94 = { /* 羔 */
    .next = &TextGlyphs_System_E79B96,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BE94Tiles,
};

const struct GlyphNew TextGlyphs_System_E7B395 = { /* 糕 */
    .next = &TextGlyphs_System_E7BE94,
    .width = 9,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B395Tiles,
};

const struct GlyphNew TextGlyphs_System_E6909E = { /* 搞 */
    .next = &TextGlyphs_System_E695A2,
    .width = 11,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6909ETiles,
};

const struct GlyphNew TextGlyphs_System_E593A5 = { /* 哥 */
    .next = &TextGlyphs_System_E5889A,
    .width = 9,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E593A5Tiles,
};

const struct GlyphNew TextGlyphs_System_E68888 = { /* 戈 */
    .next = &TextGlyphs_System_E6909E,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68888Tiles,
};

const struct GlyphNew TextGlyphs_System_E8919B = { /* 葛 */
    .next = &TextGlyphs_System_E8868F,
    .width = 11,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8919BTiles,
};

const struct GlyphNew TextGlyphs_System_E99881 = { /* 阁 */
    .next = &TextGlyphs_System_E992A2,
    .width = 11,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99881Tiles,
};

const struct GlyphNew TextGlyphs_System_E99A94 = { /* 隔 */
    .next = &TextGlyphs_System_E99881,
    .width = 9,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99A94Tiles,
};

const struct GlyphNew TextGlyphs_System_E4B8AA = { /* 个 */
    .next = &TextGlyphs_System_E4BFAF,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B8AATiles,
};

const struct GlyphNew TextGlyphs_System_E7BB99 = { /* 给 */
    .next = &TextGlyphs_System_E7B395,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BB99Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B79F = { /* 跟 */
    .next = &TextGlyphs_System_E8919B,
    .width = 9,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B79FTiles,
};

const struct GlyphNew TextGlyphs_System_E88095 = { /* 耕 */
    .next = &TextGlyphs_System_E8B79F,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88095Tiles,
};

const struct GlyphNew TextGlyphs_System_E880BF = { /* 耿 */
    .next = &TextGlyphs_System_E88095,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E880BFTiles,
};

const struct GlyphNew TextGlyphs_System_E5B7A5 = { /* 工 */
    .next = &TextGlyphs_System_E593A5,
    .width = 9,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B7A5Tiles,
};

const struct GlyphNew TextGlyphs_System_E681AD = { /* 恭 */
    .next = &TextGlyphs_System_E68888,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E681ADTiles,
};

const struct GlyphNew TextGlyphs_System_E8BAAC = { /* 躬 */
    .next = &TextGlyphs_System_E880BF,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BAACTiles,
};

const struct GlyphNew TextGlyphs_System_E5AEAB = { /* 宫 */
    .next = &TextGlyphs_System_E5B7A5,
    .width = 9,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AEABTiles,
};

const struct GlyphNew TextGlyphs_System_E5B7A9 = { /* 巩 */
    .next = &TextGlyphs_System_E5AEAB,
    .width = 11,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B7A9Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B4A1 = { /* 贡 */
    .next = &TextGlyphs_System_E8BAAC,
    .width = 9,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B4A1Tiles,
};

const struct GlyphNew TextGlyphs_System_E58BBE = { /* 勾 */
    .next = &TextGlyphs_System_E5B7A9,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58BBETiles,
};

const struct GlyphNew TextGlyphs_System_E78B97 = { /* 狗 */
    .next = &TextGlyphs_System_E7BB99,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78B97Tiles,
};

const struct GlyphNew TextGlyphs_System_E69E84 = { /* 构 */
    .next = &TextGlyphs_System_E681AD,
    .width = 9,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69E84Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B4AD = { /* 购 */
    .next = &TextGlyphs_System_E8B4A1,
    .width = 9,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B4ADTiles,
};

const struct GlyphNew TextGlyphs_System_E5A49F = { /* 够 */
    .next = &TextGlyphs_System_E58BBE,
    .width = 9,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A49FTiles,
};

const struct GlyphNew TextGlyphs_System_E8BE9C = { /* 辜 */
    .next = &TextGlyphs_System_E8B4AD,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BE9CTiles,
};

const struct GlyphNew TextGlyphs_System_E4BCB0 = { /* 估 */
    .next = &TextGlyphs_System_E4B8AA,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BCB0Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A791 = { /* 姑 */
    .next = &TextGlyphs_System_E5A49F,
    .width = 9,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A791Tiles,
};

const struct GlyphNew TextGlyphs_System_E9BC93 = { /* 鼓 */
    .next = &TextGlyphs_System_E99A94,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9BC93Tiles,
};

const struct GlyphNew TextGlyphs_System_E9AAA8 = { /* 骨 */
    .next = &TextGlyphs_System_E9BC93,
    .width = 9,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9AAA8Tiles,
};

const struct GlyphNew TextGlyphs_System_E882A1 = { /* 股 */
    .next = &TextGlyphs_System_E8BE9C,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E882A1Tiles,
};

const struct GlyphNew TextGlyphs_System_E9A1BE = { /* 顾 */
    .next = &TextGlyphs_System_E9AAA8,
    .width = 9,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A1BETiles,
};

const struct GlyphNew TextGlyphs_System_E588AE = { /* 刮 */
    .next = &TextGlyphs_System_E5A791,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E588AETiles,
};

const struct GlyphNew TextGlyphs_System_E7939C = { /* 瓜 */
    .next = &TextGlyphs_System_E78B97,
    .width = 11,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7939CTiles,
};

const struct GlyphNew TextGlyphs_System_E68C82 = { /* 挂 */
    .next = &TextGlyphs_System_E69E84,
    .width = 11,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68C82Tiles,
};

const struct GlyphNew TextGlyphs_System_E4B996 = { /* 乖 */
    .next = &TextGlyphs_System_E4BCB0,
    .width = 11,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B996Tiles,
};

const struct GlyphNew TextGlyphs_System_E6A3BA = { /* 棺 */
    .next = &TextGlyphs_System_E68C82,
    .width = 11,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A3BATiles,
};

const struct GlyphNew TextGlyphs_System_E585B3 = { /* 关 */
    .next = &TextGlyphs_System_E588AE,
    .width = 9,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E585B3Tiles,
};

const struct GlyphNew TextGlyphs_System_E586A0 = { /* 冠 */
    .next = &TextGlyphs_System_E585B3,
    .width = 11,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E586A0Tiles,
};

const struct GlyphNew TextGlyphs_System_E8A782 = { /* 观 */
    .next = &TextGlyphs_System_E882A1,
    .width = 9,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A782Tiles,
};

const struct GlyphNew TextGlyphs_System_E9A686 = { /* 馆 */
    .next = &TextGlyphs_System_E9A1BE,
    .width = 9,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A686Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BD90 = { /* 罐 */
    .next = &TextGlyphs_System_E7939C,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BD90Tiles,
};

const struct GlyphNew TextGlyphs_System_E683AF = { /* 惯 */
    .next = &TextGlyphs_System_E6A3BA,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E683AFTiles,
};

const struct GlyphNew TextGlyphs_System_E7818C = { /* 灌 */
    .next = &TextGlyphs_System_E7BD90,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7818CTiles,
};

const struct GlyphNew TextGlyphs_System_E8B4AF = { /* 贯 */
    .next = &TextGlyphs_System_E8A782,
    .width = 9,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B4AFTiles,
};

const struct GlyphNew TextGlyphs_System_E5B9BF = { /* 广 */
    .next = &TextGlyphs_System_E586A0,
    .width = 9,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B9BFTiles,
};

const struct GlyphNew TextGlyphs_System_E8A784 = { /* 规 */
    .next = &TextGlyphs_System_E8B4AF,
    .width = 9,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A784Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BD92 = { /* 归 */
    .next = &TextGlyphs_System_E5B9BF,
    .width = 9,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BD92Tiles,
};

const struct GlyphNew TextGlyphs_System_E8BDA8 = { /* 轨 */
    .next = &TextGlyphs_System_E8A784,
    .width = 9,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BDA8Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AFA1 = { /* 诡 */
    .next = &TextGlyphs_System_E8BDA8,
    .width = 11,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AFA1Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B4B5 = { /* 贵 */
    .next = &TextGlyphs_System_E8AFA1,
    .width = 9,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B4B5Tiles,
};

const struct GlyphNew TextGlyphs_System_E6BB9A = { /* 滚 */
    .next = &TextGlyphs_System_E683AF,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6BB9ATiles,
};

const struct GlyphNew TextGlyphs_System_E8BF87 = { /* 过 */
    .next = &TextGlyphs_System_E8B4B5,
    .width = 9,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BF87Tiles,
};

const struct GlyphNew TextGlyphs_System_E59388 = { /* 哈 */
    .next = &TextGlyphs_System_E5BD92,
    .width = 9,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59388Tiles,
};

const struct GlyphNew TextGlyphs_System_E5ADA9 = { /* 孩 */
    .next = &TextGlyphs_System_E59388,
    .width = 9,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5ADA9Tiles,
};

const struct GlyphNew TextGlyphs_System_E9AA87 = { /* 骇 */
    .next = &TextGlyphs_System_E9A686,
    .width = 11,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9AA87Tiles,
};

const struct GlyphNew TextGlyphs_System_E590AB = { /* 含 */
    .next = &TextGlyphs_System_E5ADA9,
    .width = 11,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E590ABTiles,
};

const struct GlyphNew TextGlyphs_System_E5AF92 = { /* 寒 */
    .next = &TextGlyphs_System_E590AB,
    .width = 9,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AF92Tiles,
};

const struct GlyphNew TextGlyphs_System_E5968A = { /* 喊 */
    .next = &TextGlyphs_System_E5AF92,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5968ATiles,
};

const struct GlyphNew TextGlyphs_System_E7BD95 = { /* 罕 */
    .next = &TextGlyphs_System_E7818C,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BD95Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BFB0 = { /* 翰 */
    .next = &TextGlyphs_System_E7BD95,
    .width = 9,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BFB0Tiles,
};

const struct GlyphNew TextGlyphs_System_E692BC = { /* 撼 */
    .next = &TextGlyphs_System_E6BB9A,
    .width = 9,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E692BCTiles,
};

const struct GlyphNew TextGlyphs_System_E686BE = { /* 憾 */
    .next = &TextGlyphs_System_E692BC,
    .width = 11,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E686BETiles,
};

const struct GlyphNew TextGlyphs_System_E6828D = { /* 悍 */
    .next = &TextGlyphs_System_E686BE,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6828DTiles,
};

const struct GlyphNew TextGlyphs_System_E6B189 = { /* 汉 */
    .next = &TextGlyphs_System_E6828D,
    .width = 9,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B189Tiles,
};

const struct GlyphNew TextGlyphs_System_E888AA = { /* 航 */
    .next = &TextGlyphs_System_E8BF87,
    .width = 9,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E888AATiles,
};

const struct GlyphNew TextGlyphs_System_E59A8E = { /* 嚎 */
    .next = &TextGlyphs_System_E5968A,
    .width = 9,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59A8ETiles,
};

const struct GlyphNew TextGlyphs_System_E6AFAB = { /* 毫 */
    .next = &TextGlyphs_System_E6B189,
    .width = 9,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6AFABTiles,
};

const struct GlyphNew TextGlyphs_System_E88097 = { /* 耗 */
    .next = &TextGlyphs_System_E888AA,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88097Tiles,
};

const struct GlyphNew TextGlyphs_System_E591B5 = { /* 呵 */
    .next = &TextGlyphs_System_E59A8E,
    .width = 11,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E591B5Tiles,
};

const struct GlyphNew TextGlyphs_System_E5969D = { /* 喝 */
    .next = &TextGlyphs_System_E591B5,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5969DTiles,
};

const struct GlyphNew TextGlyphs_System_E8B5AB = { /* 赫 */
    .next = &TextGlyphs_System_E88097,
    .width = 9,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B5ABTiles,
};

const struct GlyphNew TextGlyphs_System_E8B4BA = { /* 贺 */
    .next = &TextGlyphs_System_E8B5AB,
    .width = 11,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B4BATiles,
};

const struct GlyphNew TextGlyphs_System_E598BF = { /* 嘿 */
    .next = &TextGlyphs_System_E5969D,
    .width = 11,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E598BFTiles,
};

const struct GlyphNew TextGlyphs_System_E9BB91 = { /* 黑 */
    .next = &TextGlyphs_System_E9AA87,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9BB91Tiles,
};

const struct GlyphNew TextGlyphs_System_E79795 = { /* 痕 */
    .next = &TextGlyphs_System_E7BFB0,
    .width = 9,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79795Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BE88 = { /* 很 */
    .next = &TextGlyphs_System_E598BF,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BE88Tiles,
};

const struct GlyphNew TextGlyphs_System_E78BA0 = { /* 狠 */
    .next = &TextGlyphs_System_E79795,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78BA0Tiles,
};

const struct GlyphNew TextGlyphs_System_E681A8 = { /* 恨 */
    .next = &TextGlyphs_System_E6AFAB,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E681A8Tiles,
};

const struct GlyphNew TextGlyphs_System_E593BC = { /* 哼 */
    .next = &TextGlyphs_System_E5BE88,
    .width = 11,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E593BCTiles,
};

const struct GlyphNew TextGlyphs_System_E6A8AA = { /* 横 */
    .next = &TextGlyphs_System_E681A8,
    .width = 11,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A8AATiles,
};

const struct GlyphNew TextGlyphs_System_E8A1A1 = { /* 衡 */
    .next = &TextGlyphs_System_E8B4BA,
    .width = 9,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A1A1Tiles,
};

const struct GlyphNew TextGlyphs_System_E68192 = { /* 恒 */
    .next = &TextGlyphs_System_E6A8AA,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68192Tiles,
};

const struct GlyphNew TextGlyphs_System_E8BDB0 = { /* 轰 */
    .next = &TextGlyphs_System_E8A1A1,
    .width = 9,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BDB0Tiles,
};

const struct GlyphNew TextGlyphs_System_E5AE8F = { /* 宏 */
    .next = &TextGlyphs_System_E593BC,
    .width = 11,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AE8FTiles,
};

const struct GlyphNew TextGlyphs_System_E7BAA2 = { /* 红 */
    .next = &TextGlyphs_System_E78BA0,
    .width = 9,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BAA2Tiles,
};

const struct GlyphNew TextGlyphs_System_E58099 = { /* 候 */
    .next = &TextGlyphs_System_E5AE8F,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58099Tiles,
};

const struct GlyphNew TextGlyphs_System_E5908E = { /* 后 */
    .next = &TextGlyphs_System_E58099,
    .width = 9,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5908ETiles,
};

const struct GlyphNew TextGlyphs_System_E4B98E = { /* 乎 */
    .next = &TextGlyphs_System_E4B996,
    .width = 9,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B98ETiles,
};

const struct GlyphNew TextGlyphs_System_E5BFBD = { /* 忽 */
    .next = &TextGlyphs_System_E5908E,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BFBDTiles,
};

const struct GlyphNew TextGlyphs_System_E883A1 = { /* 胡 */
    .next = &TextGlyphs_System_E8BDB0,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E883A1Tiles,
};

const struct GlyphNew TextGlyphs_System_E89DB4 = { /* 蝴 */
    .next = &TextGlyphs_System_E883A1,
    .width = 11,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E89DB4Tiles,
};

const struct GlyphNew TextGlyphs_System_E7B38A = { /* 糊 */
    .next = &TextGlyphs_System_E7BAA2,
    .width = 9,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B38ATiles,
};

const struct GlyphNew TextGlyphs_System_E68AA4 = { /* 护 */
    .next = &TextGlyphs_System_E68192,
    .width = 9,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68AA4Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BA92 = { /* 互 */
    .next = &TextGlyphs_System_E4B98E,
    .width = 9,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BA92Tiles,
};

const struct GlyphNew TextGlyphs_System_E688B7 = { /* 户 */
    .next = &TextGlyphs_System_E68AA4,
    .width = 9,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E688B7Tiles,
};

const struct GlyphNew TextGlyphs_System_E58D8E = { /* 华 */
    .next = &TextGlyphs_System_E5BFBD,
    .width = 9,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58D8ETiles,
};

const struct GlyphNew TextGlyphs_System_E78CBE = { /* 猾 */
    .next = &TextGlyphs_System_E7B38A,
    .width = 11,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78CBETiles,
};

const struct GlyphNew TextGlyphs_System_E58892 = { /* 划 */
    .next = &TextGlyphs_System_E58D8E,
    .width = 9,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58892Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AF9D = { /* 话 */
    .next = &TextGlyphs_System_E89DB4,
    .width = 9,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AF9DTiles,
};

const struct GlyphNew TextGlyphs_System_E5BE8A = { /* 徊 */
    .next = &TextGlyphs_System_E58892,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BE8ATiles,
};

const struct GlyphNew TextGlyphs_System_E68080 = { /* 怀 */
    .next = &TextGlyphs_System_E688B7,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68080Tiles,
};

const struct GlyphNew TextGlyphs_System_E59D8F = { /* 坏 */
    .next = &TextGlyphs_System_E5BE8A,
    .width = 9,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59D8FTiles,
};

const struct GlyphNew TextGlyphs_System_E6ACA2 = { /* 欢 */
    .next = &TextGlyphs_System_E68080,
    .width = 9,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6ACA2Tiles,
};

const struct GlyphNew TextGlyphs_System_E78EAF = { /* 环 */
    .next = &TextGlyphs_System_E78CBE,
    .width = 9,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78EAFTiles,
};

const struct GlyphNew TextGlyphs_System_E8BF98 = { /* 还 */
    .next = &TextGlyphs_System_E8AF9D,
    .width = 9,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BF98Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BC93 = { /* 缓 */
    .next = &TextGlyphs_System_E78EAF,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BC93Tiles,
};

const struct GlyphNew TextGlyphs_System_E68DA2 = { /* 换 */
    .next = &TextGlyphs_System_E6ACA2,
    .width = 9,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68DA2Tiles,
};

const struct GlyphNew TextGlyphs_System_E682A3 = { /* 患 */
    .next = &TextGlyphs_System_E68DA2,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E682A3Tiles,
};

const struct GlyphNew TextGlyphs_System_E594A4 = { /* 唤 */
    .next = &TextGlyphs_System_E59D8F,
    .width = 9,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E594A4Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B6A3 = { /* 涣 */
    .next = &TextGlyphs_System_E682A3,
    .width = 9,
    .utf_byte_2 = 0xb6,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B6A3Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B9BB = { /* 幻 */
    .next = &TextGlyphs_System_E594A4,
    .width = 9,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B9BBTiles,
};

const struct GlyphNew TextGlyphs_System_E6858C = { /* 慌 */
    .next = &TextGlyphs_System_E6B6A3,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6858CTiles,
};

const struct GlyphNew TextGlyphs_System_E683B6 = { /* 惶 */
    .next = &TextGlyphs_System_E6858C,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E683B6Tiles,
};

const struct GlyphNew TextGlyphs_System_E69983 = { /* 晃 */
    .next = &TextGlyphs_System_E683B6,
    .width = 11,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69983Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B08E = { /* 谎 */
    .next = &TextGlyphs_System_E8BF98,
    .width = 11,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B08ETiles,
};

const struct GlyphNew TextGlyphs_System_E68CA5 = { /* 挥 */
    .next = &TextGlyphs_System_E69983,
    .width = 9,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68CA5Tiles,
};

const struct GlyphNew TextGlyphs_System_E8BE89 = { /* 辉 */
    .next = &TextGlyphs_System_E8B08E,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BE89Tiles,
};

const struct GlyphNew TextGlyphs_System_E681A2 = { /* 恢 */
    .next = &TextGlyphs_System_E68CA5,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E681A2Tiles,
};

const struct GlyphNew TextGlyphs_System_E6AF81 = { /* 毁 */
    .next = &TextGlyphs_System_E681A2,
    .width = 11,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6AF81Tiles,
};

const struct GlyphNew TextGlyphs_System_E685A7 = { /* 慧 */
    .next = &TextGlyphs_System_E6AF81,
    .width = 9,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E685A7Tiles,
};

const struct GlyphNew TextGlyphs_System_E683A0 = { /* 惠 */
    .next = &TextGlyphs_System_E685A7,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E683A0Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B4BF = { /* 贿 */
    .next = &TextGlyphs_System_E8BE89,
    .width = 11,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B4BFTiles,
};

const struct GlyphNew TextGlyphs_System_E6B187 = { /* 汇 */
    .next = &TextGlyphs_System_E683A0,
    .width = 11,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B187Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AFB2 = { /* 诲 */
    .next = &TextGlyphs_System_E8B4BF,
    .width = 11,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AFB2Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BB98 = { /* 绘 */
    .next = &TextGlyphs_System_E7BC93,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BB98Tiles,
};

const struct GlyphNew TextGlyphs_System_E6988F = { /* 昏 */
    .next = &TextGlyphs_System_E6B187,
    .width = 9,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6988FTiles,
};

const struct GlyphNew TextGlyphs_System_E4BC99 = { /* 伙 */
    .next = &TextGlyphs_System_E4BA92,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BC99Tiles,
};

const struct GlyphNew TextGlyphs_System_E88EB7 = { /* 获 */
    .next = &TextGlyphs_System_E8AFB2,
    .width = 9,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88EB7Tiles,
};

const struct GlyphNew TextGlyphs_System_E68896 = { /* 或 */
    .next = &TextGlyphs_System_E6988F,
    .width = 9,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68896Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B4A7 = { /* 货 */
    .next = &TextGlyphs_System_E88EB7,
    .width = 11,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B4A7Tiles,
};

const struct GlyphNew TextGlyphs_System_E7A5B8 = { /* 祸 */
    .next = &TextGlyphs_System_E7BB98,
    .width = 9,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A5B8Tiles,
};

const struct GlyphNew TextGlyphs_System_E587BB = { /* 击 */
    .next = &TextGlyphs_System_E5B9BB,
    .width = 9,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E587BBTiles,
};

const struct GlyphNew TextGlyphs_System_E59CBE = { /* 圾 */
    .next = &TextGlyphs_System_E587BB,
    .width = 11,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59CBETiles,
};

const struct GlyphNew TextGlyphs_System_E69CBA = { /* 机 */
    .next = &TextGlyphs_System_E68896,
    .width = 9,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69CBATiles,
};

const struct GlyphNew TextGlyphs_System_E7A7AF = { /* 积 */
    .next = &TextGlyphs_System_E7A5B8,
    .width = 11,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A7AFTiles,
};

const struct GlyphNew TextGlyphs_System_E9A5A5 = { /* 饥 */
    .next = &TextGlyphs_System_E9BB91,
    .width = 11,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A5A5Tiles,
};

const struct GlyphNew TextGlyphs_System_E8BFB9 = { /* 迹 */
    .next = &TextGlyphs_System_E8B4A7,
    .width = 9,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BFB9Tiles,
};

const struct GlyphNew TextGlyphs_System_E9B8A1 = { /* 鸡 */
    .next = &TextGlyphs_System_E9A5A5,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9B8A1Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A7AC = { /* 姬 */
    .next = &TextGlyphs_System_E59CBE,
    .width = 9,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A7ACTiles,
};

const struct GlyphNew TextGlyphs_System_E7BBA9 = { /* 绩 */
    .next = &TextGlyphs_System_E7A7AF,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BBA9Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BC89 = { /* 缉 */
    .next = &TextGlyphs_System_E7BBA9,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BC89Tiles,
};

const struct GlyphNew TextGlyphs_System_E59089 = { /* 吉 */
    .next = &TextGlyphs_System_E5A7AC,
    .width = 9,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59089Tiles,
};

const struct GlyphNew TextGlyphs_System_E69E81 = { /* 极 */
    .next = &TextGlyphs_System_E69CBA,
    .width = 9,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69E81Tiles,
};

const struct GlyphNew TextGlyphs_System_E6A398 = { /* 棘 */
    .next = &TextGlyphs_System_E69E81,
    .width = 11,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A398Tiles,
};

const struct GlyphNew TextGlyphs_System_E7B18D = { /* 籍 */
    .next = &TextGlyphs_System_E7BC89,
    .width = 11,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B18DTiles,
};

const struct GlyphNew TextGlyphs_System_E58F8A = { /* 及 */
    .next = &TextGlyphs_System_E59089,
    .width = 9,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58F8ATiles,
};

const struct GlyphNew TextGlyphs_System_E58DB3 = { /* 即 */
    .next = &TextGlyphs_System_E58F8A,
    .width = 9,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58DB3Tiles,
};

const struct GlyphNew TextGlyphs_System_E5AB89 = { /* 嫉 */
    .next = &TextGlyphs_System_E58DB3,
    .width = 11,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AB89Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BAA7 = { /* 级 */
    .next = &TextGlyphs_System_E7B18D,
    .width = 9,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BAA7Tiles,
};

const struct GlyphNew TextGlyphs_System_E587A0 = { /* 几 */
    .next = &TextGlyphs_System_E5AB89,
    .width = 9,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E587A0Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BC8E = { /* 伎 */
    .next = &TextGlyphs_System_E4BC99,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BC8ETiles,
};

const struct GlyphNew TextGlyphs_System_E6B58E = { /* 济 */
    .next = &TextGlyphs_System_E6A398,
    .width = 9,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B58ETiles,
};

const struct GlyphNew TextGlyphs_System_E5AF82 = { /* 寂 */
    .next = &TextGlyphs_System_E587A0,
    .width = 9,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AF82Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AEA1 = { /* 计 */
    .next = &TextGlyphs_System_E8BFB9,
    .width = 9,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AEA1Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AEB0 = { /* 记 */
    .next = &TextGlyphs_System_E8AEA1,
    .width = 9,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AEB0Tiles,
};

const struct GlyphNew TextGlyphs_System_E697A2 = { /* 既 */
    .next = &TextGlyphs_System_E6B58E,
    .width = 9,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E697A2Tiles,
};

const struct GlyphNew TextGlyphs_System_E99985 = { /* 际 */
    .next = &TextGlyphs_System_E9B8A1,
    .width = 11,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99985Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BBA7 = { /* 继 */
    .next = &TextGlyphs_System_E7BAA7,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BBA7Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BAAA = { /* 纪 */
    .next = &TextGlyphs_System_E7BBA7,
    .width = 9,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BAAATiles,
};

const struct GlyphNew TextGlyphs_System_E59889 = { /* 嘉 */
    .next = &TextGlyphs_System_E5AF82,
    .width = 9,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59889Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A4B9 = { /* 夹 */
    .next = &TextGlyphs_System_E59889,
    .width = 9,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A4B9Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BDB3 = { /* 佳 */
    .next = &TextGlyphs_System_E4BC8E,
    .width = 9,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BDB3Tiles,
};

const struct GlyphNew TextGlyphs_System_E58187 = { /* 假 */
    .next = &TextGlyphs_System_E5A4B9,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58187Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BBB7 = { /* 价 */
    .next = &TextGlyphs_System_E4BDB3,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BBB7Tiles,
};

const struct GlyphNew TextGlyphs_System_E69EB6 = { /* 架 */
    .next = &TextGlyphs_System_E697A2,
    .width = 9,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69EB6Tiles,
};

const struct GlyphNew TextGlyphs_System_E9A9BE = { /* 驾 */
    .next = &TextGlyphs_System_E99985,
    .width = 9,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A9BETiles,
};

const struct GlyphNew TextGlyphs_System_E6ADBC = { /* 歼 */
    .next = &TextGlyphs_System_E69EB6,
    .width = 11,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6ADBCTiles,
};

const struct GlyphNew TextGlyphs_System_E79B91 = { /* 监 */
    .next = &TextGlyphs_System_E7BAAA,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79B91Tiles,
};

const struct GlyphNew TextGlyphs_System_E59D9A = { /* 坚 */
    .next = &TextGlyphs_System_E58187,
    .width = 9,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59D9ATiles,
};

const struct GlyphNew TextGlyphs_System_E5B096 = { /* 尖 */
    .next = &TextGlyphs_System_E59D9A,
    .width = 11,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B096Tiles,
};

const struct GlyphNew TextGlyphs_System_E997B4 = { /* 间 */
    .next = &TextGlyphs_System_E9A9BE,
    .width = 9,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E997B4Tiles,
};

const struct GlyphNew TextGlyphs_System_E585BC = { /* 兼 */
    .next = &TextGlyphs_System_E5B096,
    .width = 9,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E585BCTiles,
};

const struct GlyphNew TextGlyphs_System_E889B0 = { /* 艰 */
    .next = &TextGlyphs_System_E8AEB0,
    .width = 9,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E889B0Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A5B8 = { /* 奸 */
    .next = &TextGlyphs_System_E585BC,
    .width = 11,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A5B8Tiles,
};

const struct GlyphNew TextGlyphs_System_E68DA1 = { /* 捡 */
    .next = &TextGlyphs_System_E6ADBC,
    .width = 11,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68DA1Tiles,
};

const struct GlyphNew TextGlyphs_System_E7AE80 = { /* 简 */
    .next = &TextGlyphs_System_E79B91,
    .width = 9,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7AE80Tiles,
};

const struct GlyphNew TextGlyphs_System_E5878F = { /* 减 */
    .next = &TextGlyphs_System_E5A5B8,
    .width = 9,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5878FTiles,
};

const struct GlyphNew TextGlyphs_System_E88D90 = { /* 荐 */
    .next = &TextGlyphs_System_E889B0,
    .width = 11,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88D90Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B4B1 = { /* 贱 */
    .next = &TextGlyphs_System_E88D90,
    .width = 11,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B4B1Tiles,
};

const struct GlyphNew TextGlyphs_System_E8A781 = { /* 见 */
    .next = &TextGlyphs_System_E8B4B1,
    .width = 9,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A781Tiles,
};

const struct GlyphNew TextGlyphs_System_E994AE = { /* 键 */
    .next = &TextGlyphs_System_E997B4,
    .width = 9,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E994AETiles,
};

const struct GlyphNew TextGlyphs_System_E7AEAD = { /* 箭 */
    .next = &TextGlyphs_System_E7AE80,
    .width = 9,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7AEADTiles,
};

const struct GlyphNew TextGlyphs_System_E581A5 = { /* 健 */
    .next = &TextGlyphs_System_E5878F,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E581A5Tiles,
};

const struct GlyphNew TextGlyphs_System_E58991 = { /* 剑 */
    .next = &TextGlyphs_System_E581A5,
    .width = 9,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58991Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B890 = { /* 渐 */
    .next = &TextGlyphs_System_E68DA1,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B890Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A596 = { /* 奖 */
    .next = &TextGlyphs_System_E58991,
    .width = 9,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A596Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AEB2 = { /* 讲 */
    .next = &TextGlyphs_System_E8A781,
    .width = 9,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AEB2Tiles,
};

const struct GlyphNew TextGlyphs_System_E9AA84 = { /* 骄 */
    .next = &TextGlyphs_System_E994AE,
    .width = 9,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9AA84Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A887 = { /* 娇 */
    .next = &TextGlyphs_System_E5A596,
    .width = 11,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A887Tiles,
};

const struct GlyphNew TextGlyphs_System_E69085 = { /* 搅 */
    .next = &TextGlyphs_System_E6B890,
    .width = 11,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69085Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BEA5 = { /* 侥 */
    .next = &TextGlyphs_System_E4BBB7,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BEA5Tiles,
};

const struct GlyphNew TextGlyphs_System_E8849A = { /* 脚 */
    .next = &TextGlyphs_System_E8AEB2,
    .width = 9,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8849ATiles,
};

const struct GlyphNew TextGlyphs_System_E78BA1 = { /* 狡 */
    .next = &TextGlyphs_System_E7AEAD,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78BA1Tiles,
};

const struct GlyphNew TextGlyphs_System_E8A792 = { /* 角 */
    .next = &TextGlyphs_System_E8849A,
    .width = 9,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A792Tiles,
};

const struct GlyphNew TextGlyphs_System_E589BF = { /* 剿 */
    .next = &TextGlyphs_System_E5A887,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E589BFTiles,
};

const struct GlyphNew TextGlyphs_System_E8BE83 = { /* 较 */
    .next = &TextGlyphs_System_E8A792,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BE83Tiles,
};

const struct GlyphNew TextGlyphs_System_E58FAB = { /* 叫 */
    .next = &TextGlyphs_System_E589BF,
    .width = 9,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58FABTiles,
};

const struct GlyphNew TextGlyphs_System_E998B6 = { /* 阶 */
    .next = &TextGlyphs_System_E9AA84,
    .width = 11,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E998B6Tiles,
};

const struct GlyphNew TextGlyphs_System_E58AAB = { /* 劫 */
    .next = &TextGlyphs_System_E58FAB,
    .width = 9,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58AABTiles,
};

const struct GlyphNew TextGlyphs_System_E88A82 = { /* 节 */
    .next = &TextGlyphs_System_E8BE83,
    .width = 9,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88A82Tiles,
};

const struct GlyphNew TextGlyphs_System_E69DB0 = { /* 杰 */
    .next = &TextGlyphs_System_E69085,
    .width = 9,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69DB0Tiles,
};

const struct GlyphNew TextGlyphs_System_E68DB7 = { /* 捷 */
    .next = &TextGlyphs_System_E69DB0,
    .width = 9,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68DB7Tiles,
};

const struct GlyphNew TextGlyphs_System_E7ABAD = { /* 竭 */
    .next = &TextGlyphs_System_E78BA1,
    .width = 9,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7ABADTiles,
};

const struct GlyphNew TextGlyphs_System_E6B481 = { /* 洁 */
    .next = &TextGlyphs_System_E68DB7,
    .width = 9,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B481Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BB93 = { /* 结 */
    .next = &TextGlyphs_System_E7ABAD,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BB93Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A790 = { /* 姐 */
    .next = &TextGlyphs_System_E58AAB,
    .width = 9,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A790Tiles,
};

const struct GlyphNew TextGlyphs_System_E68892 = { /* 戒 */
    .next = &TextGlyphs_System_E6B481,
    .width = 9,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68892Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BB8B = { /* 介 */
    .next = &TextGlyphs_System_E4BEA5,
    .width = 11,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BB8BTiles,
};

const struct GlyphNew TextGlyphs_System_E6B4A5 = { /* 津 */
    .next = &TextGlyphs_System_E68892,
    .width = 9,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B4A5Tiles,
};

const struct GlyphNew TextGlyphs_System_E7B4A7 = { /* 紧 */
    .next = &TextGlyphs_System_E7BB93,
    .width = 9,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B4A7Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BB85 = { /* 仅 */
    .next = &TextGlyphs_System_E4BB8B,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BB85Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B0A8 = { /* 谨 */
    .next = &TextGlyphs_System_E88A82,
    .width = 9,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B0A8Tiles,
};

const struct GlyphNew TextGlyphs_System_E8BF9B = { /* 进 */
    .next = &TextGlyphs_System_E8B0A8,
    .width = 9,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BF9BTiles,
};

const struct GlyphNew TextGlyphs_System_E6998B = { /* 晋 */
    .next = &TextGlyphs_System_E6B4A5,
    .width = 9,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6998BTiles,
};

const struct GlyphNew TextGlyphs_System_E783AC = { /* 烬 */
    .next = &TextGlyphs_System_E7B4A7,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E783ACTiles,
};

const struct GlyphNew TextGlyphs_System_E6B5B8 = { /* 浸 */
    .next = &TextGlyphs_System_E6998B,
    .width = 11,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B5B8Tiles,
};

const struct GlyphNew TextGlyphs_System_E58AB2 = { /* 劲 */
    .next = &TextGlyphs_System_E5A790,
    .width = 9,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58AB2Tiles,
};

const struct GlyphNew TextGlyphs_System_E79D9B = { /* 睛 */
    .next = &TextGlyphs_System_E783AC,
    .width = 11,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79D9BTiles,
};

const struct GlyphNew TextGlyphs_System_E6838A = { /* 惊 */
    .next = &TextGlyphs_System_E6B5B8,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6838ATiles,
};

const struct GlyphNew TextGlyphs_System_E7BB8F = { /* 经 */
    .next = &TextGlyphs_System_E79D9B,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BB8FTiles,
};

const struct GlyphNew TextGlyphs_System_E4BA95 = { /* 井 */
    .next = &TextGlyphs_System_E4BB85,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BA95Tiles,
};

const struct GlyphNew TextGlyphs_System_E9959C = { /* 镜 */
    .next = &TextGlyphs_System_E998B6,
    .width = 11,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9959CTiles,
};

const struct GlyphNew TextGlyphs_System_E7AB9F = { /* 竟 */
    .next = &TextGlyphs_System_E7BB8F,
    .width = 9,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7AB9FTiles,
};

const struct GlyphNew TextGlyphs_System_E7AB9E = { /* 竞 */
    .next = &TextGlyphs_System_E7AB9F,
    .width = 9,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7AB9ETiles,
};

const struct GlyphNew TextGlyphs_System_E58780 = { /* 净 */
    .next = &TextGlyphs_System_E58AB2,
    .width = 9,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58780Tiles,
};

const struct GlyphNew TextGlyphs_System_E68FAA = { /* 揪 */
    .next = &TextGlyphs_System_E6838A,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68FAATiles,
};

const struct GlyphNew TextGlyphs_System_E7BAA0 = { /* 纠 */
    .next = &TextGlyphs_System_E7AB9E,
    .width = 10,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BAA0Tiles,
};

const struct GlyphNew TextGlyphs_System_E88885 = { /* 舅 */
    .next = &TextGlyphs_System_E8BF9B,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88885Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B0B1 = { /* 就 */
    .next = &TextGlyphs_System_E58780,
    .width = 9,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B0B1Tiles,
};

const struct GlyphNew TextGlyphs_System_E99EA0 = { /* 鞠 */
    .next = &TextGlyphs_System_E9959C,
    .width = 11,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99EA0Tiles,
};

const struct GlyphNew TextGlyphs_System_E68B98 = { /* 拘 */
    .next = &TextGlyphs_System_E68FAA,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68B98Tiles,
};

const struct GlyphNew TextGlyphs_System_E78B99 = { /* 狙 */
    .next = &TextGlyphs_System_E7BAA0,
    .width = 9,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78B99Tiles,
};

const struct GlyphNew TextGlyphs_System_E79FA9 = { /* 矩 */
    .next = &TextGlyphs_System_E78B99,
    .width = 11,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79FA9Tiles,
};

const struct GlyphNew TextGlyphs_System_E4B8BE = { /* 举 */
    .next = &TextGlyphs_System_E4BA95,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B8BETiles,
};

const struct GlyphNew TextGlyphs_System_E6B2AE = { /* 沮 */
    .next = &TextGlyphs_System_E68B98,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B2AETiles,
};

const struct GlyphNew TextGlyphs_System_E8819A = { /* 聚 */
    .next = &TextGlyphs_System_E88885,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8819ATiles,
};

const struct GlyphNew TextGlyphs_System_E68DAE = { /* 据 */
    .next = &TextGlyphs_System_E6B2AE,
    .width = 9,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68DAETiles,
};

const struct GlyphNew TextGlyphs_System_E8B79D = { /* 距 */
    .next = &TextGlyphs_System_E8819A,
    .width = 9,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B79DTiles,
};

const struct GlyphNew TextGlyphs_System_E8B89E = { /* 踞 */
    .next = &TextGlyphs_System_E8B79D,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B89ETiles,
};

const struct GlyphNew TextGlyphs_System_E58FA5 = { /* 句 */
    .next = &TextGlyphs_System_E5B0B1,
    .width = 9,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58FA5Tiles,
};

const struct GlyphNew TextGlyphs_System_E683A7 = { /* 惧 */
    .next = &TextGlyphs_System_E68DAE,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E683A7Tiles,
};

const struct GlyphNew TextGlyphs_System_E589A7 = { /* 剧 */
    .next = &TextGlyphs_System_E58FA5,
    .width = 9,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E589A7Tiles,
};

const struct GlyphNew TextGlyphs_System_E580A6 = { /* 倦 */
    .next = &TextGlyphs_System_E589A7,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E580A6Tiles,
};

const struct GlyphNew TextGlyphs_System_E79CB7 = { /* 眷 */
    .next = &TextGlyphs_System_E79FA9,
    .width = 9,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79CB7Tiles,
};

const struct GlyphNew TextGlyphs_System_E58DB7 = { /* 卷 */
    .next = &TextGlyphs_System_E580A6,
    .width = 9,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58DB7Tiles,
};

const struct GlyphNew TextGlyphs_System_E8A789 = { /* 觉 */
    .next = &TextGlyphs_System_E8B89E,
    .width = 9,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A789Tiles,
};

const struct GlyphNew TextGlyphs_System_E586B3 = { /* 决 */
    .next = &TextGlyphs_System_E58DB7,
    .width = 9,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E586B3Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AF80 = { /* 诀 */
    .next = &TextGlyphs_System_E8A789,
    .width = 11,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AF80Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BB9D = { /* 绝 */
    .next = &TextGlyphs_System_E79CB7,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BB9DTiles,
};

const struct GlyphNew TextGlyphs_System_E59D87 = { /* 均 */
    .next = &TextGlyphs_System_E586B3,
    .width = 9,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59D87Tiles,
};

const struct GlyphNew TextGlyphs_System_E5869B = { /* 军 */
    .next = &TextGlyphs_System_E59D87,
    .width = 9,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5869BTiles,
};

const struct GlyphNew TextGlyphs_System_E5B3BB = { /* 峻 */
    .next = &TextGlyphs_System_E5869B,
    .width = 11,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B3BBTiles,
};

const struct GlyphNew TextGlyphs_System_E4BF8A = { /* 俊 */
    .next = &TextGlyphs_System_E4B8BE,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BF8ATiles,
};

const struct GlyphNew TextGlyphs_System_E58DA1 = { /* 卡 */
    .next = &TextGlyphs_System_E5B3BB,
    .width = 9,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58DA1Tiles,
};

const struct GlyphNew TextGlyphs_System_E592AF = { /* 咯 */
    .next = &TextGlyphs_System_E58DA1,
    .width = 11,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E592AFTiles,
};

const struct GlyphNew TextGlyphs_System_E5BC80 = { /* 开 */
    .next = &TextGlyphs_System_E592AF,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BC80Tiles,
};

const struct GlyphNew TextGlyphs_System_E6A5B7 = { /* 楷 */
    .next = &TextGlyphs_System_E683A7,
    .width = 11,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A5B7Tiles,
};

const struct GlyphNew TextGlyphs_System_E587AF = { /* 凯 */
    .next = &TextGlyphs_System_E5BC80,
    .width = 9,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E587AFTiles,
};

const struct GlyphNew TextGlyphs_System_E685A8 = { /* 慨 */
    .next = &TextGlyphs_System_E6A5B7,
    .width = 9,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E685A8Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A0AA = { /* 堪 */
    .next = &TextGlyphs_System_E587AF,
    .width = 9,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A0AATiles,
};

const struct GlyphNew TextGlyphs_System_E59D8E = { /* 坎 */
    .next = &TextGlyphs_System_E5A0AA,
    .width = 9,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59D8ETiles,
};

const struct GlyphNew TextGlyphs_System_E7A08D = { /* 砍 */
    .next = &TextGlyphs_System_E7BB9D,
    .width = 9,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A08DTiles,
};

const struct GlyphNew TextGlyphs_System_E79C8B = { /* 看 */
    .next = &TextGlyphs_System_E7A08D,
    .width = 9,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79C8BTiles,
};

const struct GlyphNew TextGlyphs_System_E5BAB7 = { /* 康 */
    .next = &TextGlyphs_System_E59D8E,
    .width = 9,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BAB7Tiles,
};

const struct GlyphNew TextGlyphs_System_E88083 = { /* 考 */
    .next = &TextGlyphs_System_E8AF80,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88083Tiles,
};

const struct GlyphNew TextGlyphs_System_E68BB7 = { /* 拷 */
    .next = &TextGlyphs_System_E685A8,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68BB7Tiles,
};

const struct GlyphNew TextGlyphs_System_E99DA0 = { /* 靠 */
    .next = &TextGlyphs_System_E99EA0,
    .width = 9,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99DA0Tiles,
};

const struct GlyphNew TextGlyphs_System_E69FAF = { /* 柯 */
    .next = &TextGlyphs_System_E68BB7,
    .width = 9,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69FAFTiles,
};

const struct GlyphNew TextGlyphs_System_E6A3B5 = { /* 棵 */
    .next = &TextGlyphs_System_E69FAF,
    .width = 11,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A3B5Tiles,
};

const struct GlyphNew TextGlyphs_System_E7A395 = { /* 磕 */
    .next = &TextGlyphs_System_E79C8B,
    .width = 11,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A395Tiles,
};

const struct GlyphNew TextGlyphs_System_E9A297 = { /* 颗 */
    .next = &TextGlyphs_System_E99DA0,
    .width = 9,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A297Tiles,
};

const struct GlyphNew TextGlyphs_System_E7A791 = { /* 科 */
    .next = &TextGlyphs_System_E7A395,
    .width = 9,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A791Tiles,
};

const struct GlyphNew TextGlyphs_System_E592B3 = { /* 咳 */
    .next = &TextGlyphs_System_E5BAB7,
    .width = 11,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E592B3Tiles,
};

const struct GlyphNew TextGlyphs_System_E5858B = { /* 克 */
    .next = &TextGlyphs_System_E592B3,
    .width = 9,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5858BTiles,
};

const struct GlyphNew TextGlyphs_System_E5AEA2 = { /* 客 */
    .next = &TextGlyphs_System_E5858B,
    .width = 9,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AEA2Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AFBE = { /* 课 */
    .next = &TextGlyphs_System_E88083,
    .width = 9,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AFBETiles,
};

const struct GlyphNew TextGlyphs_System_E882AF = { /* 肯 */
    .next = &TextGlyphs_System_E8AFBE,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E882AFTiles,
};

const struct GlyphNew TextGlyphs_System_E59583 = { /* 啃 */
    .next = &TextGlyphs_System_E5AEA2,
    .width = 11,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59583Tiles,
};

const struct GlyphNew TextGlyphs_System_E59EA6 = { /* 垦 */
    .next = &TextGlyphs_System_E59583,
    .width = 9,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59EA6Tiles,
};

const struct GlyphNew TextGlyphs_System_E681B3 = { /* 恳 */
    .next = &TextGlyphs_System_E6A3B5,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E681B3Tiles,
};

const struct GlyphNew TextGlyphs_System_E59D91 = { /* 坑 */
    .next = &TextGlyphs_System_E59EA6,
    .width = 11,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59D91Tiles,
};

const struct GlyphNew TextGlyphs_System_E5AD94 = { /* 孔 */
    .next = &TextGlyphs_System_E59D91,
    .width = 9,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AD94Tiles,
};

const struct GlyphNew TextGlyphs_System_E689A3 = { /* 扣 */
    .next = &TextGlyphs_System_E681B3,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E689A3Tiles,
};

const struct GlyphNew TextGlyphs_System_E69EAF = { /* 枯 */
    .next = &TextGlyphs_System_E689A3,
    .width = 11,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69EAFTiles,
};

const struct GlyphNew TextGlyphs_System_E593AD = { /* 哭 */
    .next = &TextGlyphs_System_E5AD94,
    .width = 9,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E593ADTiles,
};

const struct GlyphNew TextGlyphs_System_E5BA93 = { /* 库 */
    .next = &TextGlyphs_System_E593AD,
    .width = 9,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BA93Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A4B8 = { /* 夸 */
    .next = &TextGlyphs_System_E5BA93,
    .width = 11,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A4B8Tiles,
};

const struct GlyphNew TextGlyphs_System_E59D97 = { /* 块 */
    .next = &TextGlyphs_System_E5A4B8,
    .width = 11,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59D97Tiles,
};

const struct GlyphNew TextGlyphs_System_E5AEBD = { /* 宽 */
    .next = &TextGlyphs_System_E59D97,
    .width = 11,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AEBDTiles,
};

const struct GlyphNew TextGlyphs_System_E79FBF = { /* 矿 */
    .next = &TextGlyphs_System_E7A791,
    .width = 9,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79FBFTiles,
};

const struct GlyphNew TextGlyphs_System_E586B5 = { /* 况 */
    .next = &TextGlyphs_System_E5AEBD,
    .width = 9,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E586B5Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BA8F = { /* 亏 */
    .next = &TextGlyphs_System_E4BF8A,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BA8FTiles,
};

const struct GlyphNew TextGlyphs_System_E79B94 = { /* 盔 */
    .next = &TextGlyphs_System_E79FBF,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79B94Tiles,
};

const struct GlyphNew TextGlyphs_System_E7AAA5 = { /* 窥 */
    .next = &TextGlyphs_System_E79B94,
    .width = 9,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7AAA5Tiles,
};

const struct GlyphNew TextGlyphs_System_E9AD81 = { /* 魁 */
    .next = &TextGlyphs_System_E9A297,
    .width = 11,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9AD81Tiles,
};

const struct GlyphNew TextGlyphs_System_E58280 = { /* 傀 */
    .next = &TextGlyphs_System_E586B5,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58280Tiles,
};

const struct GlyphNew TextGlyphs_System_E684A7 = { /* 愧 */
    .next = &TextGlyphs_System_E69EAF,
    .width = 11,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E684A7Tiles,
};

const struct GlyphNew TextGlyphs_System_E6BA83 = { /* 溃 */
    .next = &TextGlyphs_System_E684A7,
    .width = 9,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6BA83Tiles,
};

const struct GlyphNew TextGlyphs_System_E68BAC = { /* 括 */
    .next = &TextGlyphs_System_E6BA83,
    .width = 9,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68BACTiles,
};

const struct GlyphNew TextGlyphs_System_E689A9 = { /* 扩 */
    .next = &TextGlyphs_System_E68BAC,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E689A9Tiles,
};

const struct GlyphNew TextGlyphs_System_E99894 = { /* 阔 */
    .next = &TextGlyphs_System_E9AD81,
    .width = 9,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99894Tiles,
};

const struct GlyphNew TextGlyphs_System_E59E83 = { /* 垃 */
    .next = &TextGlyphs_System_E58280,
    .width = 11,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59E83Tiles,
};

const struct GlyphNew TextGlyphs_System_E68B89 = { /* 拉 */
    .next = &TextGlyphs_System_E689A9,
    .width = 9,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68B89Tiles,
};

const struct GlyphNew TextGlyphs_System_E595A6 = { /* 啦 */
    .next = &TextGlyphs_System_E59E83,
    .width = 11,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E595A6Tiles,
};

const struct GlyphNew TextGlyphs_System_E88EB1 = { /* 莱 */
    .next = &TextGlyphs_System_E882AF,
    .width = 9,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88EB1Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B596 = { /* 赖 */
    .next = &TextGlyphs_System_E88EB1,
    .width = 9,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B596Tiles,
};

const struct GlyphNew TextGlyphs_System_E8939D = { /* 蓝 */
    .next = &TextGlyphs_System_E8B596,
    .width = 9,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8939DTiles,
};

const struct GlyphNew TextGlyphs_System_E6A08F = { /* 栏 */
    .next = &TextGlyphs_System_E68B89,
    .width = 11,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A08FTiles,
};

const struct GlyphNew TextGlyphs_System_E7AFAE = { /* 篮 */
    .next = &TextGlyphs_System_E7AAA5,
    .width = 11,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7AFAETiles,
};

const struct GlyphNew TextGlyphs_System_E585B0 = { /* 兰 */
    .next = &TextGlyphs_System_E595A6,
    .width = 9,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E585B0Tiles,
};

const struct GlyphNew TextGlyphs_System_E8A788 = { /* 览 */
    .next = &TextGlyphs_System_E8939D,
    .width = 9,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A788Tiles,
};

const struct GlyphNew TextGlyphs_System_E68792 = { /* 懒 */
    .next = &TextGlyphs_System_E6A08F,
    .width = 9,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68792Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BC86 = { /* 缆 */
    .next = &TextGlyphs_System_E7AFAE,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BC86Tiles,
};

const struct GlyphNew TextGlyphs_System_E78382 = { /* 烂 */
    .next = &TextGlyphs_System_E7BC86,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78382Tiles,
};

const struct GlyphNew TextGlyphs_System_E6BBA5 = { /* 滥 */
    .next = &TextGlyphs_System_E68792,
    .width = 11,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6BBA5Tiles,
};

const struct GlyphNew TextGlyphs_System_E58AB3 = { /* 劳 */
    .next = &TextGlyphs_System_E585B0,
    .width = 9,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58AB3Tiles,
};

const struct GlyphNew TextGlyphs_System_E4B990 = { /* 乐 */
    .next = &TextGlyphs_System_E4BA8F,
    .width = 9,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B990Tiles,
};

const struct GlyphNew TextGlyphs_System_E895BE = { /* 蕾 */
    .next = &TextGlyphs_System_E8A788,
    .width = 9,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E895BETiles,
};

const struct GlyphNew TextGlyphs_System_E7B4AF = { /* 累 */
    .next = &TextGlyphs_System_E78382,
    .width = 11,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B4AFTiles,
};

const struct GlyphNew TextGlyphs_System_E584A1 = { /* 儡 */
    .next = &TextGlyphs_System_E58AB3,
    .width = 11,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E584A1Tiles,
};

const struct GlyphNew TextGlyphs_System_E59E92 = { /* 垒 */
    .next = &TextGlyphs_System_E584A1,
    .width = 11,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59E92Tiles,
};

const struct GlyphNew TextGlyphs_System_E7B1BB = { /* 类 */
    .next = &TextGlyphs_System_E7B4AF,
    .width = 9,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B1BBTiles,
};

const struct GlyphNew TextGlyphs_System_E6B3AA = { /* 泪 */
    .next = &TextGlyphs_System_E6BBA5,
    .width = 9,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B3AATiles,
};

const struct GlyphNew TextGlyphs_System_E6A59E = { /* 楞 */
    .next = &TextGlyphs_System_E6B3AA,
    .width = 11,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A59ETiles,
};

const struct GlyphNew TextGlyphs_System_E7A6BB = { /* 离 */
    .next = &TextGlyphs_System_E7B1BB,
    .width = 9,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A6BBTiles,
};

const struct GlyphNew TextGlyphs_System_E88E89 = { /* 莉 */
    .next = &TextGlyphs_System_E895BE,
    .width = 9,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88E89Tiles,
};

const struct GlyphNew TextGlyphs_System_E5908F = { /* 吏 */
    .next = &TextGlyphs_System_E59E92,
    .width = 9,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5908FTiles,
};

const struct GlyphNew TextGlyphs_System_E4B8BD = { /* 丽 */
    .next = &TextGlyphs_System_E4B990,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B8BDTiles,
};

const struct GlyphNew TextGlyphs_System_E58E89 = { /* 厉 */
    .next = &TextGlyphs_System_E5908F,
    .width = 9,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58E89Tiles,
};

const struct GlyphNew TextGlyphs_System_E58AB1 = { /* 励 */
    .next = &TextGlyphs_System_E58E89,
    .width = 9,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58AB1Tiles,
};

const struct GlyphNew TextGlyphs_System_E58E86 = { /* 历 */
    .next = &TextGlyphs_System_E58AB1,
    .width = 9,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58E86Tiles,
};

const struct GlyphNew TextGlyphs_System_E99AB6 = { /* 隶 */
    .next = &TextGlyphs_System_E99894,
    .width = 11,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99AB6Tiles,
};

const struct GlyphNew TextGlyphs_System_E593A9 = { /* 哩 */
    .next = &TextGlyphs_System_E58E86,
    .width = 11,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E593A9Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BFA9 = { /* 俩 */
    .next = &TextGlyphs_System_E4B8BD,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BFA9Tiles,
};

const struct GlyphNew TextGlyphs_System_E88194 = { /* 联 */
    .next = &TextGlyphs_System_E88E89,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88194Tiles,
};

const struct GlyphNew TextGlyphs_System_E88EB2 = { /* 莲 */
    .next = &TextGlyphs_System_E88194,
    .width = 9,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88EB2Tiles,
};

const struct GlyphNew TextGlyphs_System_E8BF9E = { /* 连 */
    .next = &TextGlyphs_System_E88EB2,
    .width = 9,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BF9ETiles,
};

const struct GlyphNew TextGlyphs_System_E6809C = { /* 怜 */
    .next = &TextGlyphs_System_E6A59E,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6809CTiles,
};

const struct GlyphNew TextGlyphs_System_E884B8 = { /* 脸 */
    .next = &TextGlyphs_System_E8BF9E,
    .width = 9,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E884B8Tiles,
};

const struct GlyphNew TextGlyphs_System_E993BE = { /* 链 */
    .next = &TextGlyphs_System_E99AB6,
    .width = 9,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E993BETiles,
};

const struct GlyphNew TextGlyphs_System_E782BC = { /* 炼 */
    .next = &TextGlyphs_System_E7A6BB,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E782BCTiles,
};

const struct GlyphNew TextGlyphs_System_E7BB83 = { /* 练 */
    .next = &TextGlyphs_System_E782BC,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BB83Tiles,
};

const struct GlyphNew TextGlyphs_System_E7B2AE = { /* 粮 */
    .next = &TextGlyphs_System_E7BB83,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B2AETiles,
};

const struct GlyphNew TextGlyphs_System_E58789 = { /* 凉 */
    .next = &TextGlyphs_System_E593A9,
    .width = 11,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58789Tiles,
};

const struct GlyphNew TextGlyphs_System_E4B8A4 = { /* 两 */
    .next = &TextGlyphs_System_E4BFA9,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B8A4Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BAAE = { /* 亮 */
    .next = &TextGlyphs_System_E4B8A4,
    .width = 9,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BAAETiles,
};

const struct GlyphNew TextGlyphs_System_E8B085 = { /* 谅 */
    .next = &TextGlyphs_System_E884B8,
    .width = 11,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B085Tiles,
};

const struct GlyphNew TextGlyphs_System_E8818A = { /* 聊 */
    .next = &TextGlyphs_System_E8B085,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8818ATiles,
};

const struct GlyphNew TextGlyphs_System_E79697 = { /* 疗 */
    .next = &TextGlyphs_System_E7B2AE,
    .width = 9,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79697Tiles,
};

const struct GlyphNew TextGlyphs_System_E58897 = { /* 列 */
    .next = &TextGlyphs_System_E58789,
    .width = 9,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58897Tiles,
};

const struct GlyphNew TextGlyphs_System_E78C8E = { /* 猎 */
    .next = &TextGlyphs_System_E79697,
    .width = 9,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78C8ETiles,
};

const struct GlyphNew TextGlyphs_System_E4B8B4 = { /* 临 */
    .next = &TextGlyphs_System_E4BAAE,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B8B4Tiles,
};

const struct GlyphNew TextGlyphs_System_E982BB = { /* 邻 */
    .next = &TextGlyphs_System_E993BE,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E982BBTiles,
};

const struct GlyphNew TextGlyphs_System_E9B39E = { /* 鳞 */
    .next = &TextGlyphs_System_E982BB,
    .width = 11,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9B39ETiles,
};

const struct GlyphNew TextGlyphs_System_E5879B = { /* 凛 */
    .next = &TextGlyphs_System_E58897,
    .width = 9,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5879BTiles,
};

const struct GlyphNew TextGlyphs_System_E99BB6 = { /* 零 */
    .next = &TextGlyphs_System_E9B39E,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99BB6Tiles,
};

const struct GlyphNew TextGlyphs_System_E9BE84 = { /* 龄 */
    .next = &TextGlyphs_System_E99BB6,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9BE84Tiles,
};

const struct GlyphNew TextGlyphs_System_E5878C = { /* 凌 */
    .next = &TextGlyphs_System_E5879B,
    .width = 11,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5878CTiles,
};

const struct GlyphNew TextGlyphs_System_E781B5 = { /* 灵 */
    .next = &TextGlyphs_System_E78C8E,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E781B5Tiles,
};

const struct GlyphNew TextGlyphs_System_E9A286 = { /* 领 */
    .next = &TextGlyphs_System_E9BE84,
    .width = 9,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A286Tiles,
};

const struct GlyphNew TextGlyphs_System_E58FA6 = { /* 另 */
    .next = &TextGlyphs_System_E5878C,
    .width = 9,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58FA6Tiles,
};

const struct GlyphNew TextGlyphs_System_E6BA9C = { /* 溜 */
    .next = &TextGlyphs_System_E6809C,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6BA9CTiles,
};

const struct GlyphNew TextGlyphs_System_E9BE99 = { /* 龙 */
    .next = &TextGlyphs_System_E9A286,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9BE99Tiles,
};

const struct GlyphNew TextGlyphs_System_E8818B = { /* 聋 */
    .next = &TextGlyphs_System_E8818A,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8818BTiles,
};

const struct GlyphNew TextGlyphs_System_E7ACBC = { /* 笼 */
    .next = &TextGlyphs_System_E781B5,
    .width = 9,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7ACBCTiles,
};

const struct GlyphNew TextGlyphs_System_E99A86 = { /* 隆 */
    .next = &TextGlyphs_System_E9BE99,
    .width = 9,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99A86Tiles,
};

const struct GlyphNew TextGlyphs_System_E6A5BC = { /* 楼 */
    .next = &TextGlyphs_System_E6BA9C,
    .width = 9,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A5BCTiles,
};

const struct GlyphNew TextGlyphs_System_E6BC8F = { /* 漏 */
    .next = &TextGlyphs_System_E6A5BC,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6BC8FTiles,
};

const struct GlyphNew TextGlyphs_System_E9998B = { /* 陋 */
    .next = &TextGlyphs_System_E99A86,
    .width = 11,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9998BTiles,
};

const struct GlyphNew TextGlyphs_System_E58DA2 = { /* 卢 */
    .next = &TextGlyphs_System_E58FA6,
    .width = 9,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58DA2Tiles,
};

const struct GlyphNew TextGlyphs_System_E8998F = { /* 虏 */
    .next = &TextGlyphs_System_E8818B,
    .width = 11,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8998FTiles,
};

const struct GlyphNew TextGlyphs_System_E9B281 = { /* 鲁 */
    .next = &TextGlyphs_System_E9998B,
    .width = 9,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9B281Tiles,
};

const struct GlyphNew TextGlyphs_System_E99CB2 = { /* 露 */
    .next = &TextGlyphs_System_E9B281,
    .width = 9,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99CB2Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B582 = { /* 赂 */
    .next = &TextGlyphs_System_E8998F,
    .width = 11,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B582Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BD95 = { /* 录 */
    .next = &TextGlyphs_System_E58DA2,
    .width = 9,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BD95Tiles,
};

const struct GlyphNew TextGlyphs_System_E99986 = { /* 陆 */
    .next = &TextGlyphs_System_E99CB2,
    .width = 9,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99986Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BEA3 = { /* 侣 */
    .next = &TextGlyphs_System_E4B8B4,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BEA3Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B1A1 = { /* 屡 */
    .next = &TextGlyphs_System_E5BD95,
    .width = 11,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B1A1Tiles,
};

const struct GlyphNew TextGlyphs_System_E89991 = { /* 虑 */
    .next = &TextGlyphs_System_E8B582,
    .width = 9,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E89991Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BE8B = { /* 律 */
    .next = &TextGlyphs_System_E5B1A1,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BE8BTiles,
};

const struct GlyphNew TextGlyphs_System_E7BBBF = { /* 绿 */
    .next = &TextGlyphs_System_E7ACBC,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BBBFTiles,
};

const struct GlyphNew TextGlyphs_System_E8BDAE = { /* 轮 */
    .next = &TextGlyphs_System_E89991,
    .width = 9,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BDAETiles,
};

const struct GlyphNew TextGlyphs_System_E4BCA6 = { /* 伦 */
    .next = &TextGlyphs_System_E4BEA3,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BCA6Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B2A6 = { /* 沦 */
    .next = &TextGlyphs_System_E6BC8F,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B2A6Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AEBA = { /* 论 */
    .next = &TextGlyphs_System_E8BDAE,
    .width = 9,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AEBATiles,
};

const struct GlyphNew TextGlyphs_System_E7BD97 = { /* 罗 */
    .next = &TextGlyphs_System_E7BBBF,
    .width = 9,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BD97Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B49B = { /* 洛 */
    .next = &TextGlyphs_System_E6B2A6,
    .width = 9,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B49BTiles,
};

const struct GlyphNew TextGlyphs_System_E7BB9C = { /* 络 */
    .next = &TextGlyphs_System_E7BD97,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BB9CTiles,
};

const struct GlyphNew TextGlyphs_System_E5A688 = { /* 妈 */
    .next = &TextGlyphs_System_E5BE8B,
    .width = 11,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A688Tiles,
};

const struct GlyphNew TextGlyphs_System_E9BABB = { /* 麻 */
    .next = &TextGlyphs_System_E99986,
    .width = 9,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9BABBTiles,
};

const struct GlyphNew TextGlyphs_System_E78E9B = { /* 玛 */
    .next = &TextGlyphs_System_E7BB9C,
    .width = 9,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78E9BTiles,
};

const struct GlyphNew TextGlyphs_System_E7A081 = { /* 码 */
    .next = &TextGlyphs_System_E78E9B,
    .width = 11,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A081Tiles,
};

const struct GlyphNew TextGlyphs_System_E9A9AC = { /* 马 */
    .next = &TextGlyphs_System_E9BABB,
    .width = 9,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A9ACTiles,
};

const struct GlyphNew TextGlyphs_System_E9AA82 = { /* 骂 */
    .next = &TextGlyphs_System_E9A9AC,
    .width = 9,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9AA82Tiles,
};

const struct GlyphNew TextGlyphs_System_E5989B = { /* 嘛 */
    .next = &TextGlyphs_System_E5A688,
    .width = 11,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5989BTiles,
};

const struct GlyphNew TextGlyphs_System_E59097 = { /* 吗 */
    .next = &TextGlyphs_System_E5989B,
    .width = 9,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59097Tiles,
};

const struct GlyphNew TextGlyphs_System_E4B9B0 = { /* 买 */
    .next = &TextGlyphs_System_E4BCA6,
    .width = 9,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B9B0Tiles,
};

const struct GlyphNew TextGlyphs_System_E58D96 = { /* 卖 */
    .next = &TextGlyphs_System_E59097,
    .width = 9,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58D96Tiles,
};

const struct GlyphNew TextGlyphs_System_E8BF88 = { /* 迈 */
    .next = &TextGlyphs_System_E8AEBA,
    .width = 9,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BF88Tiles,
};

const struct GlyphNew TextGlyphs_System_E88489 = { /* 脉 */
    .next = &TextGlyphs_System_E8BF88,
    .width = 11,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88489Tiles,
};

const struct GlyphNew TextGlyphs_System_E79E92 = { /* 瞒 */
    .next = &TextGlyphs_System_E7A081,
    .width = 11,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79E92Tiles,
};

const struct GlyphNew TextGlyphs_System_E6BBA1 = { /* 满 */
    .next = &TextGlyphs_System_E6B49B,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6BBA1Tiles,
};

const struct GlyphNew TextGlyphs_System_E89493 = { /* 蔓 */
    .next = &TextGlyphs_System_E88489,
    .width = 9,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E89493Tiles,
};

const struct GlyphNew TextGlyphs_System_E6BCAB = { /* 漫 */
    .next = &TextGlyphs_System_E6BBA1,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6BCABTiles,
};

const struct GlyphNew TextGlyphs_System_E88A92 = { /* 芒 */
    .next = &TextGlyphs_System_E89493,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88A92Tiles,
};

const struct GlyphNew TextGlyphs_System_E88CAB = { /* 茫 */
    .next = &TextGlyphs_System_E88A92,
    .width = 9,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88CABTiles,
};

const struct GlyphNew TextGlyphs_System_E79BB2 = { /* 盲 */
    .next = &TextGlyphs_System_E79E92,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79BB2Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B093 = { /* 氓 */
    .next = &TextGlyphs_System_E6BCAB,
    .width = 9,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B093Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BF99 = { /* 忙 */
    .next = &TextGlyphs_System_E58D96,
    .width = 9,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BF99Tiles,
};

const struct GlyphNew TextGlyphs_System_E88EBD = { /* 莽 */
    .next = &TextGlyphs_System_E88CAB,
    .width = 11,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88EBDTiles,
};

const struct GlyphNew TextGlyphs_System_E88C85 = { /* 茅 */
    .next = &TextGlyphs_System_E88EBD,
    .width = 11,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88C85Tiles,
};

const struct GlyphNew TextGlyphs_System_E88C82 = { /* 茂 */
    .next = &TextGlyphs_System_E88C85,
    .width = 9,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88C82Tiles,
};

const struct GlyphNew TextGlyphs_System_E58692 = { /* 冒 */
    .next = &TextGlyphs_System_E5BF99,
    .width = 10,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58692Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B28C = { /* 貌 */
    .next = &TextGlyphs_System_E88C82,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B28CTiles,
};

const struct GlyphNew TextGlyphs_System_E4B988 = { /* 么 */
    .next = &TextGlyphs_System_E4B9B0,
    .width = 9,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B988Tiles,
};

const struct GlyphNew TextGlyphs_System_E6A285 = { /* 梅 */
    .next = &TextGlyphs_System_E6B093,
    .width = 9,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A285Tiles,
};

const struct GlyphNew TextGlyphs_System_E99C89 = { /* 霉 */
    .next = &TextGlyphs_System_E9AA82,
    .width = 11,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99C89Tiles,
};

const struct GlyphNew TextGlyphs_System_E79C89 = { /* 眉 */
    .next = &TextGlyphs_System_E79BB2,
    .width = 10,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79C89Tiles,
};

const struct GlyphNew TextGlyphs_System_E6AF8F = { /* 每 */
    .next = &TextGlyphs_System_E6A285,
    .width = 9,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6AF8FTiles,
};

const struct GlyphNew TextGlyphs_System_E698A7 = { /* 昧 */
    .next = &TextGlyphs_System_E6AF8F,
    .width = 11,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E698A7Tiles,
};

const struct GlyphNew TextGlyphs_System_E5AA9A = { /* 媚 */
    .next = &TextGlyphs_System_E58692,
    .width = 11,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AA9ATiles,
};

const struct GlyphNew TextGlyphs_System_E997A8 = { /* 门 */
    .next = &TextGlyphs_System_E99C89,
    .width = 8,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E997A8Tiles,
};

const struct GlyphNew TextGlyphs_System_E997B7 = { /* 闷 */
    .next = &TextGlyphs_System_E997A8,
    .width = 8,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E997B7Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BBAC = { /* 们 */
    .next = &TextGlyphs_System_E4B988,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BBACTiles,
};

const struct GlyphNew TextGlyphs_System_E89299 = { /* 蒙 */
    .next = &TextGlyphs_System_E8B28C,
    .width = 9,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E89299Tiles,
};

const struct GlyphNew TextGlyphs_System_E6A2A6 = { /* 梦 */
    .next = &TextGlyphs_System_E698A7,
    .width = 9,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A2A6Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B09C = { /* 谜 */
    .next = &TextGlyphs_System_E89299,
    .width = 9,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B09CTiles,
};

const struct GlyphNew TextGlyphs_System_E5BCA5 = { /* 弥 */
    .next = &TextGlyphs_System_E5AA9A,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BCA5Tiles,
};

const struct GlyphNew TextGlyphs_System_E7B1B3 = { /* 米 */
    .next = &TextGlyphs_System_E79C89,
    .width = 9,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B1B3Tiles,
};

const struct GlyphNew TextGlyphs_System_E79CA0 = { /* 眠 */
    .next = &TextGlyphs_System_E7B1B3,
    .width = 9,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79CA0Tiles,
};

const struct GlyphNew TextGlyphs_System_E58695 = { /* 冕 */
    .next = &TextGlyphs_System_E5BCA5,
    .width = 11,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58695Tiles,
};

const struct GlyphNew TextGlyphs_System_E5858D = { /* 免 */
    .next = &TextGlyphs_System_E58695,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5858DTiles,
};

const struct GlyphNew TextGlyphs_System_E88B97 = { /* 苗 */
    .next = &TextGlyphs_System_E8B09C,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88B97Tiles,
};

const struct GlyphNew TextGlyphs_System_E68F8F = { /* 描 */
    .next = &TextGlyphs_System_E6A2A6,
    .width = 9,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68F8FTiles,
};

const struct GlyphNew TextGlyphs_System_E79E84 = { /* 瞄 */
    .next = &TextGlyphs_System_E79CA0,
    .width = 11,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79E84Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B8BA = { /* 渺 */
    .next = &TextGlyphs_System_E68F8F,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B8BATiles,
};

const struct GlyphNew TextGlyphs_System_E781AD = { /* 灭 */
    .next = &TextGlyphs_System_E79E84,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E781ADTiles,
};

const struct GlyphNew TextGlyphs_System_E6958F = { /* 敏 */
    .next = &TextGlyphs_System_E6B8BA,
    .width = 9,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6958FTiles,
};

const struct GlyphNew TextGlyphs_System_E8B0AC = { /* 谬 */
    .next = &TextGlyphs_System_E88B97,
    .width = 11,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B0ACTiles,
};

const struct GlyphNew TextGlyphs_System_E691B8 = { /* 摸 */
    .next = &TextGlyphs_System_E6958F,
    .width = 9,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E691B8Tiles,
};

const struct GlyphNew TextGlyphs_System_E68AB9 = { /* 抹 */
    .next = &TextGlyphs_System_E691B8,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68AB9Tiles,
};

const struct GlyphNew TextGlyphs_System_E88EAB = { /* 莫 */
    .next = &TextGlyphs_System_E8B0AC,
    .width = 9,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88EABTiles,
};

const struct GlyphNew TextGlyphs_System_E9BB98 = { /* 默 */
    .next = &TextGlyphs_System_E997B7,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9BB98Tiles,
};

const struct GlyphNew TextGlyphs_System_E5AF9E = { /* 寞 */
    .next = &TextGlyphs_System_E5858D,
    .width = 9,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AF9ETiles,
};

const struct GlyphNew TextGlyphs_System_E9998C = { /* 陌 */
    .next = &TextGlyphs_System_E9BB98,
    .width = 11,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9998CTiles,
};

const struct GlyphNew TextGlyphs_System_E8B08B = { /* 谋 */
    .next = &TextGlyphs_System_E88EAB,
    .width = 9,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B08BTiles,
};

const struct GlyphNew TextGlyphs_System_E69F90 = { /* 某 */
    .next = &TextGlyphs_System_E68AB9,
    .width = 9,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69F90Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A786 = { /* 姆 */
    .next = &TextGlyphs_System_E5AF9E,
    .width = 9,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A786Tiles,
};

const struct GlyphNew TextGlyphs_System_E68595 = { /* 慕 */
    .next = &TextGlyphs_System_E69F90,
    .width = 9,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68595Tiles,
};

const struct GlyphNew TextGlyphs_System_E79DA6 = { /* 睦 */
    .next = &TextGlyphs_System_E781AD,
    .width = 9,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79DA6Tiles,
};

const struct GlyphNew TextGlyphs_System_E7A986 = { /* 穆 */
    .next = &TextGlyphs_System_E79DA6,
    .width = 9,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A986Tiles,
};

const struct GlyphNew TextGlyphs_System_E68BBF = { /* 拿 */
    .next = &TextGlyphs_System_E68595,
    .width = 9,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68BBFTiles,
};

const struct GlyphNew TextGlyphs_System_E593AA = { /* 哪 */
    .next = &TextGlyphs_System_E5A786,
    .width = 9,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E593AATiles,
};

const struct GlyphNew TextGlyphs_System_E992A0 = { /* 钠 */
    .next = &TextGlyphs_System_E9998C,
    .width = 9,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E992A0Tiles,
};

const struct GlyphNew TextGlyphs_System_E982A3 = { /* 那 */
    .next = &TextGlyphs_System_E992A0,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E982A3Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A89C = { /* 娜 */
    .next = &TextGlyphs_System_E593AA,
    .width = 9,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A89CTiles,
};

const struct GlyphNew TextGlyphs_System_E7BAB3 = { /* 纳 */
    .next = &TextGlyphs_System_E7A986,
    .width = 9,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BAB3Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A5B6 = { /* 奶 */
    .next = &TextGlyphs_System_E5A89C,
    .width = 11,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A5B6Tiles,
};

const struct GlyphNew TextGlyphs_System_E88090 = { /* 耐 */
    .next = &TextGlyphs_System_E8B08B,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88090Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A588 = { /* 奈 */
    .next = &TextGlyphs_System_E5A5B6,
    .width = 9,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A588Tiles,
};

const struct GlyphNew TextGlyphs_System_E99ABE = { /* 难 */
    .next = &TextGlyphs_System_E982A3,
    .width = 9,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99ABETiles,
};

const struct GlyphNew TextGlyphs_System_E68CA0 = { /* 挠 */
    .next = &TextGlyphs_System_E68BBF,
    .width = 11,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68CA0Tiles,
};

const struct GlyphNew TextGlyphs_System_E88491 = { /* 脑 */
    .next = &TextGlyphs_System_E88090,
    .width = 9,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88491Tiles,
};

const struct GlyphNew TextGlyphs_System_E681BC = { /* 恼 */
    .next = &TextGlyphs_System_E68CA0,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E681BCTiles,
};

const struct GlyphNew TextGlyphs_System_E997B9 = { /* 闹 */
    .next = &TextGlyphs_System_E99ABE,
    .width = 8,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E997B9Tiles,
};

const struct GlyphNew TextGlyphs_System_E591A2 = { /* 呢 */
    .next = &TextGlyphs_System_E5A588,
    .width = 9,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E591A2Tiles,
};

const struct GlyphNew TextGlyphs_System_E5ABA9 = { /* 嫩 */
    .next = &TextGlyphs_System_E591A2,
    .width = 9,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5ABA9Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A6AE = { /* 妮 */
    .next = &TextGlyphs_System_E5ABA9,
    .width = 9,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A6AETiles,
};

const struct GlyphNew TextGlyphs_System_E5B0BC = { /* 尼 */
    .next = &TextGlyphs_System_E5A6AE,
    .width = 9,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B0BCTiles,
};

const struct GlyphNew TextGlyphs_System_E4BDA0 = { /* 你 */
    .next = &TextGlyphs_System_E4BBAC,
    .width = 9,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BDA0Tiles,
};

const struct GlyphNew TextGlyphs_System_E9B89F = { /* 鸟 */
    .next = &TextGlyphs_System_E997B9,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9B89FTiles,
};

const struct GlyphNew TextGlyphs_System_E682A8 = { /* 您 */
    .next = &TextGlyphs_System_E681BC,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E682A8Tiles,
};

const struct GlyphNew TextGlyphs_System_E5879D = { /* 凝 */
    .next = &TextGlyphs_System_E5B0BC,
    .width = 9,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5879DTiles,
};

const struct GlyphNew TextGlyphs_System_E5AE81 = { /* 宁 */
    .next = &TextGlyphs_System_E5879D,
    .width = 9,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AE81Tiles,
};

const struct GlyphNew TextGlyphs_System_E7899B = { /* 牛 */
    .next = &TextGlyphs_System_E7BAB3,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7899BTiles,
};

const struct GlyphNew TextGlyphs_System_E689AD = { /* 扭 */
    .next = &TextGlyphs_System_E682A8,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E689ADTiles,
};

const struct GlyphNew TextGlyphs_System_E6B593 = { /* 浓 */
    .next = &TextGlyphs_System_E689AD,
    .width = 11,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B593Tiles,
};

const struct GlyphNew TextGlyphs_System_E5869C = { /* 农 */
    .next = &TextGlyphs_System_E5AE81,
    .width = 9,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5869CTiles,
};

const struct GlyphNew TextGlyphs_System_E5BC84 = { /* 弄 */
    .next = &TextGlyphs_System_E5869C,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BC84Tiles,
};

const struct GlyphNew TextGlyphs_System_E687A6 = { /* 懦 */
    .next = &TextGlyphs_System_E6B593,
    .width = 11,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E687A6Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AFBA = { /* 诺 */
    .next = &TextGlyphs_System_E88491,
    .width = 9,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AFBATiles,
};

const struct GlyphNew TextGlyphs_System_E593A6 = { /* 哦 */
    .next = &TextGlyphs_System_E5BC84,
    .width = 11,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E593A6Tiles,
};

const struct GlyphNew TextGlyphs_System_E581B6 = { /* 偶 */
    .next = &TextGlyphs_System_E593A6,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E581B6Tiles,
};

const struct GlyphNew TextGlyphs_System_E788AC = { /* 爬 */
    .next = &TextGlyphs_System_E7899B,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E788ACTiles,
};

const struct GlyphNew TextGlyphs_System_E68095 = { /* 怕 */
    .next = &TextGlyphs_System_E687A6,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68095Tiles,
};

const struct GlyphNew TextGlyphs_System_E68E92 = { /* 排 */
    .next = &TextGlyphs_System_E68095,
    .width = 9,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68E92Tiles,
};

const struct GlyphNew TextGlyphs_System_E7898C = { /* 牌 */
    .next = &TextGlyphs_System_E788AC,
    .width = 9,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7898CTiles,
};

const struct GlyphNew TextGlyphs_System_E5BE98 = { /* 徘 */
    .next = &TextGlyphs_System_E581B6,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BE98Tiles,
};

const struct GlyphNew TextGlyphs_System_E6BD98 = { /* 潘 */
    .next = &TextGlyphs_System_E68E92,
    .width = 9,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6BD98Tiles,
};

const struct GlyphNew TextGlyphs_System_E79B98 = { /* 盘 */
    .next = &TextGlyphs_System_E7898C,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79B98Tiles,
};

const struct GlyphNew TextGlyphs_System_E7A390 = { /* 磐 */
    .next = &TextGlyphs_System_E79B98,
    .width = 9,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A390Tiles,
};

const struct GlyphNew TextGlyphs_System_E79BBC = { /* 盼 */
    .next = &TextGlyphs_System_E7A390,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79BBCTiles,
};

const struct GlyphNew TextGlyphs_System_E58F9B = { /* 叛 */
    .next = &TextGlyphs_System_E5BE98,
    .width = 9,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58F9BTiles,
};

const struct GlyphNew TextGlyphs_System_E5BA9E = { /* 庞 */
    .next = &TextGlyphs_System_E58F9B,
    .width = 9,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BA9ETiles,
};

const struct GlyphNew TextGlyphs_System_E69781 = { /* 旁 */
    .next = &TextGlyphs_System_E6BD98,
    .width = 9,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69781Tiles,
};

const struct GlyphNew TextGlyphs_System_E88396 = { /* 胖 */
    .next = &TextGlyphs_System_E8AFBA,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88396Tiles,
};

const struct GlyphNew TextGlyphs_System_E68A9B = { /* 抛 */
    .next = &TextGlyphs_System_E69781,
    .width = 9,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68A9BTiles,
};

const struct GlyphNew TextGlyphs_System_E8A28D = { /* 袍 */
    .next = &TextGlyphs_System_E88396,
    .width = 11,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A28DTiles,
};

const struct GlyphNew TextGlyphs_System_E8B791 = { /* 跑 */
    .next = &TextGlyphs_System_E8A28D,
    .width = 11,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B791Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B3A1 = { /* 泡 */
    .next = &TextGlyphs_System_E68A9B,
    .width = 11,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B3A1Tiles,
};

const struct GlyphNew TextGlyphs_System_E591B8 = { /* 呸 */
    .next = &TextGlyphs_System_E5BA9E,
    .width = 11,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E591B8Tiles,
};

const struct GlyphNew TextGlyphs_System_E59FB9 = { /* 培 */
    .next = &TextGlyphs_System_E591B8,
    .width = 9,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59FB9Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B594 = { /* 赔 */
    .next = &TextGlyphs_System_E8B791,
    .width = 11,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B594Tiles,
};

const struct GlyphNew TextGlyphs_System_E999AA = { /* 陪 */
    .next = &TextGlyphs_System_E9B89F,
    .width = 9,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E999AATiles,
};

const struct GlyphNew TextGlyphs_System_E4BDA9 = { /* 佩 */
    .next = &TextGlyphs_System_E4BDA0,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BDA9Tiles,
};

const struct GlyphNew TextGlyphs_System_E596B7 = { /* 喷 */
    .next = &TextGlyphs_System_E59FB9,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E596B7Tiles,
};

const struct GlyphNew TextGlyphs_System_E893AC = { /* 蓬 */
    .next = &TextGlyphs_System_E8B594,
    .width = 11,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E893ACTiles,
};

const struct GlyphNew TextGlyphs_System_E69C8B = { /* 朋 */
    .next = &TextGlyphs_System_E6B3A1,
    .width = 9,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69C8BTiles,
};

const struct GlyphNew TextGlyphs_System_E7A2B0 = { /* 碰 */
    .next = &TextGlyphs_System_E79BBC,
    .width = 11,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A2B0Tiles,
};

const struct GlyphNew TextGlyphs_System_E689B9 = { /* 批 */
    .next = &TextGlyphs_System_E69C8B,
    .width = 9,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E689B9Tiles,
};

const struct GlyphNew TextGlyphs_System_E884BE = { /* 脾 */
    .next = &TextGlyphs_System_E893AC,
    .width = 11,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E884BETiles,
};

const struct GlyphNew TextGlyphs_System_E796B2 = { /* 疲 */
    .next = &TextGlyphs_System_E7A2B0,
    .width = 9,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E796B2Tiles,
};

const struct GlyphNew TextGlyphs_System_E79AAE = { /* 皮 */
    .next = &TextGlyphs_System_E796B2,
    .width = 11,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79AAETiles,
};

const struct GlyphNew TextGlyphs_System_E58CB9 = { /* 匹 */
    .next = &TextGlyphs_System_E596B7,
    .width = 8,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58CB9Tiles,
};

const struct GlyphNew TextGlyphs_System_E583BB = { /* 僻 */
    .next = &TextGlyphs_System_E58CB9,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E583BBTiles,
};

const struct GlyphNew TextGlyphs_System_E5B181 = { /* 屁 */
    .next = &TextGlyphs_System_E583BB,
    .width = 11,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B181Tiles,
};

const struct GlyphNew TextGlyphs_System_E5818F = { /* 偏 */
    .next = &TextGlyphs_System_E5B181,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5818FTiles,
};

const struct GlyphNew TextGlyphs_System_E9AA97 = { /* 骗 */
    .next = &TextGlyphs_System_E999AA,
    .width = 11,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9AA97Tiles,
};

const struct GlyphNew TextGlyphs_System_E9A398 = { /* 飘 */
    .next = &TextGlyphs_System_E9AA97,
    .width = 11,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A398Tiles,
};

const struct GlyphNew TextGlyphs_System_E6BC82 = { /* 漂 */
    .next = &TextGlyphs_System_E689B9,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6BC82Tiles,
};

const struct GlyphNew TextGlyphs_System_E68BBC = { /* 拼 */
    .next = &TextGlyphs_System_E6BC82,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68BBCTiles,
};

const struct GlyphNew TextGlyphs_System_E9A291 = { /* 频 */
    .next = &TextGlyphs_System_E9A398,
    .width = 11,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A291Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B4AB = { /* 贫 */
    .next = &TextGlyphs_System_E884BE,
    .width = 9,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B4ABTiles,
};

const struct GlyphNew TextGlyphs_System_E587AD = { /* 凭 */
    .next = &TextGlyphs_System_E5818F,
    .width = 9,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E587ADTiles,
};

const struct GlyphNew TextGlyphs_System_E8AF84 = { /* 评 */
    .next = &TextGlyphs_System_E8B4AB,
    .width = 9,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AF84Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B18F = { /* 屏 */
    .next = &TextGlyphs_System_E587AD,
    .width = 9,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B18FTiles,
};

const struct GlyphNew TextGlyphs_System_E6B3BC = { /* 泼 */
    .next = &TextGlyphs_System_E68BBC,
    .width = 9,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B3BCTiles,
};

const struct GlyphNew TextGlyphs_System_E5A986 = { /* 婆 */
    .next = &TextGlyphs_System_E5B18F,
    .width = 9,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A986Tiles,
};

const struct GlyphNew TextGlyphs_System_E9AD84 = { /* 魄 */
    .next = &TextGlyphs_System_E9A291,
    .width = 9,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9AD84Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BB86 = { /* 仆 */
    .next = &TextGlyphs_System_E4BDA9,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BB86Tiles,
};

const struct GlyphNew TextGlyphs_System_E69CB4 = { /* 朴 */
    .next = &TextGlyphs_System_E6B3BC,
    .width = 9,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69CB4Tiles,
};

const struct GlyphNew TextGlyphs_System_E6ACBA = { /* 欺 */
    .next = &TextGlyphs_System_E69CB4,
    .width = 11,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6ACBATiles,
};

const struct GlyphNew TextGlyphs_System_E6BC86 = { /* 漆 */
    .next = &TextGlyphs_System_E6ACBA,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6BC86Tiles,
};

const struct GlyphNew TextGlyphs_System_E585B6 = { /* 其 */
    .next = &TextGlyphs_System_E5A986,
    .width = 9,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E585B6Tiles,
};

const struct GlyphNew TextGlyphs_System_E6A38B = { /* 棋 */
    .next = &TextGlyphs_System_E6BC86,
    .width = 11,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A38BTiles,
};

const struct GlyphNew TextGlyphs_System_E9BD90 = { /* 齐 */
    .next = &TextGlyphs_System_E9AD84,
    .width = 9,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9BD90Tiles,
};

const struct GlyphNew TextGlyphs_System_E7A588 = { /* 祈 */
    .next = &TextGlyphs_System_E79AAE,
    .width = 9,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A588Tiles,
};

const struct GlyphNew TextGlyphs_System_E9AA91 = { /* 骑 */
    .next = &TextGlyphs_System_E9BD90,
    .width = 9,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9AA91Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B282 = { /* 岂 */
    .next = &TextGlyphs_System_E585B6,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B282Tiles,
};

const struct GlyphNew TextGlyphs_System_E4B99E = { /* 乞 */
    .next = &TextGlyphs_System_E4BB86,
    .width = 11,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B99ETiles,
};

const struct GlyphNew TextGlyphs_System_E590AF = { /* 启 */
    .next = &TextGlyphs_System_E5B282,
    .width = 9,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E590AFTiles,
};

const struct GlyphNew TextGlyphs_System_E6B094 = { /* 气 */
    .next = &TextGlyphs_System_E6A38B,
    .width = 9,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B094Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BC83 = { /* 弃 */
    .next = &TextGlyphs_System_E590AF,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BC83Tiles,
};

const struct GlyphNew TextGlyphs_System_E68E90 = { /* 掐 */
    .next = &TextGlyphs_System_E6B094,
    .width = 11,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68E90Tiles,
};

const struct GlyphNew TextGlyphs_System_E789B5 = { /* 牵 */
    .next = &TextGlyphs_System_E7A588,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E789B5Tiles,
};

const struct GlyphNew TextGlyphs_System_E8BF81 = { /* 迁 */
    .next = &TextGlyphs_System_E8AF84,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BF81Tiles,
};

const struct GlyphNew TextGlyphs_System_E7ADBE = { /* 签 */
    .next = &TextGlyphs_System_E789B5,
    .width = 9,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7ADBETiles,
};

const struct GlyphNew TextGlyphs_System_E8B0A6 = { /* 谦 */
    .next = &TextGlyphs_System_E8BF81,
    .width = 11,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B0A6Tiles,
};

const struct GlyphNew TextGlyphs_System_E992B1 = { /* 钱 */
    .next = &TextGlyphs_System_E9AA91,
    .width = 9,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E992B1Tiles,
};

const struct GlyphNew TextGlyphs_System_E6BD9C = { /* 潜 */
    .next = &TextGlyphs_System_E68E90,
    .width = 9,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6BD9CTiles,
};

const struct GlyphNew TextGlyphs_System_E6B585 = { /* 浅 */
    .next = &TextGlyphs_System_E6BD9C,
    .width = 11,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B585Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B58C = { /* 嵌 */
    .next = &TextGlyphs_System_E5BC83,
    .width = 11,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B58CTiles,
};

const struct GlyphNew TextGlyphs_System_E6ACA0 = { /* 欠 */
    .next = &TextGlyphs_System_E6B585,
    .width = 11,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6ACA0Tiles,
};

const struct GlyphNew TextGlyphs_System_E6AD89 = { /* 歉 */
    .next = &TextGlyphs_System_E6ACA0,
    .width = 11,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6AD89Tiles,
};

const struct GlyphNew TextGlyphs_System_E69EAA = { /* 枪 */
    .next = &TextGlyphs_System_E6AD89,
    .width = 9,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69EAATiles,
};

const struct GlyphNew TextGlyphs_System_E88594 = { /* 腔 */
    .next = &TextGlyphs_System_E8B0A6,
    .width = 9,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88594Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A299 = { /* 墙 */
    .next = &TextGlyphs_System_E5B58C,
    .width = 9,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A299Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BCBA = { /* 强 */
    .next = &TextGlyphs_System_E5A299,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BCBATiles,
};

const struct GlyphNew TextGlyphs_System_E68AA2 = { /* 抢 */
    .next = &TextGlyphs_System_E69EAA,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68AA2Tiles,
};

const struct GlyphNew TextGlyphs_System_E695B2 = { /* 敲 */
    .next = &TextGlyphs_System_E68AA2,
    .width = 11,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E695B2Tiles,
};

const struct GlyphNew TextGlyphs_System_E68284 = { /* 悄 */
    .next = &TextGlyphs_System_E695B2,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68284Tiles,
};

const struct GlyphNew TextGlyphs_System_E6A1A5 = { /* 桥 */
    .next = &TextGlyphs_System_E68284,
    .width = 9,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A1A5Tiles,
};

const struct GlyphNew TextGlyphs_System_E79EA7 = { /* 瞧 */
    .next = &TextGlyphs_System_E7ADBE,
    .width = 11,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79EA7Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B7A7 = { /* 巧 */
    .next = &TextGlyphs_System_E5BCBA,
    .width = 9,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B7A7Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BF98 = { /* 翘 */
    .next = &TextGlyphs_System_E79EA7,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BF98Tiles,
};

const struct GlyphNew TextGlyphs_System_E7AA8D = { /* 窍 */
    .next = &TextGlyphs_System_E7BF98,
    .width = 11,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7AA8DTiles,
};

const struct GlyphNew TextGlyphs_System_E4B894 = { /* 且 */
    .next = &TextGlyphs_System_E4B99E,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B894Tiles,
};

const struct GlyphNew TextGlyphs_System_E680AF = { /* 怯 */
    .next = &TextGlyphs_System_E6A1A5,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E680AFTiles,
};

const struct GlyphNew TextGlyphs_System_E4BAB2 = { /* 亲 */
    .next = &TextGlyphs_System_E4B894,
    .width = 9,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BAB2Tiles,
};

const struct GlyphNew TextGlyphs_System_E58BA4 = { /* 勤 */
    .next = &TextGlyphs_System_E5B7A7,
    .width = 9,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58BA4Tiles,
};

const struct GlyphNew TextGlyphs_System_E8BDBB = { /* 轻 */
    .next = &TextGlyphs_System_E88594,
    .width = 9,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BDBBTiles,
};

const struct GlyphNew TextGlyphs_System_E580BE = { /* 倾 */
    .next = &TextGlyphs_System_E58BA4,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E580BETiles,
};

const struct GlyphNew TextGlyphs_System_E8AFB7 = { /* 请 */
    .next = &TextGlyphs_System_E8BDBB,
    .width = 9,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AFB7Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BA86 = { /* 庆 */
    .next = &TextGlyphs_System_E580BE,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BA86Tiles,
};

const struct GlyphNew TextGlyphs_System_E7A9B7 = { /* 穷 */
    .next = &TextGlyphs_System_E7AA8D,
    .width = 11,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A9B7Tiles,
};

const struct GlyphNew TextGlyphs_System_E58CBA = { /* 区 */
    .next = &TextGlyphs_System_E5BA86,
    .width = 8,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58CBATiles,
};

const struct GlyphNew TextGlyphs_System_E69BB2 = { /* 曲 */
    .next = &TextGlyphs_System_E680AF,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69BB2Tiles,
};

const struct GlyphNew TextGlyphs_System_E9A9B1 = { /* 驱 */
    .next = &TextGlyphs_System_E992B1,
    .width = 9,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A9B1Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A8B6 = { /* 娶 */
    .next = &TextGlyphs_System_E58CBA,
    .width = 9,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A8B6Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B6A3 = { /* 趣 */
    .next = &TextGlyphs_System_E8AFB7,
    .width = 9,
    .utf_byte_2 = 0xb6,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B6A3Tiles,
};

const struct GlyphNew TextGlyphs_System_E59C88 = { /* 圈 */
    .next = &TextGlyphs_System_E5A8B6,
    .width = 9,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59C88Tiles,
};

const struct GlyphNew TextGlyphs_System_E69D83 = { /* 权 */
    .next = &TextGlyphs_System_E69BB2,
    .width = 9,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69D83Tiles,
};

const struct GlyphNew TextGlyphs_System_E7978A = { /* 痊 */
    .next = &TextGlyphs_System_E7A9B7,
    .width = 9,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7978ATiles,
};

const struct GlyphNew TextGlyphs_System_E68BB3 = { /* 拳 */
    .next = &TextGlyphs_System_E69D83,
    .width = 9,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68BB3Tiles,
};

const struct GlyphNew TextGlyphs_System_E588B8 = { /* 券 */
    .next = &TextGlyphs_System_E59C88,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E588B8Tiles,
};

const struct GlyphNew TextGlyphs_System_E58A9D = { /* 劝 */
    .next = &TextGlyphs_System_E588B8,
    .width = 9,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58A9DTiles,
};

const struct GlyphNew TextGlyphs_System_E7BCBA = { /* 缺 */
    .next = &TextGlyphs_System_E7978A,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BCBATiles,
};

const struct GlyphNew TextGlyphs_System_E7A1AE = { /* 确 */
    .next = &TextGlyphs_System_E7BCBA,
    .width = 9,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A1AETiles,
};

const struct GlyphNew TextGlyphs_System_E78783 = { /* 燃 */
    .next = &TextGlyphs_System_E7A1AE,
    .width = 11,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78783Tiles,
};

const struct GlyphNew TextGlyphs_System_E59AB7 = { /* 嚷 */
    .next = &TextGlyphs_System_E58A9D,
    .width = 11,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59AB7Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AEA9 = { /* 让 */
    .next = &TextGlyphs_System_E8B6A3,
    .width = 9,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AEA9Tiles,
};

const struct GlyphNew TextGlyphs_System_E9A5B6 = { /* 饶 */
    .next = &TextGlyphs_System_E9A9B1,
    .width = 9,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A5B6Tiles,
};

const struct GlyphNew TextGlyphs_System_E689B0 = { /* 扰 */
    .next = &TextGlyphs_System_E68BB3,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E689B0Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BB95 = { /* 绕 */
    .next = &TextGlyphs_System_E78783,
    .width = 11,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BB95Tiles,
};

const struct GlyphNew TextGlyphs_System_E683B9 = { /* 惹 */
    .next = &TextGlyphs_System_E689B0,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E683B9Tiles,
};

const struct GlyphNew TextGlyphs_System_E783AD = { /* 热 */
    .next = &TextGlyphs_System_E7BB95,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E783ADTiles,
};

const struct GlyphNew TextGlyphs_System_E4BB81 = { /* 仁 */
    .next = &TextGlyphs_System_E4BAB2,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BB81Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BF8D = { /* 忍 */
    .next = &TextGlyphs_System_E59AB7,
    .width = 9,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BF8DTiles,
};

const struct GlyphNew TextGlyphs_System_E99FA7 = { /* 韧 */
    .next = &TextGlyphs_System_E9A5B6,
    .width = 9,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99FA7Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AEA4 = { /* 认 */
    .next = &TextGlyphs_System_E8AEA9,
    .width = 9,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AEA4Tiles,
};

const struct GlyphNew TextGlyphs_System_E68994 = { /* 扔 */
    .next = &TextGlyphs_System_E683B9,
    .width = 9,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68994Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BB8D = { /* 仍 */
    .next = &TextGlyphs_System_E4BB81,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BB8DTiles,
};

const struct GlyphNew TextGlyphs_System_E6888E = { /* 戎 */
    .next = &TextGlyphs_System_E68994,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6888ETiles,
};

const struct GlyphNew TextGlyphs_System_E88DA3 = { /* 荣 */
    .next = &TextGlyphs_System_E8AEA4,
    .width = 9,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88DA3Tiles,
};

const struct GlyphNew TextGlyphs_System_E89E8D = { /* 融 */
    .next = &TextGlyphs_System_E88DA3,
    .width = 11,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E89E8DTiles,
};

const struct GlyphNew TextGlyphs_System_E78694 = { /* 熔 */
    .next = &TextGlyphs_System_E783AD,
    .width = 9,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78694Tiles,
};

const struct GlyphNew TextGlyphs_System_E69F94 = { /* 柔 */
    .next = &TextGlyphs_System_E6888E,
    .width = 9,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69F94Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A682 = { /* 如 */
    .next = &TextGlyphs_System_E5BF8D,
    .width = 9,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A682Tiles,
};

const struct GlyphNew TextGlyphs_System_E8BEB1 = { /* 辱 */
    .next = &TextGlyphs_System_E89E8D,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BEB1Tiles,
};

const struct GlyphNew TextGlyphs_System_E4B9B3 = { /* 乳 */
    .next = &TextGlyphs_System_E4BB8D,
    .width = 9,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B9B3Tiles,
};

const struct GlyphNew TextGlyphs_System_E8BDAF = { /* 软 */
    .next = &TextGlyphs_System_E8BEB1,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BDAFTiles,
};

const struct GlyphNew TextGlyphs_System_E7919E = { /* 瑞 */
    .next = &TextGlyphs_System_E78694,
    .width = 9,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7919ETiles,
};

const struct GlyphNew TextGlyphs_System_E99490 = { /* 锐 */
    .next = &TextGlyphs_System_E99FA7,
    .width = 9,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99490Tiles,
};

const struct GlyphNew TextGlyphs_System_E69292 = { /* 撒 */
    .next = &TextGlyphs_System_E69F94,
    .width = 9,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69292Tiles,
};

const struct GlyphNew TextGlyphs_System_E890A8 = { /* 萨 */
    .next = &TextGlyphs_System_E8BDAF,
    .width = 9,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E890A8Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B59B = { /* 赛 */
    .next = &TextGlyphs_System_E890A8,
    .width = 11,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B59BTiles,
};

const struct GlyphNew TextGlyphs_System_E59793 = { /* 嗓 */
    .next = &TextGlyphs_System_E5A682,
    .width = 11,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59793Tiles,
};

const struct GlyphNew TextGlyphs_System_E4B8A7 = { /* 丧 */
    .next = &TextGlyphs_System_E4B9B3,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B8A7Tiles,
};

const struct GlyphNew TextGlyphs_System_E9AA9A = { /* 骚 */
    .next = &TextGlyphs_System_E99490,
    .width = 9,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9AA9ATiles,
};

const struct GlyphNew TextGlyphs_System_E689AB = { /* 扫 */
    .next = &TextGlyphs_System_E69292,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E689ABTiles,
};

const struct GlyphNew TextGlyphs_System_E6B6A9 = { /* 涩 */
    .next = &TextGlyphs_System_E689AB,
    .width = 11,
    .utf_byte_2 = 0xb6,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B6A9Tiles,
};

const struct GlyphNew TextGlyphs_System_E69D80 = { /* 杀 */
    .next = &TextGlyphs_System_E6B6A9,
    .width = 9,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69D80Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B299 = { /* 沙 */
    .next = &TextGlyphs_System_E69D80,
    .width = 9,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B299Tiles,
};

const struct GlyphNew TextGlyphs_System_E582BB = { /* 傻 */
    .next = &TextGlyphs_System_E59793,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E582BBTiles,
};

const struct GlyphNew TextGlyphs_System_E595A5 = { /* 啥 */
    .next = &TextGlyphs_System_E582BB,
    .width = 11,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E595A5Tiles,
};

const struct GlyphNew TextGlyphs_System_E588A0 = { /* 删 */
    .next = &TextGlyphs_System_E595A5,
    .width = 9,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E588A0Tiles,
};

const struct GlyphNew TextGlyphs_System_E997AA = { /* 闪 */
    .next = &TextGlyphs_System_E9AA9A,
    .width = 9,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E997AATiles,
};

const struct GlyphNew TextGlyphs_System_E69385 = { /* 擅 */
    .next = &TextGlyphs_System_E6B299,
    .width = 9,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69385Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BCA4 = { /* 伤 */
    .next = &TextGlyphs_System_E4B8A7,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BCA4Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B58F = { /* 赏 */
    .next = &TextGlyphs_System_E8B59B,
    .width = 9,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B58FTiles,
};

const struct GlyphNew TextGlyphs_System_E5B09A = { /* 尚 */
    .next = &TextGlyphs_System_E588A0,
    .width = 8,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B09ATiles,
};

const struct GlyphNew TextGlyphs_System_E7A88D = { /* 稍 */
    .next = &TextGlyphs_System_E7919E,
    .width = 9,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A88DTiles,
};

const struct GlyphNew TextGlyphs_System_E783A7 = { /* 烧 */
    .next = &TextGlyphs_System_E7A88D,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E783A7Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BB8D = { /* 绍 */
    .next = &TextGlyphs_System_E783A7,
    .width = 11,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BB8DTiles,
};

const struct GlyphNew TextGlyphs_System_E89B87 = { /* 蛇 */
    .next = &TextGlyphs_System_E8B58F,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E89B87Tiles,
};

const struct GlyphNew TextGlyphs_System_E8888D = { /* 舍 */
    .next = &TextGlyphs_System_E89B87,
    .width = 9,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8888DTiles,
};

const struct GlyphNew TextGlyphs_System_E6B689 = { /* 涉 */
    .next = &TextGlyphs_System_E69385,
    .width = 11,
    .utf_byte_2 = 0xb6,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B689Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AEBE = { /* 设 */
    .next = &TextGlyphs_System_E8888D,
    .width = 9,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AEBETiles,
};

const struct GlyphNew TextGlyphs_System_E591BB = { /* 呻 */
    .next = &TextGlyphs_System_E5B09A,
    .width = 11,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E591BBTiles,
};

const struct GlyphNew TextGlyphs_System_E4BCB8 = { /* 伸 */
    .next = &TextGlyphs_System_E4BCA4,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BCB8Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BB85 = { /* 绅 */
    .next = &TextGlyphs_System_E7BB8D,
    .width = 11,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BB85Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A9B6 = { /* 婶 */
    .next = &TextGlyphs_System_E591BB,
    .width = 11,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A9B6Tiles,
};

const struct GlyphNew TextGlyphs_System_E7949A = { /* 甚 */
    .next = &TextGlyphs_System_E7BB85,
    .width = 9,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7949ATiles,
};

const struct GlyphNew TextGlyphs_System_E6858E = { /* 慎 */
    .next = &TextGlyphs_System_E6B689,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6858ETiles,
};

const struct GlyphNew TextGlyphs_System_E58D87 = { /* 升 */
    .next = &TextGlyphs_System_E5A9B6,
    .width = 9,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58D87Tiles,
};

const struct GlyphNew TextGlyphs_System_E79C81 = { /* 省 */
    .next = &TextGlyphs_System_E7949A,
    .width = 11,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79C81Tiles,
};

const struct GlyphNew TextGlyphs_System_E589A9 = { /* 剩 */
    .next = &TextGlyphs_System_E58D87,
    .width = 9,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E589A9Tiles,
};

const struct GlyphNew TextGlyphs_System_E8839C = { /* 胜 */
    .next = &TextGlyphs_System_E8AEBE,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8839CTiles,
};

const struct GlyphNew TextGlyphs_System_E59CA3 = { /* 圣 */
    .next = &TextGlyphs_System_E589A9,
    .width = 9,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59CA3Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B888 = { /* 师 */
    .next = &TextGlyphs_System_E59CA3,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B888Tiles,
};

const struct GlyphNew TextGlyphs_System_E78BAE = { /* 狮 */
    .next = &TextGlyphs_System_E79C81,
    .width = 9,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78BAETiles,
};

const struct GlyphNew TextGlyphs_System_E696BD = { /* 施 */
    .next = &TextGlyphs_System_E6858E,
    .width = 9,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E696BDTiles,
};

const struct GlyphNew TextGlyphs_System_E6B9BF = { /* 湿 */
    .next = &TextGlyphs_System_E696BD,
    .width = 9,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B9BFTiles,
};

const struct GlyphNew TextGlyphs_System_E8AF97 = { /* 诗 */
    .next = &TextGlyphs_System_E8839C,
    .width = 9,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AF97Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B0B8 = { /* 尸 */
    .next = &TextGlyphs_System_E5B888,
    .width = 9,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B0B8Tiles,
};

const struct GlyphNew TextGlyphs_System_E68BBE = { /* 拾 */
    .next = &TextGlyphs_System_E6B9BF,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68BBETiles,
};

const struct GlyphNew TextGlyphs_System_E697B6 = { /* 时 */
    .next = &TextGlyphs_System_E68BBE,
    .width = 9,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E697B6Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BB80 = { /* 什 */
    .next = &TextGlyphs_System_E4BCB8,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BB80Tiles,
};

const struct GlyphNew TextGlyphs_System_E9A39F = { /* 食 */
    .next = &TextGlyphs_System_E997AA,
    .width = 9,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A39FTiles,
};

const struct GlyphNew TextGlyphs_System_E5AE9E = { /* 实 */
    .next = &TextGlyphs_System_E5B0B8,
    .width = 9,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AE9ETiles,
};

const struct GlyphNew TextGlyphs_System_E8AF86 = { /* 识 */
    .next = &TextGlyphs_System_E8AF97,
    .width = 9,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AF86Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B18E = { /* 屎 */
    .next = &TextGlyphs_System_E5AE9E,
    .width = 11,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B18ETiles,
};

const struct GlyphNew TextGlyphs_System_E58ABF = { /* 势 */
    .next = &TextGlyphs_System_E5B18E,
    .width = 9,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58ABFTiles,
};

const struct GlyphNew TextGlyphs_System_E698AF = { /* 是 */
    .next = &TextGlyphs_System_E697B6,
    .width = 9,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E698AFTiles,
};

const struct GlyphNew TextGlyphs_System_E599AC = { /* 噬 */
    .next = &TextGlyphs_System_E58ABF,
    .width = 11,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E599ACTiles,
};

const struct GlyphNew TextGlyphs_System_E98082 = { /* 适 */
    .next = &TextGlyphs_System_E9A39F,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E98082Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BE8D = { /* 侍 */
    .next = &TextGlyphs_System_E4BB80,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BE8DTiles,
};

const struct GlyphNew TextGlyphs_System_E9878A = { /* 释 */
    .next = &TextGlyphs_System_E98082,
    .width = 9,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9878ATiles,
};

const struct GlyphNew TextGlyphs_System_E9A5B0 = { /* 饰 */
    .next = &TextGlyphs_System_E9878A,
    .width = 9,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A5B0Tiles,
};

const struct GlyphNew TextGlyphs_System_E8A786 = { /* 视 */
    .next = &TextGlyphs_System_E8AF86,
    .width = 9,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A786Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AF95 = { /* 试 */
    .next = &TextGlyphs_System_E8A786,
    .width = 9,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AF95Tiles,
};

const struct GlyphNew TextGlyphs_System_E694B6 = { /* 收 */
    .next = &TextGlyphs_System_E698AF,
    .width = 9,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E694B6Tiles,
};

const struct GlyphNew TextGlyphs_System_E6A2B3 = { /* 梳 */
    .next = &TextGlyphs_System_E694B6,
    .width = 11,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A2B3Tiles,
};

const struct GlyphNew TextGlyphs_System_E8BE93 = { /* 输 */
    .next = &TextGlyphs_System_E8AF95,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BE93Tiles,
};

const struct GlyphNew TextGlyphs_System_E58F94 = { /* 叔 */
    .next = &TextGlyphs_System_E599AC,
    .width = 9,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58F94Tiles,
};

const struct GlyphNew TextGlyphs_System_E88892 = { /* 舒 */
    .next = &TextGlyphs_System_E8BE93,
    .width = 11,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88892Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B791 = { /* 淑 */
    .next = &TextGlyphs_System_E6A2B3,
    .width = 11,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B791Tiles,
};

const struct GlyphNew TextGlyphs_System_E7968F = { /* 疏 */
    .next = &TextGlyphs_System_E78BAE,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7968FTiles,
};

const struct GlyphNew TextGlyphs_System_E4B9A6 = { /* 书 */
    .next = &TextGlyphs_System_E4BE8D,
    .width = 9,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B9A6Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B58E = { /* 赎 */
    .next = &TextGlyphs_System_E88892,
    .width = 11,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B58ETiles,
};

const struct GlyphNew TextGlyphs_System_E7869F = { /* 熟 */
    .next = &TextGlyphs_System_E7968F,
    .width = 9,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7869FTiles,
};

const struct GlyphNew TextGlyphs_System_E69A91 = { /* 暑 */
    .next = &TextGlyphs_System_E6B791,
    .width = 11,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69A91Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BDB2 = { /* 署 */
    .next = &TextGlyphs_System_E7869F,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BDB2Tiles,
};

const struct GlyphNew TextGlyphs_System_E9BCA0 = { /* 鼠 */
    .next = &TextGlyphs_System_E9A5B0,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9BCA0Tiles,
};

const struct GlyphNew TextGlyphs_System_E69CAF = { /* 术 */
    .next = &TextGlyphs_System_E69A91,
    .width = 9,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69CAFTiles,
};

const struct GlyphNew TextGlyphs_System_E8BFB0 = { /* 述 */
    .next = &TextGlyphs_System_E8B58E,
    .width = 9,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BFB0Tiles,
};

const struct GlyphNew TextGlyphs_System_E6A091 = { /* 树 */
    .next = &TextGlyphs_System_E69CAF,
    .width = 9,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A091Tiles,
};

const struct GlyphNew TextGlyphs_System_E68195 = { /* 恕 */
    .next = &TextGlyphs_System_E6A091,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68195Tiles,
};

const struct GlyphNew TextGlyphs_System_E8808D = { /* 耍 */
    .next = &TextGlyphs_System_E8BFB0,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8808DTiles,
};

const struct GlyphNew TextGlyphs_System_E69194 = { /* 摔 */
    .next = &TextGlyphs_System_E68195,
    .width = 11,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69194Tiles,
};

const struct GlyphNew TextGlyphs_System_E794A9 = { /* 甩 */
    .next = &TextGlyphs_System_E7BDB2,
    .width = 9,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E794A9Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B885 = { /* 帅 */
    .next = &TextGlyphs_System_E58F94,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B885Tiles,
};

const struct GlyphNew TextGlyphs_System_E788BD = { /* 爽 */
    .next = &TextGlyphs_System_E794A9,
    .width = 9,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E788BDTiles,
};

const struct GlyphNew TextGlyphs_System_E8B081 = { /* 谁 */
    .next = &TextGlyphs_System_E8808D,
    .width = 9,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B081Tiles,
};

const struct GlyphNew TextGlyphs_System_E79DA1 = { /* 睡 */
    .next = &TextGlyphs_System_E788BD,
    .width = 9,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79DA1Tiles,
};

const struct GlyphNew TextGlyphs_System_E9A1BA = { /* 顺 */
    .next = &TextGlyphs_System_E9BCA0,
    .width = 9,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A1BATiles,
};

const struct GlyphNew TextGlyphs_System_E8AFB4 = { /* 说 */
    .next = &TextGlyphs_System_E8B081,
    .width = 9,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AFB4Tiles,
};

const struct GlyphNew TextGlyphs_System_E696AF = { /* 斯 */
    .next = &TextGlyphs_System_E69194,
    .width = 9,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E696AFTiles,
};

const struct GlyphNew TextGlyphs_System_E69295 = { /* 撕 */
    .next = &TextGlyphs_System_E696AF,
    .width = 11,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69295Tiles,
};

const struct GlyphNew TextGlyphs_System_E4B89D = { /* 丝 */
    .next = &TextGlyphs_System_E4B9A6,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B89DTiles,
};

const struct GlyphNew TextGlyphs_System_E88286 = { /* 肆 */
    .next = &TextGlyphs_System_E8AFB4,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88286Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BCBA = { /* 伺 */
    .next = &TextGlyphs_System_E4B89D,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BCBATiles,
};

const struct GlyphNew TextGlyphs_System_E4BCBC = { /* 似 */
    .next = &TextGlyphs_System_E4BCBA,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BCBCTiles,
};

const struct GlyphNew TextGlyphs_System_E9A5B2 = { /* 饲 */
    .next = &TextGlyphs_System_E9A1BA,
    .width = 9,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A5B2Tiles,
};

const struct GlyphNew TextGlyphs_System_E69DBE = { /* 松 */
    .next = &TextGlyphs_System_E69295,
    .width = 9,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69DBETiles,
};

const struct GlyphNew TextGlyphs_System_E880B8 = { /* 耸 */
    .next = &TextGlyphs_System_E88286,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E880B8Tiles,
};

const struct GlyphNew TextGlyphs_System_E6909C = { /* 搜 */
    .next = &TextGlyphs_System_E69DBE,
    .width = 11,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6909CTiles,
};

const struct GlyphNew TextGlyphs_System_E88998 = { /* 艘 */
    .next = &TextGlyphs_System_E880B8,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88998Tiles,
};

const struct GlyphNew TextGlyphs_System_E88B8F = { /* 苏 */
    .next = &TextGlyphs_System_E88998,
    .width = 9,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88B8FTiles,
};

const struct GlyphNew TextGlyphs_System_E4BF97 = { /* 俗 */
    .next = &TextGlyphs_System_E4BCBC,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BF97Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AF89 = { /* 诉 */
    .next = &TextGlyphs_System_E88B8F,
    .width = 9,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AF89Tiles,
};

const struct GlyphNew TextGlyphs_System_E88283 = { /* 肃 */
    .next = &TextGlyphs_System_E8AF89,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88283Tiles,
};

const struct GlyphNew TextGlyphs_System_E985B8 = { /* 酸 */
    .next = &TextGlyphs_System_E9A5B2,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E985B8Tiles,
};

const struct GlyphNew TextGlyphs_System_E7AE97 = { /* 算 */
    .next = &TextGlyphs_System_E79DA1,
    .width = 9,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7AE97Tiles,
};

const struct GlyphNew TextGlyphs_System_E899BD = { /* 虽 */
    .next = &TextGlyphs_System_E88283,
    .width = 8,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E899BDTiles,
};

const struct GlyphNew TextGlyphs_System_E99A8F = { /* 随 */
    .next = &TextGlyphs_System_E985B8,
    .width = 9,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99A8FTiles,
};

const struct GlyphNew TextGlyphs_System_E9AB93 = { /* 髓 */
    .next = &TextGlyphs_System_E99A8F,
    .width = 11,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9AB93Tiles,
};

const struct GlyphNew TextGlyphs_System_E7A28E = { /* 碎 */
    .next = &TextGlyphs_System_E7AE97,
    .width = 9,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A28ETiles,
};

const struct GlyphNew TextGlyphs_System_E5B281 = { /* 岁 */
    .next = &TextGlyphs_System_E5B885,
    .width = 9,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B281Tiles,
};

const struct GlyphNew TextGlyphs_System_E5AD99 = { /* 孙 */
    .next = &TextGlyphs_System_E5B281,
    .width = 9,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AD99Tiles,
};

const struct GlyphNew TextGlyphs_System_E68D9F = { /* 损 */
    .next = &TextGlyphs_System_E6909C,
    .width = 9,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68D9FTiles,
};

const struct GlyphNew TextGlyphs_System_E7BCA9 = { /* 缩 */
    .next = &TextGlyphs_System_E7A28E,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BCA9Tiles,
};

const struct GlyphNew TextGlyphs_System_E79090 = { /* 琐 */
    .next = &TextGlyphs_System_E7BCA9,
    .width = 11,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79090Tiles,
};

const struct GlyphNew TextGlyphs_System_E7B4A2 = { /* 索 */
    .next = &TextGlyphs_System_E79090,
    .width = 9,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B4A2Tiles,
};

const struct GlyphNew TextGlyphs_System_E99481 = { /* 锁 */
    .next = &TextGlyphs_System_E9AB93,
    .width = 9,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99481Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A18C = { /* 塌 */
    .next = &TextGlyphs_System_E5AD99,
    .width = 11,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A18CTiles,
};

const struct GlyphNew TextGlyphs_System_E5AE83 = { /* 它 */
    .next = &TextGlyphs_System_E5A18C,
    .width = 9,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AE83Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A5B9 = { /* 她 */
    .next = &TextGlyphs_System_E5AE83,
    .width = 9,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A5B9Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B88F = { /* 踏 */
    .next = &TextGlyphs_System_E899BD,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B88FTiles,
};

const struct GlyphNew TextGlyphs_System_E68AAC = { /* 抬 */
    .next = &TextGlyphs_System_E68D9F,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68AACTiles,
};

const struct GlyphNew TextGlyphs_System_E68081 = { /* 态 */
    .next = &TextGlyphs_System_E68AAC,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68081Tiles,
};

const struct GlyphNew TextGlyphs_System_E6918A = { /* 摊 */
    .next = &TextGlyphs_System_E68081,
    .width = 11,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6918ATiles,
};

const struct GlyphNew TextGlyphs_System_E8B4AA = { /* 贪 */
    .next = &TextGlyphs_System_E8B88F,
    .width = 9,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B4AATiles,
};

const struct GlyphNew TextGlyphs_System_E59D9B = { /* 坛 */
    .next = &TextGlyphs_System_E5A5B9,
    .width = 11,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59D9BTiles,
};

const struct GlyphNew TextGlyphs_System_E8B088 = { /* 谈 */
    .next = &TextGlyphs_System_E8B4AA,
    .width = 9,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B088Tiles,
};

const struct GlyphNew TextGlyphs_System_E59DA6 = { /* 坦 */
    .next = &TextGlyphs_System_E59D9B,
    .width = 9,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59DA6Tiles,
};

const struct GlyphNew TextGlyphs_System_E58FB9 = { /* 叹 */
    .next = &TextGlyphs_System_E59DA6,
    .width = 9,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58FB9Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B1A4 = { /* 汤 */
    .next = &TextGlyphs_System_E6918A,
    .width = 11,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B1A4Tiles,
};

const struct GlyphNew TextGlyphs_System_E690AA = { /* 搪 */
    .next = &TextGlyphs_System_E6B1A4,
    .width = 11,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E690AATiles,
};

const struct GlyphNew TextGlyphs_System_E8869B = { /* 膛 */
    .next = &TextGlyphs_System_E8B088,
    .width = 11,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8869BTiles,
};

const struct GlyphNew TextGlyphs_System_E8B69F = { /* 趟 */
    .next = &TextGlyphs_System_E8869B,
    .width = 11,
    .utf_byte_2 = 0xb6,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B69FTiles,
};

const struct GlyphNew TextGlyphs_System_E6A183 = { /* 桃 */
    .next = &TextGlyphs_System_E690AA,
    .width = 9,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A183Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AEA8 = { /* 讨 */
    .next = &TextGlyphs_System_E8B69F,
    .width = 9,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AEA8Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A597 = { /* 套 */
    .next = &TextGlyphs_System_E58FB9,
    .width = 9,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A597Tiles,
};

const struct GlyphNew TextGlyphs_System_E885BE = { /* 腾 */
    .next = &TextGlyphs_System_E8AEA8,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E885BETiles,
};

const struct GlyphNew TextGlyphs_System_E796BC = { /* 疼 */
    .next = &TextGlyphs_System_E7B4A2,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E796BCTiles,
};

const struct GlyphNew TextGlyphs_System_E6A2AF = { /* 梯 */
    .next = &TextGlyphs_System_E6A183,
    .width = 9,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A2AFTiles,
};

const struct GlyphNew TextGlyphs_System_E68F90 = { /* 提 */
    .next = &TextGlyphs_System_E6A2AF,
    .width = 9,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68F90Tiles,
};

const struct GlyphNew TextGlyphs_System_E9A298 = { /* 题 */
    .next = &TextGlyphs_System_E99481,
    .width = 9,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A298Tiles,
};

const struct GlyphNew TextGlyphs_System_E68395 = { /* 惕 */
    .next = &TextGlyphs_System_E68F90,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68395Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B7BB = { /* 添 */
    .next = &TextGlyphs_System_E68395,
    .width = 9,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B7BBTiles,
};

const struct GlyphNew TextGlyphs_System_E794B0 = { /* 田 */
    .next = &TextGlyphs_System_E796BC,
    .width = 8,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E794B0Tiles,
};

const struct GlyphNew TextGlyphs_System_E7949C = { /* 甜 */
    .next = &TextGlyphs_System_E794B0,
    .width = 11,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7949CTiles,
};

const struct GlyphNew TextGlyphs_System_E8BFA2 = { /* 迢 */
    .next = &TextGlyphs_System_E885BE,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BFA2Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B7B3 = { /* 跳 */
    .next = &TextGlyphs_System_E8BFA2,
    .width = 9,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B7B3Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B4B4 = { /* 贴 */
    .next = &TextGlyphs_System_E8B7B3,
    .width = 9,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B4B4Tiles,
};

const struct GlyphNew TextGlyphs_System_E99381 = { /* 铁 */
    .next = &TextGlyphs_System_E9A298,
    .width = 9,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99381Tiles,
};

const struct GlyphNew TextGlyphs_System_E58E85 = { /* 厅 */
    .next = &TextGlyphs_System_E5A597,
    .width = 11,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58E85Tiles,
};

const struct GlyphNew TextGlyphs_System_E590AC = { /* 听 */
    .next = &TextGlyphs_System_E58E85,
    .width = 9,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E590ACTiles,
};

const struct GlyphNew TextGlyphs_System_E4BAAD = { /* 亭 */
    .next = &TextGlyphs_System_E4BF97,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BAADTiles,
};

const struct GlyphNew TextGlyphs_System_E5BAAD = { /* 庭 */
    .next = &TextGlyphs_System_E590AC,
    .width = 9,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BAADTiles,
};

const struct GlyphNew TextGlyphs_System_E68CBA = { /* 挺 */
    .next = &TextGlyphs_System_E6B7BB,
    .width = 11,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68CBATiles,
};

const struct GlyphNew TextGlyphs_System_E6A1B6 = { /* 桶 */
    .next = &TextGlyphs_System_E68CBA,
    .width = 9,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A1B6Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BB9F = { /* 统 */
    .next = &TextGlyphs_System_E7949C,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BB9FTiles,
};

const struct GlyphNew TextGlyphs_System_E581B7 = { /* 偷 */
    .next = &TextGlyphs_System_E5BAAD,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E581B7Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A4B4 = { /* 头 */
    .next = &TextGlyphs_System_E581B7,
    .width = 9,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A4B4Tiles,
};

const struct GlyphNew TextGlyphs_System_E9808F = { /* 透 */
    .next = &TextGlyphs_System_E99381,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9808FTiles,
};

const struct GlyphNew TextGlyphs_System_E59BBE = { /* 图 */
    .next = &TextGlyphs_System_E5A4B4,
    .width = 9,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59BBETiles,
};

const struct GlyphNew TextGlyphs_System_E6B682 = { /* 涂 */
    .next = &TextGlyphs_System_E6A1B6,
    .width = 11,
    .utf_byte_2 = 0xb6,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B682Tiles,
};

const struct GlyphNew TextGlyphs_System_E59090 = { /* 吐 */
    .next = &TextGlyphs_System_E59BBE,
    .width = 9,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59090Tiles,
};

const struct GlyphNew TextGlyphs_System_E59BA2 = { /* 团 */
    .next = &TextGlyphs_System_E59090,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59BA2Tiles,
};

const struct GlyphNew TextGlyphs_System_E68EA8 = { /* 推 */
    .next = &TextGlyphs_System_E6B682,
    .width = 9,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68EA8Tiles,
};

const struct GlyphNew TextGlyphs_System_E885BF = { /* 腿 */
    .next = &TextGlyphs_System_E8B4B4,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E885BFTiles,
};

const struct GlyphNew TextGlyphs_System_E5909E = { /* 吞 */
    .next = &TextGlyphs_System_E59BA2,
    .width = 11,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5909ETiles,
};

const struct GlyphNew TextGlyphs_System_E68B96 = { /* 拖 */
    .next = &TextGlyphs_System_E68EA8,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68B96Tiles,
};

const struct GlyphNew TextGlyphs_System_E68998 = { /* 托 */
    .next = &TextGlyphs_System_E68B96,
    .width = 9,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68998Tiles,
};

const struct GlyphNew TextGlyphs_System_E68C96 = { /* 挖 */
    .next = &TextGlyphs_System_E68998,
    .width = 11,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68C96Tiles,
};

const struct GlyphNew TextGlyphs_System_E59387 = { /* 哇 */
    .next = &TextGlyphs_System_E5909E,
    .width = 11,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59387Tiles,
};

const struct GlyphNew TextGlyphs_System_E89B99 = { /* 蛙 */
    .next = &TextGlyphs_System_E885BF,
    .width = 11,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E89B99Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A883 = { /* 娃 */
    .next = &TextGlyphs_System_E59387,
    .width = 11,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A883Tiles,
};

const struct GlyphNew TextGlyphs_System_E793A6 = { /* 瓦 */
    .next = &TextGlyphs_System_E7BB9F,
    .width = 9,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E793A6Tiles,
};

const struct GlyphNew TextGlyphs_System_E6ADAA = { /* 歪 */
    .next = &TextGlyphs_System_E68C96,
    .width = 11,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6ADAATiles,
};

const struct GlyphNew TextGlyphs_System_E5BCAF = { /* 弯 */
    .next = &TextGlyphs_System_E5A883,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BCAFTiles,
};

const struct GlyphNew TextGlyphs_System_E6B9BE = { /* 湾 */
    .next = &TextGlyphs_System_E6ADAA,
    .width = 11,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B9BETiles,
};

const struct GlyphNew TextGlyphs_System_E78EA9 = { /* 玩 */
    .next = &TextGlyphs_System_E793A6,
    .width = 9,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78EA9Tiles,
};

const struct GlyphNew TextGlyphs_System_E9A1BD = { /* 顽 */
    .next = &TextGlyphs_System_E9808F,
    .width = 11,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A1BDTiles,
};

const struct GlyphNew TextGlyphs_System_E68CBD = { /* 挽 */
    .next = &TextGlyphs_System_E6B9BE,
    .width = 9,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68CBDTiles,
};

const struct GlyphNew TextGlyphs_System_E6999A = { /* 晚 */
    .next = &TextGlyphs_System_E68CBD,
    .width = 9,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6999ATiles,
};

const struct GlyphNew TextGlyphs_System_E69E89 = { /* 枉 */
    .next = &TextGlyphs_System_E6999A,
    .width = 11,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69E89Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BD91 = { /* 网 */
    .next = &TextGlyphs_System_E78EA9,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BD91Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BE80 = { /* 往 */
    .next = &TextGlyphs_System_E5BCAF,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BE80Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A684 = { /* 妄 */
    .next = &TextGlyphs_System_E5BE80,
    .width = 11,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A684Tiles,
};

const struct GlyphNew TextGlyphs_System_E99FA6 = { /* 韦 */
    .next = &TextGlyphs_System_E9A1BD,
    .width = 9,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99FA6Tiles,
};

const struct GlyphNew TextGlyphs_System_E8BF9D = { /* 违 */
    .next = &TextGlyphs_System_E89B99,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BF9DTiles,
};

const struct GlyphNew TextGlyphs_System_E59BB4 = { /* 围 */
    .next = &TextGlyphs_System_E5A684,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59BB4Tiles,
};

const struct GlyphNew TextGlyphs_System_E4B8BA = { /* 为 */
    .next = &TextGlyphs_System_E4BAAD,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B8BATiles,
};

const struct GlyphNew TextGlyphs_System_E7BBB4 = { /* 维 */
    .next = &TextGlyphs_System_E7BD91,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BBB4Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BC9F = { /* 伟 */
    .next = &TextGlyphs_System_E4B8BA,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BC9FTiles,
};

const struct GlyphNew TextGlyphs_System_E5B0BE = { /* 尾 */
    .next = &TextGlyphs_System_E59BB4,
    .width = 11,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B0BETiles,
};

const struct GlyphNew TextGlyphs_System_E7958F = { /* 畏 */
    .next = &TextGlyphs_System_E7BBB4,
    .width = 9,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7958FTiles,
};

const struct GlyphNew TextGlyphs_System_E88383 = { /* 胃 */
    .next = &TextGlyphs_System_E8BF9D,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88383Tiles,
};

const struct GlyphNew TextGlyphs_System_E59682 = { /* 喂 */
    .next = &TextGlyphs_System_E5B0BE,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59682Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B093 = { /* 谓 */
    .next = &TextGlyphs_System_E88383,
    .width = 9,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B093Tiles,
};

const struct GlyphNew TextGlyphs_System_E58DAB = { /* 卫 */
    .next = &TextGlyphs_System_E59682,
    .width = 9,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58DABTiles,
};

const struct GlyphNew TextGlyphs_System_E997BB = { /* 闻 */
    .next = &TextGlyphs_System_E99FA6,
    .width = 8,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E997BBTiles,
};

const struct GlyphNew TextGlyphs_System_E7BAB9 = { /* 纹 */
    .next = &TextGlyphs_System_E7958F,
    .width = 9,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BAB9Tiles,
};

const struct GlyphNew TextGlyphs_System_E590BB = { /* 吻 */
    .next = &TextGlyphs_System_E58DAB,
    .width = 11,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E590BBTiles,
};

const struct GlyphNew TextGlyphs_System_E7A8B3 = { /* 稳 */
    .next = &TextGlyphs_System_E7BAB9,
    .width = 9,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A8B3Tiles,
};

const struct GlyphNew TextGlyphs_System_E7B48A = { /* 紊 */
    .next = &TextGlyphs_System_E7A8B3,
    .width = 11,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B48ATiles,
};

const struct GlyphNew TextGlyphs_System_E997AE = { /* 问 */
    .next = &TextGlyphs_System_E997BB,
    .width = 8,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E997AETiles,
};

const struct GlyphNew TextGlyphs_System_E7BF81 = { /* 翁 */
    .next = &TextGlyphs_System_E7B48A,
    .width = 9,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BF81Tiles,
};

const struct GlyphNew TextGlyphs_System_E793AE = { /* 瓮 */
    .next = &TextGlyphs_System_E7BF81,
    .width = 11,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E793AETiles,
};

const struct GlyphNew TextGlyphs_System_E7AA9D = { /* 窝 */
    .next = &TextGlyphs_System_E793AE,
    .width = 11,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7AA9DTiles,
};

const struct GlyphNew TextGlyphs_System_E58DA7 = { /* 卧 */
    .next = &TextGlyphs_System_E590BB,
    .width = 11,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58DA7Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B283 = { /* 沃 */
    .next = &TextGlyphs_System_E69E89,
    .width = 9,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B283Tiles,
};

const struct GlyphNew TextGlyphs_System_E5919C = { /* 呜 */
    .next = &TextGlyphs_System_E58DA7,
    .width = 11,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5919CTiles,
};

const struct GlyphNew TextGlyphs_System_E4B98C = { /* 乌 */
    .next = &TextGlyphs_System_E4BC9F,
    .width = 9,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B98CTiles,
};

const struct GlyphNew TextGlyphs_System_E6B1A1 = { /* 污 */
    .next = &TextGlyphs_System_E6B283,
    .width = 9,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B1A1Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AFAC = { /* 诬 */
    .next = &TextGlyphs_System_E8B093,
    .width = 11,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AFACTiles,
};

const struct GlyphNew TextGlyphs_System_E697A0 = { /* 无 */
    .next = &TextGlyphs_System_E6B1A1,
    .width = 9,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E697A0Tiles,
};

const struct GlyphNew TextGlyphs_System_E88A9C = { /* 芜 */
    .next = &TextGlyphs_System_E8AFAC,
    .width = 9,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88A9CTiles,
};

const struct GlyphNew TextGlyphs_System_E4BC8D = { /* 伍 */
    .next = &TextGlyphs_System_E4B98C,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BC8DTiles,
};

const struct GlyphNew TextGlyphs_System_E99BBE = { /* 雾 */
    .next = &TextGlyphs_System_E997AE,
    .width = 9,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99BBETiles,
};

const struct GlyphNew TextGlyphs_System_E58BBF = { /* 勿 */
    .next = &TextGlyphs_System_E5919C,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58BBFTiles,
};

const struct GlyphNew TextGlyphs_System_E58AA1 = { /* 务 */
    .next = &TextGlyphs_System_E58BBF,
    .width = 9,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58AA1Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AFAF = { /* 误 */
    .next = &TextGlyphs_System_E88A9C,
    .width = 9,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AFAFTiles,
};

const struct GlyphNew TextGlyphs_System_E590B8 = { /* 吸 */
    .next = &TextGlyphs_System_E58AA1,
    .width = 9,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E590B8Tiles,
};

const struct GlyphNew TextGlyphs_System_E789BA = { /* 牺 */
    .next = &TextGlyphs_System_E7AA9D,
    .width = 11,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E789BATiles,
};

const struct GlyphNew TextGlyphs_System_E68289 = { /* 悉 */
    .next = &TextGlyphs_System_E697A0,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68289Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A495 = { /* 夕 */
    .next = &TextGlyphs_System_E590B8,
    .width = 11,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A495Tiles,
};

const struct GlyphNew TextGlyphs_System_E6BAAA = { /* 溪 */
    .next = &TextGlyphs_System_E68289,
    .width = 9,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6BAAATiles,
};

const struct GlyphNew TextGlyphs_System_E8A2AD = { /* 袭 */
    .next = &TextGlyphs_System_E8AFAF,
    .width = 9,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A2ADTiles,
};

const struct GlyphNew TextGlyphs_System_E5B8AD = { /* 席 */
    .next = &TextGlyphs_System_E5A495,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B8ADTiles,
};

const struct GlyphNew TextGlyphs_System_E4B9A0 = { /* 习 */
    .next = &TextGlyphs_System_E4BC8D,
    .width = 9,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B9A0Tiles,
};

const struct GlyphNew TextGlyphs_System_E5AAB3 = { /* 媳 */
    .next = &TextGlyphs_System_E5B8AD,
    .width = 11,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AAB3Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B497 = { /* 洗 */
    .next = &TextGlyphs_System_E6BAAA,
    .width = 11,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B497Tiles,
};

const struct GlyphNew TextGlyphs_System_E99A99 = { /* 隙 */
    .next = &TextGlyphs_System_E99BBE,
    .width = 11,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99A99Tiles,
};

const struct GlyphNew TextGlyphs_System_E6888F = { /* 戏 */
    .next = &TextGlyphs_System_E6B497,
    .width = 9,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6888FTiles,
};

const struct GlyphNew TextGlyphs_System_E7BB86 = { /* 细 */
    .next = &TextGlyphs_System_E789BA,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BB86Tiles,
};

const struct GlyphNew TextGlyphs_System_E79E8E = { /* 瞎 */
    .next = &TextGlyphs_System_E7BB86,
    .width = 11,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79E8ETiles,
};

const struct GlyphNew TextGlyphs_System_E8BE96 = { /* 辖 */
    .next = &TextGlyphs_System_E8A2AD,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BE96Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BEA0 = { /* 侠 */
    .next = &TextGlyphs_System_E4B9A0,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BEA0Tiles,
};

const struct GlyphNew TextGlyphs_System_E78BAD = { /* 狭 */
    .next = &TextGlyphs_System_E79E8E,
    .width = 9,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78BADTiles,
};

const struct GlyphNew TextGlyphs_System_E5A48F = { /* 夏 */
    .next = &TextGlyphs_System_E5AAB3,
    .width = 9,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A48FTiles,
};

const struct GlyphNew TextGlyphs_System_E59093 = { /* 吓 */
    .next = &TextGlyphs_System_E5A48F,
    .width = 11,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59093Tiles,
};

const struct GlyphNew TextGlyphs_System_E68E80 = { /* 掀 */
    .next = &TextGlyphs_System_E6888F,
    .width = 11,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68E80Tiles,
};

const struct GlyphNew TextGlyphs_System_E9B29C = { /* 鲜 */
    .next = &TextGlyphs_System_E99A99,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9B29CTiles,
};

const struct GlyphNew TextGlyphs_System_E8B4A4 = { /* 贤 */
    .next = &TextGlyphs_System_E8BE96,
    .width = 9,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B4A4Tiles,
};

const struct GlyphNew TextGlyphs_System_E997B2 = { /* 闲 */
    .next = &TextGlyphs_System_E9B29C,
    .width = 8,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E997B2Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BCA6 = { /* 弦 */
    .next = &TextGlyphs_System_E59093,
    .width = 11,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BCA6Tiles,
};

const struct GlyphNew TextGlyphs_System_E5AB8C = { /* 嫌 */
    .next = &TextGlyphs_System_E5BCA6,
    .width = 11,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AB8CTiles,
};

const struct GlyphNew TextGlyphs_System_E698BE = { /* 显 */
    .next = &TextGlyphs_System_E68E80,
    .width = 9,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E698BETiles,
};

const struct GlyphNew TextGlyphs_System_E999A9 = { /* 险 */
    .next = &TextGlyphs_System_E997B2,
    .width = 9,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E999A9Tiles,
};

const struct GlyphNew TextGlyphs_System_E78EB0 = { /* 现 */
    .next = &TextGlyphs_System_E78BAD,
    .width = 9,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78EB0Tiles,
};

const struct GlyphNew TextGlyphs_System_E78CAE = { /* 献 */
    .next = &TextGlyphs_System_E78EB0,
    .width = 9,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78CAETiles,
};

const struct GlyphNew TextGlyphs_System_E7BEA1 = { /* 羡 */
    .next = &TextGlyphs_System_E78CAE,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BEA1Tiles,
};

const struct GlyphNew TextGlyphs_System_E999B7 = { /* 陷 */
    .next = &TextGlyphs_System_E999A9,
    .width = 9,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E999B7Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BABF = { /* 线 */
    .next = &TextGlyphs_System_E7BEA1,
    .width = 9,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BABFTiles,
};

const struct GlyphNew TextGlyphs_System_E58EA2 = { /* 厢 */
    .next = &TextGlyphs_System_E5AB8C,
    .width = 11,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58EA2Tiles,
};

const struct GlyphNew TextGlyphs_System_E9A699 = { /* 香 */
    .next = &TextGlyphs_System_E999B7,
    .width = 9,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A699Tiles,
};

const struct GlyphNew TextGlyphs_System_E4B9A1 = { /* 乡 */
    .next = &TextGlyphs_System_E4BEA0,
    .width = 9,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B9A1Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BF94 = { /* 翔 */
    .next = &TextGlyphs_System_E7BABF,
    .width = 9,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BF94Tiles,
};

const struct GlyphNew TextGlyphs_System_E7A5A5 = { /* 祥 */
    .next = &TextGlyphs_System_E7BF94,
    .width = 11,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A5A5Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AFA6 = { /* 详 */
    .next = &TextGlyphs_System_E8B4A4,
    .width = 9,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AFA6Tiles,
};

const struct GlyphNew TextGlyphs_System_E5938D = { /* 响 */
    .next = &TextGlyphs_System_E58EA2,
    .width = 9,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5938DTiles,
};

const struct GlyphNew TextGlyphs_System_E4BAAB = { /* 享 */
    .next = &TextGlyphs_System_E4B9A1,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BAABTiles,
};

const struct GlyphNew TextGlyphs_System_E9A1B9 = { /* 项 */
    .next = &TextGlyphs_System_E9A699,
    .width = 9,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A1B9Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B1A1 = { /* 象 */
    .next = &TextGlyphs_System_E8AFA6,
    .width = 9,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B1A1Tiles,
};

const struct GlyphNew TextGlyphs_System_E59AA3 = { /* 嚣 */
    .next = &TextGlyphs_System_E5938D,
    .width = 11,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59AA3Tiles,
};

const struct GlyphNew TextGlyphs_System_E99480 = { /* 销 */
    .next = &TextGlyphs_System_E9A1B9,
    .width = 11,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99480Tiles,
};

const struct GlyphNew TextGlyphs_System_E69993 = { /* 晓 */
    .next = &TextGlyphs_System_E698BE,
    .width = 9,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69993Tiles,
};

const struct GlyphNew TextGlyphs_System_E69588 = { /* 效 */
    .next = &TextGlyphs_System_E69993,
    .width = 9,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69588Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BA9B = { /* 些 */
    .next = &TextGlyphs_System_E4BAAB,
    .width = 9,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BA9BTiles,
};

const struct GlyphNew TextGlyphs_System_E99E8B = { /* 鞋 */
    .next = &TextGlyphs_System_E99480,
    .width = 11,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99E8BTiles,
};

const struct GlyphNew TextGlyphs_System_E58D8F = { /* 协 */
    .next = &TextGlyphs_System_E59AA3,
    .width = 9,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58D8FTiles,
};

const struct GlyphNew TextGlyphs_System_E690BA = { /* 携 */
    .next = &TextGlyphs_System_E69588,
    .width = 11,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E690BATiles,
};

const struct GlyphNew TextGlyphs_System_E88381 = { /* 胁 */
    .next = &TextGlyphs_System_E8B1A1,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88381Tiles,
};

const struct GlyphNew TextGlyphs_System_E68788 = { /* 懈 */
    .next = &TextGlyphs_System_E690BA,
    .width = 9,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68788Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B384 = { /* 泄 */
    .next = &TextGlyphs_System_E68788,
    .width = 11,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B384Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B0A2 = { /* 谢 */
    .next = &TextGlyphs_System_E88381,
    .width = 9,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B0A2Tiles,
};

const struct GlyphNew TextGlyphs_System_E6ACA3 = { /* 欣 */
    .next = &TextGlyphs_System_E6B384,
    .width = 9,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6ACA3Tiles,
};

const struct GlyphNew TextGlyphs_System_E885A5 = { /* 腥 */
    .next = &TextGlyphs_System_E8B0A2,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E885A5Tiles,
};

const struct GlyphNew TextGlyphs_System_E585B4 = { /* 兴 */
    .next = &TextGlyphs_System_E58D8F,
    .width = 9,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E585B4Tiles,
};

const struct GlyphNew TextGlyphs_System_E59E8B = { /* 型 */
    .next = &TextGlyphs_System_E585B4,
    .width = 9,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59E8BTiles,
};

const struct GlyphNew TextGlyphs_System_E98692 = { /* 醒 */
    .next = &TextGlyphs_System_E99E8B,
    .width = 9,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E98692Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A793 = { /* 姓 */
    .next = &TextGlyphs_System_E59E8B,
    .width = 9,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A793Tiles,
};

const struct GlyphNew TextGlyphs_System_E587B6 = { /* 凶 */
    .next = &TextGlyphs_System_E5A793,
    .width = 11,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E587B6Tiles,
};

const struct GlyphNew TextGlyphs_System_E883B8 = { /* 胸 */
    .next = &TextGlyphs_System_E885A5,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E883B8Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BE9E = { /* 羞 */
    .next = &TextGlyphs_System_E7A5A5,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BE9ETiles,
};

const struct GlyphNew TextGlyphs_System_E69CBD = { /* 朽 */
    .next = &TextGlyphs_System_E6ACA3,
    .width = 11,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69CBDTiles,
};

const struct GlyphNew TextGlyphs_System_E8A296 = { /* 袖 */
    .next = &TextGlyphs_System_E883B8,
    .width = 9,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A296Tiles,
};

const struct GlyphNew TextGlyphs_System_E99C80 = { /* 需 */
    .next = &TextGlyphs_System_E98692,
    .width = 9,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99C80Tiles,
};

const struct GlyphNew TextGlyphs_System_E8999A = { /* 虚 */
    .next = &TextGlyphs_System_E8A296,
    .width = 11,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8999ATiles,
};

const struct GlyphNew TextGlyphs_System_E59898 = { /* 嘘 */
    .next = &TextGlyphs_System_E587B6,
    .width = 11,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59898Tiles,
};

const struct GlyphNew TextGlyphs_System_E9A1BB = { /* 须 */
    .next = &TextGlyphs_System_E99C80,
    .width = 9,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A1BBTiles,
};

const struct GlyphNew TextGlyphs_System_E8AEB8 = { /* 许 */
    .next = &TextGlyphs_System_E8999A,
    .width = 9,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AEB8Tiles,
};

const struct GlyphNew TextGlyphs_System_E89384 = { /* 蓄 */
    .next = &TextGlyphs_System_E8AEB8,
    .width = 11,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E89384Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A9BF = { /* 婿 */
    .next = &TextGlyphs_System_E59898,
    .width = 11,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A9BFTiles,
};

const struct GlyphNew TextGlyphs_System_E7BBAA = { /* 绪 */
    .next = &TextGlyphs_System_E7BE9E,
    .width = 11,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BBAATiles,
};

const struct GlyphNew TextGlyphs_System_E7BBAD = { /* 续 */
    .next = &TextGlyphs_System_E7BBAA,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BBADTiles,
};

const struct GlyphNew TextGlyphs_System_E682AC = { /* 悬 */
    .next = &TextGlyphs_System_E69CBD,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E682ACTiles,
};

const struct GlyphNew TextGlyphs_System_E98089 = { /* 选 */
    .next = &TextGlyphs_System_E9A1BB,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E98089Tiles,
};

const struct GlyphNew TextGlyphs_System_E99DB4 = { /* 靴 */
    .next = &TextGlyphs_System_E98089,
    .width = 9,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99DB4Tiles,
};

const struct GlyphNew TextGlyphs_System_E58B8B = { /* 勋 */
    .next = &TextGlyphs_System_E5A9BF,
    .width = 9,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58B8BTiles,
};

const struct GlyphNew TextGlyphs_System_E5BEAA = { /* 循 */
    .next = &TextGlyphs_System_E58B8B,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BEAATiles,
};

const struct GlyphNew TextGlyphs_System_E8AFA2 = { /* 询 */
    .next = &TextGlyphs_System_E89384,
    .width = 11,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AFA2Tiles,
};

const struct GlyphNew TextGlyphs_System_E5AFBB = { /* 寻 */
    .next = &TextGlyphs_System_E5BEAA,
    .width = 9,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AFBBTiles,
};

const struct GlyphNew TextGlyphs_System_E5B7A1 = { /* 巡 */
    .next = &TextGlyphs_System_E5AFBB,
    .width = 9,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B7A1Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AEAD = { /* 训 */
    .next = &TextGlyphs_System_E8AFA2,
    .width = 9,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AEADTiles,
};

const struct GlyphNew TextGlyphs_System_E8AEAF = { /* 讯 */
    .next = &TextGlyphs_System_E8AEAD,
    .width = 11,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AEAFTiles,
};

const struct GlyphNew TextGlyphs_System_E8BF85 = { /* 迅 */
    .next = &TextGlyphs_System_E8AEAF,
    .width = 11,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BF85Tiles,
};

const struct GlyphNew TextGlyphs_System_E58E8B = { /* 压 */
    .next = &TextGlyphs_System_E5B7A1,
    .width = 9,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58E8BTiles,
};

const struct GlyphNew TextGlyphs_System_E9B8A6 = { /* 鸦 */
    .next = &TextGlyphs_System_E99DB4,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9B8A6Tiles,
};

const struct GlyphNew TextGlyphs_System_E59180 = { /* 呀 */
    .next = &TextGlyphs_System_E58E8B,
    .width = 11,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59180Tiles,
};

const struct GlyphNew TextGlyphs_System_E4B8AB = { /* 丫 */
    .next = &TextGlyphs_System_E4BA9B,
    .width = 10,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B8ABTiles,
};

const struct GlyphNew TextGlyphs_System_E88ABD = { /* 芽 */
    .next = &TextGlyphs_System_E8BF85,
    .width = 9,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88ABDTiles,
};

const struct GlyphNew TextGlyphs_System_E5B496 = { /* 崖 */
    .next = &TextGlyphs_System_E59180,
    .width = 9,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B496Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BA9A = { /* 亚 */
    .next = &TextGlyphs_System_E4B8AB,
    .width = 9,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BA9ATiles,
};

const struct GlyphNew TextGlyphs_System_E8AEB6 = { /* 讶 */
    .next = &TextGlyphs_System_E88ABD,
    .width = 9,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AEB6Tiles,
};

const struct GlyphNew TextGlyphs_System_E7839F = { /* 烟 */
    .next = &TextGlyphs_System_E7BBAD,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7839FTiles,
};

const struct GlyphNew TextGlyphs_System_E6B7B9 = { /* 淹 */
    .next = &TextGlyphs_System_E682AC,
    .width = 11,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B7B9Tiles,
};

const struct GlyphNew TextGlyphs_System_E4B8A5 = { /* 严 */
    .next = &TextGlyphs_System_E4BA9A,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B8A5Tiles,
};

const struct GlyphNew TextGlyphs_System_E9A29C = { /* 颜 */
    .next = &TextGlyphs_System_E9B8A6,
    .width = 9,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A29CTiles,
};

const struct GlyphNew TextGlyphs_System_E6B2BF = { /* 沿 */
    .next = &TextGlyphs_System_E6B7B9,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B2BFTiles,
};

const struct GlyphNew TextGlyphs_System_E68EA9 = { /* 掩 */
    .next = &TextGlyphs_System_E6B2BF,
    .width = 9,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68EA9Tiles,
};

const struct GlyphNew TextGlyphs_System_E8A18D = { /* 衍 */
    .next = &TextGlyphs_System_E8AEB6,
    .width = 11,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A18DTiles,
};

const struct GlyphNew TextGlyphs_System_E6BC94 = { /* 演 */
    .next = &TextGlyphs_System_E68EA9,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6BC94Tiles,
};

const struct GlyphNew TextGlyphs_System_E889B3 = { /* 艳 */
    .next = &TextGlyphs_System_E8A18D,
    .width = 9,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E889B3Tiles,
};

const struct GlyphNew TextGlyphs_System_E58E8C = { /* 厌 */
    .next = &TextGlyphs_System_E5B496,
    .width = 9,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58E8CTiles,
};

const struct GlyphNew TextGlyphs_System_E784B0 = { /* 焰 */
    .next = &TextGlyphs_System_E7839F,
    .width = 9,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E784B0Tiles,
};

const struct GlyphNew TextGlyphs_System_E5AEB4 = { /* 宴 */
    .next = &TextGlyphs_System_E58E8C,
    .width = 11,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AEB4Tiles,
};

const struct GlyphNew TextGlyphs_System_E9AA8C = { /* 验 */
    .next = &TextGlyphs_System_E9A29C,
    .width = 9,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9AA8CTiles,
};

const struct GlyphNew TextGlyphs_System_E6AE83 = { /* 殃 */
    .next = &TextGlyphs_System_E6BC94,
    .width = 11,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6AE83Tiles,
};

const struct GlyphNew TextGlyphs_System_E689AC = { /* 扬 */
    .next = &TextGlyphs_System_E6AE83,
    .width = 9,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E689ACTiles,
};

const struct GlyphNew TextGlyphs_System_E7BE8A = { /* 羊 */
    .next = &TextGlyphs_System_E784B0,
    .width = 11,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BE8ATiles,
};

const struct GlyphNew TextGlyphs_System_E6B48B = { /* 洋 */
    .next = &TextGlyphs_System_E689AC,
    .width = 11,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B48BTiles,
};

const struct GlyphNew TextGlyphs_System_E998B3 = { /* 阳 */
    .next = &TextGlyphs_System_E9AA8C,
    .width = 9,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E998B3Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BBB0 = { /* 仰 */
    .next = &TextGlyphs_System_E4B8A5,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BBB0Tiles,
};

const struct GlyphNew TextGlyphs_System_E585BB = { /* 养 */
    .next = &TextGlyphs_System_E5AEB4,
    .width = 9,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E585BBTiles,
};

const struct GlyphNew TextGlyphs_System_E6A0B7 = { /* 样 */
    .next = &TextGlyphs_System_E6B48B,
    .width = 9,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A0B7Tiles,
};

const struct GlyphNew TextGlyphs_System_E98280 = { /* 邀 */
    .next = &TextGlyphs_System_E998B3,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E98280Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A696 = { /* 妖 */
    .next = &TextGlyphs_System_E585BB,
    .width = 9,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A696Tiles,
};

const struct GlyphNew TextGlyphs_System_E69187 = { /* 摇 */
    .next = &TextGlyphs_System_E6A0B7,
    .width = 9,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69187Tiles,
};

const struct GlyphNew TextGlyphs_System_E981A5 = { /* 遥 */
    .next = &TextGlyphs_System_E98280,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E981A5Tiles,
};

const struct GlyphNew TextGlyphs_System_E88DAF = { /* 药 */
    .next = &TextGlyphs_System_E889B3,
    .width = 9,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88DAFTiles,
};

const struct GlyphNew TextGlyphs_System_E88080 = { /* 耀 */
    .next = &TextGlyphs_System_E88DAF,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88080Tiles,
};

const struct GlyphNew TextGlyphs_System_E788B7 = { /* 爷 */
    .next = &TextGlyphs_System_E7BE8A,
    .width = 9,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E788B7Tiles,
};

const struct GlyphNew TextGlyphs_System_E4B99F = { /* 也 */
    .next = &TextGlyphs_System_E4BBB0,
    .width = 9,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B99FTiles,
};

const struct GlyphNew TextGlyphs_System_E4B89A = { /* 业 */
    .next = &TextGlyphs_System_E4B99F,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B89ATiles,
};

const struct GlyphNew TextGlyphs_System_E58FB6 = { /* 叶 */
    .next = &TextGlyphs_System_E5A696,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58FB6Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B6B2 = { /* 液 */
    .next = &TextGlyphs_System_E69187,
    .width = 11,
    .utf_byte_2 = 0xb6,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B6B2Tiles,
};

const struct GlyphNew TextGlyphs_System_E58CBB = { /* 医 */
    .next = &TextGlyphs_System_E58FB6,
    .width = 9,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58CBBTiles,
};

const struct GlyphNew TextGlyphs_System_E4BE9D = { /* 依 */
    .next = &TextGlyphs_System_E4B89A,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BE9DTiles,
};

const struct GlyphNew TextGlyphs_System_E4BC8A = { /* 伊 */
    .next = &TextGlyphs_System_E4BE9D,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BC8ATiles,
};

const struct GlyphNew TextGlyphs_System_E98197 = { /* 遗 */
    .next = &TextGlyphs_System_E981A5,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E98197Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BBAA = { /* 仪 */
    .next = &TextGlyphs_System_E4BC8A,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BBAATiles,
};

const struct GlyphNew TextGlyphs_System_E79691 = { /* 疑 */
    .next = &TextGlyphs_System_E788B7,
    .width = 9,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79691Tiles,
};

const struct GlyphNew TextGlyphs_System_E5AE9C = { /* 宜 */
    .next = &TextGlyphs_System_E58CBB,
    .width = 9,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AE9CTiles,
};

const struct GlyphNew TextGlyphs_System_E5A7A8 = { /* 姨 */
    .next = &TextGlyphs_System_E5AE9C,
    .width = 9,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A7A8Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B7B2 = { /* 已 */
    .next = &TextGlyphs_System_E5A7A8,
    .width = 8,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B7B2Tiles,
};

const struct GlyphNew TextGlyphs_System_E889BA = { /* 艺 */
    .next = &TextGlyphs_System_E88080,
    .width = 9,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E889BATiles,
};

const struct GlyphNew TextGlyphs_System_E68A91 = { /* 抑 */
    .next = &TextGlyphs_System_E6B6B2,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68A91Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BAA6 = { /* 亦 */
    .next = &TextGlyphs_System_E4BBAA,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BAA6Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BF86 = { /* 忆 */
    .next = &TextGlyphs_System_E5B7B2,
    .width = 9,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BF86Tiles,
};

const struct GlyphNew TextGlyphs_System_E4B989 = { /* 义 */
    .next = &TextGlyphs_System_E4BAA6,
    .width = 9,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B989Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AEAE = { /* 议 */
    .next = &TextGlyphs_System_E889BA,
    .width = 9,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AEAETiles,
};

const struct GlyphNew TextGlyphs_System_E5BC82 = { /* 异 */
    .next = &TextGlyphs_System_E5BF86,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BC82Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BFBC = { /* 翼 */
    .next = &TextGlyphs_System_E79691,
    .width = 9,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BFBCTiles,
};

const struct GlyphNew TextGlyphs_System_E88DAB = { /* 荫 */
    .next = &TextGlyphs_System_E8AEAE,
    .width = 11,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88DABTiles,
};

const struct GlyphNew TextGlyphs_System_E998B4 = { /* 阴 */
    .next = &TextGlyphs_System_E98197,
    .width = 9,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E998B4Tiles,
};

const struct GlyphNew TextGlyphs_System_E993B6 = { /* 银 */
    .next = &TextGlyphs_System_E998B4,
    .width = 9,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E993B6Tiles,
};

const struct GlyphNew TextGlyphs_System_E99A90 = { /* 隐 */
    .next = &TextGlyphs_System_E993B6,
    .width = 9,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99A90Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A9B4 = { /* 婴 */
    .next = &TextGlyphs_System_E5BC82,
    .width = 11,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A9B4Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BA94 = { /* 应 */
    .next = &TextGlyphs_System_E5A9B4,
    .width = 9,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BA94Tiles,
};

const struct GlyphNew TextGlyphs_System_E890A5 = { /* 营 */
    .next = &TextGlyphs_System_E88DAB,
    .width = 11,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E890A5Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B5A2 = { /* 赢 */
    .next = &TextGlyphs_System_E890A5,
    .width = 9,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B5A2Tiles,
};

const struct GlyphNew TextGlyphs_System_E7A1AC = { /* 硬 */
    .next = &TextGlyphs_System_E7BFBC,
    .width = 9,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A1ACTiles,
};

const struct GlyphNew TextGlyphs_System_E698A0 = { /* 映 */
    .next = &TextGlyphs_System_E68A91,
    .width = 11,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E698A0Tiles,
};

const struct GlyphNew TextGlyphs_System_E5939F = { /* 哟 */
    .next = &TextGlyphs_System_E5BA94,
    .width = 11,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5939FTiles,
};

const struct GlyphNew TextGlyphs_System_E68BA5 = { /* 拥 */
    .next = &TextGlyphs_System_E698A0,
    .width = 9,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68BA5Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BDA3 = { /* 佣 */
    .next = &TextGlyphs_System_E4B989,
    .width = 9,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BDA3Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BAB8 = { /* 庸 */
    .next = &TextGlyphs_System_E5939F,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BAB8Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B9BD = { /* 幽 */
    .next = &TextGlyphs_System_E5BAB8,
    .width = 9,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B9BDTiles,
};

const struct GlyphNew TextGlyphs_System_E4BC98 = { /* 优 */
    .next = &TextGlyphs_System_E4BDA3,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BC98Tiles,
};

const struct GlyphNew TextGlyphs_System_E682A0 = { /* 悠 */
    .next = &TextGlyphs_System_E68BA5,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E682A0Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BFA7 = { /* 忧 */
    .next = &TextGlyphs_System_E5B9BD,
    .width = 9,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BFA7Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B0A4 = { /* 尤 */
    .next = &TextGlyphs_System_E5BFA7,
    .width = 9,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B0A4Tiles,
};

const struct GlyphNew TextGlyphs_System_E78AB9 = { /* 犹 */
    .next = &TextGlyphs_System_E7A1AC,
    .width = 9,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78AB9Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B8B8 = { /* 游 */
    .next = &TextGlyphs_System_E682A0,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B8B8Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BD91 = { /* 佑 */
    .next = &TextGlyphs_System_E4BC98,
    .width = 11,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BD91Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AFB1 = { /* 诱 */
    .next = &TextGlyphs_System_E8B5A2,
    .width = 11,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AFB1Tiles,
};

const struct GlyphNew TextGlyphs_System_E58F88 = { /* 又 */
    .next = &TextGlyphs_System_E5B0A4,
    .width = 9,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58F88Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BA8E = { /* 于 */
    .next = &TextGlyphs_System_E4BD91,
    .width = 9,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BA8ETiles,
};

const struct GlyphNew TextGlyphs_System_E6849A = { /* 愚 */
    .next = &TextGlyphs_System_E6B8B8,
    .width = 11,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6849ATiles,
};

const struct GlyphNew TextGlyphs_System_E9B1BC = { /* 鱼 */
    .next = &TextGlyphs_System_E99A90,
    .width = 11,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9B1BCTiles,
};

const struct GlyphNew TextGlyphs_System_E68489 = { /* 愉 */
    .next = &TextGlyphs_System_E6849A,
    .width = 9,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68489Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B1BF = { /* 屿 */
    .next = &TextGlyphs_System_E58F88,
    .width = 9,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B1BFTiles,
};

const struct GlyphNew TextGlyphs_System_E5AE87 = { /* 宇 */
    .next = &TextGlyphs_System_E5B1BF,
    .width = 11,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AE87Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AFAD = { /* 语 */
    .next = &TextGlyphs_System_E8AFB1,
    .width = 9,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AFADTiles,
};

const struct GlyphNew TextGlyphs_System_E98381 = { /* 郁 */
    .next = &TextGlyphs_System_E9B1BC,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E98381Tiles,
};

const struct GlyphNew TextGlyphs_System_E98187 = { /* 遇 */
    .next = &TextGlyphs_System_E98381,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E98187Tiles,
};

const struct GlyphNew TextGlyphs_System_E596BB = { /* 喻 */
    .next = &TextGlyphs_System_E5AE87,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E596BBTiles,
};

const struct GlyphNew TextGlyphs_System_E68488 = { /* 愈 */
    .next = &TextGlyphs_System_E68489,
    .width = 9,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68488Tiles,
};

const struct GlyphNew TextGlyphs_System_E78BB1 = { /* 狱 */
    .next = &TextGlyphs_System_E78AB9,
    .width = 9,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78BB1Tiles,
};

const struct GlyphNew TextGlyphs_System_E8A395 = { /* 裕 */
    .next = &TextGlyphs_System_E8AFAD,
    .width = 11,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A395Tiles,
};

const struct GlyphNew TextGlyphs_System_E9A284 = { /* 预 */
    .next = &TextGlyphs_System_E98187,
    .width = 9,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A284Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B1AB = { /* 豫 */
    .next = &TextGlyphs_System_E8A395,
    .width = 9,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B1ABTiles,
};

const struct GlyphNew TextGlyphs_System_E9A9AD = { /* 驭 */
    .next = &TextGlyphs_System_E9A284,
    .width = 11,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A9ADTiles,
};

const struct GlyphNew TextGlyphs_System_E6B88A = { /* 渊 */
    .next = &TextGlyphs_System_E68488,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B88ATiles,
};

const struct GlyphNew TextGlyphs_System_E59BAD = { /* 园 */
    .next = &TextGlyphs_System_E596BB,
    .width = 9,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59BADTiles,
};

const struct GlyphNew TextGlyphs_System_E59198 = { /* 员 */
    .next = &TextGlyphs_System_E59BAD,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59198Tiles,
};

const struct GlyphNew TextGlyphs_System_E6BA90 = { /* 源 */
    .next = &TextGlyphs_System_E6B88A,
    .width = 9,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6BA90Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BC98 = { /* 缘 */
    .next = &TextGlyphs_System_E78BB1,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BC98Tiles,
};

const struct GlyphNew TextGlyphs_System_E8BF9C = { /* 远 */
    .next = &TextGlyphs_System_E8B1AB,
    .width = 9,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BF9CTiles,
};

const struct GlyphNew TextGlyphs_System_E684BF = { /* 愿 */
    .next = &TextGlyphs_System_E6BA90,
    .width = 9,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E684BFTiles,
};

const struct GlyphNew TextGlyphs_System_E680A8 = { /* 怨 */
    .next = &TextGlyphs_System_E684BF,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E680A8Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BAA6 = { /* 约 */
    .next = &TextGlyphs_System_E7BC98,
    .width = 9,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BAA6Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B68A = { /* 越 */
    .next = &TextGlyphs_System_E8BF9C,
    .width = 9,
    .utf_byte_2 = 0xb6,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B68ATiles,
};

const struct GlyphNew TextGlyphs_System_E8B783 = { /* 跃 */
    .next = &TextGlyphs_System_E8B68A,
    .width = 9,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B783Tiles,
};

const struct GlyphNew TextGlyphs_System_E992A5 = { /* 钥 */
    .next = &TextGlyphs_System_E9A9AD,
    .width = 9,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E992A5Tiles,
};

const struct GlyphNew TextGlyphs_System_E682A6 = { /* 悦 */
    .next = &TextGlyphs_System_E680A8,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E682A6Tiles,
};

const struct GlyphNew TextGlyphs_System_E99885 = { /* 阅 */
    .next = &TextGlyphs_System_E992A5,
    .width = 11,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99885Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BA91 = { /* 云 */
    .next = &TextGlyphs_System_E4BA8E,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BA91Tiles,
};

const struct GlyphNew TextGlyphs_System_E58581 = { /* 允 */
    .next = &TextGlyphs_System_E59198,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58581Tiles,
};

const struct GlyphNew TextGlyphs_System_E8BF90 = { /* 运 */
    .next = &TextGlyphs_System_E8B783,
    .width = 9,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BF90Tiles,
};

const struct GlyphNew TextGlyphs_System_E69995 = { /* 晕 */
    .next = &TextGlyphs_System_E682A6,
    .width = 11,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69995Tiles,
};

const struct GlyphNew TextGlyphs_System_E5AD95 = { /* 孕 */
    .next = &TextGlyphs_System_E58581,
    .width = 9,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AD95Tiles,
};

const struct GlyphNew TextGlyphs_System_E7A0B8 = { /* 砸 */
    .next = &TextGlyphs_System_E7BAA6,
    .width = 11,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A0B8Tiles,
};

const struct GlyphNew TextGlyphs_System_E69D82 = { /* 杂 */
    .next = &TextGlyphs_System_E69995,
    .width = 11,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69D82Tiles,
};

const struct GlyphNew TextGlyphs_System_E781BE = { /* 灾 */
    .next = &TextGlyphs_System_E7A0B8,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E781BETiles,
};

const struct GlyphNew TextGlyphs_System_E8BDBD = { /* 载 */
    .next = &TextGlyphs_System_E8BF90,
    .width = 9,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BDBDTiles,
};

const struct GlyphNew TextGlyphs_System_E69492 = { /* 攒 */
    .next = &TextGlyphs_System_E69D82,
    .width = 11,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69492Tiles,
};

const struct GlyphNew TextGlyphs_System_E69A82 = { /* 暂 */
    .next = &TextGlyphs_System_E69492,
    .width = 9,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69A82Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B59E = { /* 赞 */
    .next = &TextGlyphs_System_E8BDBD,
    .width = 9,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B59ETiles,
};

const struct GlyphNew TextGlyphs_System_E8848F = { /* 脏 */
    .next = &TextGlyphs_System_E8B59E,
    .width = 11,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8848FTiles,
};

const struct GlyphNew TextGlyphs_System_E981AD = { /* 遭 */
    .next = &TextGlyphs_System_E99885,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E981ADTiles,
};

const struct GlyphNew TextGlyphs_System_E7B39F = { /* 糟 */
    .next = &TextGlyphs_System_E781BE,
    .width = 11,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B39FTiles,
};

const struct GlyphNew TextGlyphs_System_E8B4A3 = { /* 责 */
    .next = &TextGlyphs_System_E8848F,
    .width = 9,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B4A3Tiles,
};

const struct GlyphNew TextGlyphs_System_E68BA9 = { /* 择 */
    .next = &TextGlyphs_System_E69A82,
    .width = 9,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68BA9Tiles,
};

const struct GlyphNew TextGlyphs_System_E58899 = { /* 则 */
    .next = &TextGlyphs_System_E5AD95,
    .width = 9,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58899Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B3BD = { /* 泽 */
    .next = &TextGlyphs_System_E68BA9,
    .width = 9,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B3BDTiles,
};

const struct GlyphNew TextGlyphs_System_E8B4BC = { /* 贼 */
    .next = &TextGlyphs_System_E8B4A3,
    .width = 9,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B4BCTiles,
};

const struct GlyphNew TextGlyphs_System_E6808E = { /* 怎 */
    .next = &TextGlyphs_System_E6B3BD,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6808ETiles,
};

const struct GlyphNew TextGlyphs_System_E5A29E = { /* 增 */
    .next = &TextGlyphs_System_E58899,
    .width = 9,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A29ETiles,
};

const struct GlyphNew TextGlyphs_System_E69BBE = { /* 曾 */
    .next = &TextGlyphs_System_E6808E,
    .width = 9,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69BBETiles,
};

const struct GlyphNew TextGlyphs_System_E8B5A0 = { /* 赠 */
    .next = &TextGlyphs_System_E8B4BC,
    .width = 11,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B5A0Tiles,
};

const struct GlyphNew TextGlyphs_System_E6898E = { /* 扎 */
    .next = &TextGlyphs_System_E69BBE,
    .width = 9,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6898ETiles,
};

const struct GlyphNew TextGlyphs_System_E596B3 = { /* 喳 */
    .next = &TextGlyphs_System_E5A29E,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E596B3Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B8A3 = { /* 渣 */
    .next = &TextGlyphs_System_E6898E,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B8A3Tiles,
};

const struct GlyphNew TextGlyphs_System_E79CA8 = { /* 眨 */
    .next = &TextGlyphs_System_E7B39F,
    .width = 11,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79CA8Tiles,
};

const struct GlyphNew TextGlyphs_System_E5928B = { /* 咋 */
    .next = &TextGlyphs_System_E596B3,
    .width = 11,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5928BTiles,
};

const struct GlyphNew TextGlyphs_System_E4B98D = { /* 乍 */
    .next = &TextGlyphs_System_E4BA91,
    .width = 11,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B98DTiles,
};

const struct GlyphNew TextGlyphs_System_E69198 = { /* 摘 */
    .next = &TextGlyphs_System_E6B8A3,
    .width = 11,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69198Tiles,
};

const struct GlyphNew TextGlyphs_System_E5AE85 = { /* 宅 */
    .next = &TextGlyphs_System_E5928B,
    .width = 9,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AE85Tiles,
};

const struct GlyphNew TextGlyphs_System_E7AA84 = { /* 窄 */
    .next = &TextGlyphs_System_E79CA8,
    .width = 11,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7AA84Tiles,
};

const struct GlyphNew TextGlyphs_System_E580BA = { /* 债 */
    .next = &TextGlyphs_System_E5AE85,
    .width = 11,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E580BATiles,
};

const struct GlyphNew TextGlyphs_System_E5AFA8 = { /* 寨 */
    .next = &TextGlyphs_System_E580BA,
    .width = 9,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AFA8Tiles,
};

const struct GlyphNew TextGlyphs_System_E79EBB = { /* 瞻 */
    .next = &TextGlyphs_System_E7AA84,
    .width = 11,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79EBBTiles,
};

const struct GlyphNew TextGlyphs_System_E7B298 = { /* 粘 */
    .next = &TextGlyphs_System_E79EBB,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7B298Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B2BE = { /* 沾 */
    .next = &TextGlyphs_System_E69198,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B2BETiles,
};

const struct GlyphNew TextGlyphs_System_E696A9 = { /* 斩 */
    .next = &TextGlyphs_System_E6B2BE,
    .width = 9,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E696A9Tiles,
};

const struct GlyphNew TextGlyphs_System_E68898 = { /* 战 */
    .next = &TextGlyphs_System_E696A9,
    .width = 9,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68898Tiles,
};

const struct GlyphNew TextGlyphs_System_E7AB99 = { /* 站 */
    .next = &TextGlyphs_System_E7B298,
    .width = 9,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7AB99Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BBBD = { /* 绽 */
    .next = &TextGlyphs_System_E7AB99,
    .width = 11,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BBBDTiles,
};

const struct GlyphNew TextGlyphs_System_E5BDB0 = { /* 彰 */
    .next = &TextGlyphs_System_E5AFA8,
    .width = 9,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BDB0Tiles,
};

const struct GlyphNew TextGlyphs_System_E5BCA0 = { /* 张 */
    .next = &TextGlyphs_System_E5BDB0,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BCA0Tiles,
};

const struct GlyphNew TextGlyphs_System_E68E8C = { /* 掌 */
    .next = &TextGlyphs_System_E68898,
    .width = 9,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68E8CTiles,
};

const struct GlyphNew TextGlyphs_System_E6B6A8 = { /* 涨 */
    .next = &TextGlyphs_System_E68E8C,
    .width = 11,
    .utf_byte_2 = 0xb6,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B6A8Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B890 = { /* 帐 */
    .next = &TextGlyphs_System_E5BCA0,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B890Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BB97 = { /* 仗 */
    .next = &TextGlyphs_System_E4B98D,
    .width = 11,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BB97Tiles,
};

const struct GlyphNew TextGlyphs_System_E689BE = { /* 找 */
    .next = &TextGlyphs_System_E6B6A8,
    .width = 9,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E689BETiles,
};

const struct GlyphNew TextGlyphs_System_E785A7 = { /* 照 */
    .next = &TextGlyphs_System_E7BBBD,
    .width = 9,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E785A7Tiles,
};

const struct GlyphNew TextGlyphs_System_E58586 = { /* 兆 */
    .next = &TextGlyphs_System_E5B890,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58586Tiles,
};

const struct GlyphNew TextGlyphs_System_E58FAC = { /* 召 */
    .next = &TextGlyphs_System_E58586,
    .width = 9,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58FACTiles,
};

const struct GlyphNew TextGlyphs_System_E981AE = { /* 遮 */
    .next = &TextGlyphs_System_E981AD,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E981AETiles,
};

const struct GlyphNew TextGlyphs_System_E68A98 = { /* 折 */
    .next = &TextGlyphs_System_E689BE,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68A98Tiles,
};

const struct GlyphNew TextGlyphs_System_E8BF99 = { /* 这 */
    .next = &TextGlyphs_System_E8B5A0,
    .width = 9,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BF99Tiles,
};

const struct GlyphNew TextGlyphs_System_E78F8D = { /* 珍 */
    .next = &TextGlyphs_System_E785A7,
    .width = 9,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78F8DTiles,
};

const struct GlyphNew TextGlyphs_System_E99288 = { /* 针 */
    .next = &TextGlyphs_System_E981AE,
    .width = 11,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99288Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BEA6 = { /* 侦 */
    .next = &TextGlyphs_System_E4BB97,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BEA6Tiles,
};

const struct GlyphNew TextGlyphs_System_E99C87 = { /* 震 */
    .next = &TextGlyphs_System_E99288,
    .width = 9,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99C87Tiles,
};

const struct GlyphNew TextGlyphs_System_E68CAF = { /* 振 */
    .next = &TextGlyphs_System_E68A98,
    .width = 9,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68CAFTiles,
};

const struct GlyphNew TextGlyphs_System_E99587 = { /* 镇 */
    .next = &TextGlyphs_System_E99C87,
    .width = 9,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99587Tiles,
};

const struct GlyphNew TextGlyphs_System_E998B5 = { /* 阵 */
    .next = &TextGlyphs_System_E99587,
    .width = 9,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E998B5Tiles,
};

const struct GlyphNew TextGlyphs_System_E68CA3 = { /* 挣 */
    .next = &TextGlyphs_System_E68CAF,
    .width = 11,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68CA3Tiles,
};

const struct GlyphNew TextGlyphs_System_E79D81 = { /* 睁 */
    .next = &TextGlyphs_System_E78F8D,
    .width = 11,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79D81Tiles,
};

const struct GlyphNew TextGlyphs_System_E68BAF = { /* 拯 */
    .next = &TextGlyphs_System_E68CA3,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68BAFTiles,
};

const struct GlyphNew TextGlyphs_System_E79787 = { /* 症 */
    .next = &TextGlyphs_System_E79D81,
    .width = 9,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79787Tiles,
};

const struct GlyphNew TextGlyphs_System_E98391 = { /* 郑 */
    .next = &TextGlyphs_System_E998B5,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E98391Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AF81 = { /* 证 */
    .next = &TextGlyphs_System_E8BF99,
    .width = 9,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AF81Tiles,
};

const struct GlyphNew TextGlyphs_System_E69E9D = { /* 枝 */
    .next = &TextGlyphs_System_E68BAF,
    .width = 11,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69E9DTiles,
};

const struct GlyphNew TextGlyphs_System_E88482 = { /* 脂 */
    .next = &TextGlyphs_System_E8AF81,
    .width = 11,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88482Tiles,
};

const struct GlyphNew TextGlyphs_System_E4B98B = { /* 之 */
    .next = &TextGlyphs_System_E4BEA6,
    .width = 9,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B98BTiles,
};

const struct GlyphNew TextGlyphs_System_E7BB87 = { /* 织 */
    .next = &TextGlyphs_System_E79787,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BB87Tiles,
};

const struct GlyphNew TextGlyphs_System_E8818C = { /* 职 */
    .next = &TextGlyphs_System_E88482,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8818CTiles,
};

const struct GlyphNew TextGlyphs_System_E6A48D = { /* 植 */
    .next = &TextGlyphs_System_E69E9D,
    .width = 11,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A48DTiles,
};

const struct GlyphNew TextGlyphs_System_E6AE96 = { /* 殖 */
    .next = &TextGlyphs_System_E6A48D,
    .width = 11,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6AE96Tiles,
};

const struct GlyphNew TextGlyphs_System_E689A7 = { /* 执 */
    .next = &TextGlyphs_System_E6AE96,
    .width = 9,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E689A7Tiles,
};

const struct GlyphNew TextGlyphs_System_E580BC = { /* 值 */
    .next = &TextGlyphs_System_E58FAC,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E580BCTiles,
};

const struct GlyphNew TextGlyphs_System_E59D80 = { /* 址 */
    .next = &TextGlyphs_System_E580BC,
    .width = 9,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59D80Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B6BE = { /* 趾 */
    .next = &TextGlyphs_System_E8818C,
    .width = 11,
    .utf_byte_2 = 0xb6,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B6BETiles,
};

const struct GlyphNew TextGlyphs_System_E58FAA = { /* 只 */
    .next = &TextGlyphs_System_E59D80,
    .width = 9,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58FAATiles,
};

const struct GlyphNew TextGlyphs_System_E697A8 = { /* 旨 */
    .next = &TextGlyphs_System_E689A7,
    .width = 11,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E697A8Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BAB8 = { /* 纸 */
    .next = &TextGlyphs_System_E7BB87,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BAB8Tiles,
};

const struct GlyphNew TextGlyphs_System_E68C9A = { /* 挚 */
    .next = &TextGlyphs_System_E697A8,
    .width = 11,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68C9ATiles,
};

const struct GlyphNew TextGlyphs_System_E68EB7 = { /* 掷 */
    .next = &TextGlyphs_System_E68C9A,
    .width = 9,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68EB7Tiles,
};

const struct GlyphNew TextGlyphs_System_E887B4 = { /* 致 */
    .next = &TextGlyphs_System_E8B6BE,
    .width = 9,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E887B4Tiles,
};

const struct GlyphNew TextGlyphs_System_E699BA = { /* 智 */
    .next = &TextGlyphs_System_E68EB7,
    .width = 9,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E699BATiles,
};

const struct GlyphNew TextGlyphs_System_E7A7A9 = { /* 秩 */
    .next = &TextGlyphs_System_E7BAB8,
    .width = 11,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A7A9Tiles,
};

const struct GlyphNew TextGlyphs_System_E7A89A = { /* 稚 */
    .next = &TextGlyphs_System_E7A7A9,
    .width = 11,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A89ATiles,
};

const struct GlyphNew TextGlyphs_System_E8B4A8 = { /* 质 */
    .next = &TextGlyphs_System_E887B4,
    .width = 9,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B4A8Tiles,
};

const struct GlyphNew TextGlyphs_System_E9929F = { /* 钟 */
    .next = &TextGlyphs_System_E98391,
    .width = 11,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9929FTiles,
};

const struct GlyphNew TextGlyphs_System_E8A1B7 = { /* 衷 */
    .next = &TextGlyphs_System_E8B4A8,
    .width = 9,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A1B7Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BB88 = { /* 终 */
    .next = &TextGlyphs_System_E7A89A,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BB88Tiles,
};

const struct GlyphNew TextGlyphs_System_E7A78D = { /* 种 */
    .next = &TextGlyphs_System_E7BB88,
    .width = 9,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A78DTiles,
};

const struct GlyphNew TextGlyphs_System_E4BC97 = { /* 众 */
    .next = &TextGlyphs_System_E4B98B,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BC97Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B4B2 = { /* 洲 */
    .next = &TextGlyphs_System_E699BA,
    .width = 11,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B4B2Tiles,
};

const struct GlyphNew TextGlyphs_System_E59292 = { /* 咒 */
    .next = &TextGlyphs_System_E58FAA,
    .width = 11,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59292Tiles,
};

const struct GlyphNew TextGlyphs_System_E79AB1 = { /* 皱 */
    .next = &TextGlyphs_System_E7A78D,
    .width = 11,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79AB1Tiles,
};

const struct GlyphNew TextGlyphs_System_E5AE99 = { /* 宙 */
    .next = &TextGlyphs_System_E59292,
    .width = 11,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5AE99Tiles,
};

const struct GlyphNew TextGlyphs_System_E78FA0 = { /* 珠 */
    .next = &TextGlyphs_System_E79AB1,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78FA0Tiles,
};

const struct GlyphNew TextGlyphs_System_E69CB1 = { /* 朱 */
    .next = &TextGlyphs_System_E6B4B2,
    .width = 9,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69CB1Tiles,
};

const struct GlyphNew TextGlyphs_System_E78CAA = { /* 猪 */
    .next = &TextGlyphs_System_E78FA0,
    .width = 11,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78CAATiles,
};

const struct GlyphNew TextGlyphs_System_E8AFB8 = { /* 诸 */
    .next = &TextGlyphs_System_E8A1B7,
    .width = 11,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AFB8Tiles,
};

const struct GlyphNew TextGlyphs_System_E7ABB9 = { /* 竹 */
    .next = &TextGlyphs_System_E78CAA,
    .width = 9,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7ABB9Tiles,
};

const struct GlyphNew TextGlyphs_System_E598B1 = { /* 嘱 */
    .next = &TextGlyphs_System_E5AE99,
    .width = 11,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E598B1Tiles,
};

const struct GlyphNew TextGlyphs_System_E89197 = { /* 著 */
    .next = &TextGlyphs_System_E8AFB8,
    .width = 9,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E89197Tiles,
};

const struct GlyphNew TextGlyphs_System_E7A59D = { /* 祝 */
    .next = &TextGlyphs_System_E7ABB9,
    .width = 9,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A59DTiles,
};

const struct GlyphNew TextGlyphs_System_E9A9BB = { /* 驻 */
    .next = &TextGlyphs_System_E9929F,
    .width = 9,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9A9BBTiles,
};

const struct GlyphNew TextGlyphs_System_E68A93 = { /* 抓 */
    .next = &TextGlyphs_System_E69CB1,
    .width = 11,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68A93Tiles,
};

const struct GlyphNew TextGlyphs_System_E788AA = { /* 爪 */
    .next = &TextGlyphs_System_E7A59D,
    .width = 9,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E788AATiles,
};

const struct GlyphNew TextGlyphs_System_E68BBD = { /* 拽 */
    .next = &TextGlyphs_System_E68A93,
    .width = 11,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68BBDTiles,
};

const struct GlyphNew TextGlyphs_System_E4B893 = { /* 专 */
    .next = &TextGlyphs_System_E4BC97,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4B893Tiles,
};

const struct GlyphNew TextGlyphs_System_E8BDAC = { /* 转 */
    .next = &TextGlyphs_System_E89197,
    .width = 9,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BDACTiles,
};

const struct GlyphNew TextGlyphs_System_E8B59A = { /* 赚 */
    .next = &TextGlyphs_System_E8BDAC,
    .width = 9,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B59ATiles,
};

const struct GlyphNew TextGlyphs_System_E5BA84 = { /* 庄 */
    .next = &TextGlyphs_System_E598B1,
    .width = 9,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BA84Tiles,
};

const struct GlyphNew TextGlyphs_System_E6929E = { /* 撞 */
    .next = &TextGlyphs_System_E68BBD,
    .width = 11,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6929ETiles,
};

const struct GlyphNew TextGlyphs_System_E59DA0 = { /* 坠 */
    .next = &TextGlyphs_System_E5BA84,
    .width = 9,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59DA0Tiles,
};

const struct GlyphNew TextGlyphs_System_E58786 = { /* 准 */
    .next = &TextGlyphs_System_E59DA0,
    .width = 9,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58786Tiles,
};

const struct GlyphNew TextGlyphs_System_E68D89 = { /* 捉 */
    .next = &TextGlyphs_System_E6929E,
    .width = 11,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68D89Tiles,
};

const struct GlyphNew TextGlyphs_System_E6A18C = { /* 桌 */
    .next = &TextGlyphs_System_E68D89,
    .width = 11,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6A18CTiles,
};

const struct GlyphNew TextGlyphs_System_E790A2 = { /* 琢 */
    .next = &TextGlyphs_System_E788AA,
    .width = 11,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E790A2Tiles,
};

const struct GlyphNew TextGlyphs_System_E585B9 = { /* 兹 */
    .next = &TextGlyphs_System_E58786,
    .width = 9,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E585B9Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B584 = { /* 资 */
    .next = &TextGlyphs_System_E8B59A,
    .width = 9,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B584Tiles,
};

const struct GlyphNew TextGlyphs_System_E6BB8B = { /* 滋 */
    .next = &TextGlyphs_System_E6A18C,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6BB8BTiles,
};

const struct GlyphNew TextGlyphs_System_E4BB94 = { /* 仔 */
    .next = &TextGlyphs_System_E4B893,
    .width = 11,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BB94Tiles,
};

const struct GlyphNew TextGlyphs_System_E8B8AA = { /* 踪 */
    .next = &TextGlyphs_System_E8B584,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B8AATiles,
};

const struct GlyphNew TextGlyphs_System_E7BBBC = { /* 综 */
    .next = &TextGlyphs_System_E790A2,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BBBCTiles,
};

const struct GlyphNew TextGlyphs_System_E680BB = { /* 总 */
    .next = &TextGlyphs_System_E6BB8B,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E680BBTiles,
};

const struct GlyphNew TextGlyphs_System_E7BAB5 = { /* 纵 */
    .next = &TextGlyphs_System_E7BBBC,
    .width = 9,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BAB5Tiles,
};

const struct GlyphNew TextGlyphs_System_E68F8D = { /* 揍 */
    .next = &TextGlyphs_System_E680BB,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68F8DTiles,
};

const struct GlyphNew TextGlyphs_System_E58D92 = { /* 卒 */
    .next = &TextGlyphs_System_E585B9,
    .width = 11,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58D92Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AF85 = { /* 诅 */
    .next = &TextGlyphs_System_E8B8AA,
    .width = 11,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AF85Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BB84 = { /* 组 */
    .next = &TextGlyphs_System_E7BAB5,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BB84Tiles,
};

const struct GlyphNew TextGlyphs_System_E992BB = { /* 钻 */
    .next = &TextGlyphs_System_E9A9BB,
    .width = 11,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E992BBTiles,
};

const struct GlyphNew TextGlyphs_System_E598B4 = { /* 嘴 */
    .next = &TextGlyphs_System_E58D92,
    .width = 9,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E598B4Tiles,
};

const struct GlyphNew TextGlyphs_System_E981B5 = { /* 遵 */
    .next = &TextGlyphs_System_E992BB,
    .width = 11,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E981B5Tiles,
};

const struct GlyphNew TextGlyphs_System_E698A8 = { /* 昨 */
    .next = &TextGlyphs_System_E68F8D,
    .width = 11,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E698A8Tiles,
};

const struct GlyphNew TextGlyphs_System_E4BD90 = { /* 佐 */
    .next = &TextGlyphs_System_E4BB94,
    .width = 9,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BD90Tiles,
};

const struct GlyphNew TextGlyphs_System_E5819A = { /* 做 */
    .next = &TextGlyphs_System_E598B4,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5819ATiles,
};

const struct GlyphNew TextGlyphs_System_E59D90 = { /* 坐 */
    .next = &TextGlyphs_System_E5819A,
    .width = 9,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59D90Tiles,
};

const struct GlyphNew TextGlyphs_System_E58EAE = { /* 厮 */
    .next = &TextGlyphs_System_E59D90,
    .width = 11,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58EAETiles,
};

const struct GlyphNew TextGlyphs_System_E585AE = { /* 兮 */
    .next = &TextGlyphs_System_E58EAE,
    .width = 11,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E585AETiles,
};

const struct GlyphNew TextGlyphs_System_E4BAB5 = { /* 亵 */
    .next = &TextGlyphs_System_E4BD90,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E4BAB5Tiles,
};

const struct GlyphNew TextGlyphs_System_E7A680 = { /* 禀 */
    .next = &TextGlyphs_System_E7BB84,
    .width = 11,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7A680Tiles,
};

const struct GlyphNew TextGlyphs_System_E586A5 = { /* 冥 */
    .next = &TextGlyphs_System_E585AE,
    .width = 11,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E586A5Tiles,
};

const struct GlyphNew TextGlyphs_System_E8AEAA = { /* 讪 */
    .next = &TextGlyphs_System_E8AF85,
    .width = 9,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8AEAATiles,
};

const struct GlyphNew TextGlyphs_System_E8B099 = { /* 谙 */
    .next = &TextGlyphs_System_E8AEAA,
    .width = 9,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B099Tiles,
};

const struct GlyphNew TextGlyphs_System_E998B1 = { /* 阱 */
    .next = &TextGlyphs_System_E981B5,
    .width = 9,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E998B1Tiles,
};

const struct GlyphNew TextGlyphs_System_E982B8 = { /* 邸 */
    .next = &TextGlyphs_System_E998B1,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E982B8Tiles,
};

const struct GlyphNew TextGlyphs_System_E88C9C = { /* 茜 */
    .next = &TextGlyphs_System_E8B099,
    .width = 9,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E88C9CTiles,
};

const struct GlyphNew TextGlyphs_System_E89083 = { /* 萃 */
    .next = &TextGlyphs_System_E88C9C,
    .width = 9,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E89083Tiles,
};

const struct GlyphNew TextGlyphs_System_E58FBD = { /* 叽 */
    .next = &TextGlyphs_System_E586A5,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58FBDTiles,
};

const struct GlyphNew TextGlyphs_System_E58FA8 = { /* 叨 */
    .next = &TextGlyphs_System_E58FBD,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E58FA8Tiles,
};

const struct GlyphNew TextGlyphs_System_E59096 = { /* 吖 */
    .next = &TextGlyphs_System_E58FA8,
    .width = 9,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59096Tiles,
};

const struct GlyphNew TextGlyphs_System_E59183 = { /* 呃 */
    .next = &TextGlyphs_System_E59096,
    .width = 11,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59183Tiles,
};

const struct GlyphNew TextGlyphs_System_E591B1 = { /* 呱 */
    .next = &TextGlyphs_System_E59183,
    .width = 11,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E591B1Tiles,
};

const struct GlyphNew TextGlyphs_System_E592A6 = { /* 咦 */
    .next = &TextGlyphs_System_E591B1,
    .width = 11,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E592A6Tiles,
};

const struct GlyphNew TextGlyphs_System_E594A0 = { /* 唠 */
    .next = &TextGlyphs_System_E592A6,
    .width = 11,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E594A0Tiles,
};

const struct GlyphNew TextGlyphs_System_E59494 = { /* 唔 */
    .next = &TextGlyphs_System_E594A0,
    .width = 11,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59494Tiles,
};

const struct GlyphNew TextGlyphs_System_E595A7 = { /* 啧 */
    .next = &TextGlyphs_System_E59494,
    .width = 11,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E595A7Tiles,
};

const struct GlyphNew TextGlyphs_System_E59694 = { /* 喔 */
    .next = &TextGlyphs_System_E595A7,
    .width = 11,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59694Tiles,
};

const struct GlyphNew TextGlyphs_System_E597A6 = { /* 嗦 */
    .next = &TextGlyphs_System_E59694,
    .width = 11,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E597A6Tiles,
};

const struct GlyphNew TextGlyphs_System_E597AF = { /* 嗯 */
    .next = &TextGlyphs_System_E597A6,
    .width = 11,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E597AFTiles,
};

const struct GlyphNew TextGlyphs_System_E59881 = { /* 嘁 */
    .next = &TextGlyphs_System_E597AF,
    .width = 11,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59881Tiles,
};

const struct GlyphNew TextGlyphs_System_E59997 = { /* 噗 */
    .next = &TextGlyphs_System_E59881,
    .width = 11,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E59997Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B8B7 = { /* 帷 */
    .next = &TextGlyphs_System_E59997,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B8B7Tiles,
};

const struct GlyphNew TextGlyphs_System_E5B29A = { /* 岚 */
    .next = &TextGlyphs_System_E5B8B7,
    .width = 9,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5B29ATiles,
};

const struct GlyphNew TextGlyphs_System_E68398 = { /* 惘 */
    .next = &TextGlyphs_System_E698A8,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68398Tiles,
};

const struct GlyphNew TextGlyphs_System_E68495 = { /* 愕 */
    .next = &TextGlyphs_System_E68398,
    .width = 9,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E68495Tiles,
};

const struct GlyphNew TextGlyphs_System_E684A3 = { /* 愣 */
    .next = &TextGlyphs_System_E68495,
    .width = 11,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E684A3Tiles,
};

const struct GlyphNew TextGlyphs_System_E6B28C = { /* 沌 */
    .next = &TextGlyphs_System_E684A3,
    .width = 11,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B28CTiles,
};

const struct GlyphNew TextGlyphs_System_E6B88E = { /* 渎 */
    .next = &TextGlyphs_System_E6B28C,
    .width = 11,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E6B88ETiles,
};

const struct GlyphNew TextGlyphs_System_E5BCA9 = { /* 弩 */
    .next = &TextGlyphs_System_E5B29A,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5BCA9Tiles,
};

const struct GlyphNew TextGlyphs_System_E5A885 = { /* 娅 */
    .next = &TextGlyphs_System_E5BCA9,
    .width = 9,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E5A885Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BAA3 = { /* 纣 */
    .next = &TextGlyphs_System_E7A680,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BAA3Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BC87 = { /* 缇 */
    .next = &TextGlyphs_System_E7BAA3,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BC87Tiles,
};

const struct GlyphNew TextGlyphs_System_E7BCAA = { /* 缪 */
    .next = &TextGlyphs_System_E7BC87,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BCAATiles,
};

const struct GlyphNew TextGlyphs_System_E78F82 = { /* 珂 */
    .next = &TextGlyphs_System_E7BCAA,
    .width = 9,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78F82Tiles,
};

const struct GlyphNew TextGlyphs_System_E78F80 = { /* 珀 */
    .next = &TextGlyphs_System_E78F82,
    .width = 11,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E78F80Tiles,
};

const struct GlyphNew TextGlyphs_System_E69EAD = { /* 枭 */
    .next = &TextGlyphs_System_E6B88E,
    .width = 11,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69EADTiles,
};

const struct GlyphNew TextGlyphs_System_E8A78A = { /* 觊 */
    .next = &TextGlyphs_System_E89083,
    .width = 11,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A78ATiles,
};

const struct GlyphNew TextGlyphs_System_E8A78E = { /* 觎 */
    .next = &TextGlyphs_System_E8A78A,
    .width = 11,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8A78ETiles,
};

const struct GlyphNew TextGlyphs_System_E69595 = { /* 敕 */
    .next = &TextGlyphs_System_E69EAD,
    .width = 11,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69595Tiles,
};

const struct GlyphNew TextGlyphs_System_E883A7 = { /* 胧 */
    .next = &TextGlyphs_System_E8A78E,
    .width = 11,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E883A7Tiles,
};

const struct GlyphNew TextGlyphs_System_E69CA6 = { /* 朦 */
    .next = &TextGlyphs_System_E69595,
    .width = 11,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E69CA6Tiles,
};

const struct GlyphNew TextGlyphs_System_E782AB = { /* 炫 */
    .next = &TextGlyphs_System_E78F80,
    .width = 11,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E782ABTiles,
};

const struct GlyphNew TextGlyphs_System_E79DBF = { /* 睿 */
    .next = &TextGlyphs_System_E782AB,
    .width = 11,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E79DBFTiles,
};

const struct GlyphNew TextGlyphs_System_E7BE81 = { /* 羁 */
    .next = &TextGlyphs_System_E79DBF,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E7BE81Tiles,
};

const struct GlyphNew TextGlyphs_System_E993A0 = { /* 铠 */
    .next = &TextGlyphs_System_E982B8,
    .width = 9,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E993A0Tiles,
};

const struct GlyphNew TextGlyphs_System_E99596 = { /* 镖 */
    .next = &TextGlyphs_System_E993A0,
    .width = 9,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E99596Tiles,
};

const struct GlyphNew TextGlyphs_System_E995AF = { /* 镯 */
    .next = &TextGlyphs_System_E99596,
    .width = 11,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E995AFTiles,
};

const struct GlyphNew TextGlyphs_System_E995B3 = { /* 镳 */
    .next = &TextGlyphs_System_E995AF,
    .width = 11,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E995B3Tiles,
};

const struct GlyphNew TextGlyphs_System_E9B9AB = { /* 鹫 */
    .next = &TextGlyphs_System_E995B3,
    .width = 11,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9B9ABTiles,
};

const struct GlyphNew TextGlyphs_System_E798A0 = { /* 瘠 */
    .next = &TextGlyphs_System_E7BE81,
    .width = 11,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E798A0Tiles,
};

const struct GlyphNew TextGlyphs_System_E89994 = { /* 虔 */
    .next = &TextGlyphs_System_E883A7,
    .width = 11,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E89994Tiles,
};

const struct GlyphNew TextGlyphs_System_E89C9A = { /* 蜚 */
    .next = &TextGlyphs_System_E89994,
    .width = 11,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E89C9ATiles,
};

const struct GlyphNew TextGlyphs_System_E8B982 = { /* 蹂 */
    .next = &TextGlyphs_System_E89C9A,
    .width = 11,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8B982Tiles,
};

const struct GlyphNew TextGlyphs_System_E8BA8F = { /* 躏 */
    .next = &TextGlyphs_System_E8B982,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E8BA8FTiles,
};

const struct GlyphNew TextGlyphs_System_E9AD85 = { /* 魅 */
    .next = &TextGlyphs_System_E9B9AB,
    .width = 11,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9AD85Tiles,
};

const struct GlyphNew TextGlyphs_System_E9BABE = { /* 麾 */
    .next = &TextGlyphs_System_E9AD85,
    .width = 11,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = TextGlyphs_System_E9BABETiles,
};

struct GlyphNew const * const TextGlyphs_SystemNew[0x100 - 0x20] = {
    [0xe3 - 0x20] = &TextGlyphs_System_E38083,
    [0xe2 - 0x20] = &TextGlyphs_System_E28A87,
    [0xe6 - 0x20] = &TextGlyphs_System_E69CA6,
    [0xe9 - 0x20] = &TextGlyphs_System_E9BABE,
    [0xe5 - 0x20] = &TextGlyphs_System_E5A885,
    [0xe8 - 0x20] = &TextGlyphs_System_E8BA8F,
    [0xe7 - 0x20] = &TextGlyphs_System_E798A0,
    [0xef - 0x20] = &TextGlyphs_System_EFBD9A,
    [0xe4 - 0x20] = &TextGlyphs_System_E4BAB5,
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
    [0xc2 - 0x20] = &TextGlyphs_System_C2B0,
    [0xc3 - 0x20] = &TextGlyphs_System_C3BC,
};
