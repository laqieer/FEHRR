#include "unknown_types.h"

const u16 S0102MapChangedTiles[] = {
    4 * 147, 4 * 148, 4 * 179, 4 * 180, // 0
    4 * 149, 4 * 150, 4 * 181, 4 * 182, // 1
};

const struct MapChangeInfo S0102MapChanges[] = {
    {
        .id = 0,
        .x = 6,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S0102MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 8,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S0102MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = -1,
    },
};

const u16 S0302MapChangedTiles[] = {
    4 * 79, 4 * 80, 4 * 111, 4 * 112, // 0
    4 * 85, 4 * 86, 4 * 117, 4 * 118, // 1
    4 * 143, 4 * 144, 4 * 175, 4 * 176, // 2
    4 * 145, 4 * 146, 4 * 177, 4 * 178, // 3
    4 * 147, 4 * 148, 4 * 179, 4 * 180, // 4
    4 * 149, 4 * 150, 4 * 181, 4 * 182, // 5
    4 * 269, 4 * 270, 4 * 301, 4 * 302, // 6
    4 * 271, 4 * 272, 4 * 303, 4 * 304, // 7
    4 * 277, 4 * 278, 4 * 309, 4 * 310, // 8
    4 * 279, 4 * 280, 4 * 311, 4 * 312, // 9
};

const struct MapChangeInfo S0302MapChanges[] = {
    {
        .id = 0,
        .x = 2,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S0302MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 8,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S0302MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 2,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S0302MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = 3,
        .x = 4,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S0302MapChangedTiles[2 * 2 * 3],
    },
    {
        .id = 4,
        .x = 6,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S0302MapChangedTiles[2 * 2 * 4],
    },
    {
        .id = 5,
        .x = 8,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S0302MapChangedTiles[2 * 2 * 5],
    },
    {
        .id = 6,
        .x = 0,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S0302MapChangedTiles[2 * 2 * 6],
    },
    {
        .id = 7,
        .x = 2,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S0302MapChangedTiles[2 * 2 * 7],
    },
    {
        .id = 8,
        .x = 8,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S0302MapChangedTiles[2 * 2 * 8],
    },
    {
        .id = 9,
        .x = 10,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S0302MapChangedTiles[2 * 2 * 9],
    },
    {
        .id = -1,
    },
};

const u16 S0504MapChangedTiles[] = {
    4 * 13, 4 * 14, 4 * 45, 4 * 46, // 0
    4 * 15, 4 * 16, 4 * 47, 4 * 48, // 1
    4 * 17, 4 * 18, 4 * 49, 4 * 50, // 2
    4 * 83, 4 * 84, 4 * 115, 4 * 116, // 3
    4 * 143, 4 * 144, 4 * 175, 4 * 176, // 4
    4 * 211, 4 * 212, 4 * 243, 4 * 244, // 5
    4 * 271, 4 * 272, 4 * 303, 4 * 304, // 6
    4 * 339, 4 * 340, 4 * 371, 4 * 372, // 7
    4 * 397, 4 * 398, 4 * 429, 4 * 430, // 8
    4 * 401, 4 * 402, 4 * 433, 4 * 434, // 9
};

const struct MapChangeInfo S0504MapChanges[] = {
    {
        .id = 0,
        .x = 0,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S0504MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 2,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S0504MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 4,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S0504MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = 3,
        .x = 6,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S0504MapChangedTiles[2 * 2 * 3],
    },
    {
        .id = 4,
        .x = 2,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S0504MapChangedTiles[2 * 2 * 4],
    },
    {
        .id = 5,
        .x = 6,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S0504MapChangedTiles[2 * 2 * 5],
    },
    {
        .id = 6,
        .x = 2,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S0504MapChangedTiles[2 * 2 * 6],
    },
    {
        .id = 7,
        .x = 6,
        .y = 10,
        .width = 2,
        .height = 2,
        .metatiles = &S0504MapChangedTiles[2 * 2 * 7],
    },
    {
        .id = 8,
        .x = 0,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S0504MapChangedTiles[2 * 2 * 8],
    },
    {
        .id = 9,
        .x = 4,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S0504MapChangedTiles[2 * 2 * 9],
    },
    {
        .id = -1,
    },
};

const u16 S0602MapChangedTiles[] = {
    4 * 13, 4 * 14, 4 * 45, 4 * 46, // 0
    4 * 15, 4 * 16, 4 * 47, 4 * 48, // 1
    4 * 17, 4 * 18, 4 * 49, 4 * 50, // 2
    4 * 23, 4 * 24, 4 * 55, 4 * 56, // 3
    4 * 77, 4 * 78, 4 * 109, 4 * 110, // 4
    4 * 87, 4 * 88, 4 * 119, 4 * 120, // 5
    4 * 145, 4 * 146, 4 * 177, 4 * 178, // 6
    4 * 147, 4 * 148, 4 * 179, 4 * 180, // 7
    4 * 149, 4 * 150, 4 * 181, 4 * 182, // 8
    4 * 151, 4 * 152, 4 * 183, 4 * 184, // 9
    4 * 211, 4 * 212, 4 * 243, 4 * 244, // 10
    4 * 215, 4 * 216, 4 * 247, 4 * 248, // 11
    4 * 269, 4 * 270, 4 * 301, 4 * 302, // 12
    4 * 271, 4 * 272, 4 * 303, 4 * 304, // 13
    4 * 279, 4 * 280, 4 * 311, 4 * 312, // 14
    4 * 335, 4 * 336, 4 * 367, 4 * 368, // 15
    4 * 339, 4 * 340, 4 * 371, 4 * 372, // 16
    4 * 343, 4 * 344, 4 * 375, 4 * 376, // 17
    4 * 399, 4 * 400, 4 * 431, 4 * 432, // 18
    4 * 401, 4 * 402, 4 * 433, 4 * 434, // 19
    4 * 403, 4 * 404, 4 * 435, 4 * 436, // 20
    4 * 407, 4 * 408, 4 * 439, 4 * 440, // 21
};

const struct MapChangeInfo S0602MapChanges[] = {
    {
        .id = 0,
        .x = 0,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S0602MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 2,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S0602MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 4,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S0602MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = 3,
        .x = 10,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S0602MapChangedTiles[2 * 2 * 3],
    },
    {
        .id = 4,
        .x = 0,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S0602MapChangedTiles[2 * 2 * 4],
    },
    {
        .id = 5,
        .x = 10,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S0602MapChangedTiles[2 * 2 * 5],
    },
    {
        .id = 6,
        .x = 4,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S0602MapChangedTiles[2 * 2 * 6],
    },
    {
        .id = 7,
        .x = 6,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S0602MapChangedTiles[2 * 2 * 7],
    },
    {
        .id = 8,
        .x = 8,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S0602MapChangedTiles[2 * 2 * 8],
    },
    {
        .id = 9,
        .x = 10,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S0602MapChangedTiles[2 * 2 * 9],
    },
    {
        .id = 10,
        .x = 6,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S0602MapChangedTiles[2 * 2 * 10],
    },
    {
        .id = 11,
        .x = 10,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S0602MapChangedTiles[2 * 2 * 11],
    },
    {
        .id = 12,
        .x = 0,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S0602MapChangedTiles[2 * 2 * 12],
    },
    {
        .id = 13,
        .x = 2,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S0602MapChangedTiles[2 * 2 * 13],
    },
    {
        .id = 14,
        .x = 10,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S0602MapChangedTiles[2 * 2 * 14],
    },
    {
        .id = 15,
        .x = 2,
        .y = 10,
        .width = 2,
        .height = 2,
        .metatiles = &S0602MapChangedTiles[2 * 2 * 15],
    },
    {
        .id = 16,
        .x = 6,
        .y = 10,
        .width = 2,
        .height = 2,
        .metatiles = &S0602MapChangedTiles[2 * 2 * 16],
    },
    {
        .id = 17,
        .x = 10,
        .y = 10,
        .width = 2,
        .height = 2,
        .metatiles = &S0602MapChangedTiles[2 * 2 * 17],
    },
    {
        .id = 18,
        .x = 2,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S0602MapChangedTiles[2 * 2 * 18],
    },
    {
        .id = 19,
        .x = 4,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S0602MapChangedTiles[2 * 2 * 19],
    },
    {
        .id = 20,
        .x = 6,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S0602MapChangedTiles[2 * 2 * 20],
    },
    {
        .id = 21,
        .x = 10,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S0602MapChangedTiles[2 * 2 * 21],
    },
    {
        .id = -1,
    },
};

const u16 S0702MapChangedTiles[] = {
    4 * 141, 4 * 142, 4 * 173, 4 * 174, // 0
    4 * 209, 4 * 210, 4 * 241, 4 * 242, // 1
    4 * 211, 4 * 212, 4 * 243, 4 * 244, // 2
};

const struct MapChangeInfo S0702MapChanges[] = {
    {
        .id = 0,
        .x = 0,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S0702MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 4,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S0702MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 6,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S0702MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = -1,
    },
};

const u16 S0704MapChangedTiles[] = {
    4 * 79, 4 * 80, 4 * 111, 4 * 112, // 0
    4 * 81, 4 * 82, 4 * 113, 4 * 114, // 1
    4 * 83, 4 * 84, 4 * 115, 4 * 116, // 2
    4 * 85, 4 * 86, 4 * 117, 4 * 118, // 3
    4 * 143, 4 * 144, 4 * 175, 4 * 176, // 4
    4 * 149, 4 * 150, 4 * 181, 4 * 182, // 5
    4 * 151, 4 * 152, 4 * 183, 4 * 184, // 6
    4 * 205, 4 * 206, 4 * 237, 4 * 238, // 7
    4 * 207, 4 * 208, 4 * 239, 4 * 240, // 8
    4 * 213, 4 * 214, 4 * 245, 4 * 246, // 9
    4 * 271, 4 * 272, 4 * 303, 4 * 304, // 10
    4 * 277, 4 * 278, 4 * 309, 4 * 310, // 11
    4 * 335, 4 * 336, 4 * 367, 4 * 368, // 12
    4 * 337, 4 * 338, 4 * 369, 4 * 370, // 13
    4 * 339, 4 * 340, 4 * 371, 4 * 372, // 14
    4 * 341, 4 * 342, 4 * 373, 4 * 374, // 15
    4 * 403, 4 * 404, 4 * 435, 4 * 436, // 16
    4 * 465, 4 * 466, 4 * 497, 4 * 498, // 17
    4 * 467, 4 * 468, 4 * 499, 4 * 500, // 18
};

const struct MapChangeInfo S0704MapChanges[] = {
    {
        .id = 0,
        .x = 2,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S0704MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 4,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S0704MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 6,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S0704MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = 3,
        .x = 8,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S0704MapChangedTiles[2 * 2 * 3],
    },
    {
        .id = 4,
        .x = 2,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S0704MapChangedTiles[2 * 2 * 4],
    },
    {
        .id = 5,
        .x = 8,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S0704MapChangedTiles[2 * 2 * 5],
    },
    {
        .id = 6,
        .x = 10,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S0704MapChangedTiles[2 * 2 * 6],
    },
    {
        .id = 7,
        .x = 0,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S0704MapChangedTiles[2 * 2 * 7],
    },
    {
        .id = 8,
        .x = 2,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S0704MapChangedTiles[2 * 2 * 8],
    },
    {
        .id = 9,
        .x = 8,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S0704MapChangedTiles[2 * 2 * 9],
    },
    {
        .id = 10,
        .x = 2,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S0704MapChangedTiles[2 * 2 * 10],
    },
    {
        .id = 11,
        .x = 8,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S0704MapChangedTiles[2 * 2 * 11],
    },
    {
        .id = 12,
        .x = 2,
        .y = 10,
        .width = 2,
        .height = 2,
        .metatiles = &S0704MapChangedTiles[2 * 2 * 12],
    },
    {
        .id = 13,
        .x = 4,
        .y = 10,
        .width = 2,
        .height = 2,
        .metatiles = &S0704MapChangedTiles[2 * 2 * 13],
    },
    {
        .id = 14,
        .x = 6,
        .y = 10,
        .width = 2,
        .height = 2,
        .metatiles = &S0704MapChangedTiles[2 * 2 * 14],
    },
    {
        .id = 15,
        .x = 8,
        .y = 10,
        .width = 2,
        .height = 2,
        .metatiles = &S0704MapChangedTiles[2 * 2 * 15],
    },
    {
        .id = 16,
        .x = 6,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S0704MapChangedTiles[2 * 2 * 16],
    },
    {
        .id = 17,
        .x = 4,
        .y = 14,
        .width = 2,
        .height = 2,
        .metatiles = &S0704MapChangedTiles[2 * 2 * 17],
    },
    {
        .id = 18,
        .x = 6,
        .y = 14,
        .width = 2,
        .height = 2,
        .metatiles = &S0704MapChangedTiles[2 * 2 * 18],
    },
    {
        .id = -1,
    },
};

const u16 S0705MapChangedTiles[] = {
    4 * 15, 4 * 16, 4 * 47, 4 * 48, // 0
    4 * 21, 4 * 22, 4 * 53, 4 * 54, // 1
    4 * 79, 4 * 80, 4 * 111, 4 * 112, // 2
    4 * 85, 4 * 86, 4 * 117, 4 * 118, // 3
    4 * 143, 4 * 144, 4 * 175, 4 * 176, // 4
    4 * 149, 4 * 150, 4 * 181, 4 * 182, // 5
    4 * 207, 4 * 208, 4 * 239, 4 * 240, // 6
    4 * 209, 4 * 210, 4 * 241, 4 * 242, // 7
    4 * 211, 4 * 212, 4 * 243, 4 * 244, // 8
    4 * 213, 4 * 214, 4 * 245, 4 * 246, // 9
    4 * 271, 4 * 272, 4 * 303, 4 * 304, // 10
    4 * 277, 4 * 278, 4 * 309, 4 * 310, // 11
    4 * 399, 4 * 400, 4 * 431, 4 * 432, // 12
    4 * 405, 4 * 406, 4 * 437, 4 * 438, // 13
    4 * 465, 4 * 466, 4 * 497, 4 * 498, // 14
    4 * 467, 4 * 468, 4 * 499, 4 * 500, // 15
};

const struct MapChangeInfo S0705MapChanges[] = {
    {
        .id = 0,
        .x = 2,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S0705MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 8,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S0705MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 2,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S0705MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = 3,
        .x = 8,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S0705MapChangedTiles[2 * 2 * 3],
    },
    {
        .id = 4,
        .x = 2,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S0705MapChangedTiles[2 * 2 * 4],
    },
    {
        .id = 5,
        .x = 8,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S0705MapChangedTiles[2 * 2 * 5],
    },
    {
        .id = 6,
        .x = 2,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S0705MapChangedTiles[2 * 2 * 6],
    },
    {
        .id = 7,
        .x = 4,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S0705MapChangedTiles[2 * 2 * 7],
    },
    {
        .id = 8,
        .x = 6,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S0705MapChangedTiles[2 * 2 * 8],
    },
    {
        .id = 9,
        .x = 8,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S0705MapChangedTiles[2 * 2 * 9],
    },
    {
        .id = 10,
        .x = 2,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S0705MapChangedTiles[2 * 2 * 10],
    },
    {
        .id = 11,
        .x = 8,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S0705MapChangedTiles[2 * 2 * 11],
    },
    {
        .id = 12,
        .x = 2,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S0705MapChangedTiles[2 * 2 * 12],
    },
    {
        .id = 13,
        .x = 8,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S0705MapChangedTiles[2 * 2 * 13],
    },
    {
        .id = 14,
        .x = 4,
        .y = 14,
        .width = 2,
        .height = 2,
        .metatiles = &S0705MapChangedTiles[2 * 2 * 14],
    },
    {
        .id = 15,
        .x = 6,
        .y = 14,
        .width = 2,
        .height = 2,
        .metatiles = &S0705MapChangedTiles[2 * 2 * 15],
    },
    {
        .id = -1,
    },
};

const u16 S0803MapChangedTiles[] = {
    4 * 13, 4 * 14, 4 * 45, 4 * 46, // 0
    4 * 17, 4 * 18, 4 * 49, 4 * 50, // 1
    4 * 77, 4 * 78, 4 * 109, 4 * 110, // 2
    4 * 79, 4 * 80, 4 * 111, 4 * 112, // 3
    4 * 81, 4 * 82, 4 * 113, 4 * 114, // 4
    4 * 83, 4 * 84, 4 * 115, 4 * 116, // 5
    4 * 85, 4 * 86, 4 * 117, 4 * 118, // 6
    4 * 141, 4 * 142, 4 * 173, 4 * 174, // 7
    4 * 145, 4 * 146, 4 * 177, 4 * 178, // 8
    4 * 149, 4 * 150, 4 * 181, 4 * 182, // 9
    4 * 205, 4 * 206, 4 * 237, 4 * 238, // 10
    4 * 207, 4 * 208, 4 * 239, 4 * 240, // 11
    4 * 209, 4 * 210, 4 * 241, 4 * 242, // 12
    4 * 211, 4 * 212, 4 * 243, 4 * 244, // 13
    4 * 213, 4 * 214, 4 * 245, 4 * 246, // 14
    4 * 215, 4 * 216, 4 * 247, 4 * 248, // 15
    4 * 269, 4 * 270, 4 * 301, 4 * 302, // 16
    4 * 273, 4 * 274, 4 * 305, 4 * 306, // 17
    4 * 277, 4 * 278, 4 * 309, 4 * 310, // 18
    4 * 333, 4 * 334, 4 * 365, 4 * 366, // 19
    4 * 335, 4 * 336, 4 * 367, 4 * 368, // 20
    4 * 337, 4 * 338, 4 * 369, 4 * 370, // 21
    4 * 339, 4 * 340, 4 * 371, 4 * 372, // 22
    4 * 341, 4 * 342, 4 * 373, 4 * 374, // 23
    4 * 343, 4 * 344, 4 * 375, 4 * 376, // 24
    4 * 397, 4 * 398, 4 * 429, 4 * 430, // 25
    4 * 401, 4 * 402, 4 * 433, 4 * 434, // 26
    4 * 405, 4 * 406, 4 * 437, 4 * 438, // 27
    4 * 461, 4 * 462, 4 * 493, 4 * 494, // 28
    4 * 463, 4 * 464, 4 * 495, 4 * 496, // 29
    4 * 465, 4 * 466, 4 * 497, 4 * 498, // 30
    4 * 467, 4 * 468, 4 * 499, 4 * 500, // 31
    4 * 469, 4 * 470, 4 * 501, 4 * 502, // 32
    4 * 471, 4 * 472, 4 * 503, 4 * 504, // 33
};

const struct MapChangeInfo S0803MapChanges[] = {
    {
        .id = 0,
        .x = 0,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S0803MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 4,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S0803MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 0,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S0803MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = 3,
        .x = 2,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S0803MapChangedTiles[2 * 2 * 3],
    },
    {
        .id = 4,
        .x = 4,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S0803MapChangedTiles[2 * 2 * 4],
    },
    {
        .id = 5,
        .x = 6,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S0803MapChangedTiles[2 * 2 * 5],
    },
    {
        .id = 6,
        .x = 8,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S0803MapChangedTiles[2 * 2 * 6],
    },
    {
        .id = 7,
        .x = 0,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S0803MapChangedTiles[2 * 2 * 7],
    },
    {
        .id = 8,
        .x = 4,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S0803MapChangedTiles[2 * 2 * 8],
    },
    {
        .id = 9,
        .x = 8,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S0803MapChangedTiles[2 * 2 * 9],
    },
    {
        .id = 10,
        .x = 0,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S0803MapChangedTiles[2 * 2 * 10],
    },
    {
        .id = 11,
        .x = 2,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S0803MapChangedTiles[2 * 2 * 11],
    },
    {
        .id = 12,
        .x = 4,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S0803MapChangedTiles[2 * 2 * 12],
    },
    {
        .id = 13,
        .x = 6,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S0803MapChangedTiles[2 * 2 * 13],
    },
    {
        .id = 14,
        .x = 8,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S0803MapChangedTiles[2 * 2 * 14],
    },
    {
        .id = 15,
        .x = 10,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S0803MapChangedTiles[2 * 2 * 15],
    },
    {
        .id = 16,
        .x = 0,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S0803MapChangedTiles[2 * 2 * 16],
    },
    {
        .id = 17,
        .x = 4,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S0803MapChangedTiles[2 * 2 * 17],
    },
    {
        .id = 18,
        .x = 8,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S0803MapChangedTiles[2 * 2 * 18],
    },
    {
        .id = 19,
        .x = 0,
        .y = 10,
        .width = 2,
        .height = 2,
        .metatiles = &S0803MapChangedTiles[2 * 2 * 19],
    },
    {
        .id = 20,
        .x = 2,
        .y = 10,
        .width = 2,
        .height = 2,
        .metatiles = &S0803MapChangedTiles[2 * 2 * 20],
    },
    {
        .id = 21,
        .x = 4,
        .y = 10,
        .width = 2,
        .height = 2,
        .metatiles = &S0803MapChangedTiles[2 * 2 * 21],
    },
    {
        .id = 22,
        .x = 6,
        .y = 10,
        .width = 2,
        .height = 2,
        .metatiles = &S0803MapChangedTiles[2 * 2 * 22],
    },
    {
        .id = 23,
        .x = 8,
        .y = 10,
        .width = 2,
        .height = 2,
        .metatiles = &S0803MapChangedTiles[2 * 2 * 23],
    },
    {
        .id = 24,
        .x = 10,
        .y = 10,
        .width = 2,
        .height = 2,
        .metatiles = &S0803MapChangedTiles[2 * 2 * 24],
    },
    {
        .id = 25,
        .x = 0,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S0803MapChangedTiles[2 * 2 * 25],
    },
    {
        .id = 26,
        .x = 4,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S0803MapChangedTiles[2 * 2 * 26],
    },
    {
        .id = 27,
        .x = 8,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S0803MapChangedTiles[2 * 2 * 27],
    },
    {
        .id = 28,
        .x = 0,
        .y = 14,
        .width = 2,
        .height = 2,
        .metatiles = &S0803MapChangedTiles[2 * 2 * 28],
    },
    {
        .id = 29,
        .x = 2,
        .y = 14,
        .width = 2,
        .height = 2,
        .metatiles = &S0803MapChangedTiles[2 * 2 * 29],
    },
    {
        .id = 30,
        .x = 4,
        .y = 14,
        .width = 2,
        .height = 2,
        .metatiles = &S0803MapChangedTiles[2 * 2 * 30],
    },
    {
        .id = 31,
        .x = 6,
        .y = 14,
        .width = 2,
        .height = 2,
        .metatiles = &S0803MapChangedTiles[2 * 2 * 31],
    },
    {
        .id = 32,
        .x = 8,
        .y = 14,
        .width = 2,
        .height = 2,
        .metatiles = &S0803MapChangedTiles[2 * 2 * 32],
    },
    {
        .id = 33,
        .x = 10,
        .y = 14,
        .width = 2,
        .height = 2,
        .metatiles = &S0803MapChangedTiles[2 * 2 * 33],
    },
    {
        .id = -1,
    },
};

const u16 S0905MapChangedTiles[] = {
    4 * 13, 4 * 14, 4 * 45, 4 * 46, // 0
    4 * 15, 4 * 16, 4 * 47, 4 * 48, // 1
    4 * 21, 4 * 22, 4 * 53, 4 * 54, // 2
    4 * 23, 4 * 24, 4 * 55, 4 * 56, // 3
    4 * 77, 4 * 78, 4 * 109, 4 * 110, // 4
    4 * 87, 4 * 88, 4 * 119, 4 * 120, // 5
    4 * 207, 4 * 208, 4 * 239, 4 * 240, // 6
    4 * 209, 4 * 210, 4 * 241, 4 * 242, // 7
    4 * 211, 4 * 212, 4 * 243, 4 * 244, // 8
    4 * 213, 4 * 214, 4 * 245, 4 * 246, // 9
    4 * 271, 4 * 272, 4 * 303, 4 * 304, // 10
    4 * 273, 4 * 274, 4 * 305, 4 * 306, // 11
    4 * 275, 4 * 276, 4 * 307, 4 * 308, // 12
    4 * 277, 4 * 278, 4 * 309, 4 * 310, // 13
    4 * 397, 4 * 398, 4 * 429, 4 * 430, // 14
    4 * 407, 4 * 408, 4 * 439, 4 * 440, // 15
    4 * 461, 4 * 462, 4 * 493, 4 * 494, // 16
    4 * 463, 4 * 464, 4 * 495, 4 * 496, // 17
    4 * 469, 4 * 470, 4 * 501, 4 * 502, // 18
    4 * 471, 4 * 472, 4 * 503, 4 * 504, // 19
};

const struct MapChangeInfo S0905MapChanges[] = {
    {
        .id = 0,
        .x = 0,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S0905MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 2,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S0905MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 8,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S0905MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = 3,
        .x = 10,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S0905MapChangedTiles[2 * 2 * 3],
    },
    {
        .id = 4,
        .x = 0,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S0905MapChangedTiles[2 * 2 * 4],
    },
    {
        .id = 5,
        .x = 10,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S0905MapChangedTiles[2 * 2 * 5],
    },
    {
        .id = 6,
        .x = 2,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S0905MapChangedTiles[2 * 2 * 6],
    },
    {
        .id = 7,
        .x = 4,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S0905MapChangedTiles[2 * 2 * 7],
    },
    {
        .id = 8,
        .x = 6,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S0905MapChangedTiles[2 * 2 * 8],
    },
    {
        .id = 9,
        .x = 8,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S0905MapChangedTiles[2 * 2 * 9],
    },
    {
        .id = 10,
        .x = 2,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S0905MapChangedTiles[2 * 2 * 10],
    },
    {
        .id = 11,
        .x = 4,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S0905MapChangedTiles[2 * 2 * 11],
    },
    {
        .id = 12,
        .x = 6,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S0905MapChangedTiles[2 * 2 * 12],
    },
    {
        .id = 13,
        .x = 8,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S0905MapChangedTiles[2 * 2 * 13],
    },
    {
        .id = 14,
        .x = 0,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S0905MapChangedTiles[2 * 2 * 14],
    },
    {
        .id = 15,
        .x = 10,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S0905MapChangedTiles[2 * 2 * 15],
    },
    {
        .id = 16,
        .x = 0,
        .y = 14,
        .width = 2,
        .height = 2,
        .metatiles = &S0905MapChangedTiles[2 * 2 * 16],
    },
    {
        .id = 17,
        .x = 2,
        .y = 14,
        .width = 2,
        .height = 2,
        .metatiles = &S0905MapChangedTiles[2 * 2 * 17],
    },
    {
        .id = 18,
        .x = 8,
        .y = 14,
        .width = 2,
        .height = 2,
        .metatiles = &S0905MapChangedTiles[2 * 2 * 18],
    },
    {
        .id = 19,
        .x = 10,
        .y = 14,
        .width = 2,
        .height = 2,
        .metatiles = &S0905MapChangedTiles[2 * 2 * 19],
    },
    {
        .id = -1,
    },
};

const u16 S1001MapChangedTiles[] = {
    4 * 207, 4 * 208, 4 * 239, 4 * 240, // 0
    4 * 403, 4 * 404, 4 * 435, 4 * 436, // 1
};

const struct MapChangeInfo S1001MapChanges[] = {
    {
        .id = 0,
        .x = 2,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S1001MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 6,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S1001MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = -1,
    },
};

const u16 S1004MapChangedTiles[] = {
    4 * 17, 4 * 18, 4 * 49, 4 * 50, // 0
    4 * 19, 4 * 20, 4 * 51, 4 * 52, // 1
    4 * 21, 4 * 22, 4 * 53, 4 * 54, // 2
    4 * 23, 4 * 24, 4 * 55, 4 * 56, // 3
    4 * 81, 4 * 82, 4 * 113, 4 * 114, // 4
    4 * 145, 4 * 146, 4 * 177, 4 * 178, // 5
    4 * 147, 4 * 148, 4 * 179, 4 * 180, // 6
    4 * 149, 4 * 150, 4 * 181, 4 * 182, // 7
    4 * 273, 4 * 274, 4 * 305, 4 * 306, // 8
    4 * 275, 4 * 276, 4 * 307, 4 * 308, // 9
    4 * 277, 4 * 278, 4 * 309, 4 * 310, // 10
    4 * 337, 4 * 338, 4 * 369, 4 * 370, // 11
    4 * 401, 4 * 402, 4 * 433, 4 * 434, // 12
    4 * 403, 4 * 404, 4 * 435, 4 * 436, // 13
    4 * 405, 4 * 406, 4 * 437, 4 * 438, // 14
    4 * 407, 4 * 408, 4 * 439, 4 * 440, // 15
};

const struct MapChangeInfo S1004MapChanges[] = {
    {
        .id = 0,
        .x = 4,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S1004MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 6,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S1004MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 8,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S1004MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = 3,
        .x = 10,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S1004MapChangedTiles[2 * 2 * 3],
    },
    {
        .id = 4,
        .x = 4,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S1004MapChangedTiles[2 * 2 * 4],
    },
    {
        .id = 5,
        .x = 4,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S1004MapChangedTiles[2 * 2 * 5],
    },
    {
        .id = 6,
        .x = 6,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S1004MapChangedTiles[2 * 2 * 6],
    },
    {
        .id = 7,
        .x = 8,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S1004MapChangedTiles[2 * 2 * 7],
    },
    {
        .id = 8,
        .x = 4,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S1004MapChangedTiles[2 * 2 * 8],
    },
    {
        .id = 9,
        .x = 6,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S1004MapChangedTiles[2 * 2 * 9],
    },
    {
        .id = 10,
        .x = 8,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S1004MapChangedTiles[2 * 2 * 10],
    },
    {
        .id = 11,
        .x = 4,
        .y = 10,
        .width = 2,
        .height = 2,
        .metatiles = &S1004MapChangedTiles[2 * 2 * 11],
    },
    {
        .id = 12,
        .x = 4,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S1004MapChangedTiles[2 * 2 * 12],
    },
    {
        .id = 13,
        .x = 6,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S1004MapChangedTiles[2 * 2 * 13],
    },
    {
        .id = 14,
        .x = 8,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S1004MapChangedTiles[2 * 2 * 14],
    },
    {
        .id = 15,
        .x = 10,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S1004MapChangedTiles[2 * 2 * 15],
    },
    {
        .id = -1,
    },
};

const u16 S1101MapChangedTiles[] = {
    4 * 141, 4 * 142, 4 * 173, 4 * 174, // 0
    4 * 143, 4 * 144, 4 * 175, 4 * 176, // 1
    4 * 149, 4 * 150, 4 * 181, 4 * 182, // 2
    4 * 151, 4 * 152, 4 * 183, 4 * 184, // 3
    4 * 213, 4 * 214, 4 * 245, 4 * 246, // 4
    4 * 271, 4 * 272, 4 * 303, 4 * 304, // 5
    4 * 273, 4 * 274, 4 * 305, 4 * 306, // 6
    4 * 275, 4 * 276, 4 * 307, 4 * 308, // 7
    4 * 277, 4 * 278, 4 * 309, 4 * 310, // 8
};

const struct MapChangeInfo S1101MapChanges[] = {
    {
        .id = 0,
        .x = 0,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S1101MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 2,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S1101MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 8,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S1101MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = 3,
        .x = 10,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S1101MapChangedTiles[2 * 2 * 3],
    },
    {
        .id = 4,
        .x = 8,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S1101MapChangedTiles[2 * 2 * 4],
    },
    {
        .id = 5,
        .x = 2,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S1101MapChangedTiles[2 * 2 * 5],
    },
    {
        .id = 6,
        .x = 4,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S1101MapChangedTiles[2 * 2 * 6],
    },
    {
        .id = 7,
        .x = 6,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S1101MapChangedTiles[2 * 2 * 7],
    },
    {
        .id = 8,
        .x = 8,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S1101MapChangedTiles[2 * 2 * 8],
    },
    {
        .id = -1,
    },
};

const u16 S1104MapChangedTiles[] = {
    4 * 81, 4 * 82, 4 * 113, 4 * 114, // 0
    4 * 83, 4 * 84, 4 * 115, 4 * 116, // 1
    4 * 141, 4 * 142, 4 * 173, 4 * 174, // 2
    4 * 143, 4 * 144, 4 * 175, 4 * 176, // 3
    4 * 149, 4 * 150, 4 * 181, 4 * 182, // 4
    4 * 151, 4 * 152, 4 * 183, 4 * 184, // 5
    4 * 337, 4 * 338, 4 * 369, 4 * 370, // 6
    4 * 339, 4 * 340, 4 * 371, 4 * 372, // 7
    4 * 397, 4 * 398, 4 * 429, 4 * 430, // 8
    4 * 399, 4 * 400, 4 * 431, 4 * 432, // 9
    4 * 405, 4 * 406, 4 * 437, 4 * 438, // 10
    4 * 407, 4 * 408, 4 * 439, 4 * 440, // 11
};

const struct MapChangeInfo S1104MapChanges[] = {
    {
        .id = 0,
        .x = 4,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S1104MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 6,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S1104MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 0,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S1104MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = 3,
        .x = 2,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S1104MapChangedTiles[2 * 2 * 3],
    },
    {
        .id = 4,
        .x = 8,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S1104MapChangedTiles[2 * 2 * 4],
    },
    {
        .id = 5,
        .x = 10,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S1104MapChangedTiles[2 * 2 * 5],
    },
    {
        .id = 6,
        .x = 4,
        .y = 10,
        .width = 2,
        .height = 2,
        .metatiles = &S1104MapChangedTiles[2 * 2 * 6],
    },
    {
        .id = 7,
        .x = 6,
        .y = 10,
        .width = 2,
        .height = 2,
        .metatiles = &S1104MapChangedTiles[2 * 2 * 7],
    },
    {
        .id = 8,
        .x = 0,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S1104MapChangedTiles[2 * 2 * 8],
    },
    {
        .id = 9,
        .x = 2,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S1104MapChangedTiles[2 * 2 * 9],
    },
    {
        .id = 10,
        .x = 8,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S1104MapChangedTiles[2 * 2 * 10],
    },
    {
        .id = 11,
        .x = 10,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S1104MapChangedTiles[2 * 2 * 11],
    },
    {
        .id = -1,
    },
};

const u16 S1105MapChangedTiles[] = {
    4 * 15, 4 * 16, 4 * 47, 4 * 48, // 0
    4 * 17, 4 * 18, 4 * 49, 4 * 50, // 1
    4 * 19, 4 * 20, 4 * 51, 4 * 52, // 2
    4 * 23, 4 * 24, 4 * 55, 4 * 56, // 3
    4 * 79, 4 * 80, 4 * 111, 4 * 112, // 4
    4 * 83, 4 * 84, 4 * 115, 4 * 116, // 5
    4 * 87, 4 * 88, 4 * 119, 4 * 120, // 6
    4 * 213, 4 * 214, 4 * 245, 4 * 246, // 7
    4 * 269, 4 * 270, 4 * 301, 4 * 302, // 8
    4 * 271, 4 * 272, 4 * 303, 4 * 304, // 9
    4 * 275, 4 * 276, 4 * 307, 4 * 308, // 10
    4 * 397, 4 * 398, 4 * 429, 4 * 430, // 11
    4 * 399, 4 * 400, 4 * 431, 4 * 432, // 12
    4 * 401, 4 * 402, 4 * 433, 4 * 434, // 13
    4 * 471, 4 * 472, 4 * 503, 4 * 504, // 14
};

const struct MapChangeInfo S1105MapChanges[] = {
    {
        .id = 0,
        .x = 2,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S1105MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 4,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S1105MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 6,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S1105MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = 3,
        .x = 10,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S1105MapChangedTiles[2 * 2 * 3],
    },
    {
        .id = 4,
        .x = 2,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S1105MapChangedTiles[2 * 2 * 4],
    },
    {
        .id = 5,
        .x = 6,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S1105MapChangedTiles[2 * 2 * 5],
    },
    {
        .id = 6,
        .x = 10,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S1105MapChangedTiles[2 * 2 * 6],
    },
    {
        .id = 7,
        .x = 8,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S1105MapChangedTiles[2 * 2 * 7],
    },
    {
        .id = 8,
        .x = 0,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S1105MapChangedTiles[2 * 2 * 8],
    },
    {
        .id = 9,
        .x = 2,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S1105MapChangedTiles[2 * 2 * 9],
    },
    {
        .id = 10,
        .x = 6,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S1105MapChangedTiles[2 * 2 * 10],
    },
    {
        .id = 11,
        .x = 0,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S1105MapChangedTiles[2 * 2 * 11],
    },
    {
        .id = 12,
        .x = 2,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S1105MapChangedTiles[2 * 2 * 12],
    },
    {
        .id = 13,
        .x = 4,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S1105MapChangedTiles[2 * 2 * 13],
    },
    {
        .id = 14,
        .x = 10,
        .y = 14,
        .width = 2,
        .height = 2,
        .metatiles = &S1105MapChangedTiles[2 * 2 * 14],
    },
    {
        .id = -1,
    },
};

const u16 S1205MapChangedTiles[] = {
    4 * 79, 4 * 80, 4 * 111, 4 * 112, // 0
    4 * 85, 4 * 86, 4 * 117, 4 * 118, // 1
    4 * 143, 4 * 144, 4 * 175, 4 * 176, // 2
    4 * 149, 4 * 150, 4 * 181, 4 * 182, // 3
};

const struct MapChangeInfo S1205MapChanges[] = {
    {
        .id = 0,
        .x = 2,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S1205MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 8,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S1205MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 2,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S1205MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = 3,
        .x = 8,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S1205MapChangedTiles[2 * 2 * 3],
    },
    {
        .id = -1,
    },
};

const u16 S1301MapChangedTiles[] = {
    4 * 143, 4 * 144, 4 * 175, 4 * 176, // 0
    4 * 211, 4 * 212, 4 * 243, 4 * 244, // 1
    4 * 275, 4 * 276, 4 * 307, 4 * 308, // 2
    4 * 277, 4 * 278, 4 * 309, 4 * 310, // 3
};

const struct MapChangeInfo S1301MapChanges[] = {
    {
        .id = 0,
        .x = 2,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S1301MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 6,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S1301MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 6,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S1301MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = 3,
        .x = 8,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S1301MapChangedTiles[2 * 2 * 3],
    },
    {
        .id = -1,
    },
};

const u16 S1303MapChangedTiles[] = {
    4 * 13, 4 * 14, 4 * 45, 4 * 46, // 0
    4 * 15, 4 * 16, 4 * 47, 4 * 48, // 1
    4 * 17, 4 * 18, 4 * 49, 4 * 50, // 2
    4 * 19, 4 * 20, 4 * 51, 4 * 52, // 3
    4 * 21, 4 * 22, 4 * 53, 4 * 54, // 4
    4 * 23, 4 * 24, 4 * 55, 4 * 56, // 5
    4 * 77, 4 * 78, 4 * 109, 4 * 110, // 6
    4 * 141, 4 * 142, 4 * 173, 4 * 174, // 7
    4 * 145, 4 * 146, 4 * 177, 4 * 178, // 8
    4 * 149, 4 * 150, 4 * 181, 4 * 182, // 9
    4 * 205, 4 * 206, 4 * 237, 4 * 238, // 10
    4 * 269, 4 * 270, 4 * 301, 4 * 302, // 11
    4 * 271, 4 * 272, 4 * 303, 4 * 304, // 12
    4 * 273, 4 * 274, 4 * 305, 4 * 306, // 13
    4 * 277, 4 * 278, 4 * 309, 4 * 310, // 14
    4 * 279, 4 * 280, 4 * 311, 4 * 312, // 15
};

const struct MapChangeInfo S1303MapChanges[] = {
    {
        .id = 0,
        .x = 0,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S1303MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 2,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S1303MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 4,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S1303MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = 3,
        .x = 6,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S1303MapChangedTiles[2 * 2 * 3],
    },
    {
        .id = 4,
        .x = 8,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S1303MapChangedTiles[2 * 2 * 4],
    },
    {
        .id = 5,
        .x = 10,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S1303MapChangedTiles[2 * 2 * 5],
    },
    {
        .id = 6,
        .x = 0,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S1303MapChangedTiles[2 * 2 * 6],
    },
    {
        .id = 7,
        .x = 0,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S1303MapChangedTiles[2 * 2 * 7],
    },
    {
        .id = 8,
        .x = 4,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S1303MapChangedTiles[2 * 2 * 8],
    },
    {
        .id = 9,
        .x = 8,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S1303MapChangedTiles[2 * 2 * 9],
    },
    {
        .id = 10,
        .x = 0,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S1303MapChangedTiles[2 * 2 * 10],
    },
    {
        .id = 11,
        .x = 0,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S1303MapChangedTiles[2 * 2 * 11],
    },
    {
        .id = 12,
        .x = 2,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S1303MapChangedTiles[2 * 2 * 12],
    },
    {
        .id = 13,
        .x = 4,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S1303MapChangedTiles[2 * 2 * 13],
    },
    {
        .id = 14,
        .x = 8,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S1303MapChangedTiles[2 * 2 * 14],
    },
    {
        .id = 15,
        .x = 10,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S1303MapChangedTiles[2 * 2 * 15],
    },
    {
        .id = -1,
    },
};

const u16 S1304MapChangedTiles[] = {
    4 * 17, 4 * 18, 4 * 49, 4 * 50, // 0
    4 * 145, 4 * 146, 4 * 177, 4 * 178, // 1
    4 * 147, 4 * 148, 4 * 179, 4 * 180, // 2
    4 * 149, 4 * 150, 4 * 181, 4 * 182, // 3
    4 * 151, 4 * 152, 4 * 183, 4 * 184, // 4
};

const struct MapChangeInfo S1304MapChanges[] = {
    {
        .id = 0,
        .x = 4,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S1304MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 4,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S1304MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 6,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S1304MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = 3,
        .x = 8,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S1304MapChangedTiles[2 * 2 * 3],
    },
    {
        .id = 4,
        .x = 10,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S1304MapChangedTiles[2 * 2 * 4],
    },
    {
        .id = -1,
    },
};

const u16 S1305MapChangedTiles[] = {
    4 * 13, 4 * 14, 4 * 45, 4 * 46, // 0
    4 * 17, 4 * 18, 4 * 49, 4 * 50, // 1
    4 * 19, 4 * 20, 4 * 51, 4 * 52, // 2
    4 * 23, 4 * 24, 4 * 55, 4 * 56, // 3
    4 * 271, 4 * 272, 4 * 303, 4 * 304, // 4
    4 * 273, 4 * 274, 4 * 305, 4 * 306, // 5
    4 * 277, 4 * 278, 4 * 309, 4 * 310, // 6
};

const struct MapChangeInfo S1305MapChanges[] = {
    {
        .id = 0,
        .x = 0,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S1305MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 4,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S1305MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 6,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S1305MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = 3,
        .x = 10,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S1305MapChangedTiles[2 * 2 * 3],
    },
    {
        .id = 4,
        .x = 2,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S1305MapChangedTiles[2 * 2 * 4],
    },
    {
        .id = 5,
        .x = 4,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S1305MapChangedTiles[2 * 2 * 5],
    },
    {
        .id = 6,
        .x = 8,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S1305MapChangedTiles[2 * 2 * 6],
    },
    {
        .id = -1,
    },
};

const u16 S1601MapChangedTiles[] = {
    4 * 207, 4 * 208, 4 * 239, 4 * 240, // 0
    4 * 213, 4 * 214, 4 * 245, 4 * 246, // 1
    4 * 275, 4 * 276, 4 * 307, 4 * 308, // 2
    4 * 279, 4 * 280, 4 * 311, 4 * 312, // 3
    4 * 333, 4 * 334, 4 * 365, 4 * 366, // 4
    4 * 401, 4 * 402, 4 * 433, 4 * 434, // 5
    4 * 407, 4 * 408, 4 * 439, 4 * 440, // 6
};

const struct MapChangeInfo S1601MapChanges[] = {
    {
        .id = 0,
        .x = 2,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S1601MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 8,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S1601MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 6,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S1601MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = 3,
        .x = 10,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S1601MapChangedTiles[2 * 2 * 3],
    },
    {
        .id = 4,
        .x = 0,
        .y = 10,
        .width = 2,
        .height = 2,
        .metatiles = &S1601MapChangedTiles[2 * 2 * 4],
    },
    {
        .id = 5,
        .x = 4,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S1601MapChangedTiles[2 * 2 * 5],
    },
    {
        .id = 6,
        .x = 10,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S1601MapChangedTiles[2 * 2 * 6],
    },
    {
        .id = -1,
    },
};

const u16 S2014MapChangedTiles[] = {
    4 * 79, 4 * 80, 4 * 111, 4 * 112, // 0
    4 * 275, 4 * 276, 4 * 307, 4 * 308, // 1
};

const struct MapChangeInfo S2014MapChanges[] = {
    {
        .id = 0,
        .x = 2,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S2014MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 6,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S2014MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = -1,
    },
};

const u16 S2022MapChangedTiles[] = {
    4 * 23, 4 * 24, 4 * 55, 4 * 56, // 0
    4 * 79, 4 * 80, 4 * 111, 4 * 112, // 1
    4 * 211, 4 * 212, 4 * 243, 4 * 244, // 2
    4 * 213, 4 * 214, 4 * 245, 4 * 246, // 3
    4 * 215, 4 * 216, 4 * 247, 4 * 248, // 4
    4 * 269, 4 * 270, 4 * 301, 4 * 302, // 5
};

const struct MapChangeInfo S2022MapChanges[] = {
    {
        .id = 0,
        .x = 10,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S2022MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 2,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S2022MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 6,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S2022MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = 3,
        .x = 8,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S2022MapChangedTiles[2 * 2 * 3],
    },
    {
        .id = 4,
        .x = 10,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S2022MapChangedTiles[2 * 2 * 4],
    },
    {
        .id = 5,
        .x = 0,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S2022MapChangedTiles[2 * 2 * 5],
    },
    {
        .id = -1,
    },
};

const u16 S2023MapChangedTiles[] = {
    4 * 463, 4 * 464, 4 * 495, 4 * 496, // 0
};

const struct MapChangeInfo S2023MapChanges[] = {
    {
        .id = 0,
        .x = 2,
        .y = 14,
        .width = 2,
        .height = 2,
        .metatiles = &S2023MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = -1,
    },
};

const u16 S2025MapChangedTiles[] = {
    4 * 273, 4 * 274, 4 * 305, 4 * 306, // 0
};

const struct MapChangeInfo S2025MapChanges[] = {
    {
        .id = 0,
        .x = 4,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S2025MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = -1,
    },
};

const u16 S2042MapChangedTiles[] = {
    4 * 79, 4 * 80, 4 * 111, 4 * 112, // 0
    4 * 85, 4 * 86, 4 * 117, 4 * 118, // 1
    4 * 143, 4 * 144, 4 * 175, 4 * 176, // 2
    4 * 213, 4 * 214, 4 * 245, 4 * 246, // 3
    4 * 271, 4 * 272, 4 * 303, 4 * 304, // 4
    4 * 277, 4 * 278, 4 * 309, 4 * 310, // 5
    4 * 279, 4 * 280, 4 * 311, 4 * 312, // 6
    4 * 333, 4 * 334, 4 * 365, 4 * 366, // 7
    4 * 335, 4 * 336, 4 * 367, 4 * 368, // 8
    4 * 343, 4 * 344, 4 * 375, 4 * 376, // 9
};

const struct MapChangeInfo S2042MapChanges[] = {
    {
        .id = 0,
        .x = 2,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S2042MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 8,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S2042MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 2,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S2042MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = 3,
        .x = 8,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S2042MapChangedTiles[2 * 2 * 3],
    },
    {
        .id = 4,
        .x = 2,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S2042MapChangedTiles[2 * 2 * 4],
    },
    {
        .id = 5,
        .x = 8,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S2042MapChangedTiles[2 * 2 * 5],
    },
    {
        .id = 6,
        .x = 10,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S2042MapChangedTiles[2 * 2 * 6],
    },
    {
        .id = 7,
        .x = 0,
        .y = 10,
        .width = 2,
        .height = 2,
        .metatiles = &S2042MapChangedTiles[2 * 2 * 7],
    },
    {
        .id = 8,
        .x = 2,
        .y = 10,
        .width = 2,
        .height = 2,
        .metatiles = &S2042MapChangedTiles[2 * 2 * 8],
    },
    {
        .id = 9,
        .x = 10,
        .y = 10,
        .width = 2,
        .height = 2,
        .metatiles = &S2042MapChangedTiles[2 * 2 * 9],
    },
    {
        .id = -1,
    },
};

const u16 S2045MapChangedTiles[] = {
    4 * 269, 4 * 270, 4 * 301, 4 * 302, // 0
    4 * 279, 4 * 280, 4 * 311, 4 * 312, // 1
    4 * 337, 4 * 338, 4 * 369, 4 * 370, // 2
    4 * 339, 4 * 340, 4 * 371, 4 * 372, // 3
};

const struct MapChangeInfo S2045MapChanges[] = {
    {
        .id = 0,
        .x = 0,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S2045MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 10,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S2045MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 4,
        .y = 10,
        .width = 2,
        .height = 2,
        .metatiles = &S2045MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = 3,
        .x = 6,
        .y = 10,
        .width = 2,
        .height = 2,
        .metatiles = &S2045MapChangedTiles[2 * 2 * 3],
    },
    {
        .id = -1,
    },
};

const u16 S2091MapChangedTiles[] = {
    4 * 79, 4 * 80, 4 * 111, 4 * 112, // 0
    4 * 205, 4 * 206, 4 * 237, 4 * 238, // 1
    4 * 471, 4 * 472, 4 * 503, 4 * 504, // 2
};

const struct MapChangeInfo S2091MapChanges[] = {
    {
        .id = 0,
        .x = 2,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S2091MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 0,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S2091MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 10,
        .y = 14,
        .width = 2,
        .height = 2,
        .metatiles = &S2091MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = -1,
    },
};

const u16 S2092MapChangedTiles[] = {
    4 * 149, 4 * 150, 4 * 181, 4 * 182, // 0
    4 * 407, 4 * 408, 4 * 439, 4 * 440, // 1
    4 * 465, 4 * 466, 4 * 497, 4 * 498, // 2
    4 * 471, 4 * 472, 4 * 503, 4 * 504, // 3
};

const struct MapChangeInfo S2092MapChanges[] = {
    {
        .id = 0,
        .x = 8,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S2092MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 10,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S2092MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 4,
        .y = 14,
        .width = 2,
        .height = 2,
        .metatiles = &S2092MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = 3,
        .x = 10,
        .y = 14,
        .width = 2,
        .height = 2,
        .metatiles = &S2092MapChangedTiles[2 * 2 * 3],
    },
    {
        .id = -1,
    },
};

const u16 S2095MapChangedTiles[] = {
    4 * 151, 4 * 152, 4 * 183, 4 * 184, // 0
};

const struct MapChangeInfo S2095MapChanges[] = {
    {
        .id = 0,
        .x = 10,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S2095MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = -1,
    },
};

const u16 S2105MapChangedTiles[] = {
    4 * 399, 4 * 400, 4 * 431, 4 * 432, // 0
    4 * 405, 4 * 406, 4 * 437, 4 * 438, // 1
};

const struct MapChangeInfo S2105MapChanges[] = {
    {
        .id = 0,
        .x = 2,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S2105MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 8,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S2105MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = -1,
    },
};

const u16 S2122MapChangedTiles[] = {
    4 * 143, 4 * 144, 4 * 175, 4 * 176, // 0
};

const struct MapChangeInfo S2122MapChanges[] = {
    {
        .id = 0,
        .x = 2,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S2122MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = -1,
    },
};

const u16 S2124MapChangedTiles[] = {
    4 * 149, 4 * 150, 4 * 181, 4 * 182, // 0
    4 * 151, 4 * 152, 4 * 183, 4 * 184, // 1
    4 * 213, 4 * 214, 4 * 245, 4 * 246, // 2
    4 * 215, 4 * 216, 4 * 247, 4 * 248, // 3
    4 * 335, 4 * 336, 4 * 367, 4 * 368, // 4
    4 * 337, 4 * 338, 4 * 369, 4 * 370, // 5
    4 * 399, 4 * 400, 4 * 431, 4 * 432, // 6
    4 * 401, 4 * 402, 4 * 433, 4 * 434, // 7
};

const struct MapChangeInfo S2124MapChanges[] = {
    {
        .id = 0,
        .x = 8,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S2124MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 10,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S2124MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 8,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S2124MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = 3,
        .x = 10,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S2124MapChangedTiles[2 * 2 * 3],
    },
    {
        .id = 4,
        .x = 2,
        .y = 10,
        .width = 2,
        .height = 2,
        .metatiles = &S2124MapChangedTiles[2 * 2 * 4],
    },
    {
        .id = 5,
        .x = 4,
        .y = 10,
        .width = 2,
        .height = 2,
        .metatiles = &S2124MapChangedTiles[2 * 2 * 5],
    },
    {
        .id = 6,
        .x = 2,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S2124MapChangedTiles[2 * 2 * 6],
    },
    {
        .id = 7,
        .x = 4,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S2124MapChangedTiles[2 * 2 * 7],
    },
    {
        .id = -1,
    },
};

const u16 S2132MapChangedTiles[] = {
    4 * 13, 4 * 14, 4 * 45, 4 * 46, // 0
    4 * 23, 4 * 24, 4 * 55, 4 * 56, // 1
    4 * 77, 4 * 78, 4 * 109, 4 * 110, // 2
    4 * 87, 4 * 88, 4 * 119, 4 * 120, // 3
    4 * 207, 4 * 208, 4 * 239, 4 * 240, // 4
    4 * 209, 4 * 210, 4 * 241, 4 * 242, // 5
    4 * 211, 4 * 212, 4 * 243, 4 * 244, // 6
    4 * 213, 4 * 214, 4 * 245, 4 * 246, // 7
    4 * 397, 4 * 398, 4 * 429, 4 * 430, // 8
    4 * 399, 4 * 400, 4 * 431, 4 * 432, // 9
    4 * 405, 4 * 406, 4 * 437, 4 * 438, // 10
    4 * 407, 4 * 408, 4 * 439, 4 * 440, // 11
    4 * 461, 4 * 462, 4 * 493, 4 * 494, // 12
    4 * 463, 4 * 464, 4 * 495, 4 * 496, // 13
    4 * 469, 4 * 470, 4 * 501, 4 * 502, // 14
    4 * 471, 4 * 472, 4 * 503, 4 * 504, // 15
};

const struct MapChangeInfo S2132MapChanges[] = {
    {
        .id = 0,
        .x = 0,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S2132MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 10,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S2132MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 0,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S2132MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = 3,
        .x = 10,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S2132MapChangedTiles[2 * 2 * 3],
    },
    {
        .id = 4,
        .x = 2,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S2132MapChangedTiles[2 * 2 * 4],
    },
    {
        .id = 5,
        .x = 4,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S2132MapChangedTiles[2 * 2 * 5],
    },
    {
        .id = 6,
        .x = 6,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S2132MapChangedTiles[2 * 2 * 6],
    },
    {
        .id = 7,
        .x = 8,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S2132MapChangedTiles[2 * 2 * 7],
    },
    {
        .id = 8,
        .x = 0,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S2132MapChangedTiles[2 * 2 * 8],
    },
    {
        .id = 9,
        .x = 2,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S2132MapChangedTiles[2 * 2 * 9],
    },
    {
        .id = 10,
        .x = 8,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S2132MapChangedTiles[2 * 2 * 10],
    },
    {
        .id = 11,
        .x = 10,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S2132MapChangedTiles[2 * 2 * 11],
    },
    {
        .id = 12,
        .x = 0,
        .y = 14,
        .width = 2,
        .height = 2,
        .metatiles = &S2132MapChangedTiles[2 * 2 * 12],
    },
    {
        .id = 13,
        .x = 2,
        .y = 14,
        .width = 2,
        .height = 2,
        .metatiles = &S2132MapChangedTiles[2 * 2 * 13],
    },
    {
        .id = 14,
        .x = 8,
        .y = 14,
        .width = 2,
        .height = 2,
        .metatiles = &S2132MapChangedTiles[2 * 2 * 14],
    },
    {
        .id = 15,
        .x = 10,
        .y = 14,
        .width = 2,
        .height = 2,
        .metatiles = &S2132MapChangedTiles[2 * 2 * 15],
    },
    {
        .id = -1,
    },
};

const u16 S2133MapChangedTiles[] = {
    4 * 19, 4 * 20, 4 * 51, 4 * 52, // 0
};

const struct MapChangeInfo S2133MapChanges[] = {
    {
        .id = 0,
        .x = 6,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S2133MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = -1,
    },
};

const u16 S2134MapChangedTiles[] = {
    4 * 151, 4 * 152, 4 * 183, 4 * 184, // 0
    4 * 269, 4 * 270, 4 * 301, 4 * 302, // 1
    4 * 275, 4 * 276, 4 * 307, 4 * 308, // 2
};

const struct MapChangeInfo S2134MapChanges[] = {
    {
        .id = 0,
        .x = 10,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S2134MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 0,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S2134MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 6,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S2134MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = -1,
    },
};

const u16 S2135MapChangedTiles[] = {
    4 * 79, 4 * 80, 4 * 111, 4 * 112, // 0
    4 * 215, 4 * 216, 4 * 247, 4 * 248, // 1
    4 * 269, 4 * 270, 4 * 301, 4 * 302, // 2
    4 * 271, 4 * 272, 4 * 303, 4 * 304, // 3
    4 * 341, 4 * 342, 4 * 373, 4 * 374, // 4
    4 * 463, 4 * 464, 4 * 495, 4 * 496, // 5
};

const struct MapChangeInfo S2135MapChanges[] = {
    {
        .id = 0,
        .x = 2,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S2135MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 10,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S2135MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 0,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S2135MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = 3,
        .x = 2,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S2135MapChangedTiles[2 * 2 * 3],
    },
    {
        .id = 4,
        .x = 8,
        .y = 10,
        .width = 2,
        .height = 2,
        .metatiles = &S2135MapChangedTiles[2 * 2 * 4],
    },
    {
        .id = 5,
        .x = 2,
        .y = 14,
        .width = 2,
        .height = 2,
        .metatiles = &S2135MapChangedTiles[2 * 2 * 5],
    },
    {
        .id = -1,
    },
};

const u16 S3025MapChangedTiles[] = {
    4 * 211, 4 * 212, 4 * 243, 4 * 244, // 0
    4 * 269, 4 * 270, 4 * 301, 4 * 302, // 1
    4 * 343, 4 * 344, 4 * 375, 4 * 376, // 2
};

const struct MapChangeInfo S3025MapChanges[] = {
    {
        .id = 0,
        .x = 6,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S3025MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 0,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S3025MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 10,
        .y = 10,
        .width = 2,
        .height = 2,
        .metatiles = &S3025MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = -1,
    },
};

const u16 S3043MapChangedTiles[] = {
    4 * 339, 4 * 340, 4 * 371, 4 * 372, // 0
};

const struct MapChangeInfo S3043MapChanges[] = {
    {
        .id = 0,
        .x = 6,
        .y = 10,
        .width = 2,
        .height = 2,
        .metatiles = &S3043MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = -1,
    },
};

const u16 S3053MapChangedTiles[] = {
    4 * 15, 4 * 16, 4 * 47, 4 * 48, // 0
    4 * 79, 4 * 80, 4 * 111, 4 * 112, // 1
    4 * 143, 4 * 144, 4 * 175, 4 * 176, // 2
    4 * 211, 4 * 212, 4 * 243, 4 * 244, // 3
    4 * 275, 4 * 276, 4 * 307, 4 * 308, // 4
    4 * 277, 4 * 278, 4 * 309, 4 * 310, // 5
    4 * 405, 4 * 406, 4 * 437, 4 * 438, // 6
    4 * 407, 4 * 408, 4 * 439, 4 * 440, // 7
};

const struct MapChangeInfo S3053MapChanges[] = {
    {
        .id = 0,
        .x = 2,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S3053MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 2,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S3053MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 2,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S3053MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = 3,
        .x = 6,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S3053MapChangedTiles[2 * 2 * 3],
    },
    {
        .id = 4,
        .x = 6,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S3053MapChangedTiles[2 * 2 * 4],
    },
    {
        .id = 5,
        .x = 8,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S3053MapChangedTiles[2 * 2 * 5],
    },
    {
        .id = 6,
        .x = 8,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S3053MapChangedTiles[2 * 2 * 6],
    },
    {
        .id = 7,
        .x = 10,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S3053MapChangedTiles[2 * 2 * 7],
    },
    {
        .id = -1,
    },
};

const u16 S3064MapChangedTiles[] = {
    4 * 13, 4 * 14, 4 * 45, 4 * 46, // 0
    4 * 211, 4 * 212, 4 * 243, 4 * 244, // 1
    4 * 271, 4 * 272, 4 * 303, 4 * 304, // 2
    4 * 277, 4 * 278, 4 * 309, 4 * 310, // 3
    4 * 461, 4 * 462, 4 * 493, 4 * 494, // 4
};

const struct MapChangeInfo S3064MapChanges[] = {
    {
        .id = 0,
        .x = 0,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S3064MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 6,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S3064MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 2,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S3064MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = 3,
        .x = 8,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S3064MapChangedTiles[2 * 2 * 3],
    },
    {
        .id = 4,
        .x = 0,
        .y = 14,
        .width = 2,
        .height = 2,
        .metatiles = &S3064MapChangedTiles[2 * 2 * 4],
    },
    {
        .id = -1,
    },
};

const u16 S3071MapChangedTiles[] = {
    4 * 79, 4 * 80, 4 * 111, 4 * 112, // 0
    4 * 141, 4 * 142, 4 * 173, 4 * 174, // 1
    4 * 143, 4 * 144, 4 * 175, 4 * 176, // 2
    4 * 145, 4 * 146, 4 * 177, 4 * 178, // 3
    4 * 207, 4 * 208, 4 * 239, 4 * 240, // 4
    4 * 271, 4 * 272, 4 * 303, 4 * 304, // 5
    4 * 277, 4 * 278, 4 * 309, 4 * 310, // 6
    4 * 341, 4 * 342, 4 * 373, 4 * 374, // 7
    4 * 403, 4 * 404, 4 * 435, 4 * 436, // 8
    4 * 405, 4 * 406, 4 * 437, 4 * 438, // 9
    4 * 407, 4 * 408, 4 * 439, 4 * 440, // 10
    4 * 469, 4 * 470, 4 * 501, 4 * 502, // 11
};

const struct MapChangeInfo S3071MapChanges[] = {
    {
        .id = 0,
        .x = 2,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S3071MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 0,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S3071MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 2,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S3071MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = 3,
        .x = 4,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S3071MapChangedTiles[2 * 2 * 3],
    },
    {
        .id = 4,
        .x = 2,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S3071MapChangedTiles[2 * 2 * 4],
    },
    {
        .id = 5,
        .x = 2,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S3071MapChangedTiles[2 * 2 * 5],
    },
    {
        .id = 6,
        .x = 8,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S3071MapChangedTiles[2 * 2 * 6],
    },
    {
        .id = 7,
        .x = 8,
        .y = 10,
        .width = 2,
        .height = 2,
        .metatiles = &S3071MapChangedTiles[2 * 2 * 7],
    },
    {
        .id = 8,
        .x = 6,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S3071MapChangedTiles[2 * 2 * 8],
    },
    {
        .id = 9,
        .x = 8,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S3071MapChangedTiles[2 * 2 * 9],
    },
    {
        .id = 10,
        .x = 10,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S3071MapChangedTiles[2 * 2 * 10],
    },
    {
        .id = 11,
        .x = 8,
        .y = 14,
        .width = 2,
        .height = 2,
        .metatiles = &S3071MapChangedTiles[2 * 2 * 11],
    },
    {
        .id = -1,
    },
};

const u16 S3072MapChangedTiles[] = {
    4 * 15, 4 * 16, 4 * 47, 4 * 48, // 0
    4 * 17, 4 * 18, 4 * 49, 4 * 50, // 1
    4 * 23, 4 * 24, 4 * 55, 4 * 56, // 2
    4 * 81, 4 * 82, 4 * 113, 4 * 114, // 3
    4 * 87, 4 * 88, 4 * 119, 4 * 120, // 4
    4 * 149, 4 * 150, 4 * 181, 4 * 182, // 5
    4 * 205, 4 * 206, 4 * 237, 4 * 238, // 6
    4 * 207, 4 * 208, 4 * 239, 4 * 240, // 7
    4 * 337, 4 * 338, 4 * 369, 4 * 370, // 8
    4 * 339, 4 * 340, 4 * 371, 4 * 372, // 9
    4 * 403, 4 * 404, 4 * 435, 4 * 436, // 10
    4 * 405, 4 * 406, 4 * 437, 4 * 438, // 11
    4 * 461, 4 * 462, 4 * 493, 4 * 494, // 12
    4 * 463, 4 * 464, 4 * 495, 4 * 496, // 13
    4 * 465, 4 * 466, 4 * 497, 4 * 498, // 14
};

const struct MapChangeInfo S3072MapChanges[] = {
    {
        .id = 0,
        .x = 2,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S3072MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 4,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S3072MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 10,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S3072MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = 3,
        .x = 4,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S3072MapChangedTiles[2 * 2 * 3],
    },
    {
        .id = 4,
        .x = 10,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S3072MapChangedTiles[2 * 2 * 4],
    },
    {
        .id = 5,
        .x = 8,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S3072MapChangedTiles[2 * 2 * 5],
    },
    {
        .id = 6,
        .x = 0,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S3072MapChangedTiles[2 * 2 * 6],
    },
    {
        .id = 7,
        .x = 2,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S3072MapChangedTiles[2 * 2 * 7],
    },
    {
        .id = 8,
        .x = 4,
        .y = 10,
        .width = 2,
        .height = 2,
        .metatiles = &S3072MapChangedTiles[2 * 2 * 8],
    },
    {
        .id = 9,
        .x = 6,
        .y = 10,
        .width = 2,
        .height = 2,
        .metatiles = &S3072MapChangedTiles[2 * 2 * 9],
    },
    {
        .id = 10,
        .x = 6,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S3072MapChangedTiles[2 * 2 * 10],
    },
    {
        .id = 11,
        .x = 8,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S3072MapChangedTiles[2 * 2 * 11],
    },
    {
        .id = 12,
        .x = 0,
        .y = 14,
        .width = 2,
        .height = 2,
        .metatiles = &S3072MapChangedTiles[2 * 2 * 12],
    },
    {
        .id = 13,
        .x = 2,
        .y = 14,
        .width = 2,
        .height = 2,
        .metatiles = &S3072MapChangedTiles[2 * 2 * 13],
    },
    {
        .id = 14,
        .x = 4,
        .y = 14,
        .width = 2,
        .height = 2,
        .metatiles = &S3072MapChangedTiles[2 * 2 * 14],
    },
    {
        .id = -1,
    },
};

const u16 S3073MapChangedTiles[] = {
    4 * 151, 4 * 152, 4 * 183, 4 * 184, // 0
    4 * 205, 4 * 206, 4 * 237, 4 * 238, // 1
    4 * 277, 4 * 278, 4 * 309, 4 * 310, // 2
    4 * 333, 4 * 334, 4 * 365, 4 * 366, // 3
    4 * 405, 4 * 406, 4 * 437, 4 * 438, // 4
};

const struct MapChangeInfo S3073MapChanges[] = {
    {
        .id = 0,
        .x = 10,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S3073MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 0,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S3073MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 8,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S3073MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = 3,
        .x = 0,
        .y = 10,
        .width = 2,
        .height = 2,
        .metatiles = &S3073MapChangedTiles[2 * 2 * 3],
    },
    {
        .id = 4,
        .x = 8,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S3073MapChangedTiles[2 * 2 * 4],
    },
    {
        .id = -1,
    },
};

const u16 S3074MapChangedTiles[] = {
    4 * 205, 4 * 206, 4 * 237, 4 * 238, // 0
    4 * 213, 4 * 214, 4 * 245, 4 * 246, // 1
    4 * 401, 4 * 402, 4 * 433, 4 * 434, // 2
    4 * 403, 4 * 404, 4 * 435, 4 * 436, // 3
};

const struct MapChangeInfo S3074MapChanges[] = {
    {
        .id = 0,
        .x = 0,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S3074MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 8,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S3074MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 4,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S3074MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = 3,
        .x = 6,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S3074MapChangedTiles[2 * 2 * 3],
    },
    {
        .id = -1,
    },
};

const u16 S3075MapChangedTiles[] = {
    4 * 143, 4 * 144, 4 * 175, 4 * 176, // 0
    4 * 207, 4 * 208, 4 * 239, 4 * 240, // 1
    4 * 213, 4 * 214, 4 * 245, 4 * 246, // 2
    4 * 397, 4 * 398, 4 * 429, 4 * 430, // 3
    4 * 399, 4 * 400, 4 * 431, 4 * 432, // 4
};

const struct MapChangeInfo S3075MapChanges[] = {
    {
        .id = 0,
        .x = 2,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S3075MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 2,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S3075MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 8,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S3075MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = 3,
        .x = 0,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S3075MapChangedTiles[2 * 2 * 3],
    },
    {
        .id = 4,
        .x = 2,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S3075MapChangedTiles[2 * 2 * 4],
    },
    {
        .id = -1,
    },
};

const u16 S3095MapChangedTiles[] = {
    4 * 209, 4 * 210, 4 * 241, 4 * 242, // 0
    4 * 213, 4 * 214, 4 * 245, 4 * 246, // 1
    4 * 339, 4 * 340, 4 * 371, 4 * 372, // 2
};

const struct MapChangeInfo S3095MapChanges[] = {
    {
        .id = 0,
        .x = 4,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S3095MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 8,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S3095MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 6,
        .y = 10,
        .width = 2,
        .height = 2,
        .metatiles = &S3095MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = -1,
    },
};

const u16 S3115MapChangedTiles[] = {
    4 * 275, 4 * 276, 4 * 307, 4 * 308, // 0
    4 * 401, 4 * 402, 4 * 433, 4 * 434, // 1
};

const struct MapChangeInfo S3115MapChanges[] = {
    {
        .id = 0,
        .x = 6,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S3115MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 4,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S3115MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = -1,
    },
};

const u16 S3121MapChangedTiles[] = {
    4 * 213, 4 * 214, 4 * 245, 4 * 246, // 0
    4 * 271, 4 * 272, 4 * 303, 4 * 304, // 1
    4 * 461, 4 * 462, 4 * 493, 4 * 494, // 2
    4 * 471, 4 * 472, 4 * 503, 4 * 504, // 3
};

const struct MapChangeInfo S3121MapChanges[] = {
    {
        .id = 0,
        .x = 8,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S3121MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 2,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S3121MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 0,
        .y = 14,
        .width = 2,
        .height = 2,
        .metatiles = &S3121MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = 3,
        .x = 10,
        .y = 14,
        .width = 2,
        .height = 2,
        .metatiles = &S3121MapChangedTiles[2 * 2 * 3],
    },
    {
        .id = -1,
    },
};

const u16 S4074MapChangedTiles[] = {
    4 * 87, 4 * 88, 4 * 119, 4 * 120, // 0
    4 * 213, 4 * 214, 4 * 245, 4 * 246, // 1
    4 * 271, 4 * 272, 4 * 303, 4 * 304, // 2
    4 * 335, 4 * 336, 4 * 367, 4 * 368, // 3
    4 * 399, 4 * 400, 4 * 431, 4 * 432, // 4
    4 * 401, 4 * 402, 4 * 433, 4 * 434, // 5
    4 * 403, 4 * 404, 4 * 435, 4 * 436, // 6
};

const struct MapChangeInfo S4074MapChanges[] = {
    {
        .id = 0,
        .x = 10,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S4074MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 8,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S4074MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 2,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S4074MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = 3,
        .x = 2,
        .y = 10,
        .width = 2,
        .height = 2,
        .metatiles = &S4074MapChangedTiles[2 * 2 * 3],
    },
    {
        .id = 4,
        .x = 2,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S4074MapChangedTiles[2 * 2 * 4],
    },
    {
        .id = 5,
        .x = 4,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S4074MapChangedTiles[2 * 2 * 5],
    },
    {
        .id = 6,
        .x = 6,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S4074MapChangedTiles[2 * 2 * 6],
    },
    {
        .id = -1,
    },
};

const u16 S4113MapChangedTiles[] = {
    4 * 141, 4 * 142, 4 * 173, 4 * 174, // 0
    4 * 207, 4 * 208, 4 * 239, 4 * 240, // 1
    4 * 209, 4 * 210, 4 * 241, 4 * 242, // 2
};

const struct MapChangeInfo S4113MapChanges[] = {
    {
        .id = 0,
        .x = 0,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S4113MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 2,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S4113MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 4,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S4113MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = -1,
    },
};

const u16 S6011MapChangedTiles[] = {
    4 * 205, 4 * 206, 4 * 237, 4 * 238, // 0
    4 * 277, 4 * 278, 4 * 309, 4 * 310, // 1
    4 * 279, 4 * 280, 4 * 311, 4 * 312, // 2
    4 * 399, 4 * 400, 4 * 431, 4 * 432, // 3
};

const struct MapChangeInfo S6011MapChanges[] = {
    {
        .id = 0,
        .x = 0,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S6011MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 8,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S6011MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 10,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S6011MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = 3,
        .x = 2,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S6011MapChangedTiles[2 * 2 * 3],
    },
    {
        .id = -1,
    },
};

const u16 S6012MapChangedTiles[] = {
    4 * 151, 4 * 152, 4 * 183, 4 * 184, // 0
    4 * 215, 4 * 216, 4 * 247, 4 * 248, // 1
};

const struct MapChangeInfo S6012MapChanges[] = {
    {
        .id = 0,
        .x = 10,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S6012MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 10,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S6012MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = -1,
    },
};

const u16 S6013MapChangedTiles[] = {
    4 * 13, 4 * 14, 4 * 45, 4 * 46, // 0
    4 * 15, 4 * 16, 4 * 47, 4 * 48, // 1
    4 * 21, 4 * 22, 4 * 53, 4 * 54, // 2
    4 * 23, 4 * 24, 4 * 55, 4 * 56, // 3
    4 * 343, 4 * 344, 4 * 375, 4 * 376, // 4
    4 * 397, 4 * 398, 4 * 429, 4 * 430, // 5
};

const struct MapChangeInfo S6013MapChanges[] = {
    {
        .id = 0,
        .x = 0,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S6013MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 2,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S6013MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 8,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S6013MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = 3,
        .x = 10,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S6013MapChangedTiles[2 * 2 * 3],
    },
    {
        .id = 4,
        .x = 10,
        .y = 10,
        .width = 2,
        .height = 2,
        .metatiles = &S6013MapChangedTiles[2 * 2 * 4],
    },
    {
        .id = 5,
        .x = 0,
        .y = 12,
        .width = 2,
        .height = 2,
        .metatiles = &S6013MapChangedTiles[2 * 2 * 5],
    },
    {
        .id = -1,
    },
};

const u16 S6015MapChangedTiles[] = {
    4 * 207, 4 * 208, 4 * 239, 4 * 240, // 0
    4 * 213, 4 * 214, 4 * 245, 4 * 246, // 1
};

const struct MapChangeInfo S6015MapChanges[] = {
    {
        .id = 0,
        .x = 2,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S6015MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 8,
        .y = 6,
        .width = 2,
        .height = 2,
        .metatiles = &S6015MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = -1,
    },
};

const u16 S6021MapChangedTiles[] = {
    4 * 77, 4 * 78, 4 * 109, 4 * 110, // 0
    4 * 271, 4 * 272, 4 * 303, 4 * 304, // 1
};

const struct MapChangeInfo S6021MapChanges[] = {
    {
        .id = 0,
        .x = 0,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S6021MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 2,
        .y = 8,
        .width = 2,
        .height = 2,
        .metatiles = &S6021MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = -1,
    },
};

const u16 S6022MapChangedTiles[] = {
    4 * 13, 4 * 14, 4 * 45, 4 * 46, // 0
    4 * 77, 4 * 78, 4 * 109, 4 * 110, // 1
    4 * 339, 4 * 340, 4 * 371, 4 * 372, // 2
    4 * 463, 4 * 464, 4 * 495, 4 * 496, // 3
    4 * 465, 4 * 466, 4 * 497, 4 * 498, // 4
};

const struct MapChangeInfo S6022MapChanges[] = {
    {
        .id = 0,
        .x = 0,
        .y = 0,
        .width = 2,
        .height = 2,
        .metatiles = &S6022MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 0,
        .y = 2,
        .width = 2,
        .height = 2,
        .metatiles = &S6022MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = 2,
        .x = 6,
        .y = 10,
        .width = 2,
        .height = 2,
        .metatiles = &S6022MapChangedTiles[2 * 2 * 2],
    },
    {
        .id = 3,
        .x = 2,
        .y = 14,
        .width = 2,
        .height = 2,
        .metatiles = &S6022MapChangedTiles[2 * 2 * 3],
    },
    {
        .id = 4,
        .x = 4,
        .y = 14,
        .width = 2,
        .height = 2,
        .metatiles = &S6022MapChangedTiles[2 * 2 * 4],
    },
    {
        .id = -1,
    },
};

const u16 S6024MapChangedTiles[] = {
    4 * 145, 4 * 146, 4 * 177, 4 * 178, // 0
    4 * 147, 4 * 148, 4 * 179, 4 * 180, // 1
};

const struct MapChangeInfo S6024MapChanges[] = {
    {
        .id = 0,
        .x = 4,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S6024MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 6,
        .y = 4,
        .width = 2,
        .height = 2,
        .metatiles = &S6024MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = -1,
    },
};

const u16 S6055MapChangedTiles[] = {
    4 * 463, 4 * 464, 4 * 495, 4 * 496, // 0
    4 * 469, 4 * 470, 4 * 501, 4 * 502, // 1
};

const struct MapChangeInfo S6055MapChanges[] = {
    {
        .id = 0,
        .x = 2,
        .y = 14,
        .width = 2,
        .height = 2,
        .metatiles = &S6055MapChangedTiles[2 * 2 * 0],
    },
    {
        .id = 1,
        .x = 8,
        .y = 14,
        .width = 2,
        .height = 2,
        .metatiles = &S6055MapChangedTiles[2 * 2 * 1],
    },
    {
        .id = -1,
    },
};

