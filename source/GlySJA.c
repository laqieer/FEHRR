#include <stddef.h>
#include "textNew.h"
#include "all_gfx.h"
const struct GlyphNew GlySJA_E382A1 = { /* ァ */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E382A1Tiles,
};

const struct GlyphNew GlySJA_E285B0 = { /* ⅰ */
    .next = NULL,
    .width = 7,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E285B0Tiles,
};

const struct GlyphNew GlySJA_E38080 = { /* 　 */
    .next = &GlySJA_E382A1,
    .width = 8,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38080Tiles,
};

const struct GlyphNew GlySJA_E6B395 = { /* 法 */
    .next = NULL,
    .width = 8,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6B395Tiles,
};

const struct GlyphNew GlySJA_E999A2 = { /* 院 */
    .next = NULL,
    .width = 9,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E999A2Tiles,
};

const struct GlyphNew GlySJA_E6A99F = { /* 機 */
    .next = &GlySJA_E6B395,
    .width = 8,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6A99FTiles,
};

const struct GlyphNew GlySJA_E68E98 = { /* 掘 */
    .next = &GlySJA_E6A99F,
    .width = 9,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68E98Tiles,
};

const struct GlyphNew GlySJA_E58FA9 = { /* 叩 */
    .next = NULL,
    .width = 8,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58FA9Tiles,
};

const struct GlyphNew GlySJA_E291A0 = { /* ① */
    .next = &GlySJA_E285B0,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E291A0Tiles,
};

const struct GlyphNew GlySJA_E893AE = { /* 蓮 */
    .next = NULL,
    .width = 8,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E893AETiles,
};

const struct GlyphNew GlySJA_E382A2 = { /* ア */
    .next = &GlySJA_E38080,
    .width = 7,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E382A2Tiles,
};

const struct GlyphNew GlySJA_E285B1 = { /* ⅱ */
    .next = &GlySJA_E291A0,
    .width = 7,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E285B1Tiles,
};

const struct GlyphNew GlySJA_E38081 = { /* 、 */
    .next = &GlySJA_E382A2,
    .width = 6,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38081Tiles,
};

const struct GlyphNew GlySJA_E999B0 = { /* 陰 */
    .next = &GlySJA_E999A2,
    .width = 9,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E999B0Tiles,
};

const struct GlyphNew GlySJA_E980A3 = { /* 連 */
    .next = &GlySJA_E999B0,
    .width = 8,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E980A3Tiles,
};

const struct GlyphNew GlySJA_E5B8B0 = { /* 帰 */
    .next = &GlySJA_E58FA9,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B8B0Tiles,
};

const struct GlyphNew GlySJA_E291A1 = { /* ② */
    .next = &GlySJA_E285B1,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E291A1Tiles,
};

const struct GlyphNew GlySJA_E8BCB8 = { /* 輸 */
    .next = &GlySJA_E893AE,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8BCB8Tiles,
};

const struct GlyphNew GlySJA_E7AA9F = { /* 窟 */
    .next = NULL,
    .width = 8,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7AA9FTiles,
};

const struct GlyphNew GlySJA_E382A3 = { /* ィ */
    .next = &GlySJA_E38081,
    .width = 6,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E382A3Tiles,
};

const struct GlyphNew GlySJA_E285B2 = { /* ⅲ */
    .next = &GlySJA_E291A1,
    .width = 7,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E285B2Tiles,
};

const struct GlyphNew GlySJA_E38082 = { /* 。 */
    .next = &GlySJA_E382A3,
    .width = 6,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38082Tiles,
};

const struct GlyphNew GlySJA_E594AF = { /* 唯 */
    .next = &GlySJA_E5B8B0,
    .width = 8,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E594AFTiles,
};

const struct GlyphNew GlySJA_E98194 = { /* 達 */
    .next = &GlySJA_E980A3,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E98194Tiles,
};

const struct GlyphNew GlySJA_E99AA0 = { /* 隠 */
    .next = &GlySJA_E98194,
    .width = 8,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E99AA0Tiles,
};

const struct GlyphNew GlySJA_E291A2 = { /* ③ */
    .next = &GlySJA_E285B2,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E291A2Tiles,
};

const struct GlyphNew GlySJA_E382A4 = { /* イ */
    .next = &GlySJA_E38082,
    .width = 7,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E382A4Tiles,
};

const struct GlyphNew GlySJA_E285B3 = { /* ⅳ */
    .next = &GlySJA_E291A2,
    .width = 7,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E285B3Tiles,
};

const struct GlyphNew GlySJA_EFBC8C = { /* ， */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBC8CTiles,
};

const struct GlyphNew GlySJA_E6B097 = { /* 気 */
    .next = &GlySJA_E68E98,
    .width = 8,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6B097Tiles,
};

const struct GlyphNew GlySJA_E6B5B7 = { /* 海 */
    .next = &GlySJA_E6B097,
    .width = 8,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6B5B7Tiles,
};

const struct GlyphNew GlySJA_E4BFAE = { /* 修 */
    .next = NULL,
    .width = 9,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BFAETiles,
};

const struct GlyphNew GlySJA_E4BBBB = { /* 任 */
    .next = &GlySJA_E4BFAE,
    .width = 8,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BBBBTiles,
};

const struct GlyphNew GlySJA_E291A3 = { /* ④ */
    .next = &GlySJA_E285B3,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E291A3Tiles,
};

const struct GlyphNew GlySJA_E382A5 = { /* ゥ */
    .next = &GlySJA_E382A4,
    .width = 6,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E382A5Tiles,
};

const struct GlyphNew GlySJA_E285B4 = { /* ⅴ */
    .next = &GlySJA_E291A3,
    .width = 7,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E285B4Tiles,
};

const struct GlyphNew GlySJA_EFBC8E = { /* ． */
    .next = &GlySJA_EFBC8C,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBC8ETiles,
};

const struct GlyphNew GlySJA_E5A5BD = { /* 好 */
    .next = &GlySJA_E594AF,
    .width = 8,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A5BDTiles,
};

const struct GlyphNew GlySJA_E5A5AA = { /* 奪 */
    .next = &GlySJA_E5A5BD,
    .width = 9,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A5AATiles,
};

const struct GlyphNew GlySJA_E7B994 = { /* 織 */
    .next = &GlySJA_E7AA9F,
    .width = 9,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7B994Tiles,
};

const struct GlyphNew GlySJA_E6B3A5 = { /* 泥 */
    .next = &GlySJA_E6B5B7,
    .width = 8,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6B3A5Tiles,
};

const struct GlyphNew GlySJA_E584AA = { /* 優 */
    .next = &GlySJA_E5A5AA,
    .width = 9,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E584AATiles,
};

const struct GlyphNew GlySJA_E291A4 = { /* ⑤ */
    .next = &GlySJA_E285B4,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E291A4Tiles,
};

const struct GlyphNew GlySJA_E781B0 = { /* 灰 */
    .next = &GlySJA_E7B994,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E781B0Tiles,
};

const struct GlyphNew GlySJA_E382A6 = { /* ウ */
    .next = &GlySJA_E382A5,
    .width = 7,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E382A6Tiles,
};

const struct GlyphNew GlySJA_E285B5 = { /* ⅵ */
    .next = &GlySJA_E291A4,
    .width = 7,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E285B5Tiles,
};

const struct GlyphNew GlySJA_E383BB = { /* ・ */
    .next = &GlySJA_E382A6,
    .width = 6,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E383BBTiles,
};

const struct GlyphNew GlySJA_E58B87 = { /* 勇 */
    .next = &GlySJA_E584AA,
    .width = 7,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58B87Tiles,
};

const struct GlyphNew GlySJA_E6AEBA = { /* 殺 */
    .next = &GlySJA_E6B3A5,
    .width = 9,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6AEBATiles,
};

const struct GlyphNew GlySJA_E7958C = { /* 界 */
    .next = &GlySJA_E781B0,
    .width = 9,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7958CTiles,
};

const struct GlyphNew GlySJA_E884B1 = { /* 脱 */
    .next = &GlySJA_E8BCB8,
    .width = 9,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E884B1Tiles,
};

const struct GlyphNew GlySJA_E881B7 = { /* 職 */
    .next = &GlySJA_E884B1,
    .width = 10,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E881B7Tiles,
};

const struct GlyphNew GlySJA_E58FB3 = { /* 右 */
    .next = &GlySJA_E58B87,
    .width = 8,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58FB3Tiles,
};

const struct GlyphNew GlySJA_E291A5 = { /* ⑥ */
    .next = &GlySJA_E285B5,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E291A5Tiles,
};

const struct GlyphNew GlySJA_E382A7 = { /* ェ */
    .next = &GlySJA_E383BB,
    .width = 6,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E382A7Tiles,
};

const struct GlyphNew GlySJA_E285B6 = { /* ⅶ */
    .next = &GlySJA_E291A5,
    .width = 7,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E285B6Tiles,
};

const struct GlyphNew GlySJA_EFBC9A = { /* ： */
    .next = &GlySJA_EFBC8E,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBC9ATiles,
};

const struct GlyphNew GlySJA_E58F8B = { /* 友 */
    .next = &GlySJA_E58FB3,
    .width = 8,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58F8BTiles,
};

const struct GlyphNew GlySJA_E79A86 = { /* 皆 */
    .next = &GlySJA_E7958C,
    .width = 8,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E79A86Tiles,
};

const struct GlyphNew GlySJA_E8AA8D = { /* 認 */
    .next = &GlySJA_E881B7,
    .width = 9,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8AA8DTiles,
};

const struct GlyphNew GlySJA_E5AD9D = { /* 孝 */
    .next = &GlySJA_E58F8B,
    .width = 9,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5AD9DTiles,
};

const struct GlyphNew GlySJA_E291A6 = { /* ⑦ */
    .next = &GlySJA_E285B6,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E291A6Tiles,
};

const struct GlyphNew GlySJA_E889B2 = { /* 色 */
    .next = &GlySJA_E8AA8D,
    .width = 8,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E889B2Tiles,
};

const struct GlyphNew GlySJA_E382A8 = { /* エ */
    .next = &GlySJA_E382A7,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E382A8Tiles,
};

const struct GlyphNew GlySJA_E285B7 = { /* ⅷ */
    .next = &GlySJA_E291A6,
    .width = 7,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E285B7Tiles,
};

const struct GlyphNew GlySJA_E695B5 = { /* 敵 */
    .next = &GlySJA_E6AEBA,
    .width = 9,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E695B5Tiles,
};

const struct GlyphNew GlySJA_E99B91 = { /* 雑 */
    .next = &GlySJA_E99AA0,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E99B91Tiles,
};

const struct GlyphNew GlySJA_E7A780 = { /* 秀 */
    .next = &GlySJA_E79A86,
    .width = 8,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7A780Tiles,
};

const struct GlyphNew GlySJA_E382A9 = { /* ォ */
    .next = &GlySJA_E382A8,
    .width = 7,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E382A9Tiles,
};

const struct GlyphNew GlySJA_E285B8 = { /* ⅸ */
    .next = &GlySJA_E285B7,
    .width = 7,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E285B8Tiles,
};

const struct GlyphNew GlySJA_EFBC9F = { /* ？ */
    .next = &GlySJA_EFBC9A,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBC9FTiles,
};

const struct GlyphNew GlySJA_E8B7AF = { /* 路 */
    .next = &GlySJA_E889B2,
    .width = 8,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8B7AFTiles,
};

const struct GlyphNew GlySJA_E7BEBD = { /* 羽 */
    .next = &GlySJA_E7A780,
    .width = 8,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7BEBDTiles,
};

const struct GlyphNew GlySJA_E382AA = { /* オ */
    .next = &GlySJA_E382A9,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E382AATiles,
};

const struct GlyphNew GlySJA_E285B9 = { /* ⅹ */
    .next = &GlySJA_E285B8,
    .width = 7,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E285B9Tiles,
};

const struct GlyphNew GlySJA_EFBC81 = { /* ！ */
    .next = &GlySJA_EFBC9F,
    .width = 6,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBC81Tiles,
};

const struct GlyphNew GlySJA_E79A84 = { /* 的 */
    .next = &GlySJA_E7BEBD,
    .width = 8,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E79A84Tiles,
};

const struct GlyphNew GlySJA_E981B8 = { /* 選 */
    .next = &GlySJA_E99B91,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E981B8Tiles,
};

const struct GlyphNew GlySJA_E7B582 = { /* 終 */
    .next = &GlySJA_E79A84,
    .width = 8,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7B582Tiles,
};

const struct GlyphNew GlySJA_E89C82 = { /* 蜂 */
    .next = &GlySJA_E8B7AF,
    .width = 8,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E89C82Tiles,
};

const struct GlyphNew GlySJA_E382AB = { /* カ */
    .next = &GlySJA_E382AA,
    .width = 7,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E382ABTiles,
};

const struct GlyphNew GlySJA_E8B0B7 = { /* 谷 */
    .next = &GlySJA_E89C82,
    .width = 8,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8B0B7Tiles,
};

const struct GlyphNew GlySJA_E9968B = { /* 開 */
    .next = &GlySJA_E981B8,
    .width = 8,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9968BTiles,
};

const struct GlyphNew GlySJA_E58AB4 = { /* 労 */
    .next = &GlySJA_E5AD9D,
    .width = 8,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58AB4Tiles,
};

const struct GlyphNew GlySJA_E99BA8 = { /* 雨 */
    .next = &GlySJA_E9968B,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E99BA8Tiles,
};

const struct GlyphNew GlySJA_E291AA = { /* ⑪ */
    .next = &GlySJA_E285B9,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E291AATiles,
};

const struct GlyphNew GlySJA_E3829B = { /* ゛ */
    .next = &GlySJA_E382AB,
    .width = 6,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E3829BTiles,
};

const struct GlyphNew GlySJA_E382AC = { /* ガ */
    .next = &GlySJA_E3829B,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E382ACTiles,
};

const struct GlyphNew GlySJA_E68F96 = { /* 揖 */
    .next = &GlySJA_E695B5,
    .width = 7,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68F96Tiles,
};

const struct GlyphNew GlySJA_E5BF85 = { /* 必 */
    .next = &GlySJA_E58AB4,
    .width = 8,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BF85Tiles,
};

const struct GlyphNew GlySJA_E5B9B8 = { /* 幸 */
    .next = &GlySJA_E5BF85,
    .width = 8,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B9B8Tiles,
};

const struct GlyphNew GlySJA_E8A8AA = { /* 訪 */
    .next = &GlySJA_E8B0B7,
    .width = 8,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8A8AATiles,
};

const struct GlyphNew GlySJA_E8A68F = { /* 規 */
    .next = &GlySJA_E8A8AA,
    .width = 8,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8A68FTiles,
};

const struct GlyphNew GlySJA_E99A8E = { /* 階 */
    .next = &GlySJA_E99BA8,
    .width = 8,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E99A8ETiles,
};

const struct GlyphNew GlySJA_E291AB = { /* ⑫ */
    .next = &GlySJA_E291AA,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E291ABTiles,
};

const struct GlyphNew GlySJA_E3829C = { /* ゜ */
    .next = &GlySJA_E382AC,
    .width = 6,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E3829CTiles,
};

const struct GlyphNew GlySJA_E7BF92 = { /* 習 */
    .next = &GlySJA_E7B582,
    .width = 8,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7BF92Tiles,
};

const struct GlyphNew GlySJA_E382AD = { /* キ */
    .next = &GlySJA_E3829C,
    .width = 7,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E382ADTiles,
};

const struct GlyphNew GlySJA_E8B18A = { /* 豊 */
    .next = &GlySJA_E8A68F,
    .width = 8,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8B18ATiles,
};

const struct GlyphNew GlySJA_E8A898 = { /* 記 */
    .next = &GlySJA_E8B18A,
    .width = 8,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8A898Tiles,
};

const struct GlyphNew GlySJA_E69C89 = { /* 有 */
    .next = &GlySJA_E68F96,
    .width = 8,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69C89Tiles,
};

const struct GlyphNew GlySJA_E5BA83 = { /* 広 */
    .next = &GlySJA_E5B9B8,
    .width = 8,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BA83Tiles,
};

const struct GlyphNew GlySJA_E291AC = { /* ⑬ */
    .next = &GlySJA_E291AB,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E291ACTiles,
};

const struct GlyphNew GlySJA_E78CAB = { /* 猫 */
    .next = &GlySJA_E7BF92,
    .width = 8,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E78CABTiles,
};

const struct GlyphNew GlySJA_E382AE = { /* ギ */
    .next = &GlySJA_E382AD,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E382AETiles,
};

const struct GlyphNew GlySJA_E8B2B4 = { /* 貴 */
    .next = &GlySJA_E8A898,
    .width = 8,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8B2B4Tiles,
};

const struct GlyphNew GlySJA_E4BFA1 = { /* 信 */
    .next = &GlySJA_E4BBBB,
    .width = 8,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BFA1Tiles,
};

const struct GlyphNew GlySJA_E786B1 = { /* 熱 */
    .next = &GlySJA_E78CAB,
    .width = 9,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E786B1Tiles,
};

const struct GlyphNew GlySJA_E587B1 = { /* 凱 */
    .next = &GlySJA_E5BA83,
    .width = 9,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E587B1Tiles,
};

const struct GlyphNew GlySJA_E58BB2 = { /* 勲 */
    .next = &GlySJA_E587B1,
    .width = 9,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58BB2Tiles,
};

const struct GlyphNew GlySJA_E291AD = { /* ⑭ */
    .next = &GlySJA_E291AC,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E291ADTiles,
};

const struct GlyphNew GlySJA_E382AF = { /* ク */
    .next = &GlySJA_E382AE,
    .width = 7,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E382AFTiles,
};

const struct GlyphNew GlySJA_E5B9B4 = { /* 年 */
    .next = &GlySJA_E58BB2,
    .width = 8,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B9B4Tiles,
};

const struct GlyphNew GlySJA_E4BEB5 = { /* 侵 */
    .next = &GlySJA_E4BFA1,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BEB5Tiles,
};

const struct GlyphNew GlySJA_E8B5B7 = { /* 起 */
    .next = &GlySJA_E8B2B4,
    .width = 8,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8B5B7Tiles,
};

const struct GlyphNew GlySJA_E5909B = { /* 君 */
    .next = &GlySJA_E5B9B4,
    .width = 8,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5909BTiles,
};

const struct GlyphNew GlySJA_E8AAB0 = { /* 誰 */
    .next = &GlySJA_E8B5B7,
    .width = 8,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8AAB0Tiles,
};

const struct GlyphNew GlySJA_E291AE = { /* ⑮ */
    .next = &GlySJA_E291AD,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E291AETiles,
};

const struct GlyphNew GlySJA_E69C97 = { /* 朗 */
    .next = &GlySJA_E69C89,
    .width = 8,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69C97Tiles,
};

const struct GlyphNew GlySJA_E382B0 = { /* グ */
    .next = &GlySJA_E382AF,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E382B0Tiles,
};

const struct GlyphNew GlySJA_EFBC90 = { /* ０ */
    .next = &GlySJA_EFBC81,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBC90Tiles,
};

const struct GlyphNew GlySJA_E5898D = { /* 前 */
    .next = &GlySJA_E5909B,
    .width = 8,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5898DTiles,
};

const struct GlyphNew GlySJA_E5A496 = { /* 外 */
    .next = &GlySJA_E5898D,
    .width = 8,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A496Tiles,
};

const struct GlyphNew GlySJA_E5BFB5 = { /* 念 */
    .next = &GlySJA_E5A496,
    .width = 8,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BFB5Tiles,
};

const struct GlyphNew GlySJA_E4B889 = { /* 三 */
    .next = &GlySJA_E4BEB5,
    .width = 8,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4B889Tiles,
};

const struct GlyphNew GlySJA_E291AF = { /* ⑯ */
    .next = &GlySJA_E291AE,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E291AFTiles,
};

const struct GlyphNew GlySJA_E382B1 = { /* ケ */
    .next = &GlySJA_E382B0,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E382B1Tiles,
};

const struct GlyphNew GlySJA_EFBC91 = { /* １ */
    .next = &GlySJA_EFBC90,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBC91Tiles,
};

const struct GlyphNew GlySJA_E5A7AB = { /* 姫 */
    .next = &GlySJA_E5BFB5,
    .width = 9,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A7ABTiles,
};

const struct GlyphNew GlySJA_E59684 = { /* 善 */
    .next = &GlySJA_E5A7AB,
    .width = 8,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E59684Tiles,
};

const struct GlyphNew GlySJA_E58D98 = { /* 単 */
    .next = &GlySJA_E59684,
    .width = 8,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58D98Tiles,
};

const struct GlyphNew GlySJA_E291B0 = { /* ⑰ */
    .next = &GlySJA_E291AF,
    .width = 7,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E291B0Tiles,
};

const struct GlyphNew GlySJA_E382B2 = { /* ゲ */
    .next = &GlySJA_E382B1,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E382B2Tiles,
};

const struct GlyphNew GlySJA_EFBC92 = { /* ２ */
    .next = &GlySJA_EFBC91,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBC92Tiles,
};

const struct GlyphNew GlySJA_E59886 = { /* 嘆 */
    .next = &GlySJA_E58D98,
    .width = 9,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E59886Tiles,
};

const struct GlyphNew GlySJA_E58F82 = { /* 参 */
    .next = &GlySJA_E59886,
    .width = 8,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58F82Tiles,
};

const struct GlyphNew GlySJA_E5AEB3 = { /* 害 */
    .next = &GlySJA_E58F82,
    .width = 8,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5AEB3Tiles,
};

const struct GlyphNew GlySJA_E6B5AA = { /* 浪 */
    .next = &GlySJA_E69C97,
    .width = 8,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6B5AATiles,
};

const struct GlyphNew GlySJA_E7BEA4 = { /* 群 */
    .next = &GlySJA_E786B1,
    .width = 8,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7BEA4Tiles,
};

const struct GlyphNew GlySJA_E382B3 = { /* コ */
    .next = &GlySJA_E382B2,
    .width = 6,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E382B3Tiles,
};

const struct GlyphNew GlySJA_EFBC93 = { /* ３ */
    .next = &GlySJA_EFBC92,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBC93Tiles,
};

const struct GlyphNew GlySJA_E8BB8D = { /* 軍 */
    .next = &GlySJA_E8AAB0,
    .width = 8,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8BB8DTiles,
};

const struct GlyphNew GlySJA_E9A88E = { /* 騎 */
    .next = &GlySJA_E99A8E,
    .width = 9,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9A88ETiles,
};

const struct GlyphNew GlySJA_E5B1B1 = { /* 山 */
    .next = &GlySJA_E5AEB3,
    .width = 8,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B1B1Tiles,
};

const struct GlyphNew GlySJA_E784B6 = { /* 然 */
    .next = &GlySJA_E7BEA4,
    .width = 9,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E784B6Tiles,
};

const struct GlyphNew GlySJA_E794B1 = { /* 由 */
    .next = &GlySJA_E784B6,
    .width = 8,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E794B1Tiles,
};

const struct GlyphNew GlySJA_E68A97 = { /* 抗 */
    .next = &GlySJA_E6B5AA,
    .width = 9,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68A97Tiles,
};

const struct GlyphNew GlySJA_E382B4 = { /* ゴ */
    .next = &GlySJA_E382B3,
    .width = 7,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E382B4Tiles,
};

const struct GlyphNew GlySJA_EFBC94 = { /* ４ */
    .next = &GlySJA_EFBC93,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBC94Tiles,
};

const struct GlyphNew GlySJA_E585A8 = { /* 全 */
    .next = &GlySJA_E5B1B1,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E585A8Tiles,
};

const struct GlyphNew GlySJA_E4BAA1 = { /* 亡 */
    .next = &GlySJA_E4B889,
    .width = 8,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BAA1Tiles,
};

const struct GlyphNew GlySJA_E5BF83 = { /* 心 */
    .next = &GlySJA_E585A8,
    .width = 8,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BF83Tiles,
};

const struct GlyphNew GlySJA_E98984 = { /* 鉄 */
    .next = &GlySJA_E9A88E,
    .width = 8,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E98984Tiles,
};

const struct GlyphNew GlySJA_E799BE = { /* 百 */
    .next = &GlySJA_E794B1,
    .width = 8,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E799BETiles,
};

const struct GlyphNew GlySJA_E683A8 = { /* 惨 */
    .next = &GlySJA_E68A97,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E683A8Tiles,
};

const struct GlyphNew GlySJA_E68B85 = { /* 担 */
    .next = &GlySJA_E683A8,
    .width = 8,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68B85Tiles,
};

const struct GlyphNew GlySJA_E789A2 = { /* 牢 */
    .next = &GlySJA_E799BE,
    .width = 8,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E789A2Tiles,
};

const struct GlyphNew GlySJA_E9ACBC = { /* 鬼 */
    .next = &GlySJA_E98984,
    .width = 8,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9ACBCTiles,
};

const struct GlyphNew GlySJA_E382B5 = { /* サ */
    .next = &GlySJA_E382B4,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E382B5Tiles,
};

const struct GlyphNew GlySJA_EFBC95 = { /* ５ */
    .next = &GlySJA_EFBC94,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBC95Tiles,
};

const struct GlyphNew GlySJA_E78BBC = { /* 狼 */
    .next = &GlySJA_E789A2,
    .width = 9,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E78BBCTiles,
};

const struct GlyphNew GlySJA_E68EA7 = { /* 控 */
    .next = &GlySJA_E68B85,
    .width = 8,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68EA7Tiles,
};

const struct GlyphNew GlySJA_E68EA2 = { /* 探 */
    .next = &GlySJA_E68EA7,
    .width = 9,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68EA2Tiles,
};

const struct GlyphNew GlySJA_E585B8 = { /* 典 */
    .next = &GlySJA_E5BF83,
    .width = 9,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E585B8Tiles,
};

const struct GlyphNew GlySJA_E285A0 = { /* Ⅰ */
    .next = &GlySJA_E291B0,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E285A0Tiles,
};

const struct GlyphNew GlySJA_E382B6 = { /* ザ */
    .next = &GlySJA_E382B5,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E382B6Tiles,
};

const struct GlyphNew GlySJA_EFBC96 = { /* ６ */
    .next = &GlySJA_EFBC95,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBC96Tiles,
};

const struct GlyphNew GlySJA_E694BB = { /* 攻 */
    .next = &GlySJA_E68EA2,
    .width = 8,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E694BBTiles,
};

const struct GlyphNew GlySJA_E695A3 = { /* 散 */
    .next = &GlySJA_E694BB,
    .width = 8,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E695A3Tiles,
};

const struct GlyphNew GlySJA_E8AA98 = { /* 誘 */
    .next = &GlySJA_E8BB8D,
    .width = 8,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8AA98Tiles,
};

const struct GlyphNew GlySJA_E6B6AF = { /* 涯 */
    .next = &GlySJA_E695A3,
    .width = 8,
    .utf_byte_2 = 0xb6,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6B6AFTiles,
};

const struct GlyphNew GlySJA_E285A1 = { /* Ⅱ */
    .next = &GlySJA_E285A0,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E285A1Tiles,
};

const struct GlyphNew GlySJA_E382B7 = { /* シ */
    .next = &GlySJA_E382B6,
    .width = 7,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E382B7Tiles,
};

const struct GlyphNew GlySJA_EFBC97 = { /* ７ */
    .next = &GlySJA_EFBC96,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBC97Tiles,
};

const struct GlyphNew GlySJA_E88081 = { /* 老 */
    .next = &GlySJA_E8AA98,
    .width = 8,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E88081Tiles,
};

const struct GlyphNew GlySJA_E5A4A9 = { /* 天 */
    .next = &GlySJA_E585B8,
    .width = 8,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A4A9Tiles,
};

const struct GlyphNew GlySJA_E696B0 = { /* 新 */
    .next = &GlySJA_E6B6AF,
    .width = 8,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E696B0Tiles,
};

const struct GlyphNew GlySJA_E9818A = { /* 遊 */
    .next = &GlySJA_E9ACBC,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9818ATiles,
};

const struct GlyphNew GlySJA_E58480 = { /* 儀 */
    .next = &GlySJA_E5A4A9,
    .width = 8,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58480Tiles,
};

const struct GlyphNew GlySJA_E285A2 = { /* Ⅲ */
    .next = &GlySJA_E285A1,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E285A2Tiles,
};

const struct GlyphNew GlySJA_E382B8 = { /* ジ */
    .next = &GlySJA_E382B7,
    .width = 7,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E382B8Tiles,
};

const struct GlyphNew GlySJA_EFBC98 = { /* ８ */
    .next = &GlySJA_EFBC97,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBC98Tiles,
};

const struct GlyphNew GlySJA_E99B86 = { /* 集 */
    .next = &GlySJA_E9818A,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E99B86Tiles,
};

const struct GlyphNew GlySJA_E6A899 = { /* 標 */
    .next = &GlySJA_E696B0,
    .width = 9,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6A899Tiles,
};

const struct GlyphNew GlySJA_E4BF82 = { /* 係 */
    .next = &GlySJA_E4BAA1,
    .width = 8,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BF82Tiles,
};

const struct GlyphNew GlySJA_E5B195 = { /* 展 */
    .next = &GlySJA_E58480,
    .width = 8,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B195Tiles,
};

const struct GlyphNew GlySJA_E285A3 = { /* Ⅳ */
    .next = &GlySJA_E285A2,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E285A3Tiles,
};

const struct GlyphNew GlySJA_E382B9 = { /* ス */
    .next = &GlySJA_E382B8,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E382B9Tiles,
};

const struct GlyphNew GlySJA_EFBC99 = { /* ９ */
    .next = &GlySJA_EFBC98,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBC99Tiles,
};

const struct GlyphNew GlySJA_E5BA97 = { /* 店 */
    .next = &GlySJA_E5B195,
    .width = 8,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BA97Tiles,
};

const struct GlyphNew GlySJA_E38085 = { /* 々 */
    .next = &GlySJA_E382B9,
    .width = 7,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38085Tiles,
};

const struct GlyphNew GlySJA_E8A197 = { /* 街 */
    .next = &GlySJA_E88081,
    .width = 9,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8A197Tiles,
};

const struct GlyphNew GlySJA_E6B0B7 = { /* 氷 */
    .next = &GlySJA_E6A899,
    .width = 8,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6B0B7Tiles,
};

const struct GlyphNew GlySJA_E6A3AE = { /* 森 */
    .next = &GlySJA_E6B0B7,
    .width = 9,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6A3AETiles,
};

const struct GlyphNew GlySJA_E69BB4 = { /* 更 */
    .next = &GlySJA_E6A3AE,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69BB4Tiles,
};

const struct GlyphNew GlySJA_E285A4 = { /* Ⅴ */
    .next = &GlySJA_E285A3,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E285A4Tiles,
};

const struct GlyphNew GlySJA_E382BA = { /* ズ */
    .next = &GlySJA_E38085,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E382BATiles,
};

const struct GlyphNew GlySJA_E99B84 = { /* 雄 */
    .next = &GlySJA_E99B86,
    .width = 9,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E99B84Tiles,
};

const struct GlyphNew GlySJA_E794A3 = { /* 産 */
    .next = &GlySJA_E78BBC,
    .width = 8,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E794A3Tiles,
};

const struct GlyphNew GlySJA_E58891 = { /* 刑 */
    .next = &GlySJA_E5BA97,
    .width = 9,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58891Tiles,
};

const struct GlyphNew GlySJA_E5BF98 = { /* 忘 */
    .next = &GlySJA_E58891,
    .width = 8,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BF98Tiles,
};

const struct GlyphNew GlySJA_E9838E = { /* 郎 */
    .next = &GlySJA_E99B84,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9838ETiles,
};

const struct GlyphNew GlySJA_E285A5 = { /* Ⅵ */
    .next = &GlySJA_E285A4,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E285A5Tiles,
};

const struct GlyphNew GlySJA_E382BB = { /* セ */
    .next = &GlySJA_E382BA,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E382BBTiles,
};

const struct GlyphNew GlySJA_E68A80 = { /* 技 */
    .next = &GlySJA_E69BB4,
    .width = 8,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68A80Tiles,
};

const struct GlyphNew GlySJA_E58584 = { /* 兄 */
    .next = &GlySJA_E5BF98,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58584Tiles,
};

const struct GlyphNew GlySJA_E79FAD = { /* 短 */
    .next = &GlySJA_E794A3,
    .width = 8,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E79FADTiles,
};

const struct GlyphNew GlySJA_E4BD8F = { /* 住 */
    .next = &GlySJA_E4BF82,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BD8FTiles,
};

const struct GlyphNew GlySJA_E6A0A1 = { /* 校 */
    .next = &GlySJA_E68A80,
    .width = 9,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6A0A1Tiles,
};

const struct GlyphNew GlySJA_E585AD = { /* 六 */
    .next = &GlySJA_E58584,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E585ADTiles,
};

const struct GlyphNew GlySJA_E285A6 = { /* Ⅶ */
    .next = &GlySJA_E285A5,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E285A6Tiles,
};

const struct GlyphNew GlySJA_E382BC = { /* ゼ */
    .next = &GlySJA_E382BB,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E382BCTiles,
};

const struct GlyphNew GlySJA_E383BC = { /* ー */
    .next = &GlySJA_E382BC,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E383BCTiles,
};

const struct GlyphNew GlySJA_E6B7B1 = { /* 深 */
    .next = &GlySJA_E6A0A1,
    .width = 8,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6B7B1Tiles,
};

const struct GlyphNew GlySJA_E7ABAF = { /* 端 */
    .next = &GlySJA_E79FAD,
    .width = 9,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7ABAFTiles,
};

const struct GlyphNew GlySJA_E382BD = { /* ソ */
    .next = &GlySJA_E383BC,
    .width = 7,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E382BDTiles,
};

const struct GlyphNew GlySJA_E8A1A8 = { /* 表 */
    .next = &GlySJA_E8A197,
    .width = 8,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8A1A8Tiles,
};

const struct GlyphNew GlySJA_E883BD = { /* 能 */
    .next = &GlySJA_E8A1A8,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E883BDTiles,
};

const struct GlyphNew GlySJA_E794B3 = { /* 申 */
    .next = &GlySJA_E7ABAF,
    .width = 8,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E794B3Tiles,
};

const struct GlyphNew GlySJA_E4BA88 = { /* 予 */
    .next = &GlySJA_E4BD8F,
    .width = 8,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BA88Tiles,
};

const struct GlyphNew GlySJA_E58D81 = { /* 十 */
    .next = &GlySJA_E585AD,
    .width = 8,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58D81Tiles,
};

const struct GlyphNew GlySJA_E382BE = { /* ゾ */
    .next = &GlySJA_E382BD,
    .width = 7,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E382BETiles,
};

const struct GlyphNew GlySJA_E5BE93 = { /* 従 */
    .next = &GlySJA_E58D81,
    .width = 8,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BE93Tiles,
};

const struct GlyphNew GlySJA_E69C9B = { /* 望 */
    .next = &GlySJA_E6B7B1,
    .width = 8,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69C9BTiles,
};

const struct GlyphNew GlySJA_E8BBA2 = { /* 転 */
    .next = &GlySJA_E883BD,
    .width = 8,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8BBA2Tiles,
};

const struct GlyphNew GlySJA_E78AA0 = { /* 犠 */
    .next = &GlySJA_E794B3,
    .width = 9,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E78AA0Tiles,
};

const struct GlyphNew GlySJA_E4BD99 = { /* 余 */
    .next = &GlySJA_E4BA88,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BD99Tiles,
};

const struct GlyphNew GlySJA_E8A995 = { /* 評 */
    .next = &GlySJA_E8BBA2,
    .width = 9,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8A995Tiles,
};

const struct GlyphNew GlySJA_E382BF = { /* タ */
    .next = &GlySJA_E382BE,
    .width = 7,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E382BFTiles,
};

const struct GlyphNew GlySJA_EFBC8F = { /* ／ */
    .next = &GlySJA_EFBC99,
    .width = 6,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBC8FTiles,
};

const struct GlyphNew GlySJA_E9818B = { /* 運 */
    .next = &GlySJA_E9838E,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9818BTiles,
};

const struct GlyphNew GlySJA_E79C9F = { /* 真 */
    .next = &GlySJA_E78AA0,
    .width = 8,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E79C9FTiles,
};

const struct GlyphNew GlySJA_E98CB2 = { /* 録 */
    .next = &GlySJA_E9818B,
    .width = 9,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E98CB2Tiles,
};

const struct GlyphNew GlySJA_E4B88E = { /* 与 */
    .next = &GlySJA_E4BD99,
    .width = 8,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4B88ETiles,
};

const struct GlyphNew GlySJA_E38380 = { /* ダ */
    .next = &GlySJA_E382BF,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38380Tiles,
};

const struct GlyphNew GlySJA_E7A59E = { /* 神 */
    .next = &GlySJA_E79C9F,
    .width = 9,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7A59ETiles,
};

const struct GlyphNew GlySJA_E99BB2 = { /* 雲 */
    .next = &GlySJA_E98CB2,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E99BB2Tiles,
};

const struct GlyphNew GlySJA_E8AA89 = { /* 誉 */
    .next = &GlySJA_E8A995,
    .width = 9,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8AA89Tiles,
};

const struct GlyphNew GlySJA_E5A591 = { /* 契 */
    .next = &GlySJA_E5BE93,
    .width = 8,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A591Tiles,
};

const struct GlyphNew GlySJA_EFBCBC = { /* ＼ */
    .next = &GlySJA_EFBC8F,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBCBCTiles,
};

const struct GlyphNew GlySJA_E782B9 = { /* 点 */
    .next = &GlySJA_E7A59E,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E782B9Tiles,
};

const struct GlyphNew GlySJA_E38381 = { /* チ */
    .next = &GlySJA_E38380,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38381Tiles,
};

const struct GlyphNew GlySJA_EFBD9E = { /* ～ */
    .next = &GlySJA_EFBCBC,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBD9ETiles,
};

const struct GlyphNew GlySJA_EFBCA1 = { /* Ａ */
    .next = &GlySJA_EFBD9E,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBCA1Tiles,
};

const struct GlyphNew GlySJA_E6B8AF = { /* 港 */
    .next = &GlySJA_E69C9B,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6B8AFTiles,
};

const struct GlyphNew GlySJA_E7BEA9 = { /* 義 */
    .next = &GlySJA_E782B9,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7BEA9Tiles,
};

const struct GlyphNew GlySJA_E4BC9D = { /* 伝 */
    .next = &GlySJA_E4B88E,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BC9DTiles,
};

const struct GlyphNew GlySJA_E5BDA2 = { /* 形 */
    .next = &GlySJA_E5A591,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BDA2Tiles,
};

const struct GlyphNew GlySJA_E580AD = { /* 倭 */
    .next = &GlySJA_E5BDA2,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E580ADTiles,
};

const struct GlyphNew GlySJA_E38382 = { /* ヂ */
    .next = &GlySJA_E38381,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38382Tiles,
};

const struct GlyphNew GlySJA_EFBCA2 = { /* Ｂ */
    .next = &GlySJA_EFBCA1,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBCA2Tiles,
};

const struct GlyphNew GlySJA_E6AEBF = { /* 殿 */
    .next = &GlySJA_E6B8AF,
    .width = 9,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6AEBFTiles,
};

const struct GlyphNew GlySJA_E5928C = { /* 和 */
    .next = &GlySJA_E580AD,
    .width = 8,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5928CTiles,
};

const struct GlyphNew GlySJA_E79785 = { /* 病 */
    .next = &GlySJA_E7BEA9,
    .width = 8,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E79785Tiles,
};

const struct GlyphNew GlySJA_E8AA95 = { /* 誕 */
    .next = &GlySJA_E8AA89,
    .width = 9,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8AA95Tiles,
};

const struct GlyphNew GlySJA_E9A090 = { /* 預 */
    .next = &GlySJA_E99BB2,
    .width = 8,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9A090Tiles,
};

const struct GlyphNew GlySJA_E38383 = { /* ッ */
    .next = &GlySJA_E38382,
    .width = 6,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38383Tiles,
};

const struct GlyphNew GlySJA_EFBCA3 = { /* Ｃ */
    .next = &GlySJA_EFBCA2,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBCA3Tiles,
};

const struct GlyphNew GlySJA_E8A9B1 = { /* 話 */
    .next = &GlySJA_E8AA95,
    .width = 8,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8A9B1Tiles,
};

const struct GlyphNew GlySJA_E582AD = { /* 傭 */
    .next = &GlySJA_E5928C,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E582ADTiles,
};

const struct GlyphNew GlySJA_E887A3 = { /* 臣 */
    .next = &GlySJA_E8A9B1,
    .width = 7,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E887A3Tiles,
};

const struct GlyphNew GlySJA_E794B2 = { /* 甲 */
    .next = &GlySJA_E79785,
    .width = 8,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E794B2Tiles,
};

const struct GlyphNew GlySJA_E38384 = { /* ツ */
    .next = &GlySJA_E38383,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38384Tiles,
};

const struct GlyphNew GlySJA_EFBCA4 = { /* Ｄ */
    .next = &GlySJA_EFBCA3,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBCA4Tiles,
};

const struct GlyphNew GlySJA_E79A87 = { /* 皇 */
    .next = &GlySJA_E794B2,
    .width = 8,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E79A87Tiles,
};

const struct GlyphNew GlySJA_E59BA3 = { /* 団 */
    .next = &GlySJA_E582AD,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E59BA3Tiles,
};

const struct GlyphNew GlySJA_E7A596 = { /* 祖 */
    .next = &GlySJA_E79A87,
    .width = 9,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7A596Tiles,
};

const struct GlyphNew GlySJA_E6AE8B = { /* 残 */
    .next = &GlySJA_E6AEBF,
    .width = 8,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6AE8BTiles,
};

const struct GlyphNew GlySJA_E8ADB0 = { /* 議 */
    .next = &GlySJA_E887A3,
    .width = 9,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8ADB0Tiles,
};

const struct GlyphNew GlySJA_E596B6 = { /* 営 */
    .next = &GlySJA_E59BA3,
    .width = 8,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E596B6Tiles,
};

const struct GlyphNew GlySJA_E5B9BC = { /* 幼 */
    .next = &GlySJA_E596B6,
    .width = 8,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B9BCTiles,
};

const struct GlyphNew GlySJA_E38385 = { /* ヅ */
    .next = &GlySJA_E38384,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38385Tiles,
};

const struct GlyphNew GlySJA_EFBCA5 = { /* Ｅ */
    .next = &GlySJA_EFBCA4,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBCA5Tiles,
};

const struct GlyphNew GlySJA_E5A387 = { /* 壇 */
    .next = &GlySJA_E5B9BC,
    .width = 9,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A387Tiles,
};

const struct GlyphNew GlySJA_E99BBB = { /* 電 */
    .next = &GlySJA_E9A090,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E99BBBTiles,
};

const struct GlyphNew GlySJA_E9878D = { /* 重 */
    .next = &GlySJA_E99BBB,
    .width = 8,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9878DTiles,
};

const struct GlyphNew GlySJA_E4BB95 = { /* 仕 */
    .next = &GlySJA_E4BC9D,
    .width = 8,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BB95Tiles,
};

const struct GlyphNew GlySJA_E8AC80 = { /* 謀 */
    .next = &GlySJA_E8ADB0,
    .width = 8,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8AC80Tiles,
};

const struct GlyphNew GlySJA_E38386 = { /* テ */
    .next = &GlySJA_E38385,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38386Tiles,
};

const struct GlyphNew GlySJA_EFBCA6 = { /* Ｆ */
    .next = &GlySJA_EFBCA5,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBCA6Tiles,
};

const struct GlyphNew GlySJA_E8A6AA = { /* 親 */
    .next = &GlySJA_E8AC80,
    .width = 9,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8A6AATiles,
};

const struct GlyphNew GlySJA_E59084 = { /* 各 */
    .next = &GlySJA_E5A387,
    .width = 8,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E59084Tiles,
};

const struct GlyphNew GlySJA_E8A687 = { /* 覇 */
    .next = &GlySJA_E8A6AA,
    .width = 9,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8A687Tiles,
};

const struct GlyphNew GlySJA_E5AEB9 = { /* 容 */
    .next = &GlySJA_E59084,
    .width = 8,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5AEB9Tiles,
};

const struct GlyphNew GlySJA_E5BDB1 = { /* 影 */
    .next = &GlySJA_E5AEB9,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BDB1Tiles,
};

const struct GlyphNew GlySJA_E5BCBE = { /* 弾 */
    .next = &GlySJA_E5BDB1,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BCBETiles,
};

const struct GlyphNew GlySJA_E38387 = { /* デ */
    .next = &GlySJA_E38386,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38387Tiles,
};

const struct GlyphNew GlySJA_EFBCA7 = { /* Ｇ */
    .next = &GlySJA_EFBCA6,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBCA7Tiles,
};

const struct GlyphNew GlySJA_E696AD = { /* 断 */
    .next = &GlySJA_E6AE8B,
    .width = 8,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E696ADTiles,
};

const struct GlyphNew GlySJA_E8B2BF = { /* 貿 */
    .next = &GlySJA_E8A687,
    .width = 8,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8B2BFTiles,
};

const struct GlyphNew GlySJA_E68391 = { /* 惑 */
    .next = &GlySJA_E696AD,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68391Tiles,
};

const struct GlyphNew GlySJA_E7B4A0 = { /* 素 */
    .next = &GlySJA_E7A596,
    .width = 8,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7B4A0Tiles,
};

const struct GlyphNew GlySJA_E38388 = { /* ト */
    .next = &GlySJA_E38387,
    .width = 6,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38388Tiles,
};

const struct GlyphNew GlySJA_EFBCA8 = { /* Ｈ */
    .next = &GlySJA_EFBCA7,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBCA8Tiles,
};

const struct GlyphNew GlySJA_E4BDBF = { /* 使 */
    .next = &GlySJA_E4BB95,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BDBFTiles,
};

const struct GlyphNew GlySJA_E8BAAB = { /* 身 */
    .next = &GlySJA_E8B2BF,
    .width = 9,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8BAABTiles,
};

const struct GlyphNew GlySJA_E7B485 = { /* 紅 */
    .next = &GlySJA_E7B4A0,
    .width = 8,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7B485Tiles,
};

const struct GlyphNew GlySJA_E69A96 = { /* 暖 */
    .next = &GlySJA_E68391,
    .width = 8,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69A96Tiles,
};

const struct GlyphNew GlySJA_E7B584 = { /* 組 */
    .next = &GlySJA_E7B485,
    .width = 8,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7B584Tiles,
};

const struct GlyphNew GlySJA_E68BA1 = { /* 拡 */
    .next = &GlySJA_E69A96,
    .width = 8,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68BA1Tiles,
};

const struct GlyphNew GlySJA_E38389 = { /* ド */
    .next = &GlySJA_E38388,
    .width = 6,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38389Tiles,
};

const struct GlyphNew GlySJA_EFBCA9 = { /* Ｉ */
    .next = &GlySJA_EFBCA8,
    .width = 6,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBCA9Tiles,
};

const struct GlyphNew GlySJA_E8BE9B = { /* 辛 */
    .next = &GlySJA_E8BAAB,
    .width = 8,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8BE9BTiles,
};

const struct GlyphNew GlySJA_E998B2 = { /* 防 */
    .next = &GlySJA_E9878D,
    .width = 8,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E998B2Tiles,
};

const struct GlyphNew GlySJA_E6A084 = { /* 栄 */
    .next = &GlySJA_E68BA1,
    .width = 8,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6A084Tiles,
};

const struct GlyphNew GlySJA_E6B4BE = { /* 派 */
    .next = &GlySJA_E6A084,
    .width = 8,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6B4BETiles,
};

const struct GlyphNew GlySJA_E5AEBF = { /* 宿 */
    .next = &GlySJA_E5BCBE,
    .width = 8,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5AEBFTiles,
};

const struct GlyphNew GlySJA_E695AC = { /* 敬 */
    .next = &GlySJA_E6B4BE,
    .width = 9,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E695ACTiles,
};

const struct GlyphNew GlySJA_E3838A = { /* ナ */
    .next = &GlySJA_E38389,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E3838ATiles,
};

const struct GlyphNew GlySJA_EFBC88 = { /* （ */
    .next = &GlySJA_EFBCA9,
    .width = 6,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBC88Tiles,
};

const struct GlyphNew GlySJA_EFBCAA = { /* Ｊ */
    .next = &GlySJA_EFBC88,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBCAATiles,
};

const struct GlyphNew GlySJA_E980B2 = { /* 進 */
    .next = &GlySJA_E998B2,
    .width = 8,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E980B2Tiles,
};

const struct GlyphNew GlySJA_E58FB8 = { /* 司 */
    .next = &GlySJA_E5AEBF,
    .width = 8,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58FB8Tiles,
};

const struct GlyphNew GlySJA_E699AF = { /* 景 */
    .next = &GlySJA_E695AC,
    .width = 8,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E699AFTiles,
};

const struct GlyphNew GlySJA_E6B0B8 = { /* 永 */
    .next = &GlySJA_E699AF,
    .width = 8,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6B0B8Tiles,
};

const struct GlyphNew GlySJA_E6A0BC = { /* 格 */
    .next = &GlySJA_E6B0B8,
    .width = 8,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6A0BCTiles,
};

const struct GlyphNew GlySJA_E6AEB5 = { /* 段 */
    .next = &GlySJA_E6A0BC,
    .width = 8,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6AEB5Tiles,
};

const struct GlyphNew GlySJA_E59381 = { /* 品 */
    .next = &GlySJA_E58FB8,
    .width = 8,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E59381Tiles,
};

const struct GlyphNew GlySJA_E590A0 = { /* 吠 */
    .next = &GlySJA_E59381,
    .width = 8,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E590A0Tiles,
};

const struct GlyphNew GlySJA_E3838B = { /* ニ */
    .next = &GlySJA_E3838A,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E3838BTiles,
};

const struct GlyphNew GlySJA_EFBC89 = { /* ） */
    .next = &GlySJA_EFBCAA,
    .width = 6,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBC89Tiles,
};

const struct GlyphNew GlySJA_EFBCAB = { /* Ｋ */
    .next = &GlySJA_EFBC89,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBCABTiles,
};

const struct GlyphNew GlySJA_E794B7 = { /* 男 */
    .next = &GlySJA_E7B584,
    .width = 7,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E794B7Tiles,
};

const struct GlyphNew GlySJA_E7A0B4 = { /* 破 */
    .next = &GlySJA_E794B7,
    .width = 9,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7A0B4Tiles,
};

const struct GlyphNew GlySJA_E998BB = { /* 阻 */
    .next = &GlySJA_E980B2,
    .width = 9,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E998BBTiles,
};

const struct GlyphNew GlySJA_E58FB2 = { /* 史 */
    .next = &GlySJA_E590A0,
    .width = 8,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58FB2Tiles,
};

const struct GlyphNew GlySJA_E3838C = { /* ヌ */
    .next = &GlySJA_E3838B,
    .width = 6,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E3838CTiles,
};

const struct GlyphNew GlySJA_EFBCAC = { /* Ｌ */
    .next = &GlySJA_EFBCAB,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBCACTiles,
};

const struct GlyphNew GlySJA_E58C97 = { /* 北 */
    .next = &GlySJA_E58FB2,
    .width = 8,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58C97Tiles,
};

const struct GlyphNew GlySJA_E5BE92 = { /* 徒 */
    .next = &GlySJA_E58C97,
    .width = 8,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BE92Tiles,
};

const struct GlyphNew GlySJA_E8AB87 = { /* 談 */
    .next = &GlySJA_E8BE9B,
    .width = 9,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8AB87Tiles,
};

const struct GlyphNew GlySJA_E3838D = { /* ネ */
    .next = &GlySJA_E3838C,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E3838DTiles,
};

const struct GlyphNew GlySJA_EFBCAD = { /* Ｍ */
    .next = &GlySJA_EFBCAC,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBCADTiles,
};

const struct GlyphNew GlySJA_E4BABA = { /* 人 */
    .next = &GlySJA_E4BDBF,
    .width = 8,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BABATiles,
};

const struct GlyphNew GlySJA_E6A798 = { /* 様 */
    .next = &GlySJA_E6AEB5,
    .width = 9,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6A798Tiles,
};

const struct GlyphNew GlySJA_E580A4 = { /* 値 */
    .next = &GlySJA_E5BE92,
    .width = 8,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E580A4Tiles,
};

const struct GlyphNew GlySJA_E7B29B = { /* 粛 */
    .next = &GlySJA_E7A0B4,
    .width = 9,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7B29BTiles,
};

const struct GlyphNew GlySJA_E59B9B = { /* 四 */
    .next = &GlySJA_E580A4,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E59B9BTiles,
};

const struct GlyphNew GlySJA_E3838E = { /* ノ */
    .next = &GlySJA_E3838D,
    .width = 6,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E3838ETiles,
};

const struct GlyphNew GlySJA_EFBCAE = { /* Ｎ */
    .next = &GlySJA_EFBCAD,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBCAETiles,
};

const struct GlyphNew GlySJA_E5A3AB = { /* 士 */
    .next = &GlySJA_E59B9B,
    .width = 8,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A3ABTiles,
};

const struct GlyphNew GlySJA_E79FA5 = { /* 知 */
    .next = &GlySJA_E7B29B,
    .width = 8,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E79FA5Tiles,
};

const struct GlyphNew GlySJA_E583A7 = { /* 僧 */
    .next = &GlySJA_E5A3AB,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E583A7Tiles,
};

const struct GlyphNew GlySJA_E7A2BA = { /* 確 */
    .next = &GlySJA_E79FA5,
    .width = 9,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7A2BATiles,
};

const struct GlyphNew GlySJA_E3838F = { /* ハ */
    .next = &GlySJA_E3838E,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E3838FTiles,
};

const struct GlyphNew GlySJA_EFBCAF = { /* Ｏ */
    .next = &GlySJA_EFBCAE,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBCAFTiles,
};

const struct GlyphNew GlySJA_E7B3BB = { /* 系 */
    .next = &GlySJA_E7A2BA,
    .width = 8,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7B3BBTiles,
};

const struct GlyphNew GlySJA_E59CB0 = { /* 地 */
    .next = &GlySJA_E583A7,
    .width = 9,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E59CB0Tiles,
};

const struct GlyphNew GlySJA_E5A78B = { /* 始 */
    .next = &GlySJA_E59CB0,
    .width = 9,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A78BTiles,
};

const struct GlyphNew GlySJA_E9A6AC = { /* 馬 */
    .next = &GlySJA_E998BB,
    .width = 8,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9A6ACTiles,
};

const struct GlyphNew GlySJA_E6BAB6 = { /* 溶 */
    .next = &GlySJA_E6A798,
    .width = 8,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6BAB6Tiles,
};

const struct GlyphNew GlySJA_E589B5 = { /* 創 */
    .next = &GlySJA_E5A78B,
    .width = 9,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E589B5Tiles,
};

const struct GlyphNew GlySJA_E58883 = { /* 刃 */
    .next = &GlySJA_E589B5,
    .width = 8,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58883Tiles,
};

const struct GlyphNew GlySJA_E6B8A1 = { /* 渡 */
    .next = &GlySJA_E6BAB6,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6B8A1Tiles,
};

const struct GlyphNew GlySJA_E38390 = { /* バ */
    .next = &GlySJA_E3838F,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38390Tiles,
};

const struct GlyphNew GlySJA_EFBCB0 = { /* Ｐ */
    .next = &GlySJA_EFBCAF,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBCB0Tiles,
};

const struct GlyphNew GlySJA_E587BA = { /* 出 */
    .next = &GlySJA_E58883,
    .width = 8,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E587BATiles,
};

const struct GlyphNew GlySJA_E5A789 = { /* 姉 */
    .next = &GlySJA_E587BA,
    .width = 9,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A789Tiles,
};

const struct GlyphNew GlySJA_E7B58C = { /* 経 */
    .next = &GlySJA_E7B3BB,
    .width = 9,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7B58CTiles,
};

const struct GlyphNew GlySJA_E58F8C = { /* 双 */
    .next = &GlySJA_E5A789,
    .width = 8,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58F8CTiles,
};

const struct GlyphNew GlySJA_E8A69A = { /* 覚 */
    .next = &GlySJA_E8AB87,
    .width = 8,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8A69ATiles,
};

const struct GlyphNew GlySJA_E38391 = { /* パ */
    .next = &GlySJA_E38390,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38391Tiles,
};

const struct GlyphNew GlySJA_EFBCB1 = { /* Ｑ */
    .next = &GlySJA_EFBCB0,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBCB1Tiles,
};

const struct GlyphNew GlySJA_E794A8 = { /* 用 */
    .next = &GlySJA_E7B58C,
    .width = 8,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E794A8Tiles,
};

const struct GlyphNew GlySJA_E88BB1 = { /* 英 */
    .next = &GlySJA_E8A69A,
    .width = 8,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E88BB1Tiles,
};

const struct GlyphNew GlySJA_E8A193 = { /* 術 */
    .next = &GlySJA_E88BB1,
    .width = 9,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8A193Tiles,
};

const struct GlyphNew GlySJA_E7B699 = { /* 継 */
    .next = &GlySJA_E794A8,
    .width = 9,
    .utf_byte_2 = 0xb6,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7B699Tiles,
};

const struct GlyphNew GlySJA_E5A7BF = { /* 姿 */
    .next = &GlySJA_E58F8C,
    .width = 8,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A7BFTiles,
};

const struct GlyphNew GlySJA_E58DB4 = { /* 却 */
    .next = &GlySJA_E5A7BF,
    .width = 8,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58DB4Tiles,
};

const struct GlyphNew GlySJA_E681A5 = { /* 恥 */
    .next = &GlySJA_E6B8A1,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E681A5Tiles,
};

const struct GlyphNew GlySJA_E5BB83 = { /* 廃 */
    .next = &GlySJA_E58DB4,
    .width = 8,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BB83Tiles,
};

const struct GlyphNew GlySJA_E38392 = { /* ヒ */
    .next = &GlySJA_E38391,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38392Tiles,
};

const struct GlyphNew GlySJA_EFBCB2 = { /* Ｒ */
    .next = &GlySJA_EFBCB1,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBCB2Tiles,
};

const struct GlyphNew GlySJA_E5AD90 = { /* 子 */
    .next = &GlySJA_E5BB83,
    .width = 8,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5AD90Tiles,
};

const struct GlyphNew GlySJA_E8A19B = { /* 衛 */
    .next = &GlySJA_E8A193,
    .width = 9,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8A19BTiles,
};

const struct GlyphNew GlySJA_E789A7 = { /* 牧 */
    .next = &GlySJA_E7B699,
    .width = 9,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E789A7Tiles,
};

const struct GlyphNew GlySJA_E38393 = { /* ビ */
    .next = &GlySJA_E38392,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38393Tiles,
};

const struct GlyphNew GlySJA_EFBCB3 = { /* Ｓ */
    .next = &GlySJA_EFBCB2,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBCB3Tiles,
};

const struct GlyphNew GlySJA_E88D92 = { /* 荒 */
    .next = &GlySJA_E8A19B,
    .width = 8,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E88D92Tiles,
};

const struct GlyphNew GlySJA_E98094 = { /* 途 */
    .next = &GlySJA_E9A6AC,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E98094Tiles,
};

const struct GlyphNew GlySJA_E88595 = { /* 腕 */
    .next = &GlySJA_E88D92,
    .width = 9,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E88595Tiles,
};

const struct GlyphNew GlySJA_E38394 = { /* ピ */
    .next = &GlySJA_E38393,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38394Tiles,
};

const struct GlyphNew GlySJA_EFBCB4 = { /* Ｔ */
    .next = &GlySJA_EFBCB3,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBCB4Tiles,
};

const struct GlyphNew GlySJA_E8A18C = { /* 行 */
    .next = &GlySJA_E88595,
    .width = 8,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8A18CTiles,
};

const struct GlyphNew GlySJA_E983BD = { /* 都 */
    .next = &GlySJA_E98094,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E983BDTiles,
};

const struct GlyphNew GlySJA_E5B882 = { /* 市 */
    .next = &GlySJA_E5AD90,
    .width = 8,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B882Tiles,
};

const struct GlyphNew GlySJA_E69597 = { /* 敗 */
    .next = &GlySJA_E681A5,
    .width = 8,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69597Tiles,
};

const struct GlyphNew GlySJA_E5A3AE = { /* 壮 */
    .next = &GlySJA_E5B882,
    .width = 8,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A3AETiles,
};

const struct GlyphNew GlySJA_E98BAD = { /* 鋭 */
    .next = &GlySJA_E983BD,
    .width = 9,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E98BADTiles,
};

const struct GlyphNew GlySJA_E4B88D = { /* 不 */
    .next = &GlySJA_E4BABA,
    .width = 8,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4B88DTiles,
};

const struct GlyphNew GlySJA_E5B0BD = { /* 尽 */
    .next = &GlySJA_E5A3AE,
    .width = 8,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B0BDTiles,
};

const struct GlyphNew GlySJA_E89990 = { /* 虐 */
    .next = &GlySJA_E8A18C,
    .width = 8,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E89990Tiles,
};

const struct GlyphNew GlySJA_E38395 = { /* フ */
    .next = &GlySJA_E38394,
    .width = 6,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38395Tiles,
};

const struct GlyphNew GlySJA_EFBCB5 = { /* Ｕ */
    .next = &GlySJA_EFBCB4,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBCB5Tiles,
};

const struct GlyphNew GlySJA_E98086 = { /* 逆 */
    .next = &GlySJA_E98BAD,
    .width = 8,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E98086Tiles,
};

const struct GlyphNew GlySJA_E5B8AB = { /* 師 */
    .next = &GlySJA_E5B0BD,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B8ABTiles,
};

const struct GlyphNew GlySJA_E4BB98 = { /* 付 */
    .next = &GlySJA_E4B88D,
    .width = 8,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BB98Tiles,
};

const struct GlyphNew GlySJA_E89189 = { /* 葉 */
    .next = &GlySJA_E89990,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E89189Tiles,
};

const struct GlyphNew GlySJA_E698A5 = { /* 春 */
    .next = &GlySJA_E69597,
    .width = 8,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E698A5Tiles,
};

const struct GlyphNew GlySJA_E5A58F = { /* 奏 */
    .next = &GlySJA_E5B8AB,
    .width = 8,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A58FTiles,
};

const struct GlyphNew GlySJA_E38396 = { /* ブ */
    .next = &GlySJA_E38395,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38396Tiles,
};

const struct GlyphNew GlySJA_E3808C = { /* 「 */
    .next = &GlySJA_E38396,
    .width = 6,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E3808CTiles,
};

const struct GlyphNew GlySJA_EFBCB6 = { /* Ｖ */
    .next = &GlySJA_EFBCB5,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBCB6Tiles,
};

const struct GlyphNew GlySJA_E5BF97 = { /* 志 */
    .next = &GlySJA_E5A58F,
    .width = 8,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BF97Tiles,
};

const struct GlyphNew GlySJA_E58B83 = { /* 勃 */
    .next = &GlySJA_E5BF97,
    .width = 8,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58B83Tiles,
};

const struct GlyphNew GlySJA_E7BDAE = { /* 置 */
    .next = &GlySJA_E789A7,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7BDAETiles,
};

const struct GlyphNew GlySJA_E38397 = { /* プ */
    .next = &GlySJA_E3808C,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38397Tiles,
};

const struct GlyphNew GlySJA_E3808D = { /* 」 */
    .next = &GlySJA_E38397,
    .width = 6,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E3808DTiles,
};

const struct GlyphNew GlySJA_EFBCB7 = { /* Ｗ */
    .next = &GlySJA_EFBCB6,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBCB7Tiles,
};

const struct GlyphNew GlySJA_E4B985 = { /* 久 */
    .next = &GlySJA_E4BB98,
    .width = 8,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4B985Tiles,
};

const struct GlyphNew GlySJA_E8A681 = { /* 要 */
    .next = &GlySJA_E89189,
    .width = 8,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8A681Tiles,
};

const struct GlyphNew GlySJA_E6809D = { /* 思 */
    .next = &GlySJA_E698A5,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6809DTiles,
};

const struct GlyphNew GlySJA_E5A4AB = { /* 夫 */
    .next = &GlySJA_E58B83,
    .width = 8,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A4ABTiles,
};

const struct GlyphNew GlySJA_E8A888 = { /* 計 */
    .next = &GlySJA_E8A681,
    .width = 8,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8A888Tiles,
};

const struct GlyphNew GlySJA_E99DA9 = { /* 革 */
    .next = &GlySJA_E98086,
    .width = 8,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E99DA9Tiles,
};

const struct GlyphNew GlySJA_E6B2A1 = { /* 没 */
    .next = &GlySJA_E6809D,
    .width = 8,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6B2A1Tiles,
};

const struct GlyphNew GlySJA_E79B8A = { /* 益 */
    .next = &GlySJA_E7BDAE,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E79B8ATiles,
};

const struct GlyphNew GlySJA_E38398 = { /* ヘ */
    .next = &GlySJA_E3808D,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38398Tiles,
};

const struct GlyphNew GlySJA_EFBCB8 = { /* Ｘ */
    .next = &GlySJA_EFBCB7,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBCB8Tiles,
};

const struct GlyphNew GlySJA_E68C87 = { /* 指 */
    .next = &GlySJA_E6B2A1,
    .width = 8,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68C87Tiles,
};

const struct GlyphNew GlySJA_E8838C = { /* 背 */
    .next = &GlySJA_E8A888,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8838CTiles,
};

const struct GlyphNew GlySJA_E5ADA6 = { /* 学 */
    .next = &GlySJA_E5A4AB,
    .width = 8,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5ADA6Tiles,
};

const struct GlyphNew GlySJA_E999A3 = { /* 陣 */
    .next = &GlySJA_E99DA9,
    .width = 8,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E999A3Tiles,
};

const struct GlyphNew GlySJA_E58AAA = { /* 努 */
    .next = &GlySJA_E5ADA6,
    .width = 8,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58AAATiles,
};

const struct GlyphNew GlySJA_E5A9A6 = { /* 婦 */
    .next = &GlySJA_E58AAA,
    .width = 9,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A9A6Tiles,
};

const struct GlyphNew GlySJA_E3808E = { /* 『 */
    .next = &GlySJA_E38398,
    .width = 6,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E3808ETiles,
};

const struct GlyphNew GlySJA_E38399 = { /* ベ */
    .next = &GlySJA_E3808E,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38399Tiles,
};

const struct GlyphNew GlySJA_EFBCB9 = { /* Ｙ */
    .next = &GlySJA_EFBCB8,
    .width = 9,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBCB9Tiles,
};

const struct GlyphNew GlySJA_E4BC91 = { /* 休 */
    .next = &GlySJA_E4B985,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BC91Tiles,
};

const struct GlyphNew GlySJA_E5BAA6 = { /* 度 */
    .next = &GlySJA_E5A9A6,
    .width = 8,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BAA6Tiles,
};

const struct GlyphNew GlySJA_E694AF = { /* 支 */
    .next = &GlySJA_E68C87,
    .width = 8,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E694AFTiles,
};

const struct GlyphNew GlySJA_E8B88A = { /* 踊 */
    .next = &GlySJA_E8838C,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8B88ATiles,
};

const struct GlyphNew GlySJA_E9838A = { /* 郊 */
    .next = &GlySJA_E999A3,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9838ATiles,
};

const struct GlyphNew GlySJA_E5AF8C = { /* 富 */
    .next = &GlySJA_E5BAA6,
    .width = 8,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5AF8CTiles,
};

const struct GlyphNew GlySJA_E8ADA6 = { /* 警 */
    .next = &GlySJA_E8B88A,
    .width = 9,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8ADA6Tiles,
};

const struct GlyphNew GlySJA_E3808F = { /* 』 */
    .next = &GlySJA_E38399,
    .width = 6,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E3808FTiles,
};

const struct GlyphNew GlySJA_E3839A = { /* ペ */
    .next = &GlySJA_E3808F,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E3839ATiles,
};

const struct GlyphNew GlySJA_EFBCBA = { /* Ｚ */
    .next = &GlySJA_EFBCB9,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBCBATiles,
};

const struct GlyphNew GlySJA_E59C9F = { /* 土 */
    .next = &GlySJA_E5AF8C,
    .width = 8,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E59C9FTiles,
};

const struct GlyphNew GlySJA_E8BBBD = { /* 軽 */
    .next = &GlySJA_E8ADA6,
    .width = 8,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8BBBDTiles,
};

const struct GlyphNew GlySJA_E8BCA9 = { /* 輩 */
    .next = &GlySJA_E8BBBD,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8BCA9Tiles,
};

const struct GlyphNew GlySJA_E6A5BD = { /* 楽 */
    .next = &GlySJA_E694AF,
    .width = 8,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6A5BDTiles,
};

const struct GlyphNew GlySJA_E8AB8D = { /* 諍 */
    .next = &GlySJA_E8BCA9,
    .width = 9,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8AB8DTiles,
};

const struct GlyphNew GlySJA_E3839B = { /* ホ */
    .next = &GlySJA_E3839A,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E3839BTiles,
};

const struct GlyphNew GlySJA_E5A5B4 = { /* 奴 */
    .next = &GlySJA_E59C9F,
    .width = 9,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A5B4Tiles,
};

const struct GlyphNew GlySJA_E7AF89 = { /* 築 */
    .next = &GlySJA_E79B8A,
    .width = 8,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7AF89Tiles,
};

const struct GlyphNew GlySJA_E9858D = { /* 配 */
    .next = &GlySJA_E9838A,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9858DTiles,
};

const struct GlyphNew GlySJA_E999BD = { /* 陽 */
    .next = &GlySJA_E9858D,
    .width = 9,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E999BDTiles,
};

const struct GlyphNew GlySJA_E683B3 = { /* 想 */
    .next = &GlySJA_E6A5BD,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E683B3Tiles,
};

const struct GlyphNew GlySJA_E9A18D = { /* 額 */
    .next = &GlySJA_E999BD,
    .width = 8,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9A18DTiles,
};

const struct GlyphNew GlySJA_E989B1 = { /* 鉱 */
    .next = &GlySJA_E9A18D,
    .width = 9,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E989B1Tiles,
};

const struct GlyphNew GlySJA_E3839C = { /* ボ */
    .next = &GlySJA_E3839B,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E3839CTiles,
};

const struct GlyphNew GlySJA_EFBC8B = { /* ＋ */
    .next = &GlySJA_EFBCBA,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBC8BTiles,
};

const struct GlyphNew GlySJA_E9A48A = { /* 養 */
    .next = &GlySJA_E989B1,
    .width = 8,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9A48ATiles,
};

const struct GlyphNew GlySJA_E5AEAE = { /* 宮 */
    .next = &GlySJA_E5A5B4,
    .width = 8,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5AEAETiles,
};

const struct GlyphNew GlySJA_E69CAC = { /* 本 */
    .next = &GlySJA_E683B3,
    .width = 8,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69CACTiles,
};

const struct GlyphNew GlySJA_E5808D = { /* 倍 */
    .next = &GlySJA_E5AEAE,
    .width = 8,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5808DTiles,
};

const struct GlyphNew GlySJA_E68092 = { /* 怒 */
    .next = &GlySJA_E69CAC,
    .width = 8,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68092Tiles,
};

const struct GlyphNew GlySJA_E68D9C = { /* 捜 */
    .next = &GlySJA_E68092,
    .width = 8,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68D9CTiles,
};

const struct GlyphNew GlySJA_E7959C = { /* 畜 */
    .next = &GlySJA_E7AF89,
    .width = 8,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7959CTiles,
};

const struct GlyphNew GlySJA_E3839D = { /* ポ */
    .next = &GlySJA_E3839C,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E3839DTiles,
};

const struct GlyphNew GlySJA_E58092 = { /* 倒 */
    .next = &GlySJA_E5808D,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58092Tiles,
};

const struct GlyphNew GlySJA_E5BC93 = { /* 弓 */
    .next = &GlySJA_E58092,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BC93Tiles,
};

const struct GlyphNew GlySJA_E68096 = { /* 怖 */
    .next = &GlySJA_E68D9C,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68096Tiles,
};

const struct GlyphNew GlySJA_E68E83 = { /* 掃 */
    .next = &GlySJA_E68096,
    .width = 9,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68E83Tiles,
};

const struct GlyphNew GlySJA_E98BBC = { /* 鋼 */
    .next = &GlySJA_E9A48A,
    .width = 9,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E98BBCTiles,
};

const struct GlyphNew GlySJA_E68E9F = { /* 掟 */
    .next = &GlySJA_E68E83,
    .width = 8,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68E9FTiles,
};

const struct GlyphNew GlySJA_E88AB8 = { /* 芸 */
    .next = &GlySJA_E8AB8D,
    .width = 8,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E88AB8Tiles,
};

const struct GlyphNew GlySJA_E3839E = { /* マ */
    .next = &GlySJA_E3839D,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E3839ETiles,
};

const struct GlyphNew GlySJA_E8BF8E = { /* 迎 */
    .next = &GlySJA_E88AB8,
    .width = 8,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8BF8ETiles,
};

const struct GlyphNew GlySJA_E5859A = { /* 党 */
    .next = &GlySJA_E5BC93,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5859ATiles,
};

const struct GlyphNew GlySJA_E680A5 = { /* 急 */
    .next = &GlySJA_E68E9F,
    .width = 8,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E680A5Tiles,
};

const struct GlyphNew GlySJA_E59BB3 = { /* 図 */
    .next = &GlySJA_E5859A,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E59BB3Tiles,
};

const struct GlyphNew GlySJA_E3839F = { /* ミ */
    .next = &GlySJA_E3839E,
    .width = 6,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E3839FTiles,
};

const struct GlyphNew GlySJA_E69591 = { /* 救 */
    .next = &GlySJA_E680A5,
    .width = 9,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69591Tiles,
};

const struct GlyphNew GlySJA_E6ADA2 = { /* 止 */
    .next = &GlySJA_E69591,
    .width = 8,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6ADA2Tiles,
};

const struct GlyphNew GlySJA_E9998D = { /* 降 */
    .next = &GlySJA_E98BBC,
    .width = 8,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9998DTiles,
};

const struct GlyphNew GlySJA_E6ACB2 = { /* 欲 */
    .next = &GlySJA_E6ADA2,
    .width = 8,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6ACB2Tiles,
};

const struct GlyphNew GlySJA_E586AC = { /* 冬 */
    .next = &GlySJA_E59BB3,
    .width = 8,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E586ACTiles,
};

const struct GlyphNew GlySJA_E383A0 = { /* ム */
    .next = &GlySJA_E3839F,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E383A0Tiles,
};

const struct GlyphNew GlySJA_E6ADBB = { /* 死 */
    .next = &GlySJA_E6ACB2,
    .width = 8,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6ADBBTiles,
};

const struct GlyphNew GlySJA_E696A7 = { /* 斧 */
    .next = &GlySJA_E6ADBB,
    .width = 8,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E696A7Tiles,
};

const struct GlyphNew GlySJA_E6BA96 = { /* 準 */
    .next = &GlySJA_E696A7,
    .width = 8,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6BA96Tiles,
};

const struct GlyphNew GlySJA_E5878D = { /* 凍 */
    .next = &GlySJA_E586AC,
    .width = 9,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5878DTiles,
};

const struct GlyphNew GlySJA_E98090 = { /* 逐 */
    .next = &GlySJA_E9998D,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E98090Tiles,
};

const struct GlyphNew GlySJA_E383A1 = { /* メ */
    .next = &GlySJA_E383A0,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E383A1Tiles,
};

const struct GlyphNew GlySJA_EFBD81 = { /* ａ */
    .next = &GlySJA_EFBC8B,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBD81Tiles,
};

const struct GlyphNew GlySJA_E7A3A8 = { /* 磨 */
    .next = &GlySJA_E7959C,
    .width = 8,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7A3A8Tiles,
};

const struct GlyphNew GlySJA_E6B182 = { /* 求 */
    .next = &GlySJA_E6BA96,
    .width = 8,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6B182Tiles,
};

const struct GlyphNew GlySJA_E697A9 = { /* 早 */
    .next = &GlySJA_E6B182,
    .width = 8,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E697A9Tiles,
};

const struct GlyphNew GlySJA_E58880 = { /* 刀 */
    .next = &GlySJA_E5878D,
    .width = 8,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58880Tiles,
};

const struct GlyphNew GlySJA_E699AE = { /* 普 */
    .next = &GlySJA_E697A9,
    .width = 8,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E699AETiles,
};

const struct GlyphNew GlySJA_E590B9 = { /* 吹 */
    .next = &GlySJA_E58880,
    .width = 9,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E590B9Tiles,
};

const struct GlyphNew GlySJA_E383A2 = { /* モ */
    .next = &GlySJA_E383A1,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E383A2Tiles,
};

const struct GlyphNew GlySJA_EFBD82 = { /* ｂ */
    .next = &GlySJA_EFBD81,
    .width = 7,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBD82Tiles,
};

const struct GlyphNew GlySJA_E69283 = { /* 撃 */
    .next = &GlySJA_E699AE,
    .width = 8,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69283Tiles,
};

const struct GlyphNew GlySJA_E9AD94 = { /* 魔 */
    .next = &GlySJA_E98090,
    .width = 9,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9AD94Tiles,
};

const struct GlyphNew GlySJA_E9AB98 = { /* 高 */
    .next = &GlySJA_E9AD94,
    .width = 8,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9AB98Tiles,
};

const struct GlyphNew GlySJA_E79BBE = { /* 盾 */
    .next = &GlySJA_E7A3A8,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E79BBETiles,
};

const struct GlyphNew GlySJA_E78D85 = { /* 獅 */
    .next = &GlySJA_E79BBE,
    .width = 9,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E78D85Tiles,
};

const struct GlyphNew GlySJA_E383A3 = { /* ャ */
    .next = &GlySJA_E383A2,
    .width = 6,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E383A3Tiles,
};

const struct GlyphNew GlySJA_EFBD83 = { /* ｃ */
    .next = &GlySJA_EFBD82,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBD83Tiles,
};

const struct GlyphNew GlySJA_E788B6 = { /* 父 */
    .next = &GlySJA_E78D85,
    .width = 8,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E788B6Tiles,
};

const struct GlyphNew GlySJA_E5A194 = { /* 塔 */
    .next = &GlySJA_E590B9,
    .width = 8,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A194Tiles,
};

const struct GlyphNew GlySJA_E5B7A3 = { /* 巣 */
    .next = &GlySJA_E5A194,
    .width = 8,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B7A3Tiles,
};

const struct GlyphNew GlySJA_E6BF80 = { /* 激 */
    .next = &GlySJA_E69283,
    .width = 9,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6BF80Tiles,
};

const struct GlyphNew GlySJA_E8B2B7 = { /* 買 */
    .next = &GlySJA_E8BF8E,
    .width = 8,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8B2B7Tiles,
};

const struct GlyphNew GlySJA_E6B3A3 = { /* 泣 */
    .next = &GlySJA_E6BF80,
    .width = 8,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6B3A3Tiles,
};

const struct GlyphNew GlySJA_E383A4 = { /* ヤ */
    .next = &GlySJA_E383A3,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E383A4Tiles,
};

const struct GlyphNew GlySJA_EFBD84 = { /* ｄ */
    .next = &GlySJA_EFBD83,
    .width = 7,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBD84Tiles,
};

const struct GlyphNew GlySJA_E6A78D = { /* 槍 */
    .next = &GlySJA_E6B3A3,
    .width = 10,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6A78DTiles,
};

const struct GlyphNew GlySJA_E5A3B2 = { /* 売 */
    .next = &GlySJA_E5B7A3,
    .width = 8,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A3B2Tiles,
};

const struct GlyphNew GlySJA_E59F8B = { /* 埋 */
    .next = &GlySJA_E5A3B2,
    .width = 9,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E59F8BTiles,
};

const struct GlyphNew GlySJA_E7A781 = { /* 私 */
    .next = &GlySJA_E788B6,
    .width = 8,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7A781Tiles,
};

const struct GlyphNew GlySJA_E5BBB6 = { /* 延 */
    .next = &GlySJA_E59F8B,
    .width = 8,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BBB6Tiles,
};

const struct GlyphNew GlySJA_E5899B = { /* 剛 */
    .next = &GlySJA_E5BBB6,
    .width = 9,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5899BTiles,
};

const struct GlyphNew GlySJA_E383A5 = { /* ュ */
    .next = &GlySJA_E383A4,
    .width = 6,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E383A5Tiles,
};

const struct GlyphNew GlySJA_EFBD85 = { /* ｅ */
    .next = &GlySJA_EFBD84,
    .width = 6,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBD85Tiles,
};

const struct GlyphNew GlySJA_E6B0B4 = { /* 水 */
    .next = &GlySJA_E6A78D,
    .width = 9,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6B0B4Tiles,
};

const struct GlyphNew GlySJA_E79D80 = { /* 着 */
    .next = &GlySJA_E7A781,
    .width = 8,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E79D80Tiles,
};

const struct GlyphNew GlySJA_E5A6B9 = { /* 妹 */
    .next = &GlySJA_E5899B,
    .width = 8,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A6B9Tiles,
};

const struct GlyphNew GlySJA_E7B3B8 = { /* 糸 */
    .next = &GlySJA_E79D80,
    .width = 8,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7B3B8Tiles,
};

const struct GlyphNew GlySJA_E383A6 = { /* ユ */
    .next = &GlySJA_E383A5,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E383A6Tiles,
};

const struct GlyphNew GlySJA_EFBD86 = { /* ｆ */
    .next = &GlySJA_EFBD85,
    .width = 7,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBD86Tiles,
};

const struct GlyphNew GlySJA_E4B8AD = { /* 中 */
    .next = &GlySJA_E4BC91,
    .width = 8,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4B8ADTiles,
};

const struct GlyphNew GlySJA_E58FB7 = { /* 号 */
    .next = &GlySJA_E5A6B9,
    .width = 9,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58FB7Tiles,
};

const struct GlyphNew GlySJA_E7B499 = { /* 紙 */
    .next = &GlySJA_E7B3B8,
    .width = 8,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7B499Tiles,
};

const struct GlyphNew GlySJA_E7A9B6 = { /* 究 */
    .next = &GlySJA_E7B499,
    .width = 8,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7A9B6Tiles,
};

const struct GlyphNew GlySJA_E383A7 = { /* ョ */
    .next = &GlySJA_E383A6,
    .width = 6,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E383A7Tiles,
};

const struct GlyphNew GlySJA_EFBD87 = { /* ｇ */
    .next = &GlySJA_EFBD86,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBD87Tiles,
};

const struct GlyphNew GlySJA_E68FB4 = { /* 援 */
    .next = &GlySJA_E6B0B4,
    .width = 8,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68FB4Tiles,
};

const struct GlyphNew GlySJA_E5B3B6 = { /* 島 */
    .next = &GlySJA_E58FB7,
    .width = 8,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B3B6Tiles,
};

const struct GlyphNew GlySJA_E59088 = { /* 合 */
    .next = &GlySJA_E5B3B6,
    .width = 8,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E59088Tiles,
};

const struct GlyphNew GlySJA_E4BBB2 = { /* 仲 */
    .next = &GlySJA_E4B8AD,
    .width = 8,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BBB2Tiles,
};

const struct GlyphNew GlySJA_E9A086 = { /* 順 */
    .next = &GlySJA_E9AB98,
    .width = 9,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9A086Tiles,
};

const struct GlyphNew GlySJA_E383A8 = { /* ヨ */
    .next = &GlySJA_E383A7,
    .width = 6,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E383A8Tiles,
};

const struct GlyphNew GlySJA_EFBD88 = { /* ｈ */
    .next = &GlySJA_EFBD87,
    .width = 7,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBD88Tiles,
};

const struct GlyphNew GlySJA_E4BA89 = { /* 争 */
    .next = &GlySJA_E4BBB2,
    .width = 8,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BA89Tiles,
};

const struct GlyphNew GlySJA_E69DA5 = { /* 来 */
    .next = &GlySJA_E68FB4,
    .width = 8,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69DA5Tiles,
};

const struct GlyphNew GlySJA_E6B1BA = { /* 決 */
    .next = &GlySJA_E69DA5,
    .width = 8,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6B1BATiles,
};

const struct GlyphNew GlySJA_E6B4BB = { /* 活 */
    .next = &GlySJA_E6B1BA,
    .width = 8,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6B4BBTiles,
};

const struct GlyphNew GlySJA_E587A6 = { /* 処 */
    .next = &GlySJA_E59088,
    .width = 9,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E587A6Tiles,
};

const struct GlyphNew GlySJA_E6AF8E = { /* 毎 */
    .next = &GlySJA_E6B4BB,
    .width = 8,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6AF8ETiles,
};

const struct GlyphNew GlySJA_E383A9 = { /* ラ */
    .next = &GlySJA_E383A8,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E383A9Tiles,
};

const struct GlyphNew GlySJA_EFBD89 = { /* ｉ */
    .next = &GlySJA_EFBD88,
    .width = 6,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBD89Tiles,
};

const struct GlyphNew GlySJA_E5BFA0 = { /* 忠 */
    .next = &GlySJA_E587A6,
    .width = 8,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BFA0Tiles,
};

const struct GlyphNew GlySJA_E5889D = { /* 初 */
    .next = &GlySJA_E5BFA0,
    .width = 8,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5889DTiles,
};

const struct GlyphNew GlySJA_E8B2A0 = { /* 負 */
    .next = &GlySJA_E8B2B7,
    .width = 8,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8B2A0Tiles,
};

const struct GlyphNew GlySJA_E7B49A = { /* 級 */
    .next = &GlySJA_E7A9B6,
    .width = 8,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7B49ATiles,
};

const struct GlyphNew GlySJA_E383AA = { /* リ */
    .next = &GlySJA_E383A9,
    .width = 6,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E383AATiles,
};

const struct GlyphNew GlySJA_EFBD8A = { /* ｊ */
    .next = &GlySJA_EFBD89,
    .width = 6,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBD8ATiles,
};

const struct GlyphNew GlySJA_E68980 = { /* 所 */
    .next = &GlySJA_E6AF8E,
    .width = 8,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68980Tiles,
};

const struct GlyphNew GlySJA_E7828E = { /* 炎 */
    .next = &GlySJA_E7B49A,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7828ETiles,
};

const struct GlyphNew GlySJA_E79BB8 = { /* 相 */
    .next = &GlySJA_E7828E,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E79BB8Tiles,
};

const struct GlyphNew GlySJA_E9A0BC = { /* 頼 */
    .next = &GlySJA_E9A086,
    .width = 8,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9A0BCTiles,
};

const struct GlyphNew GlySJA_E8A1B0 = { /* 衰 */
    .next = &GlySJA_E8B2A0,
    .width = 8,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8A1B0Tiles,
};

const struct GlyphNew GlySJA_E887B3 = { /* 至 */
    .next = &GlySJA_E8A1B0,
    .width = 8,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E887B3Tiles,
};

const struct GlyphNew GlySJA_E68A95 = { /* 投 */
    .next = &GlySJA_E68980,
    .width = 8,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68A95Tiles,
};

const struct GlyphNew GlySJA_E383AB = { /* ル */
    .next = &GlySJA_E383AA,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E383ABTiles,
};

const struct GlyphNew GlySJA_EFBD8B = { /* ｋ */
    .next = &GlySJA_EFBD8A,
    .width = 7,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBD8BTiles,
};

const struct GlyphNew GlySJA_E8A696 = { /* 視 */
    .next = &GlySJA_E887B3,
    .width = 8,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8A696Tiles,
};

const struct GlyphNew GlySJA_E7B590 = { /* 結 */
    .next = &GlySJA_E79BB8,
    .width = 8,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7B590Tiles,
};

const struct GlyphNew GlySJA_E8B5B4 = { /* 赴 */
    .next = &GlySJA_E8A696,
    .width = 8,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8B5B4Tiles,
};

const struct GlyphNew GlySJA_E698BC = { /* 昼 */
    .next = &GlySJA_E68A95,
    .width = 9,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E698BCTiles,
};

const struct GlyphNew GlySJA_E5B995 = { /* 幕 */
    .next = &GlySJA_E5889D,
    .width = 8,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B995Tiles,
};

const struct GlyphNew GlySJA_E99BB7 = { /* 雷 */
    .next = &GlySJA_E9A0BC,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E99BB7Tiles,
};

const struct GlyphNew GlySJA_E7B5A6 = { /* 給 */
    .next = &GlySJA_E7B590,
    .width = 9,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7B5A6Tiles,
};

const struct GlyphNew GlySJA_E8B1AA = { /* 豪 */
    .next = &GlySJA_E8B5B4,
    .width = 8,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8B1AATiles,
};

const struct GlyphNew GlySJA_E383AC = { /* レ */
    .next = &GlySJA_E383AB,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E383ACTiles,
};

const struct GlyphNew GlySJA_EFBD8C = { /* ｌ */
    .next = &GlySJA_EFBD8B,
    .width = 7,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBD8CTiles,
};

const struct GlyphNew GlySJA_E69DB1 = { /* 東 */
    .next = &GlySJA_E698BC,
    .width = 8,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69DB1Tiles,
};

const struct GlyphNew GlySJA_E8A180 = { /* 血 */
    .next = &GlySJA_E8B1AA,
    .width = 8,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8A180Tiles,
};

const struct GlyphNew GlySJA_E4BCAF = { /* 伯 */
    .next = &GlySJA_E4BA89,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BCAFTiles,
};

const struct GlyphNew GlySJA_E697A7 = { /* 旧 */
    .next = &GlySJA_E69DB1,
    .width = 8,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E697A7Tiles,
};

const struct GlyphNew GlySJA_E69FB1 = { /* 柱 */
    .next = &GlySJA_E697A7,
    .width = 9,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69FB1Tiles,
};

const struct GlyphNew GlySJA_E383AD = { /* ロ */
    .next = &GlySJA_E383AC,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E383ADTiles,
};

const struct GlyphNew GlySJA_EFBD8D = { /* ｍ */
    .next = &GlySJA_EFBD8C,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBD8DTiles,
};

const struct GlyphNew GlySJA_E6B3A8 = { /* 注 */
    .next = &GlySJA_E69FB1,
    .width = 8,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6B3A8Tiles,
};

const struct GlyphNew GlySJA_E7B5A1 = { /* 絡 */
    .next = &GlySJA_E7B5A6,
    .width = 9,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7B5A1Tiles,
};

const struct GlyphNew GlySJA_E7B78F = { /* 総 */
    .next = &GlySJA_E7B5A1,
    .width = 9,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7B78FTiles,
};

const struct GlyphNew GlySJA_E8A9A9 = { /* 詩 */
    .next = &GlySJA_E8A180,
    .width = 8,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8A9A9Tiles,
};

const struct GlyphNew GlySJA_EFBD8E = { /* ｎ */
    .next = &GlySJA_EFBD8D,
    .width = 7,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBD8ETiles,
};

const struct GlyphNew GlySJA_E69C88 = { /* 月 */
    .next = &GlySJA_E6B3A8,
    .width = 7,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69C88Tiles,
};

const struct GlyphNew GlySJA_E58EBB = { /* 去 */
    .next = &GlySJA_E5B995,
    .width = 8,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58EBBTiles,
};

const struct GlyphNew GlySJA_E890BD = { /* 落 */
    .next = &GlySJA_E8A9A9,
    .width = 9,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E890BDTiles,
};

const struct GlyphNew GlySJA_E4BEAE = { /* 侮 */
    .next = &GlySJA_E4BCAF,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BEAETiles,
};

const struct GlyphNew GlySJA_E8A9A6 = { /* 試 */
    .next = &GlySJA_E890BD,
    .width = 8,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8A9A6Tiles,
};

const struct GlyphNew GlySJA_E5BAB6 = { /* 庶 */
    .next = &GlySJA_E58EBB,
    .width = 8,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BAB6Tiles,
};

const struct GlyphNew GlySJA_E383AF = { /* ワ */
    .next = &GlySJA_E383AD,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E383AFTiles,
};

const struct GlyphNew GlySJA_EFBD8F = { /* ｏ */
    .next = &GlySJA_EFBD8E,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBD8FTiles,
};

const struct GlyphNew GlySJA_E7B792 = { /* 緒 */
    .next = &GlySJA_E7B78F,
    .width = 8,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7B792Tiles,
};

const struct GlyphNew GlySJA_E588BB = { /* 刻 */
    .next = &GlySJA_E5BAB6,
    .width = 8,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E588BBTiles,
};

const struct GlyphNew GlySJA_E5B185 = { /* 居 */
    .next = &GlySJA_E588BB,
    .width = 8,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B185Tiles,
};

const struct GlyphNew GlySJA_E68B8D = { /* 拍 */
    .next = &GlySJA_E69C88,
    .width = 8,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68B8DTiles,
};

const struct GlyphNew GlySJA_E4BBB6 = { /* 件 */
    .next = &GlySJA_E4BEAE,
    .width = 8,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BBB6Tiles,
};

const struct GlyphNew GlySJA_EFBD90 = { /* ｐ */
    .next = &GlySJA_EFBD8F,
    .width = 7,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBD90Tiles,
};

const struct GlyphNew GlySJA_E88D89 = { /* 草 */
    .next = &GlySJA_E8A9A6,
    .width = 8,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E88D89Tiles,
};

const struct GlyphNew GlySJA_E6ADA6 = { /* 武 */
    .next = &GlySJA_E68B8D,
    .width = 8,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6ADA6Tiles,
};

const struct GlyphNew GlySJA_E79B97 = { /* 盗 */
    .next = &GlySJA_E7B792,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E79B97Tiles,
};

const struct GlyphNew GlySJA_E4B9B1 = { /* 乱 */
    .next = &GlySJA_E4BBB6,
    .width = 8,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4B9B1Tiles,
};

const struct GlyphNew GlySJA_E5B7A8 = { /* 巨 */
    .next = &GlySJA_E5B185,
    .width = 8,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B7A8Tiles,
};

const struct GlyphNew GlySJA_E5918A = { /* 告 */
    .next = &GlySJA_E5B7A8,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5918ATiles,
};

const struct GlyphNew GlySJA_EFBD91 = { /* ｑ */
    .next = &GlySJA_EFBD90,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBD91Tiles,
};

const struct GlyphNew GlySJA_E69BB8 = { /* 書 */
    .next = &GlySJA_E6ADA6,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69BB8Tiles,
};

const struct GlyphNew GlySJA_E59BBD = { /* 国 */
    .next = &GlySJA_E5918A,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E59BBDTiles,
};

const struct GlyphNew GlySJA_E8889E = { /* 舞 */
    .next = &GlySJA_E88D89,
    .width = 8,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8889ETiles,
};

const struct GlyphNew GlySJA_E68B92 = { /* 拒 */
    .next = &GlySJA_E69BB8,
    .width = 8,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68B92Tiles,
};

const struct GlyphNew GlySJA_E8B387 = { /* 資 */
    .next = &GlySJA_E8889E,
    .width = 8,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8B387Tiles,
};

const struct GlyphNew GlySJA_EFBD92 = { /* ｒ */
    .next = &GlySJA_EFBD91,
    .width = 7,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBD92Tiles,
};

const struct GlyphNew GlySJA_E383B2 = { /* ヲ */
    .next = &GlySJA_E383AF,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E383B2Tiles,
};

const struct GlyphNew GlySJA_E799BD = { /* 白 */
    .next = &GlySJA_E79B97,
    .width = 7,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E799BDTiles,
};

const struct GlyphNew GlySJA_E68BA0 = { /* 拠 */
    .next = &GlySJA_E68B92,
    .width = 10,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68BA0Tiles,
};

const struct GlyphNew GlySJA_E383B3 = { /* ン */
    .next = &GlySJA_E383B2,
    .width = 7,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E383B3Tiles,
};

const struct GlyphNew GlySJA_EFBD93 = { /* ｓ */
    .next = &GlySJA_EFBD92,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBD93Tiles,
};

const struct GlyphNew GlySJA_E981A0 = { /* 遠 */
    .next = &GlySJA_E99BB7,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E981A0Tiles,
};

const struct GlyphNew GlySJA_E985B7 = { /* 酷 */
    .next = &GlySJA_E981A0,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E985B7Tiles,
};

const struct GlyphNew GlySJA_E68C99 = { /* 挙 */
    .next = &GlySJA_E68BA0,
    .width = 9,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68C99Tiles,
};

const struct GlyphNew GlySJA_E9A790 = { /* 駐 */
    .next = &GlySJA_E985B7,
    .width = 8,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9A790Tiles,
};

const struct GlyphNew GlySJA_EFBC85 = { /* ％ */
    .next = &GlySJA_EFBD93,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBC85Tiles,
};

const struct GlyphNew GlySJA_E383B4 = { /* ヴ */
    .next = &GlySJA_E383B3,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E383B4Tiles,
};

const struct GlyphNew GlySJA_EFBD94 = { /* ｔ */
    .next = &GlySJA_EFBC85,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBD94Tiles,
};

const struct GlyphNew GlySJA_E695B0 = { /* 数 */
    .next = &GlySJA_E68C99,
    .width = 9,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E695B0Tiles,
};

const struct GlyphNew GlySJA_E983A8 = { /* 部 */
    .next = &GlySJA_E9A790,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E983A8Tiles,
};

const struct GlyphNew GlySJA_E8ABB8 = { /* 諸 */
    .next = &GlySJA_E8B387,
    .width = 8,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8ABB8Tiles,
};

const struct GlyphNew GlySJA_EFBD95 = { /* ｕ */
    .next = &GlySJA_EFBD94,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBD95Tiles,
};

const struct GlyphNew GlySJA_E9BB92 = { /* 黒 */
    .next = &GlySJA_E983A8,
    .width = 8,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9BB92Tiles,
};

const struct GlyphNew GlySJA_E589A3 = { /* 剣 */
    .next = &GlySJA_E59BBD,
    .width = 8,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E589A3Tiles,
};

const struct GlyphNew GlySJA_E58AA9 = { /* 助 */
    .next = &GlySJA_E589A3,
    .width = 9,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58AA9Tiles,
};

const struct GlyphNew GlySJA_E69EA2 = { /* 枢 */
    .next = &GlySJA_E695B0,
    .width = 8,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69EA2Tiles,
};

const struct GlyphNew GlySJA_E8A385 = { /* 装 */
    .next = &GlySJA_E8ABB8,
    .width = 8,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8A385Tiles,
};

const struct GlyphNew GlySJA_E5B081 = { /* 封 */
    .next = &GlySJA_E58AA9,
    .width = 8,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B081Tiles,
};

const struct GlyphNew GlySJA_E6ADAF = { /* 歯 */
    .next = &GlySJA_E69EA2,
    .width = 9,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6ADAFTiles,
};

const struct GlyphNew GlySJA_EFBD96 = { /* ｖ */
    .next = &GlySJA_EFBD95,
    .width = 9,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBD96Tiles,
};

const struct GlyphNew GlySJA_E69CAB = { /* 末 */
    .next = &GlySJA_E6ADAF,
    .width = 8,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69CABTiles,
};

const struct GlyphNew GlySJA_E4BA8B = { /* 事 */
    .next = &GlySJA_E4B9B1,
    .width = 9,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BA8BTiles,
};

const struct GlyphNew GlySJA_E5BD93 = { /* 当 */
    .next = &GlySJA_E5B081,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BD93Tiles,
};

const struct GlyphNew GlySJA_E78D84 = { /* 獄 */
    .next = &GlySJA_E799BD,
    .width = 9,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E78D84Tiles,
};

const struct GlyphNew GlySJA_E8A8B1 = { /* 許 */
    .next = &GlySJA_E8A385,
    .width = 8,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8A8B1Tiles,
};

const struct GlyphNew GlySJA_E8B5B0 = { /* 走 */
    .next = &GlySJA_E8A8B1,
    .width = 8,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8B5B0Tiles,
};

const struct GlyphNew GlySJA_E58F99 = { /* 叙 */
    .next = &GlySJA_E5BD93,
    .width = 8,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58F99Tiles,
};

const struct GlyphNew GlySJA_EFBD97 = { /* ｗ */
    .next = &GlySJA_EFBD96,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBD97Tiles,
};

const struct GlyphNew GlySJA_E5A5B3 = { /* 女 */
    .next = &GlySJA_E58F99,
    .width = 8,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A5B3Tiles,
};

const struct GlyphNew GlySJA_E9A2A8 = { /* 風 */
    .next = &GlySJA_E9BB92,
    .width = 9,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9A2A8Tiles,
};

const struct GlyphNew GlySJA_E8BFAB = { /* 迫 */
    .next = &GlySJA_E8B5B0,
    .width = 8,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8BFABTiles,
};

const struct GlyphNew GlySJA_E98081 = { /* 送 */
    .next = &GlySJA_E9A2A8,
    .width = 8,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E98081Tiles,
};

const struct GlyphNew GlySJA_E8A6A7 = { /* 覧 */
    .next = &GlySJA_E8BFAB,
    .width = 8,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8A6A7Tiles,
};

const struct GlyphNew GlySJA_EFBD98 = { /* ｘ */
    .next = &GlySJA_EFBD97,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBD98Tiles,
};

const struct GlyphNew GlySJA_E588A9 = { /* 利 */
    .next = &GlySJA_E5A5B3,
    .width = 8,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E588A9Tiles,
};

const struct GlyphNew GlySJA_E885B0 = { /* 腰 */
    .next = &GlySJA_E8A6A7,
    .width = 9,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E885B0Tiles,
};

const struct GlyphNew GlySJA_E5BA8F = { /* 序 */
    .next = &GlySJA_E588A9,
    .width = 9,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BA8FTiles,
};

const struct GlyphNew GlySJA_E6B19A = { /* 汚 */
    .next = &GlySJA_E69CAB,
    .width = 8,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6B19ATiles,
};

const struct GlyphNew GlySJA_EFBD99 = { /* ｙ */
    .next = &GlySJA_EFBD98,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBD99Tiles,
};

const struct GlyphNew GlySJA_E6BCA0 = { /* 漠 */
    .next = &GlySJA_E6B19A,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6BCA0Tiles,
};

const struct GlyphNew GlySJA_E58590 = { /* 児 */
    .next = &GlySJA_E5BA8F,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58590Tiles,
};

const struct GlyphNew GlySJA_E8B2AF = { /* 貯 */
    .next = &GlySJA_E885B0,
    .width = 8,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8B2AFTiles,
};

const struct GlyphNew GlySJA_E6BC81 = { /* 漁 */
    .next = &GlySJA_E6BCA0,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6BC81Tiles,
};

const struct GlyphNew GlySJA_E7AD89 = { /* 等 */
    .next = &GlySJA_E78D84,
    .width = 8,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7AD89Tiles,
};

const struct GlyphNew GlySJA_E794A5 = { /* 甥 */
    .next = &GlySJA_E7AD89,
    .width = 8,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E794A5Tiles,
};

const struct GlyphNew GlySJA_EFBD9A = { /* ｚ */
    .next = &GlySJA_EFBD99,
    .width = 7,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_EFBD9ATiles,
};

const struct GlyphNew GlySJA_E5BBBA = { /* 建 */
    .next = &GlySJA_E58590,
    .width = 8,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BBBATiles,
};

const struct GlyphNew GlySJA_E4BC8F = { /* 伏 */
    .next = &GlySJA_E4BA8B,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BC8FTiles,
};

const struct GlyphNew GlySJA_E7AD94 = { /* 答 */
    .next = &GlySJA_E794A5,
    .width = 9,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7AD94Tiles,
};

const struct GlyphNew GlySJA_E5AD97 = { /* 字 */
    .next = &GlySJA_E5BBBA,
    .width = 8,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5AD97Tiles,
};

const struct GlyphNew GlySJA_E2978B = { /* ○ */
    .next = &GlySJA_E285A6,
    .width = 7,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E2978BTiles,
};

const struct GlyphNew GlySJA_E5AFBA = { /* 寺 */
    .next = &GlySJA_E5AD97,
    .width = 8,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5AFBATiles,
};

const struct GlyphNew GlySJA_E5A4AE = { /* 央 */
    .next = &GlySJA_E5AFBA,
    .width = 8,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A4AETiles,
};

const struct GlyphNew GlySJA_E5BEA9 = { /* 復 */
    .next = &GlySJA_E5A4AE,
    .width = 8,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BEA9Tiles,
};

const struct GlyphNew GlySJA_E5838F = { /* 像 */
    .next = &GlySJA_E5BEA9,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5838FTiles,
};

const struct GlyphNew GlySJA_E4B887 = { /* 万 */
    .next = &GlySJA_E4BC8F,
    .width = 8,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4B887Tiles,
};

const struct GlyphNew GlySJA_E999A4 = { /* 除 */
    .next = &GlySJA_E98081,
    .width = 9,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E999A4Tiles,
};

const struct GlyphNew GlySJA_E68C81 = { /* 持 */
    .next = &GlySJA_E6BC81,
    .width = 9,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68C81Tiles,
};

const struct GlyphNew GlySJA_E7B5B1 = { /* 統 */
    .next = &GlySJA_E7AD94,
    .width = 9,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7B5B1Tiles,
};

const struct GlyphNew GlySJA_E79086 = { /* 理 */
    .next = &GlySJA_E7B5B1,
    .width = 8,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E79086Tiles,
};

const struct GlyphNew GlySJA_E5A297 = { /* 増 */
    .next = &GlySJA_E5838F,
    .width = 9,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A297Tiles,
};

const struct GlyphNew GlySJA_E5B985 = { /* 幅 */
    .next = &GlySJA_E5A297,
    .width = 8,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B985Tiles,
};

const struct GlyphNew GlySJA_E582B7 = { /* 傷 */
    .next = &GlySJA_E5B985,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E582B7Tiles,
};

const struct GlyphNew GlySJA_E685A2 = { /* 慢 */
    .next = &GlySJA_E68C81,
    .width = 9,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E685A2Tiles,
};

const struct GlyphNew GlySJA_E2978E = { /* ◎ */
    .next = &GlySJA_E2978B,
    .width = 10,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E2978ETiles,
};

const struct GlyphNew GlySJA_E8BEBC = { /* 込 */
    .next = &GlySJA_E8B2AF,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8BEBCTiles,
};

const struct GlyphNew GlySJA_E69982 = { /* 時 */
    .next = &GlySJA_E685A2,
    .width = 9,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69982Tiles,
};

const struct GlyphNew GlySJA_E5849F = { /* 償 */
    .next = &GlySJA_E582B7,
    .width = 9,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5849FTiles,
};

const struct GlyphNew GlySJA_E69C8D = { /* 服 */
    .next = &GlySJA_E69982,
    .width = 9,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69C8DTiles,
};

const struct GlyphNew GlySJA_E5BF9C = { /* 応 */
    .next = &GlySJA_E5849F,
    .width = 8,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BF9CTiles,
};

const struct GlyphNew GlySJA_E588B0 = { /* 到 */
    .next = &GlySJA_E5BF9C,
    .width = 8,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E588B0Tiles,
};

const struct GlyphNew GlySJA_E6BA80 = { /* 満 */
    .next = &GlySJA_E69C8D,
    .width = 8,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6BA80Tiles,
};

const struct GlyphNew GlySJA_E6868E = { /* 憎 */
    .next = &GlySJA_E6BA80,
    .width = 9,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6868ETiles,
};

const struct GlyphNew GlySJA_E5AFB5 = { /* 寵 */
    .next = &GlySJA_E588B0,
    .width = 9,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5AFB5Tiles,
};

const struct GlyphNew GlySJA_E38181 = { /* ぁ */
    .next = &GlySJA_E383B4,
    .width = 7,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38181Tiles,
};

const struct GlyphNew GlySJA_E58B9D = { /* 勝 */
    .next = &GlySJA_E5AFB5,
    .width = 8,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58B9DTiles,
};

const struct GlyphNew GlySJA_E7A68F = { /* 福 */
    .next = &GlySJA_E79086,
    .width = 8,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7A68FTiles,
};

const struct GlyphNew GlySJA_E4BE9B = { /* 供 */
    .next = &GlySJA_E4B887,
    .width = 8,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BE9BTiles,
};

const struct GlyphNew GlySJA_E6ACA1 = { /* 次 */
    .next = &GlySJA_E6868E,
    .width = 8,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6ACA1Tiles,
};

const struct GlyphNew GlySJA_E68ABC = { /* 押 */
    .next = &GlySJA_E6ACA1,
    .width = 8,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68ABCTiles,
};

const struct GlyphNew GlySJA_E38182 = { /* あ */
    .next = &GlySJA_E38181,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38182Tiles,
};

const struct GlyphNew GlySJA_E7AEB1 = { /* 箱 */
    .next = &GlySJA_E7A68F,
    .width = 8,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7AEB1Tiles,
};

const struct GlyphNew GlySJA_E9A083 = { /* 頃 */
    .next = &GlySJA_E999A4,
    .width = 8,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9A083Tiles,
};

const struct GlyphNew GlySJA_E6A8A9 = { /* 権 */
    .next = &GlySJA_E68ABC,
    .width = 9,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6A8A9Tiles,
};

const struct GlyphNew GlySJA_E8A38F = { /* 裏 */
    .next = &GlySJA_E8BEBC,
    .width = 8,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8A38FTiles,
};

const struct GlyphNew GlySJA_E885B9 = { /* 腹 */
    .next = &GlySJA_E8A38F,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E885B9Tiles,
};

const struct GlyphNew GlySJA_E38183 = { /* ぃ */
    .next = &GlySJA_E38182,
    .width = 7,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38183Tiles,
};

const struct GlyphNew GlySJA_E4BB8A = { /* 今 */
    .next = &GlySJA_E4BE9B,
    .width = 8,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BB8ATiles,
};

const struct GlyphNew GlySJA_E6B2BB = { /* 治 */
    .next = &GlySJA_E6A8A9,
    .width = 8,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6B2BBTiles,
};

const struct GlyphNew GlySJA_E591B3 = { /* 味 */
    .next = &GlySJA_E58B9D,
    .width = 9,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E591B3Tiles,
};

const struct GlyphNew GlySJA_E8A487 = { /* 複 */
    .next = &GlySJA_E885B9,
    .width = 9,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8A487Tiles,
};

const struct GlyphNew GlySJA_E5AFB8 = { /* 寸 */
    .next = &GlySJA_E591B3,
    .width = 8,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5AFB8Tiles,
};

const struct GlyphNew GlySJA_E38184 = { /* い */
    .next = &GlySJA_E38183,
    .width = 7,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38184Tiles,
};

const struct GlyphNew GlySJA_E8A88E = { /* 討 */
    .next = &GlySJA_E8A487,
    .width = 8,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8A88ETiles,
};

const struct GlyphNew GlySJA_E4B896 = { /* 世 */
    .next = &GlySJA_E4BB8A,
    .width = 8,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4B896Tiles,
};

const struct GlyphNew GlySJA_E69CAA = { /* 未 */
    .next = &GlySJA_E6B2BB,
    .width = 8,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69CAATiles,
};

const struct GlyphNew GlySJA_E5BC94 = { /* 弔 */
    .next = &GlySJA_E5AFB8,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BC94Tiles,
};

const struct GlyphNew GlySJA_E980A0 = { /* 造 */
    .next = &GlySJA_E9A083,
    .width = 8,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E980A0Tiles,
};

const struct GlyphNew GlySJA_E78AAC = { /* 犬 */
    .next = &GlySJA_E7AEB1,
    .width = 8,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E78AACTiles,
};

const struct GlyphNew GlySJA_E59BB0 = { /* 困 */
    .next = &GlySJA_E5BC94,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E59BB0Tiles,
};

const struct GlyphNew GlySJA_E9878C = { /* 里 */
    .next = &GlySJA_E980A0,
    .width = 8,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9878CTiles,
};

const struct GlyphNew GlySJA_E296B3 = { /* △ */
    .next = &GlySJA_E2978E,
    .width = 9,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E296B3Tiles,
};

const struct GlyphNew GlySJA_E38185 = { /* ぅ */
    .next = &GlySJA_E38184,
    .width = 7,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38185Tiles,
};

const struct GlyphNew GlySJA_E99BA2 = { /* 離 */
    .next = &GlySJA_E9878C,
    .width = 10,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E99BA2Tiles,
};

const struct GlyphNew GlySJA_E59380 = { /* 哀 */
    .next = &GlySJA_E59BB0,
    .width = 8,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E59380Tiles,
};

const struct GlyphNew GlySJA_E38186 = { /* う */
    .next = &GlySJA_E38185,
    .width = 7,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38186Tiles,
};

const struct GlyphNew GlySJA_E78E8B = { /* 王 */
    .next = &GlySJA_E78AAC,
    .width = 8,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E78E8BTiles,
};

const struct GlyphNew GlySJA_E6849B = { /* 愛 */
    .next = &GlySJA_E69CAA,
    .width = 9,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6849BTiles,
};

const struct GlyphNew GlySJA_E999B8 = { /* 陸 */
    .next = &GlySJA_E99BA2,
    .width = 8,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E999B8Tiles,
};

const struct GlyphNew GlySJA_E59586 = { /* 商 */
    .next = &GlySJA_E59380,
    .width = 8,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E59586Tiles,
};

const struct GlyphNew GlySJA_E585B1 = { /* 共 */
    .next = &GlySJA_E59586,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E585B1Tiles,
};

const struct GlyphNew GlySJA_E581B4 = { /* 側 */
    .next = &GlySJA_E585B1,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E581B4Tiles,
};

const struct GlyphNew GlySJA_E7AD88 = { /* 筈 */
    .next = &GlySJA_E78E8B,
    .width = 8,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7AD88Tiles,
};

const struct GlyphNew GlySJA_E7A094 = { /* 研 */
    .next = &GlySJA_E7AD88,
    .width = 9,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7A094Tiles,
};

const struct GlyphNew GlySJA_E38187 = { /* ぇ */
    .next = &GlySJA_E38186,
    .width = 7,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38187Tiles,
};

const struct GlyphNew GlySJA_E5A99A = { /* 婚 */
    .next = &GlySJA_E581B4,
    .width = 9,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A99ATiles,
};

const struct GlyphNew GlySJA_E68995 = { /* 払 */
    .next = &GlySJA_E6849B,
    .width = 8,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68995Tiles,
};

const struct GlyphNew GlySJA_E594B1 = { /* 唱 */
    .next = &GlySJA_E5A99A,
    .width = 8,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E594B1Tiles,
};

const struct GlyphNew GlySJA_E5BEB4 = { /* 徴 */
    .next = &GlySJA_E594B1,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BEB4Tiles,
};

const struct GlyphNew GlySJA_E38188 = { /* え */
    .next = &GlySJA_E38187,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38188Tiles,
};

const struct GlyphNew GlySJA_E78E87 = { /* 率 */
    .next = &GlySJA_E7A094,
    .width = 8,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E78E87Tiles,
};

const struct GlyphNew GlySJA_E7A4BA = { /* 示 */
    .next = &GlySJA_E78E87,
    .width = 8,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7A4BATiles,
};

const struct GlyphNew GlySJA_E58D94 = { /* 協 */
    .next = &GlySJA_E5BEB4,
    .width = 9,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58D94Tiles,
};

const struct GlyphNew GlySJA_E98083 = { /* 逃 */
    .next = &GlySJA_E999B8,
    .width = 8,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E98083Tiles,
};

const struct GlyphNew GlySJA_E38189 = { /* ぉ */
    .next = &GlySJA_E38188,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38189Tiles,
};

const struct GlyphNew GlySJA_E38092 = { /* 〒 */
    .next = &GlySJA_E38189,
    .width = 8,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38092Tiles,
};

const struct GlyphNew GlySJA_E68C91 = { /* 挑 */
    .next = &GlySJA_E68995,
    .width = 8,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68C91Tiles,
};

const struct GlyphNew GlySJA_E7AB8B = { /* 立 */
    .next = &GlySJA_E7A4BA,
    .width = 8,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7AB8BTiles,
};

const struct GlyphNew GlySJA_E588B6 = { /* 制 */
    .next = &GlySJA_E58D94,
    .width = 8,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E588B6Tiles,
};

const struct GlyphNew GlySJA_E5AF86 = { /* 密 */
    .next = &GlySJA_E588B6,
    .width = 8,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5AF86Tiles,
};

const struct GlyphNew GlySJA_E8828C = { /* 肌 */
    .next = &GlySJA_E8A88E,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8828CTiles,
};

const struct GlyphNew GlySJA_E681AF = { /* 息 */
    .next = &GlySJA_E68C91,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E681AFTiles,
};

const struct GlyphNew GlySJA_E3818A = { /* お */
    .next = &GlySJA_E38092,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E3818ATiles,
};

const struct GlyphNew GlySJA_E28692 = { /* → */
    .next = &GlySJA_E296B3,
    .width = 6,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E28692Tiles,
};

const struct GlyphNew GlySJA_E789A9 = { /* 物 */
    .next = &GlySJA_E7AB8B,
    .width = 8,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E789A9Tiles,
};

const struct GlyphNew GlySJA_E58DBF = { /* 卿 */
    .next = &GlySJA_E5AF86,
    .width = 9,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58DBFTiles,
};

const struct GlyphNew GlySJA_E880B3 = { /* 耳 */
    .next = &GlySJA_E8828C,
    .width = 8,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E880B3Tiles,
};

const struct GlyphNew GlySJA_E58BA2 = { /* 勢 */
    .next = &GlySJA_E58DBF,
    .width = 9,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58BA2Tiles,
};

const struct GlyphNew GlySJA_E882A9 = { /* 肩 */
    .next = &GlySJA_E880B3,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E882A9Tiles,
};

const struct GlyphNew GlySJA_E3818B = { /* か */
    .next = &GlySJA_E3818A,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E3818BTiles,
};

const struct GlyphNew GlySJA_E887AA = { /* 自 */
    .next = &GlySJA_E882A9,
    .width = 7,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E887AATiles,
};

const struct GlyphNew GlySJA_E7BDA0 = { /* 罠 */
    .next = &GlySJA_E789A9,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7BDA0Tiles,
};

const struct GlyphNew GlySJA_E8A68B = { /* 見 */
    .next = &GlySJA_E887AA,
    .width = 8,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8A68BTiles,
};

const struct GlyphNew GlySJA_E9BB84 = { /* 黄 */
    .next = &GlySJA_E98083,
    .width = 8,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9BB84Tiles,
};

const struct GlyphNew GlySJA_E69D9F = { /* 束 */
    .next = &GlySJA_E681AF,
    .width = 8,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69D9FTiles,
};

const struct GlyphNew GlySJA_E69C9D = { /* 朝 */
    .next = &GlySJA_E69D9F,
    .width = 8,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69C9DTiles,
};

const struct GlyphNew GlySJA_E3818C = { /* が */
    .next = &GlySJA_E3818B,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E3818CTiles,
};

const struct GlyphNew GlySJA_E58886 = { /* 分 */
    .next = &GlySJA_E58BA2,
    .width = 8,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58886Tiles,
};

const struct GlyphNew GlySJA_E5BE81 = { /* 征 */
    .next = &GlySJA_E58886,
    .width = 8,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BE81Tiles,
};

const struct GlyphNew GlySJA_E795A5 = { /* 略 */
    .next = &GlySJA_E7BDA0,
    .width = 9,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E795A5Tiles,
};

const struct GlyphNew GlySJA_E9A0AD = { /* 頭 */
    .next = &GlySJA_E9BB84,
    .width = 8,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9A0ADTiles,
};

const struct GlyphNew GlySJA_E5B7BB = { /* 巻 */
    .next = &GlySJA_E5BE81,
    .width = 8,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B7BBTiles,
};

const struct GlyphNew GlySJA_E6A0B9 = { /* 根 */
    .next = &GlySJA_E69C9D,
    .width = 8,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6A0B9Tiles,
};

const struct GlyphNew GlySJA_E585AB = { /* 八 */
    .next = &GlySJA_E5B7BB,
    .width = 9,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E585ABTiles,
};

const struct GlyphNew GlySJA_E3818D = { /* き */
    .next = &GlySJA_E3818C,
    .width = 7,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E3818DTiles,
};

const struct GlyphNew GlySJA_E5A283 = { /* 境 */
    .next = &GlySJA_E585AB,
    .width = 9,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A283Tiles,
};

const struct GlyphNew GlySJA_E682AA = { /* 悪 */
    .next = &GlySJA_E6A0B9,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E682AATiles,
};

const struct GlyphNew GlySJA_E5B086 = { /* 将 */
    .next = &GlySJA_E5A283,
    .width = 9,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B086Tiles,
};

const struct GlyphNew GlySJA_E680A7 = { /* 性 */
    .next = &GlySJA_E682AA,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E680A7Tiles,
};

const struct GlyphNew GlySJA_E8B3A2 = { /* 賢 */
    .next = &GlySJA_E8A68B,
    .width = 8,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8B3A2Tiles,
};

const struct GlyphNew GlySJA_E8B6B3 = { /* 足 */
    .next = &GlySJA_E8B3A2,
    .width = 8,
    .utf_byte_2 = 0xb6,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8B6B3Tiles,
};

const struct GlyphNew GlySJA_E8BE9E = { /* 辞 */
    .next = &GlySJA_E8B6B3,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8BE9ETiles,
};

const struct GlyphNew GlySJA_E3818E = { /* ぎ */
    .next = &GlySJA_E3818D,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E3818ETiles,
};

const struct GlyphNew GlySJA_E99798 = { /* 闘 */
    .next = &GlySJA_E9A0AD,
    .width = 8,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E99798Tiles,
};

const struct GlyphNew GlySJA_E9809F = { /* 速 */
    .next = &GlySJA_E99798,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9809FTiles,
};

const struct GlyphNew GlySJA_E5B08F = { /* 小 */
    .next = &GlySJA_E5B086,
    .width = 8,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B08FTiles,
};

const struct GlyphNew GlySJA_E794BA = { /* 町 */
    .next = &GlySJA_E795A5,
    .width = 8,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E794BATiles,
};

const struct GlyphNew GlySJA_E5B3A1 = { /* 峡 */
    .next = &GlySJA_E5B08F,
    .width = 9,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B3A1Tiles,
};

const struct GlyphNew GlySJA_E68890 = { /* 成 */
    .next = &GlySJA_E680A7,
    .width = 8,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68890Tiles,
};

const struct GlyphNew GlySJA_E88488 = { /* 脈 */
    .next = &GlySJA_E8BE9E,
    .width = 9,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E88488Tiles,
};

const struct GlyphNew GlySJA_E6B581 = { /* 流 */
    .next = &GlySJA_E68890,
    .width = 9,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6B581Tiles,
};

const struct GlyphNew GlySJA_E6B7B7 = { /* 混 */
    .next = &GlySJA_E6B581,
    .width = 8,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6B7B7Tiles,
};

const struct GlyphNew GlySJA_E68FA1 = { /* 握 */
    .next = &GlySJA_E6B7B7,
    .width = 9,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68FA1Tiles,
};

const struct GlyphNew GlySJA_E3818F = { /* く */
    .next = &GlySJA_E3818E,
    .width = 6,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E3818FTiles,
};

const struct GlyphNew GlySJA_E5BCB7 = { /* 強 */
    .next = &GlySJA_E5B3A1,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BCB7Tiles,
};

const struct GlyphNew GlySJA_E799BA = { /* 発 */
    .next = &GlySJA_E794BA,
    .width = 9,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E799BATiles,
};

const struct GlyphNew GlySJA_E694BF = { /* 政 */
    .next = &GlySJA_E68FA1,
    .width = 8,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E694BFTiles,
};

const struct GlyphNew GlySJA_E5B091 = { /* 少 */
    .next = &GlySJA_E5BCB7,
    .width = 8,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B091Tiles,
};

const struct GlyphNew GlySJA_E981A3 = { /* 遣 */
    .next = &GlySJA_E9809F,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E981A3Tiles,
};

const struct GlyphNew GlySJA_E5838D = { /* 働 */
    .next = &GlySJA_E5B091,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5838DTiles,
};

const struct GlyphNew GlySJA_E5A699 = { /* 妙 */
    .next = &GlySJA_E5838D,
    .width = 9,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A699Tiles,
};

const struct GlyphNew GlySJA_E9B9BF = { /* 鹿 */
    .next = &GlySJA_E981A3,
    .width = 8,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9B9BFTiles,
};

const struct GlyphNew GlySJA_E38190 = { /* ぐ */
    .next = &GlySJA_E3818F,
    .width = 7,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38190Tiles,
};

const struct GlyphNew GlySJA_E58B95 = { /* 動 */
    .next = &GlySJA_E5A699,
    .width = 8,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58B95Tiles,
};

const struct GlyphNew GlySJA_E5B18B = { /* 屋 */
    .next = &GlySJA_E58B95,
    .width = 8,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B18BTiles,
};

const struct GlyphNew GlySJA_E5AE8C = { /* 完 */
    .next = &GlySJA_E5B18B,
    .width = 8,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5AE8CTiles,
};

const struct GlyphNew GlySJA_E5BC8F = { /* 式 */
    .next = &GlySJA_E5AE8C,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BC8FTiles,
};

const struct GlyphNew GlySJA_E5B19E = { /* 属 */
    .next = &GlySJA_E5BC8F,
    .width = 8,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B19ETiles,
};

const struct GlyphNew GlySJA_E695B4 = { /* 整 */
    .next = &GlySJA_E694BF,
    .width = 8,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E695B4Tiles,
};

const struct GlyphNew GlySJA_E38191 = { /* け */
    .next = &GlySJA_E38190,
    .width = 7,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38191Tiles,
};

const struct GlyphNew GlySJA_E8B38A = { /* 賊 */
    .next = &GlySJA_E88488,
    .width = 9,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8B38ATiles,
};

const struct GlyphNew GlySJA_E6989F = { /* 星 */
    .next = &GlySJA_E695B4,
    .width = 8,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6989FTiles,
};

const struct GlyphNew GlySJA_E5908C = { /* 同 */
    .next = &GlySJA_E5B19E,
    .width = 8,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5908CTiles,
};

const struct GlyphNew GlySJA_E6B091 = { /* 民 */
    .next = &GlySJA_E6989F,
    .width = 8,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6B091Tiles,
};

const struct GlyphNew GlySJA_E8AD98 = { /* 識 */
    .next = &GlySJA_E8B38A,
    .width = 9,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8AD98Tiles,
};

const struct GlyphNew GlySJA_E5AE98 = { /* 官 */
    .next = &GlySJA_E5908C,
    .width = 8,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5AE98Tiles,
};

const struct GlyphNew GlySJA_E686B6 = { /* 憶 */
    .next = &GlySJA_E6B091,
    .width = 10,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E686B6Tiles,
};

const struct GlyphNew GlySJA_E79599 = { /* 留 */
    .next = &GlySJA_E799BA,
    .width = 8,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E79599Tiles,
};

const struct GlyphNew GlySJA_E999BA = { /* 険 */
    .next = &GlySJA_E9B9BF,
    .width = 8,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E999BATiles,
};

const struct GlyphNew GlySJA_E38192 = { /* げ */
    .next = &GlySJA_E38191,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38192Tiles,
};

const struct GlyphNew GlySJA_E68190 = { /* 恐 */
    .next = &GlySJA_E686B6,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68190Tiles,
};

const struct GlyphNew GlySJA_E6978F = { /* 族 */
    .next = &GlySJA_E68190,
    .width = 9,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6978FTiles,
};

const struct GlyphNew GlySJA_E4BC90 = { /* 伐 */
    .next = &GlySJA_E4B896,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BC90Tiles,
};

const struct GlyphNew GlySJA_E5A082 = { /* 堂 */
    .next = &GlySJA_E5AE98,
    .width = 8,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A082Tiles,
};

const struct GlyphNew GlySJA_E9AD82 = { /* 魂 */
    .next = &GlySJA_E999BA,
    .width = 8,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9AD82Tiles,
};

const struct GlyphNew GlySJA_E699B4 = { /* 晴 */
    .next = &GlySJA_E6978F,
    .width = 9,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E699B4Tiles,
};

const struct GlyphNew GlySJA_E5BA8A = { /* 床 */
    .next = &GlySJA_E5A082,
    .width = 8,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BA8ATiles,
};

const struct GlyphNew GlySJA_E38193 = { /* こ */
    .next = &GlySJA_E38192,
    .width = 6,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38193Tiles,
};

const struct GlyphNew GlySJA_E7B69A = { /* 続 */
    .next = &GlySJA_E79599,
    .width = 9,
    .utf_byte_2 = 0xb6,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7B69ATiles,
};

const struct GlyphNew GlySJA_E58B99 = { /* 務 */
    .next = &GlySJA_E5BA8A,
    .width = 9,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58B99Tiles,
};

const struct GlyphNew GlySJA_E9A893 = { /* 験 */
    .next = &GlySJA_E9AD82,
    .width = 9,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9A893Tiles,
};

const struct GlyphNew GlySJA_E5B08E = { /* 導 */
    .next = &GlySJA_E58B99,
    .width = 8,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B08ETiles,
};

const struct GlyphNew GlySJA_E7BDB0 = { /* 罰 */
    .next = &GlySJA_E7B69A,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7BDB0Tiles,
};

const struct GlyphNew GlySJA_E38194 = { /* ご */
    .next = &GlySJA_E38193,
    .width = 7,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38194Tiles,
};

const struct GlyphNew GlySJA_E68C9F = { /* 挟 */
    .next = &GlySJA_E699B4,
    .width = 9,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68C9FTiles,
};

const struct GlyphNew GlySJA_E68A9C = { /* 抜 */
    .next = &GlySJA_E68C9F,
    .width = 8,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68A9CTiles,
};

const struct GlyphNew GlySJA_E8AABF = { /* 調 */
    .next = &GlySJA_E8AD98,
    .width = 9,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8AABFTiles,
};

const struct GlyphNew GlySJA_E5A4A2 = { /* 夢 */
    .next = &GlySJA_E5B08E,
    .width = 8,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A4A2Tiles,
};

const struct GlyphNew GlySJA_E38195 = { /* さ */
    .next = &GlySJA_E38194,
    .width = 6,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38195Tiles,
};

const struct GlyphNew GlySJA_E58583 = { /* 元 */
    .next = &GlySJA_E5A4A2,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58583Tiles,
};

const struct GlyphNew GlySJA_E7AB9C = { /* 竜 */
    .next = &GlySJA_E7BDB0,
    .width = 8,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7AB9CTiles,
};

const struct GlyphNew GlySJA_E784A1 = { /* 無 */
    .next = &GlySJA_E7AB9C,
    .width = 9,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E784A1Tiles,
};

const struct GlyphNew GlySJA_E6ADA3 = { /* 正 */
    .next = &GlySJA_E68A9C,
    .width = 8,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6ADA3Tiles,
};

const struct GlyphNew GlySJA_E59CA7 = { /* 圧 */
    .next = &GlySJA_E58583,
    .width = 8,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E59CA7Tiles,
};

const struct GlyphNew GlySJA_E69599 = { /* 教 */
    .next = &GlySJA_E6ADA3,
    .width = 9,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69599Tiles,
};

const struct GlyphNew GlySJA_E689BF = { /* 承 */
    .next = &GlySJA_E69599,
    .width = 9,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E689BFTiles,
};

const struct GlyphNew GlySJA_E38196 = { /* ざ */
    .next = &GlySJA_E38195,
    .width = 7,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38196Tiles,
};

const struct GlyphNew GlySJA_E58E9F = { /* 原 */
    .next = &GlySJA_E59CA7,
    .width = 8,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58E9FTiles,
};

const struct GlyphNew GlySJA_E4BFBA = { /* 俺 */
    .next = &GlySJA_E4BC90,
    .width = 8,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BFBATiles,
};

const struct GlyphNew GlySJA_E6A98B = { /* 橋 */
    .next = &GlySJA_E689BF,
    .width = 9,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6A98BTiles,
};

const struct GlyphNew GlySJA_E6849F = { /* 感 */
    .next = &GlySJA_E6A98B,
    .width = 8,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6849FTiles,
};

const struct GlyphNew GlySJA_E8B685 = { /* 超 */
    .next = &GlySJA_E8AABF,
    .width = 8,
    .utf_byte_2 = 0xb6,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8B685Tiles,
};

const struct GlyphNew GlySJA_E6B885 = { /* 清 */
    .next = &GlySJA_E6849F,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6B885Tiles,
};

const struct GlyphNew GlySJA_E6B49E = { /* 洞 */
    .next = &GlySJA_E6B885,
    .width = 8,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6B49ETiles,
};

const struct GlyphNew GlySJA_E38197 = { /* し */
    .next = &GlySJA_E38196,
    .width = 7,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38197Tiles,
};

const struct GlyphNew GlySJA_E689B1 = { /* 扱 */
    .next = &GlySJA_E6B49E,
    .width = 8,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E689B1Tiles,
};

const struct GlyphNew GlySJA_E4BEB6 = { /* 侶 */
    .next = &GlySJA_E4BFBA,
    .width = 8,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BEB6Tiles,
};

const struct GlyphNew GlySJA_E6B381 = { /* 況 */
    .next = &GlySJA_E689B1,
    .width = 8,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6B381Tiles,
};

const struct GlyphNew GlySJA_E789B2 = { /* 牲 */
    .next = &GlySJA_E784A1,
    .width = 8,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E789B2Tiles,
};

const struct GlyphNew GlySJA_E68B9B = { /* 招 */
    .next = &GlySJA_E6B381,
    .width = 8,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68B9BTiles,
};

const struct GlyphNew GlySJA_E4B883 = { /* 七 */
    .next = &GlySJA_E4BEB6,
    .width = 8,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4B883Tiles,
};

const struct GlyphNew GlySJA_E38198 = { /* じ */
    .next = &GlySJA_E38197,
    .width = 7,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38198Tiles,
};

const struct GlyphNew GlySJA_E681A9 = { /* 恩 */
    .next = &GlySJA_E68B9B,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E681A9Tiles,
};

const struct GlyphNew GlySJA_E7949F = { /* 生 */
    .next = &GlySJA_E789B2,
    .width = 8,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7949FTiles,
};

const struct GlyphNew GlySJA_E69687 = { /* 文 */
    .next = &GlySJA_E681A9,
    .width = 8,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69687Tiles,
};

const struct GlyphNew GlySJA_E78B82 = { /* 狂 */
    .next = &GlySJA_E7949F,
    .width = 8,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E78B82Tiles,
};

const struct GlyphNew GlySJA_E5AD98 = { /* 存 */
    .next = &GlySJA_E58E9F,
    .width = 8,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5AD98Tiles,
};

const struct GlyphNew GlySJA_E5B7A6 = { /* 左 */
    .next = &GlySJA_E5AD98,
    .width = 8,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B7A6Tiles,
};

const struct GlyphNew GlySJA_E99CA7 = { /* 霧 */
    .next = &GlySJA_E9A893,
    .width = 8,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E99CA7Tiles,
};

const struct GlyphNew GlySJA_E38199 = { /* す */
    .next = &GlySJA_E38198,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38199Tiles,
};

const struct GlyphNew GlySJA_E69785 = { /* 旅 */
    .next = &GlySJA_E69687,
    .width = 9,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69785Tiles,
};

const struct GlyphNew GlySJA_E995B7 = { /* 長 */
    .next = &GlySJA_E99CA7,
    .width = 8,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E995B7Tiles,
};

const struct GlyphNew GlySJA_E5ADAB = { /* 孫 */
    .next = &GlySJA_E5B7A6,
    .width = 9,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5ADABTiles,
};

const struct GlyphNew GlySJA_E79B9B = { /* 盛 */
    .next = &GlySJA_E78B82,
    .width = 9,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E79B9BTiles,
};

const struct GlyphNew GlySJA_E8819E = { /* 聞 */
    .next = &GlySJA_E8B685,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8819ETiles,
};

const struct GlyphNew GlySJA_E5B7AE = { /* 差 */
    .next = &GlySJA_E5ADAB,
    .width = 8,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B7AETiles,
};

const struct GlyphNew GlySJA_E6B8A9 = { /* 温 */
    .next = &GlySJA_E69785,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6B8A9Tiles,
};

const struct GlyphNew GlySJA_E68F9B = { /* 換 */
    .next = &GlySJA_E6B8A9,
    .width = 9,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68F9BTiles,
};

const struct GlyphNew GlySJA_E3819A = { /* ず */
    .next = &GlySJA_E38199,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E3819ATiles,
};

const struct GlyphNew GlySJA_E5A4B1 = { /* 失 */
    .next = &GlySJA_E5B7AE,
    .width = 8,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A4B1Tiles,
};

const struct GlyphNew GlySJA_E7B2BE = { /* 精 */
    .next = &GlySJA_E79B9B,
    .width = 8,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7B2BETiles,
};

const struct GlyphNew GlySJA_E6B89B = { /* 減 */
    .next = &GlySJA_E68F9B,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6B89BTiles,
};

const struct GlyphNew GlySJA_E69887 = { /* 昇 */
    .next = &GlySJA_E6B89B,
    .width = 8,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69887Tiles,
};

const struct GlyphNew GlySJA_E8999C = { /* 虜 */
    .next = &GlySJA_E8819E,
    .width = 8,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8999CTiles,
};

const struct GlyphNew GlySJA_E5B08A = { /* 尊 */
    .next = &GlySJA_E5A4B1,
    .width = 9,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B08ATiles,
};

const struct GlyphNew GlySJA_E9A082 = { /* 頂 */
    .next = &GlySJA_E995B7,
    .width = 8,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9A082Tiles,
};

const struct GlyphNew GlySJA_E3819B = { /* せ */
    .next = &GlySJA_E3819A,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E3819BTiles,
};

const struct GlyphNew GlySJA_E88196 = { /* 聖 */
    .next = &GlySJA_E8999C,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E88196Tiles,
};

const struct GlyphNew GlySJA_E98193 = { /* 道 */
    .next = &GlySJA_E9A082,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E98193Tiles,
};

const struct GlyphNew GlySJA_E4BDB5 = { /* 併 */
    .next = &GlySJA_E4B883,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BDB5Tiles,
};

const struct GlyphNew GlySJA_E4BA86 = { /* 了 */
    .next = &GlySJA_E4BDB5,
    .width = 8,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BA86Tiles,
};

const struct GlyphNew GlySJA_E99FB3 = { /* 音 */
    .next = &GlySJA_E98193,
    .width = 8,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E99FB3Tiles,
};

const struct GlyphNew GlySJA_E9B3A5 = { /* 鳥 */
    .next = &GlySJA_E99FB3,
    .width = 8,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9B3A5Tiles,
};

const struct GlyphNew GlySJA_E6908D = { /* 損 */
    .next = &GlySJA_E69887,
    .width = 8,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6908DTiles,
};

const struct GlyphNew GlySJA_E99ABC = { /* 隼 */
    .next = &GlySJA_E9B3A5,
    .width = 8,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E99ABCTiles,
};

const struct GlyphNew GlySJA_E3819C = { /* ぜ */
    .next = &GlySJA_E3819B,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E3819CTiles,
};

const struct GlyphNew GlySJA_E585B5 = { /* 兵 */
    .next = &GlySJA_E5B08A,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E585B5Tiles,
};

const struct GlyphNew GlySJA_E69D91 = { /* 村 */
    .next = &GlySJA_E6908D,
    .width = 8,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69D91Tiles,
};

const struct GlyphNew GlySJA_E4B88B = { /* 下 */
    .next = &GlySJA_E4BA86,
    .width = 8,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4B88BTiles,
};

const struct GlyphNew GlySJA_E5A3B0 = { /* 声 */
    .next = &GlySJA_E585B5,
    .width = 8,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A3B0Tiles,
};

const struct GlyphNew GlySJA_E5AEA4 = { /* 室 */
    .next = &GlySJA_E5A3B0,
    .width = 8,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5AEA4Tiles,
};

const struct GlyphNew GlySJA_E5A898 = { /* 娘 */
    .next = &GlySJA_E5AEA4,
    .width = 8,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A898Tiles,
};

const struct GlyphNew GlySJA_E28A86 = { /* ⊆ */
    .next = &GlySJA_E28692,
    .width = 8,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E28A86Tiles,
};

const struct GlyphNew GlySJA_E3819D = { /* そ */
    .next = &GlySJA_E3819C,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E3819DTiles,
};

const struct GlyphNew GlySJA_E78FBE = { /* 現 */
    .next = &GlySJA_E7B2BE,
    .width = 8,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E78FBETiles,
};

const struct GlyphNew GlySJA_E7A082 = { /* 砂 */
    .next = &GlySJA_E78FBE,
    .width = 9,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7A082Tiles,
};

const struct GlyphNew GlySJA_E88888 = { /* 興 */
    .next = &GlySJA_E88196,
    .width = 8,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E88888Tiles,
};

const struct GlyphNew GlySJA_E58C96 = { /* 化 */
    .next = &GlySJA_E5A898,
    .width = 8,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58C96Tiles,
};

const struct GlyphNew GlySJA_E5B3A0 = { /* 峠 */
    .next = &GlySJA_E58C96,
    .width = 8,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B3A0Tiles,
};

const struct GlyphNew GlySJA_E5A180 = { /* 塀 */
    .next = &GlySJA_E5B3A0,
    .width = 9,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A180Tiles,
};

const struct GlyphNew GlySJA_E588A4 = { /* 判 */
    .next = &GlySJA_E5A180,
    .width = 8,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E588A4Tiles,
};

const struct GlyphNew GlySJA_E28A87 = { /* ⊇ */
    .next = &GlySJA_E28A86,
    .width = 7,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E28A87Tiles,
};

const struct GlyphNew GlySJA_E3819E = { /* ぞ */
    .next = &GlySJA_E3819D,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E3819ETiles,
};

const struct GlyphNew GlySJA_E4B8A1 = { /* 両 */
    .next = &GlySJA_E4B88B,
    .width = 8,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4B8A1Tiles,
};

const struct GlyphNew GlySJA_E8A5BF = { /* 西 */
    .next = &GlySJA_E88888,
    .width = 8,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8A5BFTiles,
};

const struct GlyphNew GlySJA_E4BB96 = { /* 他 */
    .next = &GlySJA_E4B8A1,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BB96Tiles,
};

const struct GlyphNew GlySJA_E5908D = { /* 名 */
    .next = &GlySJA_E588A4,
    .width = 7,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5908DTiles,
};

const struct GlyphNew GlySJA_E58D8A = { /* 半 */
    .next = &GlySJA_E5908D,
    .width = 8,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58D8ATiles,
};

const struct GlyphNew GlySJA_E4BBAE = { /* 仮 */
    .next = &GlySJA_E4BB96,
    .width = 8,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BBAETiles,
};

const struct GlyphNew GlySJA_E79BB4 = { /* 直 */
    .next = &GlySJA_E7A082,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E79BB4Tiles,
};

const struct GlyphNew GlySJA_E3819F = { /* た */
    .next = &GlySJA_E3819E,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E3819FTiles,
};

const struct GlyphNew GlySJA_E4BD95 = { /* 何 */
    .next = &GlySJA_E4BBAE,
    .width = 9,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BD95Tiles,
};

const struct GlyphNew GlySJA_E5A49A = { /* 多 */
    .next = &GlySJA_E58D8A,
    .width = 7,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A49ATiles,
};

const struct GlyphNew GlySJA_E591BD = { /* 命 */
    .next = &GlySJA_E5A49A,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E591BDTiles,
};

const struct GlyphNew GlySJA_E5B9B3 = { /* 平 */
    .next = &GlySJA_E591BD,
    .width = 8,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B9B3Tiles,
};

const struct GlyphNew GlySJA_E8AAA0 = { /* 誠 */
    .next = &GlySJA_E8A5BF,
    .width = 9,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8AAA0Tiles,
};

const struct GlyphNew GlySJA_E58F8D = { /* 反 */
    .next = &GlySJA_E5B9B3,
    .width = 8,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58F8DTiles,
};

const struct GlyphNew GlySJA_E6AD93 = { /* 歓 */
    .next = &GlySJA_E69D91,
    .width = 9,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6AD93Tiles,
};

const struct GlyphNew GlySJA_E983B7 = { /* 郷 */
    .next = &GlySJA_E99ABC,
    .width = 9,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E983B7Tiles,
};

const struct GlyphNew GlySJA_E381A0 = { /* だ */
    .next = &GlySJA_E3819F,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E381A0Tiles,
};

const struct GlyphNew GlySJA_E6B288 = { /* 沈 */
    .next = &GlySJA_E6AD93,
    .width = 8,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6B288Tiles,
};

const struct GlyphNew GlySJA_E8A880 = { /* 言 */
    .next = &GlySJA_E8AAA0,
    .width = 8,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8A880Tiles,
};

const struct GlyphNew GlySJA_E6988E = { /* 明 */
    .next = &GlySJA_E6B288,
    .width = 8,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6988ETiles,
};

const struct GlyphNew GlySJA_E5A4AA = { /* 太 */
    .next = &GlySJA_E58F8D,
    .width = 8,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A4AATiles,
};

const struct GlyphNew GlySJA_E5BE97 = { /* 得 */
    .next = &GlySJA_E5A4AA,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BE97Tiles,
};

const struct GlyphNew GlySJA_E8AA93 = { /* 誓 */
    .next = &GlySJA_E8A880,
    .width = 8,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8AA93Tiles,
};

const struct GlyphNew GlySJA_E6B197 = { /* 汗 */
    .next = &GlySJA_E6988E,
    .width = 8,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6B197Tiles,
};

const struct GlyphNew GlySJA_E796BE = { /* 疾 */
    .next = &GlySJA_E79BB4,
    .width = 8,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E796BETiles,
};

const struct GlyphNew GlySJA_E381A1 = { /* ち */
    .next = &GlySJA_E381A0,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E381A1Tiles,
};

const struct GlyphNew GlySJA_E79B9F = { /* 盟 */
    .next = &GlySJA_E796BE,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E79B9FTiles,
};

const struct GlyphNew GlySJA_E8B3AA = { /* 質 */
    .next = &GlySJA_E8AA93,
    .width = 8,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8B3AATiles,
};

const struct GlyphNew GlySJA_E8AB8B = { /* 請 */
    .next = &GlySJA_E8B3AA,
    .width = 8,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8AB8BTiles,
};

const struct GlyphNew GlySJA_E69F84 = { /* 柄 */
    .next = &GlySJA_E6B197,
    .width = 8,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69F84Tiles,
};

const struct GlyphNew GlySJA_E4BEA1 = { /* 価 */
    .next = &GlySJA_E4BD95,
    .width = 8,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BEA1Tiles,
};

const struct GlyphNew GlySJA_E69699 = { /* 料 */
    .next = &GlySJA_E69F84,
    .width = 9,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69699Tiles,
};

const struct GlyphNew GlySJA_E99FBF = { /* 響 */
    .next = &GlySJA_E983B7,
    .width = 9,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E99FBFTiles,
};

const struct GlyphNew GlySJA_E381A2 = { /* ぢ */
    .next = &GlySJA_E381A1,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E381A2Tiles,
};

const struct GlyphNew GlySJA_E5AE89 = { /* 安 */
    .next = &GlySJA_E5BE97,
    .width = 8,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5AE89Tiles,
};

const struct GlyphNew GlySJA_E5BAA7 = { /* 座 */
    .next = &GlySJA_E5AE89,
    .width = 8,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BAA7Tiles,
};

const struct GlyphNew GlySJA_E8BFB7 = { /* 迷 */
    .next = &GlySJA_E8AB8B,
    .width = 8,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8BFB7Tiles,
};

const struct GlyphNew GlySJA_E99990 = { /* 限 */
    .next = &GlySJA_E99FBF,
    .width = 8,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E99990Tiles,
};

const struct GlyphNew GlySJA_E5AE9F = { /* 実 */
    .next = &GlySJA_E5BAA7,
    .width = 8,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5AE9FTiles,
};

const struct GlyphNew GlySJA_E9809D = { /* 逝 */
    .next = &GlySJA_E99990,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9809DTiles,
};

const struct GlyphNew GlySJA_E381A3 = { /* っ */
    .next = &GlySJA_E381A2,
    .width = 6,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E381A3Tiles,
};

const struct GlyphNew GlySJA_E58AA0 = { /* 加 */
    .next = &GlySJA_E5AE9F,
    .width = 8,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58AA0Tiles,
};

const struct GlyphNew GlySJA_E6B688 = { /* 消 */
    .next = &GlySJA_E69699,
    .width = 8,
    .utf_byte_2 = 0xb6,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6B688Tiles,
};

const struct GlyphNew GlySJA_E789B9 = { /* 特 */
    .next = &GlySJA_E79B9F,
    .width = 9,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E789B9Tiles,
};

const struct GlyphNew GlySJA_E381A4 = { /* つ */
    .next = &GlySJA_E381A3,
    .width = 7,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E381A4Tiles,
};

const struct GlyphNew GlySJA_E58FAF = { /* 可 */
    .next = &GlySJA_E58AA0,
    .width = 8,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58FAFTiles,
};

const struct GlyphNew GlySJA_E5808B = { /* 個 */
    .next = &GlySJA_E58FAF,
    .width = 8,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5808BTiles,
};

const struct GlyphNew GlySJA_E78C9F = { /* 猟 */
    .next = &GlySJA_E789B9,
    .width = 9,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E78C9FTiles,
};

const struct GlyphNew GlySJA_E99689 = { /* 閉 */
    .next = &GlySJA_E9809D,
    .width = 8,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E99689Tiles,
};

const struct GlyphNew GlySJA_E6B889 = { /* 渉 */
    .next = &GlySJA_E6B688,
    .width = 8,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6B889Tiles,
};

const struct GlyphNew GlySJA_E99D92 = { /* 青 */
    .next = &GlySJA_E99689,
    .width = 8,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E99D92Tiles,
};

const struct GlyphNew GlySJA_E381A5 = { /* づ */
    .next = &GlySJA_E381A4,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E381A5Tiles,
};

const struct GlyphNew GlySJA_CEB5 = { /* ε */
    .next = NULL,
    .width = 7,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_CEB5Tiles,
};

const struct GlyphNew GlySJA_E69A97 = { /* 暗 */
    .next = &GlySJA_E6B889,
    .width = 9,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69A97Tiles,
};

const struct GlyphNew GlySJA_E58FA4 = { /* 古 */
    .next = &GlySJA_E5808B,
    .width = 8,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58FA4Tiles,
};

const struct GlyphNew GlySJA_E9999B = { /* 陛 */
    .next = &GlySJA_E99D92,
    .width = 9,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9999BTiles,
};

const struct GlyphNew GlySJA_E5A7AA = { /* 姪 */
    .next = &GlySJA_E58FA4,
    .width = 9,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A7AATiles,
};

const struct GlyphNew GlySJA_E79498 = { /* 甘 */
    .next = &GlySJA_E78C9F,
    .width = 8,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E79498Tiles,
};

const struct GlyphNew GlySJA_E99D99 = { /* 静 */
    .next = &GlySJA_E9999B,
    .width = 9,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E99D99Tiles,
};

const struct GlyphNew GlySJA_E381A6 = { /* て */
    .next = &GlySJA_E381A5,
    .width = 7,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E381A6Tiles,
};

const struct GlyphNew GlySJA_E5868D = { /* 再 */
    .next = &GlySJA_E5A7AA,
    .width = 8,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5868DTiles,
};

const struct GlyphNew GlySJA_E784BC = { /* 焼 */
    .next = &GlySJA_E79498,
    .width = 9,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E784BCTiles,
};

const struct GlyphNew GlySJA_E591BC = { /* 呼 */
    .next = &GlySJA_E5868D,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E591BCTiles,
};

const struct GlyphNew GlySJA_E6A188 = { /* 案 */
    .next = &GlySJA_E69A97,
    .width = 8,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6A188Tiles,
};

const struct GlyphNew GlySJA_E7899D = { /* 牝 */
    .next = &GlySJA_E784BC,
    .width = 8,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7899DTiles,
};

const struct GlyphNew GlySJA_E381A7 = { /* で */
    .next = &GlySJA_E381A6,
    .width = 7,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E381A7Tiles,
};

const struct GlyphNew GlySJA_E69C80 = { /* 最 */
    .next = &GlySJA_E6A188,
    .width = 8,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69C80Tiles,
};

const struct GlyphNew GlySJA_E7A88E = { /* 税 */
    .next = &GlySJA_E7899D,
    .width = 8,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7A88ETiles,
};

const struct GlyphNew GlySJA_E6BB85 = { /* 滅 */
    .next = &GlySJA_E69C80,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6BB85Tiles,
};

const struct GlyphNew GlySJA_E68993 = { /* 打 */
    .next = &GlySJA_E6BB85,
    .width = 8,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68993Tiles,
};

const struct GlyphNew GlySJA_E99787 = { /* 闇 */
    .next = &GlySJA_E99D99,
    .width = 8,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E99787Tiles,
};

const struct GlyphNew GlySJA_E5AB81 = { /* 嫁 */
    .next = &GlySJA_E591BC,
    .width = 9,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5AB81Tiles,
};

const struct GlyphNew GlySJA_E59BBA = { /* 固 */
    .next = &GlySJA_E5AB81,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E59BBATiles,
};

const struct GlyphNew GlySJA_E6AF92 = { /* 毒 */
    .next = &GlySJA_E68993,
    .width = 8,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6AF92Tiles,
};

const struct GlyphNew GlySJA_E784A6 = { /* 焦 */
    .next = &GlySJA_E7A88E,
    .width = 9,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E784A6Tiles,
};

const struct GlyphNew GlySJA_E381A8 = { /* と */
    .next = &GlySJA_E381A7,
    .width = 7,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E381A8Tiles,
};

const struct GlyphNew GlySJA_E5AEB6 = { /* 家 */
    .next = &GlySJA_E59BBA,
    .width = 8,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5AEB6Tiles,
};

const struct GlyphNew GlySJA_E78BAC = { /* 独 */
    .next = &GlySJA_E784A6,
    .width = 9,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E78BACTiles,
};

const struct GlyphNew GlySJA_E6A5AD = { /* 業 */
    .next = &GlySJA_E6AF92,
    .width = 8,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6A5ADTiles,
};

const struct GlyphNew GlySJA_E381A9 = { /* ど */
    .next = &GlySJA_E381A8,
    .width = 7,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E381A9Tiles,
};

const struct GlyphNew GlySJA_E5A19E = { /* 塞 */
    .next = &GlySJA_E5AEB6,
    .width = 8,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A19ETiles,
};

const struct GlyphNew GlySJA_E8BFBD = { /* 追 */
    .next = &GlySJA_E8BFB7,
    .width = 8,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8BFBDTiles,
};

const struct GlyphNew GlySJA_E5ADA4 = { /* 孤 */
    .next = &GlySJA_E5A19E,
    .width = 10,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5ADA4Tiles,
};

const struct GlyphNew GlySJA_E889AF = { /* 良 */
    .next = &GlySJA_E8BFBD,
    .width = 7,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E889AFTiles,
};

const struct GlyphNew GlySJA_E5B180 = { /* 局 */
    .next = &GlySJA_E5ADA4,
    .width = 8,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B180Tiles,
};

const struct GlyphNew GlySJA_E7AEA1 = { /* 管 */
    .next = &GlySJA_E78BAC,
    .width = 9,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7AEA1Tiles,
};

const struct GlyphNew GlySJA_E5A381 = { /* 壁 */
    .next = &GlySJA_E5B180,
    .width = 9,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A381Tiles,
};

const struct GlyphNew GlySJA_E5AFA1 = { /* 寡 */
    .next = &GlySJA_E5A381,
    .width = 9,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5AFA1Tiles,
};

const struct GlyphNew GlySJA_E381AA = { /* な */
    .next = &GlySJA_E381A9,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E381AATiles,
};

const struct GlyphNew GlySJA_E4BBA5 = { /* 以 */
    .next = &GlySJA_E4BEA1,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BBA5Tiles,
};

const struct GlyphNew GlySJA_E5A6BB = { /* 妻 */
    .next = &GlySJA_E5AFA1,
    .width = 8,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A6BBTiles,
};

const struct GlyphNew GlySJA_E7B0A1 = { /* 簡 */
    .next = &GlySJA_E7AEA1,
    .width = 8,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7B0A1Tiles,
};

const struct GlyphNew GlySJA_E5B7B1 = { /* 己 */
    .next = &GlySJA_E5A6BB,
    .width = 7,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B7B1Tiles,
};

const struct GlyphNew GlySJA_E381AB = { /* に */
    .next = &GlySJA_E381AA,
    .width = 7,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E381ABTiles,
};

const struct GlyphNew GlySJA_E7979B = { /* 痛 */
    .next = &GlySJA_E7B0A1,
    .width = 8,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7979BTiles,
};

const struct GlyphNew GlySJA_E6839C = { /* 惜 */
    .next = &GlySJA_E6A5AD,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6839CTiles,
};

const struct GlyphNew GlySJA_E5AEB0 = { /* 宰 */
    .next = &GlySJA_E5B7B1,
    .width = 8,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5AEB0Tiles,
};

const struct GlyphNew GlySJA_E6A5B5 = { /* 極 */
    .next = &GlySJA_E6839C,
    .width = 9,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6A5B5Tiles,
};

const struct GlyphNew GlySJA_E381AC = { /* ぬ */
    .next = &GlySJA_E381AB,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E381ACTiles,
};

const struct GlyphNew GlySJA_E4BD8D = { /* 位 */
    .next = &GlySJA_E4BBA5,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BD8DTiles,
};

const struct GlyphNew GlySJA_E58699 = { /* 写 */
    .next = &GlySJA_E5AEB0,
    .width = 8,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58699Tiles,
};

const struct GlyphNew GlySJA_E78E89 = { /* 玉 */
    .next = &GlySJA_E7979B,
    .width = 8,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E78E89Tiles,
};

const struct GlyphNew GlySJA_E69E9C = { /* 果 */
    .next = &GlySJA_E6A5B5,
    .width = 8,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69E9CTiles,
};

const struct GlyphNew GlySJA_E588A5 = { /* 別 */
    .next = &GlySJA_E58699,
    .width = 8,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E588A5Tiles,
};

const struct GlyphNew GlySJA_E99DA2 = { /* 面 */
    .next = &GlySJA_E99787,
    .width = 8,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E99DA2Tiles,
};

const struct GlyphNew GlySJA_E9809A = { /* 通 */
    .next = &GlySJA_E99DA2,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9809ATiles,
};

const struct GlyphNew GlySJA_E9878F = { /* 量 */
    .next = &GlySJA_E9809A,
    .width = 8,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9878FTiles,
};

const struct GlyphNew GlySJA_E381AD = { /* ね */
    .next = &GlySJA_E381AC,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E381ADTiles,
};

const struct GlyphNew GlySJA_E6898D = { /* 才 */
    .next = &GlySJA_E69E9C,
    .width = 8,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6898DTiles,
};

const struct GlyphNew GlySJA_E7AA81 = { /* 突 */
    .next = &GlySJA_E78E89,
    .width = 8,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7AA81Tiles,
};

const struct GlyphNew GlySJA_E5B084 = { /* 射 */
    .next = &GlySJA_E588A5,
    .width = 9,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B084Tiles,
};

const struct GlyphNew GlySJA_E381AE = { /* の */
    .next = &GlySJA_E381AD,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E381AETiles,
};

const struct GlyphNew GlySJA_E9A098 = { /* 領 */
    .next = &GlySJA_E9878F,
    .width = 8,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9A098Tiles,
};

const struct GlyphNew GlySJA_E58189 = { /* 偉 */
    .next = &GlySJA_E5B084,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58189Tiles,
};

const struct GlyphNew GlySJA_E69894 = { /* 昔 */
    .next = &GlySJA_E6898D,
    .width = 8,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69894Tiles,
};

const struct GlyphNew GlySJA_E4BD93 = { /* 体 */
    .next = &GlySJA_E4BD8D,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BD93Tiles,
};

const struct GlyphNew GlySJA_E7A7B0 = { /* 称 */
    .next = &GlySJA_E7AA81,
    .width = 9,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7A7B0Tiles,
};

const struct GlyphNew GlySJA_E68DA8 = { /* 捨 */
    .next = &GlySJA_E69894,
    .width = 9,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68DA8Tiles,
};

const struct GlyphNew GlySJA_E6AD8C = { /* 歌 */
    .next = &GlySJA_E68DA8,
    .width = 9,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6AD8CTiles,
};

const struct GlyphNew GlySJA_E69585 = { /* 故 */
    .next = &GlySJA_E6AD8C,
    .width = 8,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69585Tiles,
};

const struct GlyphNew GlySJA_E381AF = { /* は */
    .next = &GlySJA_E381AE,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E381AFTiles,
};

const struct GlyphNew GlySJA_E58A9B = { /* 力 */
    .next = &GlySJA_E58189,
    .width = 8,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58A9BTiles,
};

const struct GlyphNew GlySJA_E59BB2 = { /* 囲 */
    .next = &GlySJA_E58A9B,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E59BB2Tiles,
};

const struct GlyphNew GlySJA_E7ABA0 = { /* 章 */
    .next = &GlySJA_E7A7B0,
    .width = 8,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7ABA0Tiles,
};

const struct GlyphNew GlySJA_E6A8A1 = { /* 模 */
    .next = &GlySJA_E69585,
    .width = 8,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6A8A1Tiles,
};

const struct GlyphNew GlySJA_E6B2B3 = { /* 河 */
    .next = &GlySJA_E6A8A1,
    .width = 8,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6B2B3Tiles,
};

const struct GlyphNew GlySJA_E8B5A6 = { /* 赦 */
    .next = &GlySJA_E889AF,
    .width = 9,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8B5A6Tiles,
};

const struct GlyphNew GlySJA_E381B0 = { /* ば */
    .next = &GlySJA_E381AF,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E381B0Tiles,
};

const struct GlyphNew GlySJA_E79FB3 = { /* 石 */
    .next = &GlySJA_E7ABA0,
    .width = 8,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E79FB3Tiles,
};

const struct GlyphNew GlySJA_E781AB = { /* 火 */
    .next = &GlySJA_E79FB3,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E781ABTiles,
};

const struct GlyphNew GlySJA_E5AFBE = { /* 対 */
    .next = &GlySJA_E59BB2,
    .width = 8,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5AFBETiles,
};

const struct GlyphNew GlySJA_E7B791 = { /* 緑 */
    .next = &GlySJA_E781AB,
    .width = 9,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7B791Tiles,
};

const struct GlyphNew GlySJA_E7AC91 = { /* 笑 */
    .next = &GlySJA_E7B791,
    .width = 8,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7AC91Tiles,
};

const struct GlyphNew GlySJA_E6B996 = { /* 湖 */
    .next = &GlySJA_E6B2B3,
    .width = 9,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6B996Tiles,
};

const struct GlyphNew GlySJA_E381B1 = { /* ぱ */
    .next = &GlySJA_E381B0,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E381B1Tiles,
};

const struct GlyphNew GlySJA_E5A489 = { /* 変 */
    .next = &GlySJA_E5AFBE,
    .width = 8,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A489Tiles,
};

const struct GlyphNew GlySJA_E5A794 = { /* 委 */
    .next = &GlySJA_E5A489,
    .width = 8,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A794Tiles,
};

const struct GlyphNew GlySJA_E7A98D = { /* 積 */
    .next = &GlySJA_E7AC91,
    .width = 8,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7A98DTiles,
};

const struct GlyphNew GlySJA_E6B888 = { /* 済 */
    .next = &GlySJA_E6B996,
    .width = 9,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6B888Tiles,
};

const struct GlyphNew GlySJA_E381B2 = { /* ひ */
    .next = &GlySJA_E381B1,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E381B2Tiles,
};

const struct GlyphNew GlySJA_E781BD = { /* 災 */
    .next = &GlySJA_E7A98D,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E781BDTiles,
};

const struct GlyphNew GlySJA_E5A881 = { /* 威 */
    .next = &GlySJA_E5A794,
    .width = 9,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A881Tiles,
};

const struct GlyphNew GlySJA_E78987 = { /* 片 */
    .next = &GlySJA_E781BD,
    .width = 8,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E78987Tiles,
};

const struct GlyphNew GlySJA_E8AB8C = { /* 諌 */
    .next = &GlySJA_E8B5A6,
    .width = 8,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8AB8CTiles,
};

const struct GlyphNew GlySJA_E5A29F = { /* 墟 */
    .next = &GlySJA_E5A881,
    .width = 9,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A29FTiles,
};

const struct GlyphNew GlySJA_E381B3 = { /* び */
    .next = &GlySJA_E381B2,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E381B3Tiles,
};

const struct GlyphNew GlySJA_E5B8AF = { /* 帯 */
    .next = &GlySJA_E5A29F,
    .width = 8,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B8AFTiles,
};

const struct GlyphNew GlySJA_E69E97 = { /* 林 */
    .next = &GlySJA_E6B888,
    .width = 9,
    .utf_byte_2 = 0x9e,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69E97Tiles,
};

const struct GlyphNew GlySJA_E7B8BE = { /* 績 */
    .next = &GlySJA_E78987,
    .width = 8,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7B8BETiles,
};

const struct GlyphNew GlySJA_E6AF9B = { /* 毛 */
    .next = &GlySJA_E69E97,
    .width = 8,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6AF9BTiles,
};

const struct GlyphNew GlySJA_E381B4 = { /* ぴ */
    .next = &GlySJA_E381B3,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E381B4Tiles,
};

const struct GlyphNew GlySJA_E88085 = { /* 者 */
    .next = &GlySJA_E8AB8C,
    .width = 8,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E88085Tiles,
};

const struct GlyphNew GlySJA_E5BE85 = { /* 待 */
    .next = &GlySJA_E5B8AF,
    .width = 8,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BE85Tiles,
};

const struct GlyphNew GlySJA_E78C9B = { /* 猛 */
    .next = &GlySJA_E7B8BE,
    .width = 9,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E78C9BTiles,
};

const struct GlyphNew GlySJA_E98284 = { /* 還 */
    .next = &GlySJA_E9A098,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E98284Tiles,
};

const struct GlyphNew GlySJA_E7B7A8 = { /* 編 */
    .next = &GlySJA_E78C9B,
    .width = 8,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7B7A8Tiles,
};

const struct GlyphNew GlySJA_E7A8BC = { /* 稼 */
    .next = &GlySJA_E7B7A8,
    .width = 9,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7A8BCTiles,
};

const struct GlyphNew GlySJA_E381B5 = { /* ふ */
    .next = &GlySJA_E381B4,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E381B5Tiles,
};

const struct GlyphNew GlySJA_E8BEBA = { /* 辺 */
    .next = &GlySJA_E88085,
    .width = 8,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8BEBATiles,
};

const struct GlyphNew GlySJA_E6848F = { /* 意 */
    .next = &GlySJA_E6AF9B,
    .width = 8,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6848FTiles,
};

const struct GlyphNew GlySJA_E8B2AC = { /* 責 */
    .next = &GlySJA_E8BEBA,
    .width = 8,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8B2ACTiles,
};

const struct GlyphNew GlySJA_E7A095 = { /* 砕 */
    .next = &GlySJA_E7A8BC,
    .width = 8,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7A095Tiles,
};

const struct GlyphNew GlySJA_E8AC9D = { /* 謝 */
    .next = &GlySJA_E8B2AC,
    .width = 9,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8AC9DTiles,
};

const struct GlyphNew GlySJA_E381B6 = { /* ぶ */
    .next = &GlySJA_E381B5,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E381B6Tiles,
};

const struct GlyphNew GlySJA_E7A0A6 = { /* 砦 */
    .next = &GlySJA_E7A095,
    .width = 8,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7A0A6Tiles,
};

const struct GlyphNew GlySJA_E99693 = { /* 間 */
    .next = &GlySJA_E98284,
    .width = 8,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E99693Tiles,
};

const struct GlyphNew GlySJA_E8B5A4 = { /* 赤 */
    .next = &GlySJA_E8AC9D,
    .width = 8,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8B5A4Tiles,
};

const struct GlyphNew GlySJA_E8BF94 = { /* 返 */
    .next = &GlySJA_E8B5A4,
    .width = 8,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8BF94Tiles,
};

const struct GlyphNew GlySJA_E8BB8A = { /* 車 */
    .next = &GlySJA_E8BF94,
    .width = 8,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8BB8ATiles,
};

const struct GlyphNew GlySJA_E6858B = { /* 態 */
    .next = &GlySJA_E6848F,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6858BTiles,
};

const struct GlyphNew GlySJA_E795AA = { /* 番 */
    .next = &GlySJA_E7A0A6,
    .width = 8,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E795AATiles,
};

const struct GlyphNew GlySJA_E88AB1 = { /* 花 */
    .next = &GlySJA_E8BB8A,
    .width = 8,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E88AB1Tiles,
};

const struct GlyphNew GlySJA_E5B1AF = { /* 屯 */
    .next = &GlySJA_E5BE85,
    .width = 8,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B1AFTiles,
};

const struct GlyphNew GlySJA_E381B7 = { /* ぷ */
    .next = &GlySJA_E381B6,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E381B7Tiles,
};

const struct GlyphNew GlySJA_E7A5AD = { /* 祭 */
    .next = &GlySJA_E795AA,
    .width = 8,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7A5ADTiles,
};

const struct GlyphNew GlySJA_E69893 = { /* 易 */
    .next = &GlySJA_E6858B,
    .width = 8,
    .utf_byte_2 = 0x98,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69893Tiles,
};

const struct GlyphNew GlySJA_E8B7A1 = { /* 跡 */
    .next = &GlySJA_E88AB1,
    .width = 9,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8B7A1Tiles,
};

const struct GlyphNew GlySJA_E887A8 = { /* 臨 */
    .next = &GlySJA_E8B7A1,
    .width = 9,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E887A8Tiles,
};

const struct GlyphNew GlySJA_E8998E = { /* 虎 */
    .next = &GlySJA_E887A8,
    .width = 9,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8998ETiles,
};

const struct GlyphNew GlySJA_E381B8 = { /* へ */
    .next = &GlySJA_E381B7,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E381B8Tiles,
};

const struct GlyphNew GlySJA_E8AA87 = { /* 誇 */
    .next = &GlySJA_E8998E,
    .width = 9,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8AA87Tiles,
};

const struct GlyphNew GlySJA_E996A2 = { /* 関 */
    .next = &GlySJA_E99693,
    .width = 8,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E996A2Tiles,
};

const struct GlyphNew GlySJA_E4BEBF = { /* 便 */
    .next = &GlySJA_E4BD93,
    .width = 8,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BEBFTiles,
};

const struct GlyphNew GlySJA_E7A681 = { /* 禁 */
    .next = &GlySJA_E7A5AD,
    .width = 8,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7A681Tiles,
};

const struct GlyphNew GlySJA_E8BCAA = { /* 輪 */
    .next = &GlySJA_E8AA87,
    .width = 10,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8BCAATiles,
};

const struct GlyphNew GlySJA_E69BBF = { /* 替 */
    .next = &GlySJA_E69893,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69BBFTiles,
};

const struct GlyphNew GlySJA_E381B9 = { /* べ */
    .next = &GlySJA_E381B8,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E381B9Tiles,
};

const struct GlyphNew GlySJA_E99AA3 = { /* 隣 */
    .next = &GlySJA_E996A2,
    .width = 9,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E99AA3Tiles,
};

const struct GlyphNew GlySJA_E982AA = { /* 邪 */
    .next = &GlySJA_E99AA3,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E982AATiles,
};

const struct GlyphNew GlySJA_E58B89 = { /* 勉 */
    .next = &GlySJA_E5B1AF,
    .width = 8,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58B89Tiles,
};

const struct GlyphNew GlySJA_E7B4B0 = { /* 細 */
    .next = &GlySJA_E7A681,
    .width = 9,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7B4B0Tiles,
};

const struct GlyphNew GlySJA_E999A5 = { /* 陥 */
    .next = &GlySJA_E982AA,
    .width = 8,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E999A5Tiles,
};

const struct GlyphNew GlySJA_E782BA = { /* 為 */
    .next = &GlySJA_E7B4B0,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E782BATiles,
};

const struct GlyphNew GlySJA_E88DB7 = { /* 荷 */
    .next = &GlySJA_E8BCAA,
    .width = 8,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E88DB7Tiles,
};

const struct GlyphNew GlySJA_E381BA = { /* ぺ */
    .next = &GlySJA_E381B9,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E381BATiles,
};

const struct GlyphNew GlySJA_E7AD8B = { /* 筋 */
    .next = &GlySJA_E782BA,
    .width = 8,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7AD8BTiles,
};

const struct GlyphNew GlySJA_E58887 = { /* 切 */
    .next = &GlySJA_E58B89,
    .width = 8,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58887Tiles,
};

const struct GlyphNew GlySJA_E89BAE = { /* 蛮 */
    .next = &GlySJA_E88DB7,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E89BAETiles,
};

const struct GlyphNew GlySJA_E5809F = { /* 借 */
    .next = &GlySJA_E58887,
    .width = 8,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5809FTiles,
};

const struct GlyphNew GlySJA_E8A8BC = { /* 証 */
    .next = &GlySJA_E89BAE,
    .width = 8,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8A8BCTiles,
};

const struct GlyphNew GlySJA_E69CA8 = { /* 木 */
    .next = &GlySJA_E69BBF,
    .width = 8,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69CA8Tiles,
};

const struct GlyphNew GlySJA_E381BB = { /* ほ */
    .next = &GlySJA_E381BA,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E381BBTiles,
};

const struct GlyphNew GlySJA_E9BB99 = { /* 黙 */
    .next = &GlySJA_E999A5,
    .width = 9,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9BB99Tiles,
};

const struct GlyphNew GlySJA_E795B0 = { /* 異 */
    .next = &GlySJA_E7AD8B,
    .width = 8,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E795B0Tiles,
};

const struct GlyphNew GlySJA_E99B87 = { /* 雇 */
    .next = &GlySJA_E9BB99,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E99B87Tiles,
};

const struct GlyphNew GlySJA_E8838E = { /* 胎 */
    .next = &GlySJA_E8A8BC,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8838ETiles,
};

const struct GlyphNew GlySJA_E5BC81 = { /* 弁 */
    .next = &GlySJA_E5809F,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BC81Tiles,
};

const struct GlyphNew GlySJA_E9A4A8 = { /* 館 */
    .next = &GlySJA_E99B87,
    .width = 9,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9A4A8Tiles,
};

const struct GlyphNew GlySJA_E88F93 = { /* 菓 */
    .next = &GlySJA_E8838E,
    .width = 8,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E88F93Tiles,
};

const struct GlyphNew GlySJA_E381BC = { /* ぼ */
    .next = &GlySJA_E381BB,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E381BCTiles,
};

const struct GlyphNew GlySJA_E79BAE = { /* 目 */
    .next = &GlySJA_E795B0,
    .width = 7,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E79BAETiles,
};

const struct GlyphNew GlySJA_E7A7BB = { /* 移 */
    .next = &GlySJA_E79BAE,
    .width = 8,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7A7BBTiles,
};

const struct GlyphNew GlySJA_E68EA5 = { /* 接 */
    .next = &GlySJA_E69CA8,
    .width = 8,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68EA5Tiles,
};

const struct GlyphNew GlySJA_E58D91 = { /* 卑 */
    .next = &GlySJA_E5BC81,
    .width = 8,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58D91Tiles,
};

const struct GlyphNew GlySJA_E9A1A7 = { /* 顧 */
    .next = &GlySJA_E9A4A8,
    .width = 9,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9A1A7Tiles,
};

const struct GlyphNew GlySJA_E8A9B3 = { /* 詳 */
    .next = &GlySJA_E88F93,
    .width = 8,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8A9B3Tiles,
};

const struct GlyphNew GlySJA_E381BD = { /* ぽ */
    .next = &GlySJA_E381BC,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xbd,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E381BDTiles,
};

const struct GlyphNew GlySJA_E4BF9D = { /* 保 */
    .next = &GlySJA_E4BEBF,
    .width = 9,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BF9DTiles,
};

const struct GlyphNew GlySJA_E590A6 = { /* 否 */
    .next = &GlySJA_E58D91,
    .width = 8,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E590A6Tiles,
};

const struct GlyphNew GlySJA_E7B6AD = { /* 維 */
    .next = &GlySJA_E7A7BB,
    .width = 8,
    .utf_byte_2 = 0xb6,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7B6ADTiles,
};

const struct GlyphNew GlySJA_E381BE = { /* ま */
    .next = &GlySJA_E381BD,
    .width = 7,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E381BETiles,
};

const struct GlyphNew GlySJA_E8B39E = { /* 賞 */
    .next = &GlySJA_E8A9B3,
    .width = 8,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8B39ETiles,
};

const struct GlyphNew GlySJA_E781BC = { /* 灼 */
    .next = &GlySJA_E7B6AD,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E781BCTiles,
};

const struct GlyphNew GlySJA_E6B699 = { /* 涙 */
    .next = &GlySJA_E68EA5,
    .width = 8,
    .utf_byte_2 = 0xb6,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6B699Tiles,
};

const struct GlyphNew GlySJA_E5A683 = { /* 妃 */
    .next = &GlySJA_E590A6,
    .width = 8,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A683Tiles,
};

const struct GlyphNew GlySJA_E4BA94 = { /* 五 */
    .next = &GlySJA_E4BF9D,
    .width = 8,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BA94Tiles,
};

const struct GlyphNew GlySJA_E381BF = { /* み */
    .next = &GlySJA_E381BE,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E381BFTiles,
};

const struct GlyphNew GlySJA_E5B2B8 = { /* 岸 */
    .next = &GlySJA_E5A683,
    .width = 8,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B2B8Tiles,
};

const struct GlyphNew GlySJA_E788B5 = { /* 爵 */
    .next = &GlySJA_E781BC,
    .width = 9,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E788B5Tiles,
};

const struct GlyphNew GlySJA_E8B2A8 = { /* 貨 */
    .next = &GlySJA_E8B39E,
    .width = 8,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8B2A8Tiles,
};

const struct GlyphNew GlySJA_E59CA8 = { /* 在 */
    .next = &GlySJA_E5B2B8,
    .width = 8,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E59CA8Tiles,
};

const struct GlyphNew GlySJA_E8A8AD = { /* 設 */
    .next = &GlySJA_E8B2A8,
    .width = 9,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0xad,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8A8ADTiles,
};

const struct GlyphNew GlySJA_E9888D = { /* 鈍 */
    .next = &GlySJA_E9A1A7,
    .width = 8,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9888DTiles,
};

const struct GlyphNew GlySJA_E8B2B8 = { /* 貸 */
    .next = &GlySJA_E8A8AD,
    .width = 8,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8B2B8Tiles,
};

const struct GlyphNew GlySJA_E38280 = { /* む */
    .next = &GlySJA_E381BF,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38280Tiles,
};

const struct GlyphNew GlySJA_E5BDBC = { /* 彼 */
    .next = &GlySJA_E59CA8,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BDBCTiles,
};

const struct GlyphNew GlySJA_E98080 = { /* 退 */
    .next = &GlySJA_E9888D,
    .width = 8,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E98080Tiles,
};

const struct GlyphNew GlySJA_E9A19E = { /* 類 */
    .next = &GlySJA_E98080,
    .width = 9,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9A19ETiles,
};

const struct GlyphNew GlySJA_E5B7AB = { /* 巫 */
    .next = &GlySJA_E5BDBC,
    .width = 8,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B7ABTiles,
};

const struct GlyphNew GlySJA_E38281 = { /* め */
    .next = &GlySJA_E38280,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x81,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38281Tiles,
};

const struct GlyphNew GlySJA_E8BF91 = { /* 近 */
    .next = &GlySJA_E8B2B8,
    .width = 8,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8BF91Tiles,
};

const struct GlyphNew GlySJA_E68D95 = { /* 捕 */
    .next = &GlySJA_E6B699,
    .width = 9,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68D95Tiles,
};

const struct GlyphNew GlySJA_E682B2 = { /* 悲 */
    .next = &GlySJA_E68D95,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E682B2Tiles,
};

const struct GlyphNew GlySJA_E7BDAA = { /* 罪 */
    .next = &GlySJA_E788B5,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7BDAATiles,
};

const struct GlyphNew GlySJA_E4BBA4 = { /* 令 */
    .next = &GlySJA_E4BA94,
    .width = 8,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BBA4Tiles,
};

const struct GlyphNew GlySJA_E7AF80 = { /* 節 */
    .next = &GlySJA_E7BDAA,
    .width = 8,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7AF80Tiles,
};

const struct GlyphNew GlySJA_E688BB = { /* 戻 */
    .next = &GlySJA_E682B2,
    .width = 8,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E688BBTiles,
};

const struct GlyphNew GlySJA_E9818E = { /* 過 */
    .next = &GlySJA_E9A19E,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9818ETiles,
};

const struct GlyphNew GlySJA_E8A1A3 = { /* 衣 */
    .next = &GlySJA_E8BF91,
    .width = 8,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8A1A3Tiles,
};

const struct GlyphNew GlySJA_E38282 = { /* も */
    .next = &GlySJA_E38281,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38282Tiles,
};

const struct GlyphNew GlySJA_E58685 = { /* 内 */
    .next = &GlySJA_E5B7AB,
    .width = 8,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58685Tiles,
};

const struct GlyphNew GlySJA_E8B2A1 = { /* 財 */
    .next = &GlySJA_E8A1A3,
    .width = 8,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8B2A1Tiles,
};

const struct GlyphNew GlySJA_E98791 = { /* 金 */
    .next = &GlySJA_E9818E,
    .width = 9,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E98791Tiles,
};

const struct GlyphNew GlySJA_E99A8A = { /* 隊 */
    .next = &GlySJA_E98791,
    .width = 9,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E99A8ATiles,
};

const struct GlyphNew GlySJA_E6ADA9 = { /* 歩 */
    .next = &GlySJA_E688BB,
    .width = 8,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6ADA9Tiles,
};

const struct GlyphNew GlySJA_E8AAAC = { /* 説 */
    .next = &GlySJA_E8B2A1,
    .width = 8,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8AAACTiles,
};

const struct GlyphNew GlySJA_E68989 = { /* 扉 */
    .next = &GlySJA_E6ADA9,
    .width = 8,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68989Tiles,
};

const struct GlyphNew GlySJA_E38283 = { /* ゃ */
    .next = &GlySJA_E38282,
    .width = 7,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38283Tiles,
};

const struct GlyphNew GlySJA_E88BA5 = { /* 若 */
    .next = &GlySJA_E8AAAC,
    .width = 8,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E88BA5Tiles,
};

const struct GlyphNew GlySJA_E79CBC = { /* 眼 */
    .next = &GlySJA_E7AF80,
    .width = 9,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E79CBCTiles,
};

const struct GlyphNew GlySJA_E4BD8E = { /* 低 */
    .next = &GlySJA_E4BBA4,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BD8ETiles,
};

const struct GlyphNew GlySJA_E8A394 = { /* 裔 */
    .next = &GlySJA_E88BA5,
    .width = 8,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8A394Tiles,
};

const struct GlyphNew GlySJA_E99A9C = { /* 障 */
    .next = &GlySJA_E99A8A,
    .width = 9,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E99A9CTiles,
};

const struct GlyphNew GlySJA_E5909F = { /* 吟 */
    .next = &GlySJA_E58685,
    .width = 9,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5909FTiles,
};

const struct GlyphNew GlySJA_E99BAA = { /* 雪 */
    .next = &GlySJA_E99A9C,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E99BAATiles,
};

const struct GlyphNew GlySJA_E4BE8B = { /* 例 */
    .next = &GlySJA_E4BD8E,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BE8BTiles,
};

const struct GlyphNew GlySJA_E38284 = { /* や */
    .next = &GlySJA_E38283,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38284Tiles,
};

const struct GlyphNew GlySJA_E7B5B6 = { /* 絶 */
    .next = &GlySJA_E79CBC,
    .width = 8,
    .utf_byte_2 = 0xb5,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7B5B6Tiles,
};

const struct GlyphNew GlySJA_E98A80 = { /* 銀 */
    .next = &GlySJA_E99BAA,
    .width = 8,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E98A80Tiles,
};

const struct GlyphNew GlySJA_E586B7 = { /* 冷 */
    .next = &GlySJA_E5909F,
    .width = 9,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E586B7Tiles,
};

const struct GlyphNew GlySJA_E5B2A9 = { /* 岩 */
    .next = &GlySJA_E586B7,
    .width = 8,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B2A9Tiles,
};

const struct GlyphNew GlySJA_E981BA = { /* 遺 */
    .next = &GlySJA_E98A80,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E981BATiles,
};

const struct GlyphNew GlySJA_E5958F = { /* 問 */
    .next = &GlySJA_E5B2A9,
    .width = 8,
    .utf_byte_2 = 0x95,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5958FTiles,
};

const struct GlyphNew GlySJA_E5819C = { /* 停 */
    .next = &GlySJA_E5958F,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5819CTiles,
};

const struct GlyphNew GlySJA_E38285 = { /* ゅ */
    .next = &GlySJA_E38284,
    .width = 7,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38285Tiles,
};

const struct GlyphNew GlySJA_E5BE8C = { /* 後 */
    .next = &GlySJA_E5819C,
    .width = 8,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BE8CTiles,
};

const struct GlyphNew GlySJA_E4B88A = { /* 上 */
    .next = &GlySJA_E4BE8B,
    .width = 8,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4B88ATiles,
};

const struct GlyphNew GlySJA_E4BBA3 = { /* 代 */
    .next = &GlySJA_E4B88A,
    .width = 8,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BBA3Tiles,
};

const struct GlyphNew GlySJA_E5BCB1 = { /* 弱 */
    .next = &GlySJA_E5BE8C,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BCB1Tiles,
};

const struct GlyphNew GlySJA_E8888C = { /* 舌 */
    .next = &GlySJA_E8A394,
    .width = 8,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8888CTiles,
};

const struct GlyphNew GlySJA_E4B99D = { /* 九 */
    .next = &GlySJA_E4BBA3,
    .width = 8,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4B99DTiles,
};

const struct GlyphNew GlySJA_E38286 = { /* ゆ */
    .next = &GlySJA_E38285,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38286Tiles,
};

const struct GlyphNew GlySJA_E7B48B = { /* 紋 */
    .next = &GlySJA_E7B5B6,
    .width = 9,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7B48BTiles,
};

const struct GlyphNew GlySJA_E8AC8E = { /* 謎 */
    .next = &GlySJA_E8888C,
    .width = 9,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8AC8ETiles,
};

const struct GlyphNew GlySJA_E5BEA1 = { /* 御 */
    .next = &GlySJA_E5BCB1,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BEA1Tiles,
};

const struct GlyphNew GlySJA_E68891 = { /* 我 */
    .next = &GlySJA_E68989,
    .width = 8,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68891Tiles,
};

const struct GlyphNew GlySJA_E58FB0 = { /* 台 */
    .next = &GlySJA_E5BEA1,
    .width = 8,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58FB0Tiles,
};

const struct GlyphNew GlySJA_E4B888 = { /* 丈 */
    .next = &GlySJA_E4B99D,
    .width = 8,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4B888Tiles,
};

const struct GlyphNew GlySJA_E38287 = { /* ょ */
    .next = &GlySJA_E38286,
    .width = 6,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38287Tiles,
};

const struct GlyphNew GlySJA_E5A4A7 = { /* 大 */
    .next = &GlySJA_E58FB0,
    .width = 8,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0xa7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A4A7Tiles,
};

const struct GlyphNew GlySJA_E4B8BB = { /* 主 */
    .next = &GlySJA_E4B888,
    .width = 8,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4B8BBTiles,
};

const struct GlyphNew GlySJA_E99680 = { /* 門 */
    .next = &GlySJA_E981BA,
    .width = 8,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E99680Tiles,
};

const struct GlyphNew GlySJA_E78999 = { /* 牙 */
    .next = &GlySJA_E7B48B,
    .width = 8,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E78999Tiles,
};

const struct GlyphNew GlySJA_E58B9F = { /* 募 */
    .next = &GlySJA_E5A4A7,
    .width = 8,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58B9FTiles,
};

const struct GlyphNew GlySJA_E6829F = { /* 悟 */
    .next = &GlySJA_E68891,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6829FTiles,
};

const struct GlyphNew GlySJA_E38288 = { /* よ */
    .next = &GlySJA_E38287,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38288Tiles,
};

const struct GlyphNew GlySJA_E58F96 = { /* 取 */
    .next = &GlySJA_E58B9F,
    .width = 8,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58F96Tiles,
};

const struct GlyphNew GlySJA_E59F9F = { /* 域 */
    .next = &GlySJA_E58F96,
    .width = 9,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E59F9FTiles,
};

const struct GlyphNew GlySJA_E58588 = { /* 先 */
    .next = &GlySJA_E59F9F,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58588Tiles,
};

const struct GlyphNew GlySJA_E7ACAC = { /* 第 */
    .next = &GlySJA_E78999,
    .width = 8,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7ACACTiles,
};

const struct GlyphNew GlySJA_E5A293 = { /* 墓 */
    .next = &GlySJA_E58588,
    .width = 8,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A293Tiles,
};

const struct GlyphNew GlySJA_E4B997 = { /* 乗 */
    .next = &GlySJA_E4B8BB,
    .width = 8,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4B997Tiles,
};

const struct GlyphNew GlySJA_E794BB = { /* 画 */
    .next = &GlySJA_E7ACAC,
    .width = 8,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xbb,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E794BBTiles,
};

const struct GlyphNew GlySJA_E38289 = { /* ら */
    .next = &GlySJA_E38288,
    .width = 7,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38289Tiles,
};

const struct GlyphNew GlySJA_E5AE88 = { /* 守 */
    .next = &GlySJA_E5A293,
    .width = 8,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5AE88Tiles,
};

const struct GlyphNew GlySJA_E58D83 = { /* 千 */
    .next = &GlySJA_E5AE88,
    .width = 8,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x83,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58D83Tiles,
};

const struct GlyphNew GlySJA_E7A4BC = { /* 礼 */
    .next = &GlySJA_E794BB,
    .width = 8,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0xbc,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7A4BCTiles,
};

const struct GlyphNew GlySJA_E9A194 = { /* 顔 */
    .next = &GlySJA_E99680,
    .width = 9,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9A194Tiles,
};

const struct GlyphNew GlySJA_E882B2 = { /* 育 */
    .next = &GlySJA_E8AC8E,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E882B2Tiles,
};

const struct GlyphNew GlySJA_E58697 = { /* 冗 */
    .next = &GlySJA_E58D83,
    .width = 8,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58697Tiles,
};

const struct GlyphNew GlySJA_E592B2 = { /* 咲 */
    .next = &GlySJA_E58697,
    .width = 8,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E592B2Tiles,
};

const struct GlyphNew GlySJA_E3828A = { /* り */
    .next = &GlySJA_E38289,
    .width = 6,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E3828ATiles,
};

const struct GlyphNew GlySJA_E58DA0 = { /* 占 */
    .next = &GlySJA_E592B2,
    .width = 7,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58DA0Tiles,
};

const struct GlyphNew GlySJA_E9A198 = { /* 願 */
    .next = &GlySJA_E9A194,
    .width = 9,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9A198Tiles,
};

const struct GlyphNew GlySJA_E6898B = { /* 手 */
    .next = &GlySJA_E6829F,
    .width = 8,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6898BTiles,
};

const struct GlyphNew GlySJA_E5AE9A = { /* 定 */
    .next = &GlySJA_E58DA0,
    .width = 8,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5AE9ATiles,
};

const struct GlyphNew GlySJA_E9A18C = { /* 題 */
    .next = &GlySJA_E9A198,
    .width = 8,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9A18CTiles,
};

const struct GlyphNew GlySJA_E3828B = { /* る */
    .next = &GlySJA_E3828A,
    .width = 7,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E3828BTiles,
};

const struct GlyphNew GlySJA_E5B89D = { /* 帝 */
    .next = &GlySJA_E5AE9A,
    .width = 8,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B89DTiles,
};

const struct GlyphNew GlySJA_E59F8E = { /* 城 */
    .next = &GlySJA_E5B89D,
    .width = 9,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E59F8ETiles,
};

const struct GlyphNew GlySJA_E7A798 = { /* 秘 */
    .next = &GlySJA_E7A4BC,
    .width = 9,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x98,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7A798Tiles,
};

const struct GlyphNew GlySJA_E69AAE = { /* 暮 */
    .next = &GlySJA_E6898B,
    .width = 8,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69AAETiles,
};

const struct GlyphNew GlySJA_E5AEA3 = { /* 宣 */
    .next = &GlySJA_E59F8E,
    .width = 8,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5AEA3Tiles,
};

const struct GlyphNew GlySJA_E5A49C = { /* 夜 */
    .next = &GlySJA_E5AEA3,
    .width = 8,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A49CTiles,
};

const struct GlyphNew GlySJA_E3828C = { /* れ */
    .next = &GlySJA_E3828B,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E3828CTiles,
};

const struct GlyphNew GlySJA_E88BA6 = { /* 苦 */
    .next = &GlySJA_E882B2,
    .width = 8,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E88BA6Tiles,
};

const struct GlyphNew GlySJA_E5A0B4 = { /* 場 */
    .next = &GlySJA_E5A49C,
    .width = 9,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A0B4Tiles,
};

const struct GlyphNew GlySJA_E6AF8D = { /* 母 */
    .next = &GlySJA_E69AAE,
    .width = 9,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6AF8DTiles,
};

const struct GlyphNew GlySJA_E99AB7 = { /* 隷 */
    .next = &GlySJA_E9A18C,
    .width = 8,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E99AB7Tiles,
};

const struct GlyphNew GlySJA_E8AA9E = { /* 語 */
    .next = &GlySJA_E88BA6,
    .width = 8,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8AA9ETiles,
};

const struct GlyphNew GlySJA_E6AE8A = { /* 殊 */
    .next = &GlySJA_E6AF8D,
    .width = 9,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6AE8ATiles,
};

const struct GlyphNew GlySJA_E4B880 = { /* 一 */
    .next = &GlySJA_E4B997,
    .width = 7,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x80,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4B880Tiles,
};

const struct GlyphNew GlySJA_E5BA95 = { /* 底 */
    .next = &GlySJA_E5A0B4,
    .width = 8,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BA95Tiles,
};

const struct GlyphNew GlySJA_E5B082 = { /* 専 */
    .next = &GlySJA_E5BA95,
    .width = 8,
    .utf_byte_2 = 0xb0,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B082Tiles,
};

const struct GlyphNew GlySJA_E3828D = { /* ろ */
    .next = &GlySJA_E3828C,
    .width = 7,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E3828DTiles,
};

const struct GlyphNew GlySJA_E58DB1 = { /* 危 */
    .next = &GlySJA_E5B082,
    .width = 8,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58DB1Tiles,
};

const struct GlyphNew GlySJA_E99B85 = { /* 雅 */
    .next = &GlySJA_E99AB7,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E99B85Tiles,
};

const struct GlyphNew GlySJA_E78BA9 = { /* 狩 */
    .next = &GlySJA_E7A798,
    .width = 8,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E78BA9Tiles,
};

const struct GlyphNew GlySJA_E8AAA4 = { /* 誤 */
    .next = &GlySJA_E8AA9E,
    .width = 9,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8AAA4Tiles,
};

const struct GlyphNew GlySJA_E58D97 = { /* 南 */
    .next = &GlySJA_E58DB1,
    .width = 8,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58D97Tiles,
};

const struct GlyphNew GlySJA_E5969C = { /* 喜 */
    .next = &GlySJA_E58D97,
    .width = 8,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5969CTiles,
};

const struct GlyphNew GlySJA_E9878E = { /* 野 */
    .next = &GlySJA_E99B85,
    .width = 8,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9878ETiles,
};

const struct GlyphNew GlySJA_E5BBB7 = { /* 廷 */
    .next = &GlySJA_E5969C,
    .width = 8,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BBB7Tiles,
};

const struct GlyphNew GlySJA_E9A786 = { /* 駆 */
    .next = &GlySJA_E9878E,
    .width = 9,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x86,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9A786Tiles,
};

const struct GlyphNew GlySJA_E8ADB7 = { /* 護 */
    .next = &GlySJA_E8AAA4,
    .width = 9,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8ADB7Tiles,
};

const struct GlyphNew GlySJA_E4BD9C = { /* 作 */
    .next = &GlySJA_E4B880,
    .width = 8,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0x9c,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BD9CTiles,
};

const struct GlyphNew GlySJA_E5B79D = { /* 川 */
    .next = &GlySJA_E5BBB7,
    .width = 7,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B79DTiles,
};

const struct GlyphNew GlySJA_E99C8A = { /* 霊 */
    .next = &GlySJA_E9A786,
    .width = 8,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E99C8ATiles,
};

const struct GlyphNew GlySJA_E3828F = { /* わ */
    .next = &GlySJA_E3828D,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x8f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E3828FTiles,
};

const struct GlyphNew GlySJA_E688A6 = { /* 戦 */
    .next = &GlySJA_E6AE8A,
    .width = 8,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E688A6Tiles,
};

const struct GlyphNew GlySJA_E5BC9F = { /* 弟 */
    .next = &GlySJA_E5B79D,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BC9FTiles,
};

const struct GlyphNew GlySJA_E7A8AE = { /* 種 */
    .next = &GlySJA_E78BA9,
    .width = 9,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7A8AETiles,
};

const struct GlyphNew GlySJA_E599A8 = { /* 器 */
    .next = &GlySJA_E5BC9F,
    .width = 8,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E599A8Tiles,
};

const struct GlyphNew GlySJA_E8A2AB = { /* 被 */
    .next = &GlySJA_E8ADB7,
    .width = 9,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8A2ABTiles,
};

const struct GlyphNew GlySJA_E580A3 = { /* 倣 */
    .next = &GlySJA_E599A8,
    .width = 9,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E580A3Tiles,
};

const struct GlyphNew GlySJA_E5898A = { /* 削 */
    .next = &GlySJA_E580A3,
    .width = 8,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5898ATiles,
};

const struct GlyphNew GlySJA_E5B8B8 = { /* 常 */
    .next = &GlySJA_E5898A,
    .width = 8,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0xb8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B8B8Tiles,
};

const struct GlyphNew GlySJA_E68385 = { /* 情 */
    .next = &GlySJA_E688A6,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68385Tiles,
};

const struct GlyphNew GlySJA_E79FA2 = { /* 矢 */
    .next = &GlySJA_E7A8AE,
    .width = 8,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E79FA2Tiles,
};

const struct GlyphNew GlySJA_E59FBA = { /* 基 */
    .next = &GlySJA_E5B8B8,
    .width = 9,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E59FBATiles,
};

const struct GlyphNew GlySJA_E7A8B2 = { /* 稲 */
    .next = &GlySJA_E79FA2,
    .width = 9,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7A8B2Tiles,
};

const struct GlyphNew GlySJA_E4BC9A = { /* 会 */
    .next = &GlySJA_E4BD9C,
    .width = 8,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BC9ATiles,
};

const struct GlyphNew GlySJA_E58C85 = { /* 包 */
    .next = &GlySJA_E59FBA,
    .width = 8,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x85,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58C85Tiles,
};

const struct GlyphNew GlySJA_E99BA3 = { /* 難 */
    .next = &GlySJA_E99C8A,
    .width = 9,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E99BA3Tiles,
};

const struct GlyphNew GlySJA_E585B7 = { /* 具 */
    .next = &GlySJA_E58C85,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xb7,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E585B7Tiles,
};

const struct GlyphNew GlySJA_E68AB5 = { /* 抵 */
    .next = &GlySJA_E68385,
    .width = 8,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xb5,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68AB5Tiles,
};

const struct GlyphNew GlySJA_E69AA6 = { /* 暦 */
    .next = &GlySJA_E68AB5,
    .width = 8,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0xa6,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69AA6Tiles,
};

const struct GlyphNew GlySJA_E5A587 = { /* 奇 */
    .next = &GlySJA_E585B7,
    .width = 8,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0x87,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A587Tiles,
};

const struct GlyphNew GlySJA_E38292 = { /* を */
    .next = &GlySJA_E3828F,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38292Tiles,
};

const struct GlyphNew GlySJA_E8A7A3 = { /* 解 */
    .next = &GlySJA_E8A2AB,
    .width = 8,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8A7A3Tiles,
};

const struct GlyphNew GlySJA_E6ADB4 = { /* 歴 */
    .next = &GlySJA_E69AA6,
    .width = 8,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6ADB4Tiles,
};

const struct GlyphNew GlySJA_E68A9E = { /* 択 */
    .next = &GlySJA_E6ADB4,
    .width = 8,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68A9ETiles,
};

const struct GlyphNew GlySJA_E5BDB9 = { /* 役 */
    .next = &GlySJA_E5A587,
    .width = 9,
    .utf_byte_2 = 0xbd,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BDB9Tiles,
};

const struct GlyphNew GlySJA_E4BAA4 = { /* 交 */
    .next = &GlySJA_E4BC9A,
    .width = 8,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0xa4,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BAA4Tiles,
};

const struct GlyphNew GlySJA_E69DA1 = { /* 条 */
    .next = &GlySJA_E68A9E,
    .width = 8,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69DA1Tiles,
};

const struct GlyphNew GlySJA_E981BF = { /* 避 */
    .next = &GlySJA_E99BA3,
    .width = 9,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0xbf,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E981BFTiles,
};

const struct GlyphNew GlySJA_E6B19D = { /* 汝 */
    .next = &GlySJA_E69DA1,
    .width = 9,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6B19DTiles,
};

const struct GlyphNew GlySJA_E98592 = { /* 酒 */
    .next = &GlySJA_E981BF,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x92,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E98592Tiles,
};

const struct GlyphNew GlySJA_E38293 = { /* ん */
    .next = &GlySJA_E38292,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E38293Tiles,
};

const struct GlyphNew GlySJA_E69D96 = { /* 杖 */
    .next = &GlySJA_E6B19D,
    .width = 8,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69D96Tiles,
};

const struct GlyphNew GlySJA_E59B9E = { /* 回 */
    .next = &GlySJA_E5BDB9,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E59B9ETiles,
};

const struct GlyphNew GlySJA_E99D9E = { /* 非 */
    .next = &GlySJA_E98592,
    .width = 8,
    .utf_byte_2 = 0x9d,
    .utf_byte_3 = 0x9e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E99D9ETiles,
};

const struct GlyphNew GlySJA_E5A0B1 = { /* 報 */
    .next = &GlySJA_E59B9E,
    .width = 8,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A0B1Tiles,
};

const struct GlyphNew GlySJA_E7B484 = { /* 約 */
    .next = &GlySJA_E7A8B2,
    .width = 8,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7B484Tiles,
};

const struct GlyphNew GlySJA_E68B93 = { /* 拓 */
    .next = &GlySJA_E69D96,
    .width = 8,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x93,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68B93Tiles,
};

const struct GlyphNew GlySJA_E5AF84 = { /* 寄 */
    .next = &GlySJA_E5A0B1,
    .width = 8,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5AF84Tiles,
};

const struct GlyphNew GlySJA_E9A696 = { /* 首 */
    .next = &GlySJA_E99D9E,
    .width = 8,
    .utf_byte_2 = 0xa6,
    .utf_byte_3 = 0x96,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9A696Tiles,
};

const struct GlyphNew GlySJA_E4BA8C = { /* 二 */
    .next = &GlySJA_E4BAA4,
    .width = 7,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BA8CTiles,
};

const struct GlyphNew GlySJA_E9A39B = { /* 飛 */
    .next = &GlySJA_E9A696,
    .width = 8,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x9b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9A39BTiles,
};

const struct GlyphNew GlySJA_E4BEAF = { /* 侯 */
    .next = &GlySJA_E4BA8C,
    .width = 8,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xaf,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E4BEAFTiles,
};

const struct GlyphNew GlySJA_E58AA3 = { /* 劣 */
    .next = &GlySJA_E5AF84,
    .width = 8,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58AA3Tiles,
};

const struct GlyphNew GlySJA_E78AB6 = { /* 状 */
    .next = &GlySJA_E7B484,
    .width = 8,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xb6,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E78AB6Tiles,
};

const struct GlyphNew GlySJA_E5AE9D = { /* 宝 */
    .next = &GlySJA_E58AA3,
    .width = 8,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x9d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5AE9DTiles,
};

const struct GlyphNew GlySJA_E58F97 = { /* 受 */
    .next = &GlySJA_E5AE9D,
    .width = 8,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58F97Tiles,
};

const struct GlyphNew GlySJA_E7A9BA = { /* 空 */
    .next = &GlySJA_E78AB6,
    .width = 8,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0xba,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7A9BATiles,
};

const struct GlyphNew GlySJA_E5A38A = { /* 壊 */
    .next = &GlySJA_E58F97,
    .width = 9,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x8a,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A38ATiles,
};

const struct GlyphNew GlySJA_E58DB0 = { /* 印 */
    .next = &GlySJA_E5A38A,
    .width = 8,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0xb0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58DB0Tiles,
};

const struct GlyphNew GlySJA_E5B88C = { /* 希 */
    .next = &GlySJA_E58DB0,
    .width = 8,
    .utf_byte_2 = 0xb8,
    .utf_byte_3 = 0x8c,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B88CTiles,
};

const struct GlyphNew GlySJA_E8A8B3 = { /* 訳 */
    .next = &GlySJA_E8A7A3,
    .width = 8,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0xb3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8A8B3Tiles,
};

const struct GlyphNew GlySJA_E78388 = { /* 烈 */
    .next = &GlySJA_E7A9BA,
    .width = 8,
    .utf_byte_2 = 0x83,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E78388Tiles,
};

const struct GlyphNew GlySJA_E591AA = { /* 呪 */
    .next = &GlySJA_E5B88C,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E591AATiles,
};

const struct GlyphNew GlySJA_E8A382 = { /* 裂 */
    .next = &GlySJA_E8A8B3,
    .width = 8,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8A382Tiles,
};

const struct GlyphNew GlySJA_E8BA8D = { /* 躍 */
    .next = &GlySJA_E8A382,
    .width = 9,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x8d,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8BA8DTiles,
};

const struct GlyphNew GlySJA_E58299 = { /* 備 */
    .next = &GlySJA_E591AA,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x99,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58299Tiles,
};

const struct GlyphNew GlySJA_E58589 = { /* 光 */
    .next = &GlySJA_E58299,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58589Tiles,
};

const struct GlyphNew GlySJA_E593A1 = { /* 員 */
    .next = &GlySJA_E58589,
    .width = 8,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0xa1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E593A1Tiles,
};

const struct GlyphNew GlySJA_E8A897 = { /* 託 */
    .next = &GlySJA_E8BA8D,
    .width = 8,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E8A897Tiles,
};

const struct GlyphNew GlySJA_E5BFAB = { /* 快 */
    .next = &GlySJA_E593A1,
    .width = 9,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0xab,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BFABTiles,
};

const struct GlyphNew GlySJA_E58C82 = { /* 匂 */
    .next = &GlySJA_E5BFAB,
    .width = 8,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x82,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58C82Tiles,
};

const struct GlyphNew GlySJA_E585AC = { /* 公 */
    .next = &GlySJA_E58C82,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xac,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E585ACTiles,
};

const struct GlyphNew GlySJA_E68FAE = { /* 揮 */
    .next = &GlySJA_E68B93,
    .width = 9,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68FAETiles,
};

const struct GlyphNew GlySJA_E6818B = { /* 恋 */
    .next = &GlySJA_E68FAE,
    .width = 8,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6818BTiles,
};

const struct GlyphNew GlySJA_E5B4A9 = { /* 崩 */
    .next = &GlySJA_E585AC,
    .width = 8,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0xa9,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B4A9Tiles,
};

const struct GlyphNew GlySJA_E68E88 = { /* 授 */
    .next = &GlySJA_E6818B,
    .width = 9,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68E88Tiles,
};

const struct GlyphNew GlySJA_E680AA = { /* 怪 */
    .next = &GlySJA_E68E88,
    .width = 8,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0xaa,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E680AATiles,
};

const struct GlyphNew GlySJA_E59BA0 = { /* 因 */
    .next = &GlySJA_E5B4A9,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0xa0,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E59BA0Tiles,
};

const struct GlyphNew GlySJA_E7A88B = { /* 程 */
    .next = &GlySJA_E78388,
    .width = 8,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7A88BTiles,
};

const struct GlyphNew GlySJA_E68294 = { /* 悔 */
    .next = &GlySJA_E680AA,
    .width = 9,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x94,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68294Tiles,
};

const struct GlyphNew GlySJA_E88289 = { /* 肉 */
    .next = &GlySJA_E8A897,
    .width = 8,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x89,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E88289Tiles,
};

const struct GlyphNew GlySJA_E58A9F = { /* 功 */
    .next = &GlySJA_E59BA0,
    .width = 8,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58A9FTiles,
};

const struct GlyphNew GlySJA_E5BEAE = { /* 微 */
    .next = &GlySJA_E58A9F,
    .width = 9,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0xae,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BEAETiles,
};

const struct GlyphNew GlySJA_E68690 = { /* 憐 */
    .next = &GlySJA_E68294,
    .width = 9,
    .utf_byte_2 = 0x86,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68690Tiles,
};

const struct GlyphNew GlySJA_E58AB9 = { /* 効 */
    .next = &GlySJA_E5BEAE,
    .width = 9,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58AB9Tiles,
};

const struct GlyphNew GlySJA_E5BC95 = { /* 引 */
    .next = &GlySJA_E58AB9,
    .width = 7,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x95,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5BC95Tiles,
};

const struct GlyphNew GlySJA_E69797 = { /* 旗 */
    .next = &GlySJA_E68690,
    .width = 9,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0x97,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69797Tiles,
};

const struct GlyphNew GlySJA_E68AB1 = { /* 抱 */
    .next = &GlySJA_E69797,
    .width = 8,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0xb1,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68AB1Tiles,
};

const struct GlyphNew GlySJA_E5A5A2 = { /* 奢 */
    .next = &GlySJA_E5BC95,
    .width = 8,
    .utf_byte_2 = 0xa5,
    .utf_byte_3 = 0xa2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5A5A2Tiles,
};

const struct GlyphNew GlySJA_E6978B = { /* 旋 */
    .next = &GlySJA_E68AB1,
    .width = 9,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0x8b,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6978BTiles,
};

const struct GlyphNew GlySJA_E9A3B2 = { /* 飲 */
    .next = &GlySJA_E9A39B,
    .width = 9,
    .utf_byte_2 = 0xa3,
    .utf_byte_3 = 0xb2,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E9A3B2Tiles,
};

const struct GlyphNew GlySJA_E697A5 = { /* 日 */
    .next = &GlySJA_E6978B,
    .width = 7,
    .utf_byte_2 = 0x97,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E697A5Tiles,
};

const struct GlyphNew GlySJA_E694BE = { /* 放 */
    .next = &GlySJA_E697A5,
    .width = 9,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xbe,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E694BETiles,
};

const struct GlyphNew GlySJA_E69C9F = { /* 期 */
    .next = &GlySJA_E694BE,
    .width = 9,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x9f,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E69C9FTiles,
};

const struct GlyphNew GlySJA_E6AA84 = { /* 檄 */
    .next = &GlySJA_E69C9F,
    .width = 10,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x84,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6AA84Tiles,
};

const struct GlyphNew GlySJA_E59B9A = { /* 囚 */
    .next = &GlySJA_E5A5A2,
    .width = 8,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E59B9ATiles,
};

const struct GlyphNew GlySJA_E58E9A = { /* 厚 */
    .next = &GlySJA_E59B9A,
    .width = 8,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58E9ATiles,
};

const struct GlyphNew GlySJA_E696B9 = { /* 方 */
    .next = &GlySJA_E6AA84,
    .width = 8,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E696B9Tiles,
};

const struct GlyphNew GlySJA_E68B90 = { /* 拐 */
    .next = &GlySJA_E696B9,
    .width = 8,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x90,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E68B90Tiles,
};

const struct GlyphNew GlySJA_E58FA3 = { /* 口 */
    .next = &GlySJA_E58E9A,
    .width = 7,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0xa3,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E58FA3Tiles,
};

const struct GlyphNew GlySJA_E6B2B9 = { /* 油 */
    .next = &GlySJA_E68B90,
    .width = 8,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E6B2B9Tiles,
};

const struct GlyphNew GlySJA_E7B7B4 = { /* 練 */
    .next = &GlySJA_E7A88B,
    .width = 8,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0xb4,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7B7B4Tiles,
};

const struct GlyphNew GlySJA_E585A5 = { /* 入 */
    .next = &GlySJA_E58FA3,
    .width = 8,
    .utf_byte_2 = 0x85,
    .utf_byte_3 = 0xa5,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E585A5Tiles,
};

const struct GlyphNew GlySJA_E59091 = { /* 向 */
    .next = &GlySJA_E585A5,
    .width = 8,
    .utf_byte_2 = 0x90,
    .utf_byte_3 = 0x91,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E59091Tiles,
};

const struct GlyphNew GlySJA_E7BE8E = { /* 美 */
    .next = &GlySJA_E7B7B4,
    .width = 8,
    .utf_byte_2 = 0xbe,
    .utf_byte_3 = 0x8e,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7BE8ETiles,
};

const struct GlyphNew GlySJA_E5B188 = { /* 屈 */
    .next = &GlySJA_E59091,
    .width = 8,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x88,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E5B188Tiles,
};

const struct GlyphNew GlySJA_E694B9 = { /* 改 */
    .next = &GlySJA_E6B2B9,
    .width = 8,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0xb9,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E694B9Tiles,
};

const struct GlyphNew GlySJA_E7B79A = { /* 線 */
    .next = &GlySJA_E7BE8E,
    .width = 8,
    .utf_byte_2 = 0xb7,
    .utf_byte_3 = 0x9a,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E7B79ATiles,
};

const struct GlyphNew GlySJA_E591A8 = { /* 周 */
    .next = &GlySJA_E5B188,
    .width = 8,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0xa8,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_E591A8Tiles,
};

const struct GlyphNew GlySJA_20 = { /*   */
    .next = NULL,
    .width = 3,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_20Tiles,
};

const struct GlyphNew GlySJA_21 = { /* ! */
    .next = NULL,
    .width = 4,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_21Tiles,
};

const struct GlyphNew GlySJA_22 = { /* " */
    .next = NULL,
    .width = 4,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_22Tiles,
};

const struct GlyphNew GlySJA_23 = { /* # */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_23Tiles,
};

const struct GlyphNew GlySJA_24 = { /* $ */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_24Tiles,
};

const struct GlyphNew GlySJA_25 = { /* % */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_25Tiles,
};

const struct GlyphNew GlySJA_26 = { /* & */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_26Tiles,
};

const struct GlyphNew GlySJA_27 = { /* ' */
    .next = NULL,
    .width = 2,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_27Tiles,
};

const struct GlyphNew GlySJA_28 = { /* ( */
    .next = NULL,
    .width = 4,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_28Tiles,
};

const struct GlyphNew GlySJA_29 = { /* ) */
    .next = NULL,
    .width = 4,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_29Tiles,
};

const struct GlyphNew GlySJA_2A = { /* * */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_2ATiles,
};

const struct GlyphNew GlySJA_2B = { /* + */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_2BTiles,
};

const struct GlyphNew GlySJA_2C = { /* , */
    .next = NULL,
    .width = 2,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_2CTiles,
};

const struct GlyphNew GlySJA_2D = { /* - */
    .next = NULL,
    .width = 4,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_2DTiles,
};

const struct GlyphNew GlySJA_2E = { /* . */
    .next = NULL,
    .width = 2,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_2ETiles,
};

const struct GlyphNew GlySJA_2F = { /* / */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_2FTiles,
};

const struct GlyphNew GlySJA_30 = { /* 0 */
    .next = NULL,
    .width = 7,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_30Tiles,
};

const struct GlyphNew GlySJA_31 = { /* 1 */
    .next = NULL,
    .width = 7,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_31Tiles,
};

const struct GlyphNew GlySJA_32 = { /* 2 */
    .next = NULL,
    .width = 7,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_32Tiles,
};

const struct GlyphNew GlySJA_33 = { /* 3 */
    .next = NULL,
    .width = 7,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_33Tiles,
};

const struct GlyphNew GlySJA_34 = { /* 4 */
    .next = NULL,
    .width = 7,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_34Tiles,
};

const struct GlyphNew GlySJA_35 = { /* 5 */
    .next = NULL,
    .width = 7,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_35Tiles,
};

const struct GlyphNew GlySJA_36 = { /* 6 */
    .next = NULL,
    .width = 7,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_36Tiles,
};

const struct GlyphNew GlySJA_37 = { /* 7 */
    .next = NULL,
    .width = 7,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_37Tiles,
};

const struct GlyphNew GlySJA_38 = { /* 8 */
    .next = NULL,
    .width = 7,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_38Tiles,
};

const struct GlyphNew GlySJA_39 = { /* 9 */
    .next = NULL,
    .width = 7,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_39Tiles,
};

const struct GlyphNew GlySJA_3A = { /* : */
    .next = NULL,
    .width = 2,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_3ATiles,
};

const struct GlyphNew GlySJA_3B = { /* ; */
    .next = NULL,
    .width = 2,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_3BTiles,
};

const struct GlyphNew GlySJA_3C = { /* < */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_3CTiles,
};

const struct GlyphNew GlySJA_3D = { /* = */
    .next = NULL,
    .width = 4,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_3DTiles,
};

const struct GlyphNew GlySJA_3E = { /* > */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_3ETiles,
};

const struct GlyphNew GlySJA_3F = { /* ? */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_3FTiles,
};

const struct GlyphNew GlySJA_40 = { /* @ */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_40Tiles,
};

const struct GlyphNew GlySJA_41 = { /* A */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_41Tiles,
};

const struct GlyphNew GlySJA_42 = { /* B */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_42Tiles,
};

const struct GlyphNew GlySJA_43 = { /* C */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_43Tiles,
};

const struct GlyphNew GlySJA_44 = { /* D */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_44Tiles,
};

const struct GlyphNew GlySJA_45 = { /* E */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_45Tiles,
};

const struct GlyphNew GlySJA_46 = { /* F */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_46Tiles,
};

const struct GlyphNew GlySJA_47 = { /* G */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_47Tiles,
};

const struct GlyphNew GlySJA_48 = { /* H */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_48Tiles,
};

const struct GlyphNew GlySJA_49 = { /* I */
    .next = NULL,
    .width = 2,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_49Tiles,
};

const struct GlyphNew GlySJA_4A = { /* J */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_4ATiles,
};

const struct GlyphNew GlySJA_4B = { /* K */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_4BTiles,
};

const struct GlyphNew GlySJA_4C = { /* L */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_4CTiles,
};

const struct GlyphNew GlySJA_4D = { /* M */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_4DTiles,
};

const struct GlyphNew GlySJA_4E = { /* N */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_4ETiles,
};

const struct GlyphNew GlySJA_4F = { /* O */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_4FTiles,
};

const struct GlyphNew GlySJA_50 = { /* P */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_50Tiles,
};

const struct GlyphNew GlySJA_51 = { /* Q */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_51Tiles,
};

const struct GlyphNew GlySJA_52 = { /* R */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_52Tiles,
};

const struct GlyphNew GlySJA_53 = { /* S */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_53Tiles,
};

const struct GlyphNew GlySJA_54 = { /* T */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_54Tiles,
};

const struct GlyphNew GlySJA_55 = { /* U */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_55Tiles,
};

const struct GlyphNew GlySJA_56 = { /* V */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_56Tiles,
};

const struct GlyphNew GlySJA_57 = { /* W */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_57Tiles,
};

const struct GlyphNew GlySJA_58 = { /* X */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_58Tiles,
};

const struct GlyphNew GlySJA_59 = { /* Y */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_59Tiles,
};

const struct GlyphNew GlySJA_5A = { /* Z */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_5ATiles,
};

const struct GlyphNew GlySJA_5B = { /* [ */
    .next = NULL,
    .width = 3,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_5BTiles,
};

const struct GlyphNew GlySJA_5C = { /* \ */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_5CTiles,
};

const struct GlyphNew GlySJA_5D = { /* ] */
    .next = NULL,
    .width = 3,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_5DTiles,
};

const struct GlyphNew GlySJA_5E = { /* ^ */
    .next = NULL,
    .width = 4,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_5ETiles,
};

const struct GlyphNew GlySJA_5F = { /* _ */
    .next = NULL,
    .width = 4,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_5FTiles,
};

const struct GlyphNew GlySJA_60 = { /* ` */
    .next = NULL,
    .width = 2,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_60Tiles,
};

const struct GlyphNew GlySJA_61 = { /* a */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_61Tiles,
};

const struct GlyphNew GlySJA_62 = { /* b */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_62Tiles,
};

const struct GlyphNew GlySJA_63 = { /* c */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_63Tiles,
};

const struct GlyphNew GlySJA_64 = { /* d */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_64Tiles,
};

const struct GlyphNew GlySJA_65 = { /* e */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_65Tiles,
};

const struct GlyphNew GlySJA_66 = { /* f */
    .next = NULL,
    .width = 4,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_66Tiles,
};

const struct GlyphNew GlySJA_67 = { /* g */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_67Tiles,
};

const struct GlyphNew GlySJA_68 = { /* h */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_68Tiles,
};

const struct GlyphNew GlySJA_69 = { /* i */
    .next = NULL,
    .width = 2,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_69Tiles,
};

const struct GlyphNew GlySJA_6A = { /* j */
    .next = NULL,
    .width = 4,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_6ATiles,
};

const struct GlyphNew GlySJA_6B = { /* k */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_6BTiles,
};

const struct GlyphNew GlySJA_6C = { /* l */
    .next = NULL,
    .width = 2,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_6CTiles,
};

const struct GlyphNew GlySJA_6D = { /* m */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_6DTiles,
};

const struct GlyphNew GlySJA_6E = { /* n */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_6ETiles,
};

const struct GlyphNew GlySJA_6F = { /* o */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_6FTiles,
};

const struct GlyphNew GlySJA_70 = { /* p */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_70Tiles,
};

const struct GlyphNew GlySJA_71 = { /* q */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_71Tiles,
};

const struct GlyphNew GlySJA_72 = { /* r */
    .next = NULL,
    .width = 4,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_72Tiles,
};

const struct GlyphNew GlySJA_73 = { /* s */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_73Tiles,
};

const struct GlyphNew GlySJA_74 = { /* t */
    .next = NULL,
    .width = 4,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_74Tiles,
};

const struct GlyphNew GlySJA_75 = { /* u */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_75Tiles,
};

const struct GlyphNew GlySJA_76 = { /* v */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_76Tiles,
};

const struct GlyphNew GlySJA_77 = { /* w */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_77Tiles,
};

const struct GlyphNew GlySJA_78 = { /* x */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_78Tiles,
};

const struct GlyphNew GlySJA_79 = { /* y */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_79Tiles,
};

const struct GlyphNew GlySJA_7A = { /* z */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_7ATiles,
};

const struct GlyphNew GlySJA_7B = { /* { */
    .next = NULL,
    .width = 4,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_7BTiles,
};

const struct GlyphNew GlySJA_7C = { /* | */
    .next = NULL,
    .width = 2,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_7CTiles,
};

const struct GlyphNew GlySJA_7D = { /* } */
    .next = NULL,
    .width = 4,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_7DTiles,
};

const struct GlyphNew GlySJA_7E = { /* ~ */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_7ETiles,
};

const struct GlyphNew GlySJA_7F = { /*  */
    .next = NULL,
    .width = 6,
    .utf_byte_2 = 0x00,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_7FTiles,
};

const struct GlyphNew GlySJA_C28C = { /*  */
    .next = NULL,
    .width = 7,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C28CTiles,
};

const struct GlyphNew GlySJA_C291 = { /*  */
    .next = &GlySJA_C28C,
    .width = 3,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C291Tiles,
};

const struct GlyphNew GlySJA_C292 = { /*  */
    .next = &GlySJA_C291,
    .width = 2,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C292Tiles,
};

const struct GlyphNew GlySJA_C293 = { /*  */
    .next = &GlySJA_C292,
    .width = 5,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C293Tiles,
};

const struct GlyphNew GlySJA_C294 = { /*  */
    .next = &GlySJA_C293,
    .width = 4,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C294Tiles,
};

const struct GlyphNew GlySJA_C29C = { /*  */
    .next = &GlySJA_C294,
    .width = 7,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C29CTiles,
};

const struct GlyphNew GlySJA_C2A1 = { /* ¡ */
    .next = &GlySJA_C29C,
    .width = 4,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C2A1Tiles,
};

const struct GlyphNew GlySJA_C2AA = { /* ª */
    .next = &GlySJA_C2A1,
    .width = 5,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C2AATiles,
};

const struct GlyphNew GlySJA_C2AB = { /* « */
    .next = &GlySJA_C2AA,
    .width = 6,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C2ABTiles,
};

const struct GlyphNew GlySJA_C2BA = { /* º */
    .next = &GlySJA_C2AB,
    .width = 4,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C2BATiles,
};

const struct GlyphNew GlySJA_C2BB = { /* » */
    .next = &GlySJA_C2BA,
    .width = 6,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C2BBTiles,
};

const struct GlyphNew GlySJA_C2BF = { /* ¿ */
    .next = &GlySJA_C2BB,
    .width = 6,
    .utf_byte_2 = 0xbf,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C2BFTiles,
};

const struct GlyphNew GlySJA_C380 = { /* À */
    .next = NULL,
    .width = 5,
    .utf_byte_2 = 0x80,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C380Tiles,
};

const struct GlyphNew GlySJA_C381 = { /* Á */
    .next = &GlySJA_C380,
    .width = 5,
    .utf_byte_2 = 0x81,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C381Tiles,
};

const struct GlyphNew GlySJA_C382 = { /* Â */
    .next = &GlySJA_C381,
    .width = 5,
    .utf_byte_2 = 0x82,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C382Tiles,
};

const struct GlyphNew GlySJA_C384 = { /* Ä */
    .next = &GlySJA_C382,
    .width = 5,
    .utf_byte_2 = 0x84,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C384Tiles,
};

const struct GlyphNew GlySJA_C387 = { /* Ç */
    .next = &GlySJA_C384,
    .width = 6,
    .utf_byte_2 = 0x87,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C387Tiles,
};

const struct GlyphNew GlySJA_C388 = { /* È */
    .next = &GlySJA_C387,
    .width = 5,
    .utf_byte_2 = 0x88,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C388Tiles,
};

const struct GlyphNew GlySJA_C389 = { /* É */
    .next = &GlySJA_C388,
    .width = 5,
    .utf_byte_2 = 0x89,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C389Tiles,
};

const struct GlyphNew GlySJA_C38A = { /* Ê */
    .next = &GlySJA_C389,
    .width = 5,
    .utf_byte_2 = 0x8a,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C38ATiles,
};

const struct GlyphNew GlySJA_C38B = { /* Ë */
    .next = &GlySJA_C38A,
    .width = 5,
    .utf_byte_2 = 0x8b,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C38BTiles,
};

const struct GlyphNew GlySJA_C38C = { /* Ì */
    .next = &GlySJA_C38B,
    .width = 3,
    .utf_byte_2 = 0x8c,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C38CTiles,
};

const struct GlyphNew GlySJA_C38D = { /* Í */
    .next = &GlySJA_C38C,
    .width = 3,
    .utf_byte_2 = 0x8d,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C38DTiles,
};

const struct GlyphNew GlySJA_C38E = { /* Î */
    .next = &GlySJA_C38D,
    .width = 4,
    .utf_byte_2 = 0x8e,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C38ETiles,
};

const struct GlyphNew GlySJA_C38F = { /* Ï */
    .next = &GlySJA_C38E,
    .width = 4,
    .utf_byte_2 = 0x8f,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C38FTiles,
};

const struct GlyphNew GlySJA_C391 = { /* Ñ */
    .next = &GlySJA_C38F,
    .width = 5,
    .utf_byte_2 = 0x91,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C391Tiles,
};

const struct GlyphNew GlySJA_C392 = { /* Ò */
    .next = &GlySJA_C391,
    .width = 5,
    .utf_byte_2 = 0x92,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C392Tiles,
};

const struct GlyphNew GlySJA_C393 = { /* Ó */
    .next = &GlySJA_C392,
    .width = 5,
    .utf_byte_2 = 0x93,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C393Tiles,
};

const struct GlyphNew GlySJA_C394 = { /* Ô */
    .next = &GlySJA_C393,
    .width = 5,
    .utf_byte_2 = 0x94,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C394Tiles,
};

const struct GlyphNew GlySJA_C396 = { /* Ö */
    .next = &GlySJA_C394,
    .width = 5,
    .utf_byte_2 = 0x96,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C396Tiles,
};

const struct GlyphNew GlySJA_C399 = { /* Ù */
    .next = &GlySJA_C396,
    .width = 5,
    .utf_byte_2 = 0x99,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C399Tiles,
};

const struct GlyphNew GlySJA_C39A = { /* Ú */
    .next = &GlySJA_C399,
    .width = 5,
    .utf_byte_2 = 0x9a,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C39ATiles,
};

const struct GlyphNew GlySJA_C39B = { /* Û */
    .next = &GlySJA_C39A,
    .width = 5,
    .utf_byte_2 = 0x9b,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C39BTiles,
};

const struct GlyphNew GlySJA_C39C = { /* Ü */
    .next = &GlySJA_C39B,
    .width = 5,
    .utf_byte_2 = 0x9c,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C39CTiles,
};

const struct GlyphNew GlySJA_C39F = { /* ß */
    .next = &GlySJA_C39C,
    .width = 6,
    .utf_byte_2 = 0x9f,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C39FTiles,
};

const struct GlyphNew GlySJA_C3A0 = { /* à */
    .next = &GlySJA_C39F,
    .width = 6,
    .utf_byte_2 = 0xa0,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C3A0Tiles,
};

const struct GlyphNew GlySJA_C3A1 = { /* á */
    .next = &GlySJA_C3A0,
    .width = 6,
    .utf_byte_2 = 0xa1,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C3A1Tiles,
};

const struct GlyphNew GlySJA_C3A2 = { /* â */
    .next = &GlySJA_C3A1,
    .width = 6,
    .utf_byte_2 = 0xa2,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C3A2Tiles,
};

const struct GlyphNew GlySJA_C3A4 = { /* ä */
    .next = &GlySJA_C3A2,
    .width = 6,
    .utf_byte_2 = 0xa4,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C3A4Tiles,
};

const struct GlyphNew GlySJA_C3A7 = { /* ç */
    .next = &GlySJA_C3A4,
    .width = 5,
    .utf_byte_2 = 0xa7,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C3A7Tiles,
};

const struct GlyphNew GlySJA_C3A8 = { /* è */
    .next = &GlySJA_C3A7,
    .width = 5,
    .utf_byte_2 = 0xa8,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C3A8Tiles,
};

const struct GlyphNew GlySJA_C3A9 = { /* é */
    .next = &GlySJA_C3A8,
    .width = 5,
    .utf_byte_2 = 0xa9,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C3A9Tiles,
};

const struct GlyphNew GlySJA_C3AA = { /* ê */
    .next = &GlySJA_C3A9,
    .width = 5,
    .utf_byte_2 = 0xaa,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C3AATiles,
};

const struct GlyphNew GlySJA_C3AB = { /* ë */
    .next = &GlySJA_C3AA,
    .width = 5,
    .utf_byte_2 = 0xab,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C3ABTiles,
};

const struct GlyphNew GlySJA_C3AC = { /* ì */
    .next = &GlySJA_C3AB,
    .width = 3,
    .utf_byte_2 = 0xac,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C3ACTiles,
};

const struct GlyphNew GlySJA_C3AD = { /* í */
    .next = &GlySJA_C3AC,
    .width = 3,
    .utf_byte_2 = 0xad,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C3ADTiles,
};

const struct GlyphNew GlySJA_C3AE = { /* î */
    .next = &GlySJA_C3AD,
    .width = 4,
    .utf_byte_2 = 0xae,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C3AETiles,
};

const struct GlyphNew GlySJA_C3AF = { /* ï */
    .next = &GlySJA_C3AE,
    .width = 4,
    .utf_byte_2 = 0xaf,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C3AFTiles,
};

const struct GlyphNew GlySJA_C3B1 = { /* ñ */
    .next = &GlySJA_C3AF,
    .width = 5,
    .utf_byte_2 = 0xb1,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C3B1Tiles,
};

const struct GlyphNew GlySJA_C3B2 = { /* ò */
    .next = &GlySJA_C3B1,
    .width = 5,
    .utf_byte_2 = 0xb2,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C3B2Tiles,
};

const struct GlyphNew GlySJA_C3B3 = { /* ó */
    .next = &GlySJA_C3B2,
    .width = 5,
    .utf_byte_2 = 0xb3,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C3B3Tiles,
};

const struct GlyphNew GlySJA_C3B4 = { /* ô */
    .next = &GlySJA_C3B3,
    .width = 5,
    .utf_byte_2 = 0xb4,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C3B4Tiles,
};

const struct GlyphNew GlySJA_C3B6 = { /* ö */
    .next = &GlySJA_C3B4,
    .width = 5,
    .utf_byte_2 = 0xb6,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C3B6Tiles,
};

const struct GlyphNew GlySJA_C3B9 = { /* ù */
    .next = &GlySJA_C3B6,
    .width = 5,
    .utf_byte_2 = 0xb9,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C3B9Tiles,
};

const struct GlyphNew GlySJA_C3BA = { /* ú */
    .next = &GlySJA_C3B9,
    .width = 5,
    .utf_byte_2 = 0xba,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C3BATiles,
};

const struct GlyphNew GlySJA_C3BB = { /* û */
    .next = &GlySJA_C3BA,
    .width = 5,
    .utf_byte_2 = 0xbb,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C3BBTiles,
};

const struct GlyphNew GlySJA_C3BC = { /* ü */
    .next = &GlySJA_C3BB,
    .width = 5,
    .utf_byte_2 = 0xbc,
    .utf_byte_3 = 0x00,
    .utf_byte_4 = 0x00,
    .bitmap = GlySJA_C3BCTiles,
};

struct GlyphNew const * const GlySJANew[0x100 - 0x20] = {
    [0xe3 - 0x20] = &GlySJA_E38293,
    [0xe2 - 0x20] = &GlySJA_E28A87,
    [0xe6 - 0x20] = &GlySJA_E694B9,
    [0xe9 - 0x20] = &GlySJA_E9A3B2,
    [0xe5 - 0x20] = &GlySJA_E591A8,
    [0xe8 - 0x20] = &GlySJA_E88289,
    [0xe7 - 0x20] = &GlySJA_E7B79A,
    [0xef - 0x20] = &GlySJA_EFBD9A,
    [0xe4 - 0x20] = &GlySJA_E4BEAF,
    [0xce - 0x20] = &GlySJA_CEB5,
    [0x20 - 0x20] = &GlySJA_20,
    [0x21 - 0x20] = &GlySJA_21,
    [0x22 - 0x20] = &GlySJA_22,
    [0x23 - 0x20] = &GlySJA_23,
    [0x24 - 0x20] = &GlySJA_24,
    [0x25 - 0x20] = &GlySJA_25,
    [0x26 - 0x20] = &GlySJA_26,
    [0x27 - 0x20] = &GlySJA_27,
    [0x28 - 0x20] = &GlySJA_28,
    [0x29 - 0x20] = &GlySJA_29,
    [0x2a - 0x20] = &GlySJA_2A,
    [0x2b - 0x20] = &GlySJA_2B,
    [0x2c - 0x20] = &GlySJA_2C,
    [0x2d - 0x20] = &GlySJA_2D,
    [0x2e - 0x20] = &GlySJA_2E,
    [0x2f - 0x20] = &GlySJA_2F,
    [0x30 - 0x20] = &GlySJA_30,
    [0x31 - 0x20] = &GlySJA_31,
    [0x32 - 0x20] = &GlySJA_32,
    [0x33 - 0x20] = &GlySJA_33,
    [0x34 - 0x20] = &GlySJA_34,
    [0x35 - 0x20] = &GlySJA_35,
    [0x36 - 0x20] = &GlySJA_36,
    [0x37 - 0x20] = &GlySJA_37,
    [0x38 - 0x20] = &GlySJA_38,
    [0x39 - 0x20] = &GlySJA_39,
    [0x3a - 0x20] = &GlySJA_3A,
    [0x3b - 0x20] = &GlySJA_3B,
    [0x3c - 0x20] = &GlySJA_3C,
    [0x3d - 0x20] = &GlySJA_3D,
    [0x3e - 0x20] = &GlySJA_3E,
    [0x3f - 0x20] = &GlySJA_3F,
    [0x40 - 0x20] = &GlySJA_40,
    [0x41 - 0x20] = &GlySJA_41,
    [0x42 - 0x20] = &GlySJA_42,
    [0x43 - 0x20] = &GlySJA_43,
    [0x44 - 0x20] = &GlySJA_44,
    [0x45 - 0x20] = &GlySJA_45,
    [0x46 - 0x20] = &GlySJA_46,
    [0x47 - 0x20] = &GlySJA_47,
    [0x48 - 0x20] = &GlySJA_48,
    [0x49 - 0x20] = &GlySJA_49,
    [0x4a - 0x20] = &GlySJA_4A,
    [0x4b - 0x20] = &GlySJA_4B,
    [0x4c - 0x20] = &GlySJA_4C,
    [0x4d - 0x20] = &GlySJA_4D,
    [0x4e - 0x20] = &GlySJA_4E,
    [0x4f - 0x20] = &GlySJA_4F,
    [0x50 - 0x20] = &GlySJA_50,
    [0x51 - 0x20] = &GlySJA_51,
    [0x52 - 0x20] = &GlySJA_52,
    [0x53 - 0x20] = &GlySJA_53,
    [0x54 - 0x20] = &GlySJA_54,
    [0x55 - 0x20] = &GlySJA_55,
    [0x56 - 0x20] = &GlySJA_56,
    [0x57 - 0x20] = &GlySJA_57,
    [0x58 - 0x20] = &GlySJA_58,
    [0x59 - 0x20] = &GlySJA_59,
    [0x5a - 0x20] = &GlySJA_5A,
    [0x5b - 0x20] = &GlySJA_5B,
    [0x5c - 0x20] = &GlySJA_5C,
    [0x5d - 0x20] = &GlySJA_5D,
    [0x5e - 0x20] = &GlySJA_5E,
    [0x5f - 0x20] = &GlySJA_5F,
    [0x60 - 0x20] = &GlySJA_60,
    [0x61 - 0x20] = &GlySJA_61,
    [0x62 - 0x20] = &GlySJA_62,
    [0x63 - 0x20] = &GlySJA_63,
    [0x64 - 0x20] = &GlySJA_64,
    [0x65 - 0x20] = &GlySJA_65,
    [0x66 - 0x20] = &GlySJA_66,
    [0x67 - 0x20] = &GlySJA_67,
    [0x68 - 0x20] = &GlySJA_68,
    [0x69 - 0x20] = &GlySJA_69,
    [0x6a - 0x20] = &GlySJA_6A,
    [0x6b - 0x20] = &GlySJA_6B,
    [0x6c - 0x20] = &GlySJA_6C,
    [0x6d - 0x20] = &GlySJA_6D,
    [0x6e - 0x20] = &GlySJA_6E,
    [0x6f - 0x20] = &GlySJA_6F,
    [0x70 - 0x20] = &GlySJA_70,
    [0x71 - 0x20] = &GlySJA_71,
    [0x72 - 0x20] = &GlySJA_72,
    [0x73 - 0x20] = &GlySJA_73,
    [0x74 - 0x20] = &GlySJA_74,
    [0x75 - 0x20] = &GlySJA_75,
    [0x76 - 0x20] = &GlySJA_76,
    [0x77 - 0x20] = &GlySJA_77,
    [0x78 - 0x20] = &GlySJA_78,
    [0x79 - 0x20] = &GlySJA_79,
    [0x7a - 0x20] = &GlySJA_7A,
    [0x7b - 0x20] = &GlySJA_7B,
    [0x7c - 0x20] = &GlySJA_7C,
    [0x7d - 0x20] = &GlySJA_7D,
    [0x7e - 0x20] = &GlySJA_7E,
    [0x7f - 0x20] = &GlySJA_7F,
    [0xc2 - 0x20] = &GlySJA_C2BF,
    [0xc3 - 0x20] = &GlySJA_C3BC,
};
