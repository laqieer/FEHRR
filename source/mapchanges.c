#include "unknown_types.h"

const u16 S0102MapChangedTiles[] = {
    4 * 146, 4 * 147, 4 * 178, 4 * 179, // 0
    4 * 148, 4 * 149, 4 * 180, 4 * 181, // 1
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
    4 * 78, 4 * 79, 4 * 110, 4 * 111, // 0
    4 * 84, 4 * 85, 4 * 116, 4 * 117, // 1
    4 * 142, 4 * 143, 4 * 174, 4 * 175, // 2
    4 * 144, 4 * 145, 4 * 176, 4 * 177, // 3
    4 * 146, 4 * 147, 4 * 178, 4 * 179, // 4
    4 * 148, 4 * 149, 4 * 180, 4 * 181, // 5
    4 * 268, 4 * 269, 4 * 300, 4 * 301, // 6
    4 * 270, 4 * 271, 4 * 302, 4 * 303, // 7
    4 * 276, 4 * 277, 4 * 308, 4 * 309, // 8
    4 * 278, 4 * 279, 4 * 310, 4 * 311, // 9
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
    4 * 12, 4 * 13, 4 * 44, 4 * 45, // 0
    4 * 14, 4 * 15, 4 * 46, 4 * 47, // 1
    4 * 16, 4 * 17, 4 * 48, 4 * 49, // 2
    4 * 82, 4 * 83, 4 * 114, 4 * 115, // 3
    4 * 142, 4 * 143, 4 * 174, 4 * 175, // 4
    4 * 210, 4 * 211, 4 * 242, 4 * 243, // 5
    4 * 270, 4 * 271, 4 * 302, 4 * 303, // 6
    4 * 338, 4 * 339, 4 * 370, 4 * 371, // 7
    4 * 396, 4 * 397, 4 * 428, 4 * 429, // 8
    4 * 400, 4 * 401, 4 * 432, 4 * 433, // 9
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
    4 * 12, 4 * 13, 4 * 44, 4 * 45, // 0
    4 * 14, 4 * 15, 4 * 46, 4 * 47, // 1
    4 * 16, 4 * 17, 4 * 48, 4 * 49, // 2
    4 * 22, 4 * 23, 4 * 54, 4 * 55, // 3
    4 * 76, 4 * 77, 4 * 108, 4 * 109, // 4
    4 * 86, 4 * 87, 4 * 118, 4 * 119, // 5
    4 * 144, 4 * 145, 4 * 176, 4 * 177, // 6
    4 * 146, 4 * 147, 4 * 178, 4 * 179, // 7
    4 * 148, 4 * 149, 4 * 180, 4 * 181, // 8
    4 * 150, 4 * 151, 4 * 182, 4 * 183, // 9
    4 * 210, 4 * 211, 4 * 242, 4 * 243, // 10
    4 * 214, 4 * 215, 4 * 246, 4 * 247, // 11
    4 * 268, 4 * 269, 4 * 300, 4 * 301, // 12
    4 * 270, 4 * 271, 4 * 302, 4 * 303, // 13
    4 * 278, 4 * 279, 4 * 310, 4 * 311, // 14
    4 * 334, 4 * 335, 4 * 366, 4 * 367, // 15
    4 * 338, 4 * 339, 4 * 370, 4 * 371, // 16
    4 * 342, 4 * 343, 4 * 374, 4 * 375, // 17
    4 * 398, 4 * 399, 4 * 430, 4 * 431, // 18
    4 * 400, 4 * 401, 4 * 432, 4 * 433, // 19
    4 * 402, 4 * 403, 4 * 434, 4 * 435, // 20
    4 * 406, 4 * 407, 4 * 438, 4 * 439, // 21
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
    4 * 140, 4 * 141, 4 * 172, 4 * 173, // 0
    4 * 208, 4 * 209, 4 * 240, 4 * 241, // 1
    4 * 210, 4 * 211, 4 * 242, 4 * 243, // 2
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
    4 * 78, 4 * 79, 4 * 110, 4 * 111, // 0
    4 * 80, 4 * 81, 4 * 112, 4 * 113, // 1
    4 * 82, 4 * 83, 4 * 114, 4 * 115, // 2
    4 * 84, 4 * 85, 4 * 116, 4 * 117, // 3
    4 * 142, 4 * 143, 4 * 174, 4 * 175, // 4
    4 * 148, 4 * 149, 4 * 180, 4 * 181, // 5
    4 * 150, 4 * 151, 4 * 182, 4 * 183, // 6
    4 * 204, 4 * 205, 4 * 236, 4 * 237, // 7
    4 * 206, 4 * 207, 4 * 238, 4 * 239, // 8
    4 * 212, 4 * 213, 4 * 244, 4 * 245, // 9
    4 * 270, 4 * 271, 4 * 302, 4 * 303, // 10
    4 * 276, 4 * 277, 4 * 308, 4 * 309, // 11
    4 * 334, 4 * 335, 4 * 366, 4 * 367, // 12
    4 * 336, 4 * 337, 4 * 368, 4 * 369, // 13
    4 * 338, 4 * 339, 4 * 370, 4 * 371, // 14
    4 * 340, 4 * 341, 4 * 372, 4 * 373, // 15
    4 * 402, 4 * 403, 4 * 434, 4 * 435, // 16
    4 * 464, 4 * 465, 4 * 496, 4 * 497, // 17
    4 * 466, 4 * 467, 4 * 498, 4 * 499, // 18
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
    4 * 14, 4 * 15, 4 * 46, 4 * 47, // 0
    4 * 20, 4 * 21, 4 * 52, 4 * 53, // 1
    4 * 78, 4 * 79, 4 * 110, 4 * 111, // 2
    4 * 84, 4 * 85, 4 * 116, 4 * 117, // 3
    4 * 142, 4 * 143, 4 * 174, 4 * 175, // 4
    4 * 148, 4 * 149, 4 * 180, 4 * 181, // 5
    4 * 206, 4 * 207, 4 * 238, 4 * 239, // 6
    4 * 208, 4 * 209, 4 * 240, 4 * 241, // 7
    4 * 210, 4 * 211, 4 * 242, 4 * 243, // 8
    4 * 212, 4 * 213, 4 * 244, 4 * 245, // 9
    4 * 270, 4 * 271, 4 * 302, 4 * 303, // 10
    4 * 276, 4 * 277, 4 * 308, 4 * 309, // 11
    4 * 398, 4 * 399, 4 * 430, 4 * 431, // 12
    4 * 404, 4 * 405, 4 * 436, 4 * 437, // 13
    4 * 464, 4 * 465, 4 * 496, 4 * 497, // 14
    4 * 466, 4 * 467, 4 * 498, 4 * 499, // 15
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
    4 * 12, 4 * 13, 4 * 44, 4 * 45, // 0
    4 * 16, 4 * 17, 4 * 48, 4 * 49, // 1
    4 * 76, 4 * 77, 4 * 108, 4 * 109, // 2
    4 * 78, 4 * 79, 4 * 110, 4 * 111, // 3
    4 * 80, 4 * 81, 4 * 112, 4 * 113, // 4
    4 * 82, 4 * 83, 4 * 114, 4 * 115, // 5
    4 * 84, 4 * 85, 4 * 116, 4 * 117, // 6
    4 * 140, 4 * 141, 4 * 172, 4 * 173, // 7
    4 * 144, 4 * 145, 4 * 176, 4 * 177, // 8
    4 * 148, 4 * 149, 4 * 180, 4 * 181, // 9
    4 * 204, 4 * 205, 4 * 236, 4 * 237, // 10
    4 * 206, 4 * 207, 4 * 238, 4 * 239, // 11
    4 * 208, 4 * 209, 4 * 240, 4 * 241, // 12
    4 * 210, 4 * 211, 4 * 242, 4 * 243, // 13
    4 * 212, 4 * 213, 4 * 244, 4 * 245, // 14
    4 * 214, 4 * 215, 4 * 246, 4 * 247, // 15
    4 * 268, 4 * 269, 4 * 300, 4 * 301, // 16
    4 * 272, 4 * 273, 4 * 304, 4 * 305, // 17
    4 * 276, 4 * 277, 4 * 308, 4 * 309, // 18
    4 * 332, 4 * 333, 4 * 364, 4 * 365, // 19
    4 * 334, 4 * 335, 4 * 366, 4 * 367, // 20
    4 * 336, 4 * 337, 4 * 368, 4 * 369, // 21
    4 * 338, 4 * 339, 4 * 370, 4 * 371, // 22
    4 * 340, 4 * 341, 4 * 372, 4 * 373, // 23
    4 * 342, 4 * 343, 4 * 374, 4 * 375, // 24
    4 * 396, 4 * 397, 4 * 428, 4 * 429, // 25
    4 * 400, 4 * 401, 4 * 432, 4 * 433, // 26
    4 * 404, 4 * 405, 4 * 436, 4 * 437, // 27
    4 * 460, 4 * 461, 4 * 492, 4 * 493, // 28
    4 * 462, 4 * 463, 4 * 494, 4 * 495, // 29
    4 * 464, 4 * 465, 4 * 496, 4 * 497, // 30
    4 * 466, 4 * 467, 4 * 498, 4 * 499, // 31
    4 * 468, 4 * 469, 4 * 500, 4 * 501, // 32
    4 * 470, 4 * 471, 4 * 502, 4 * 503, // 33
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
    4 * 12, 4 * 13, 4 * 44, 4 * 45, // 0
    4 * 14, 4 * 15, 4 * 46, 4 * 47, // 1
    4 * 20, 4 * 21, 4 * 52, 4 * 53, // 2
    4 * 22, 4 * 23, 4 * 54, 4 * 55, // 3
    4 * 76, 4 * 77, 4 * 108, 4 * 109, // 4
    4 * 86, 4 * 87, 4 * 118, 4 * 119, // 5
    4 * 206, 4 * 207, 4 * 238, 4 * 239, // 6
    4 * 208, 4 * 209, 4 * 240, 4 * 241, // 7
    4 * 210, 4 * 211, 4 * 242, 4 * 243, // 8
    4 * 212, 4 * 213, 4 * 244, 4 * 245, // 9
    4 * 270, 4 * 271, 4 * 302, 4 * 303, // 10
    4 * 272, 4 * 273, 4 * 304, 4 * 305, // 11
    4 * 274, 4 * 275, 4 * 306, 4 * 307, // 12
    4 * 276, 4 * 277, 4 * 308, 4 * 309, // 13
    4 * 396, 4 * 397, 4 * 428, 4 * 429, // 14
    4 * 406, 4 * 407, 4 * 438, 4 * 439, // 15
    4 * 460, 4 * 461, 4 * 492, 4 * 493, // 16
    4 * 462, 4 * 463, 4 * 494, 4 * 495, // 17
    4 * 468, 4 * 469, 4 * 500, 4 * 501, // 18
    4 * 470, 4 * 471, 4 * 502, 4 * 503, // 19
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
    4 * 206, 4 * 207, 4 * 238, 4 * 239, // 0
    4 * 402, 4 * 403, 4 * 434, 4 * 435, // 1
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
    4 * 16, 4 * 17, 4 * 48, 4 * 49, // 0
    4 * 18, 4 * 19, 4 * 50, 4 * 51, // 1
    4 * 20, 4 * 21, 4 * 52, 4 * 53, // 2
    4 * 22, 4 * 23, 4 * 54, 4 * 55, // 3
    4 * 80, 4 * 81, 4 * 112, 4 * 113, // 4
    4 * 144, 4 * 145, 4 * 176, 4 * 177, // 5
    4 * 146, 4 * 147, 4 * 178, 4 * 179, // 6
    4 * 148, 4 * 149, 4 * 180, 4 * 181, // 7
    4 * 272, 4 * 273, 4 * 304, 4 * 305, // 8
    4 * 274, 4 * 275, 4 * 306, 4 * 307, // 9
    4 * 276, 4 * 277, 4 * 308, 4 * 309, // 10
    4 * 336, 4 * 337, 4 * 368, 4 * 369, // 11
    4 * 400, 4 * 401, 4 * 432, 4 * 433, // 12
    4 * 402, 4 * 403, 4 * 434, 4 * 435, // 13
    4 * 404, 4 * 405, 4 * 436, 4 * 437, // 14
    4 * 406, 4 * 407, 4 * 438, 4 * 439, // 15
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
    4 * 140, 4 * 141, 4 * 172, 4 * 173, // 0
    4 * 142, 4 * 143, 4 * 174, 4 * 175, // 1
    4 * 148, 4 * 149, 4 * 180, 4 * 181, // 2
    4 * 150, 4 * 151, 4 * 182, 4 * 183, // 3
    4 * 212, 4 * 213, 4 * 244, 4 * 245, // 4
    4 * 270, 4 * 271, 4 * 302, 4 * 303, // 5
    4 * 272, 4 * 273, 4 * 304, 4 * 305, // 6
    4 * 274, 4 * 275, 4 * 306, 4 * 307, // 7
    4 * 276, 4 * 277, 4 * 308, 4 * 309, // 8
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
    4 * 80, 4 * 81, 4 * 112, 4 * 113, // 0
    4 * 82, 4 * 83, 4 * 114, 4 * 115, // 1
    4 * 140, 4 * 141, 4 * 172, 4 * 173, // 2
    4 * 142, 4 * 143, 4 * 174, 4 * 175, // 3
    4 * 148, 4 * 149, 4 * 180, 4 * 181, // 4
    4 * 150, 4 * 151, 4 * 182, 4 * 183, // 5
    4 * 336, 4 * 337, 4 * 368, 4 * 369, // 6
    4 * 338, 4 * 339, 4 * 370, 4 * 371, // 7
    4 * 396, 4 * 397, 4 * 428, 4 * 429, // 8
    4 * 398, 4 * 399, 4 * 430, 4 * 431, // 9
    4 * 404, 4 * 405, 4 * 436, 4 * 437, // 10
    4 * 406, 4 * 407, 4 * 438, 4 * 439, // 11
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
    4 * 14, 4 * 15, 4 * 46, 4 * 47, // 0
    4 * 16, 4 * 17, 4 * 48, 4 * 49, // 1
    4 * 18, 4 * 19, 4 * 50, 4 * 51, // 2
    4 * 22, 4 * 23, 4 * 54, 4 * 55, // 3
    4 * 78, 4 * 79, 4 * 110, 4 * 111, // 4
    4 * 82, 4 * 83, 4 * 114, 4 * 115, // 5
    4 * 86, 4 * 87, 4 * 118, 4 * 119, // 6
    4 * 212, 4 * 213, 4 * 244, 4 * 245, // 7
    4 * 268, 4 * 269, 4 * 300, 4 * 301, // 8
    4 * 270, 4 * 271, 4 * 302, 4 * 303, // 9
    4 * 274, 4 * 275, 4 * 306, 4 * 307, // 10
    4 * 396, 4 * 397, 4 * 428, 4 * 429, // 11
    4 * 398, 4 * 399, 4 * 430, 4 * 431, // 12
    4 * 400, 4 * 401, 4 * 432, 4 * 433, // 13
    4 * 470, 4 * 471, 4 * 502, 4 * 503, // 14
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
    4 * 78, 4 * 79, 4 * 110, 4 * 111, // 0
    4 * 84, 4 * 85, 4 * 116, 4 * 117, // 1
    4 * 142, 4 * 143, 4 * 174, 4 * 175, // 2
    4 * 148, 4 * 149, 4 * 180, 4 * 181, // 3
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
    4 * 142, 4 * 143, 4 * 174, 4 * 175, // 0
    4 * 210, 4 * 211, 4 * 242, 4 * 243, // 1
    4 * 274, 4 * 275, 4 * 306, 4 * 307, // 2
    4 * 276, 4 * 277, 4 * 308, 4 * 309, // 3
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
    4 * 12, 4 * 13, 4 * 44, 4 * 45, // 0
    4 * 14, 4 * 15, 4 * 46, 4 * 47, // 1
    4 * 16, 4 * 17, 4 * 48, 4 * 49, // 2
    4 * 18, 4 * 19, 4 * 50, 4 * 51, // 3
    4 * 20, 4 * 21, 4 * 52, 4 * 53, // 4
    4 * 22, 4 * 23, 4 * 54, 4 * 55, // 5
    4 * 76, 4 * 77, 4 * 108, 4 * 109, // 6
    4 * 140, 4 * 141, 4 * 172, 4 * 173, // 7
    4 * 144, 4 * 145, 4 * 176, 4 * 177, // 8
    4 * 148, 4 * 149, 4 * 180, 4 * 181, // 9
    4 * 204, 4 * 205, 4 * 236, 4 * 237, // 10
    4 * 268, 4 * 269, 4 * 300, 4 * 301, // 11
    4 * 270, 4 * 271, 4 * 302, 4 * 303, // 12
    4 * 272, 4 * 273, 4 * 304, 4 * 305, // 13
    4 * 276, 4 * 277, 4 * 308, 4 * 309, // 14
    4 * 278, 4 * 279, 4 * 310, 4 * 311, // 15
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
    4 * 16, 4 * 17, 4 * 48, 4 * 49, // 0
    4 * 144, 4 * 145, 4 * 176, 4 * 177, // 1
    4 * 146, 4 * 147, 4 * 178, 4 * 179, // 2
    4 * 148, 4 * 149, 4 * 180, 4 * 181, // 3
    4 * 150, 4 * 151, 4 * 182, 4 * 183, // 4
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
    4 * 12, 4 * 13, 4 * 44, 4 * 45, // 0
    4 * 16, 4 * 17, 4 * 48, 4 * 49, // 1
    4 * 18, 4 * 19, 4 * 50, 4 * 51, // 2
    4 * 22, 4 * 23, 4 * 54, 4 * 55, // 3
    4 * 270, 4 * 271, 4 * 302, 4 * 303, // 4
    4 * 272, 4 * 273, 4 * 304, 4 * 305, // 5
    4 * 276, 4 * 277, 4 * 308, 4 * 309, // 6
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
    4 * 206, 4 * 207, 4 * 238, 4 * 239, // 0
    4 * 212, 4 * 213, 4 * 244, 4 * 245, // 1
    4 * 274, 4 * 275, 4 * 306, 4 * 307, // 2
    4 * 278, 4 * 279, 4 * 310, 4 * 311, // 3
    4 * 332, 4 * 333, 4 * 364, 4 * 365, // 4
    4 * 400, 4 * 401, 4 * 432, 4 * 433, // 5
    4 * 406, 4 * 407, 4 * 438, 4 * 439, // 6
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
    4 * 78, 4 * 79, 4 * 110, 4 * 111, // 0
    4 * 274, 4 * 275, 4 * 306, 4 * 307, // 1
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
    4 * 22, 4 * 23, 4 * 54, 4 * 55, // 0
    4 * 78, 4 * 79, 4 * 110, 4 * 111, // 1
    4 * 210, 4 * 211, 4 * 242, 4 * 243, // 2
    4 * 212, 4 * 213, 4 * 244, 4 * 245, // 3
    4 * 214, 4 * 215, 4 * 246, 4 * 247, // 4
    4 * 268, 4 * 269, 4 * 300, 4 * 301, // 5
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
    4 * 462, 4 * 463, 4 * 494, 4 * 495, // 0
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
    4 * 272, 4 * 273, 4 * 304, 4 * 305, // 0
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
    4 * 78, 4 * 79, 4 * 110, 4 * 111, // 0
    4 * 84, 4 * 85, 4 * 116, 4 * 117, // 1
    4 * 142, 4 * 143, 4 * 174, 4 * 175, // 2
    4 * 212, 4 * 213, 4 * 244, 4 * 245, // 3
    4 * 270, 4 * 271, 4 * 302, 4 * 303, // 4
    4 * 276, 4 * 277, 4 * 308, 4 * 309, // 5
    4 * 278, 4 * 279, 4 * 310, 4 * 311, // 6
    4 * 332, 4 * 333, 4 * 364, 4 * 365, // 7
    4 * 334, 4 * 335, 4 * 366, 4 * 367, // 8
    4 * 342, 4 * 343, 4 * 374, 4 * 375, // 9
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
    4 * 268, 4 * 269, 4 * 300, 4 * 301, // 0
    4 * 278, 4 * 279, 4 * 310, 4 * 311, // 1
    4 * 336, 4 * 337, 4 * 368, 4 * 369, // 2
    4 * 338, 4 * 339, 4 * 370, 4 * 371, // 3
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
    4 * 78, 4 * 79, 4 * 110, 4 * 111, // 0
    4 * 204, 4 * 205, 4 * 236, 4 * 237, // 1
    4 * 470, 4 * 471, 4 * 502, 4 * 503, // 2
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
    4 * 148, 4 * 149, 4 * 180, 4 * 181, // 0
    4 * 406, 4 * 407, 4 * 438, 4 * 439, // 1
    4 * 464, 4 * 465, 4 * 496, 4 * 497, // 2
    4 * 470, 4 * 471, 4 * 502, 4 * 503, // 3
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
    4 * 150, 4 * 151, 4 * 182, 4 * 183, // 0
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
    4 * 398, 4 * 399, 4 * 430, 4 * 431, // 0
    4 * 404, 4 * 405, 4 * 436, 4 * 437, // 1
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
    4 * 142, 4 * 143, 4 * 174, 4 * 175, // 0
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
    4 * 148, 4 * 149, 4 * 180, 4 * 181, // 0
    4 * 150, 4 * 151, 4 * 182, 4 * 183, // 1
    4 * 212, 4 * 213, 4 * 244, 4 * 245, // 2
    4 * 214, 4 * 215, 4 * 246, 4 * 247, // 3
    4 * 334, 4 * 335, 4 * 366, 4 * 367, // 4
    4 * 336, 4 * 337, 4 * 368, 4 * 369, // 5
    4 * 398, 4 * 399, 4 * 430, 4 * 431, // 6
    4 * 400, 4 * 401, 4 * 432, 4 * 433, // 7
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
    4 * 12, 4 * 13, 4 * 44, 4 * 45, // 0
    4 * 22, 4 * 23, 4 * 54, 4 * 55, // 1
    4 * 76, 4 * 77, 4 * 108, 4 * 109, // 2
    4 * 86, 4 * 87, 4 * 118, 4 * 119, // 3
    4 * 206, 4 * 207, 4 * 238, 4 * 239, // 4
    4 * 208, 4 * 209, 4 * 240, 4 * 241, // 5
    4 * 210, 4 * 211, 4 * 242, 4 * 243, // 6
    4 * 212, 4 * 213, 4 * 244, 4 * 245, // 7
    4 * 396, 4 * 397, 4 * 428, 4 * 429, // 8
    4 * 398, 4 * 399, 4 * 430, 4 * 431, // 9
    4 * 404, 4 * 405, 4 * 436, 4 * 437, // 10
    4 * 406, 4 * 407, 4 * 438, 4 * 439, // 11
    4 * 460, 4 * 461, 4 * 492, 4 * 493, // 12
    4 * 462, 4 * 463, 4 * 494, 4 * 495, // 13
    4 * 468, 4 * 469, 4 * 500, 4 * 501, // 14
    4 * 470, 4 * 471, 4 * 502, 4 * 503, // 15
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
    4 * 18, 4 * 19, 4 * 50, 4 * 51, // 0
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
    4 * 150, 4 * 151, 4 * 182, 4 * 183, // 0
    4 * 268, 4 * 269, 4 * 300, 4 * 301, // 1
    4 * 274, 4 * 275, 4 * 306, 4 * 307, // 2
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
    4 * 78, 4 * 79, 4 * 110, 4 * 111, // 0
    4 * 214, 4 * 215, 4 * 246, 4 * 247, // 1
    4 * 268, 4 * 269, 4 * 300, 4 * 301, // 2
    4 * 270, 4 * 271, 4 * 302, 4 * 303, // 3
    4 * 340, 4 * 341, 4 * 372, 4 * 373, // 4
    4 * 462, 4 * 463, 4 * 494, 4 * 495, // 5
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
    4 * 210, 4 * 211, 4 * 242, 4 * 243, // 0
    4 * 268, 4 * 269, 4 * 300, 4 * 301, // 1
    4 * 342, 4 * 343, 4 * 374, 4 * 375, // 2
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
    4 * 338, 4 * 339, 4 * 370, 4 * 371, // 0
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
    4 * 14, 4 * 15, 4 * 46, 4 * 47, // 0
    4 * 78, 4 * 79, 4 * 110, 4 * 111, // 1
    4 * 142, 4 * 143, 4 * 174, 4 * 175, // 2
    4 * 210, 4 * 211, 4 * 242, 4 * 243, // 3
    4 * 274, 4 * 275, 4 * 306, 4 * 307, // 4
    4 * 276, 4 * 277, 4 * 308, 4 * 309, // 5
    4 * 404, 4 * 405, 4 * 436, 4 * 437, // 6
    4 * 406, 4 * 407, 4 * 438, 4 * 439, // 7
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
    4 * 12, 4 * 13, 4 * 44, 4 * 45, // 0
    4 * 210, 4 * 211, 4 * 242, 4 * 243, // 1
    4 * 270, 4 * 271, 4 * 302, 4 * 303, // 2
    4 * 276, 4 * 277, 4 * 308, 4 * 309, // 3
    4 * 460, 4 * 461, 4 * 492, 4 * 493, // 4
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
    4 * 78, 4 * 79, 4 * 110, 4 * 111, // 0
    4 * 140, 4 * 141, 4 * 172, 4 * 173, // 1
    4 * 142, 4 * 143, 4 * 174, 4 * 175, // 2
    4 * 144, 4 * 145, 4 * 176, 4 * 177, // 3
    4 * 206, 4 * 207, 4 * 238, 4 * 239, // 4
    4 * 270, 4 * 271, 4 * 302, 4 * 303, // 5
    4 * 276, 4 * 277, 4 * 308, 4 * 309, // 6
    4 * 340, 4 * 341, 4 * 372, 4 * 373, // 7
    4 * 402, 4 * 403, 4 * 434, 4 * 435, // 8
    4 * 404, 4 * 405, 4 * 436, 4 * 437, // 9
    4 * 406, 4 * 407, 4 * 438, 4 * 439, // 10
    4 * 468, 4 * 469, 4 * 500, 4 * 501, // 11
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
    4 * 14, 4 * 15, 4 * 46, 4 * 47, // 0
    4 * 16, 4 * 17, 4 * 48, 4 * 49, // 1
    4 * 22, 4 * 23, 4 * 54, 4 * 55, // 2
    4 * 80, 4 * 81, 4 * 112, 4 * 113, // 3
    4 * 86, 4 * 87, 4 * 118, 4 * 119, // 4
    4 * 148, 4 * 149, 4 * 180, 4 * 181, // 5
    4 * 204, 4 * 205, 4 * 236, 4 * 237, // 6
    4 * 206, 4 * 207, 4 * 238, 4 * 239, // 7
    4 * 336, 4 * 337, 4 * 368, 4 * 369, // 8
    4 * 338, 4 * 339, 4 * 370, 4 * 371, // 9
    4 * 402, 4 * 403, 4 * 434, 4 * 435, // 10
    4 * 404, 4 * 405, 4 * 436, 4 * 437, // 11
    4 * 460, 4 * 461, 4 * 492, 4 * 493, // 12
    4 * 462, 4 * 463, 4 * 494, 4 * 495, // 13
    4 * 464, 4 * 465, 4 * 496, 4 * 497, // 14
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
    4 * 150, 4 * 151, 4 * 182, 4 * 183, // 0
    4 * 204, 4 * 205, 4 * 236, 4 * 237, // 1
    4 * 276, 4 * 277, 4 * 308, 4 * 309, // 2
    4 * 332, 4 * 333, 4 * 364, 4 * 365, // 3
    4 * 404, 4 * 405, 4 * 436, 4 * 437, // 4
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
    4 * 204, 4 * 205, 4 * 236, 4 * 237, // 0
    4 * 212, 4 * 213, 4 * 244, 4 * 245, // 1
    4 * 400, 4 * 401, 4 * 432, 4 * 433, // 2
    4 * 402, 4 * 403, 4 * 434, 4 * 435, // 3
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
    4 * 142, 4 * 143, 4 * 174, 4 * 175, // 0
    4 * 206, 4 * 207, 4 * 238, 4 * 239, // 1
    4 * 212, 4 * 213, 4 * 244, 4 * 245, // 2
    4 * 396, 4 * 397, 4 * 428, 4 * 429, // 3
    4 * 398, 4 * 399, 4 * 430, 4 * 431, // 4
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
    4 * 208, 4 * 209, 4 * 240, 4 * 241, // 0
    4 * 212, 4 * 213, 4 * 244, 4 * 245, // 1
    4 * 338, 4 * 339, 4 * 370, 4 * 371, // 2
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
    4 * 274, 4 * 275, 4 * 306, 4 * 307, // 0
    4 * 400, 4 * 401, 4 * 432, 4 * 433, // 1
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
    4 * 212, 4 * 213, 4 * 244, 4 * 245, // 0
    4 * 270, 4 * 271, 4 * 302, 4 * 303, // 1
    4 * 460, 4 * 461, 4 * 492, 4 * 493, // 2
    4 * 470, 4 * 471, 4 * 502, 4 * 503, // 3
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
    4 * 86, 4 * 87, 4 * 118, 4 * 119, // 0
    4 * 212, 4 * 213, 4 * 244, 4 * 245, // 1
    4 * 270, 4 * 271, 4 * 302, 4 * 303, // 2
    4 * 334, 4 * 335, 4 * 366, 4 * 367, // 3
    4 * 398, 4 * 399, 4 * 430, 4 * 431, // 4
    4 * 400, 4 * 401, 4 * 432, 4 * 433, // 5
    4 * 402, 4 * 403, 4 * 434, 4 * 435, // 6
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
    4 * 140, 4 * 141, 4 * 172, 4 * 173, // 0
    4 * 206, 4 * 207, 4 * 238, 4 * 239, // 1
    4 * 208, 4 * 209, 4 * 240, 4 * 241, // 2
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
    4 * 204, 4 * 205, 4 * 236, 4 * 237, // 0
    4 * 276, 4 * 277, 4 * 308, 4 * 309, // 1
    4 * 278, 4 * 279, 4 * 310, 4 * 311, // 2
    4 * 398, 4 * 399, 4 * 430, 4 * 431, // 3
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
    4 * 150, 4 * 151, 4 * 182, 4 * 183, // 0
    4 * 214, 4 * 215, 4 * 246, 4 * 247, // 1
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
    4 * 12, 4 * 13, 4 * 44, 4 * 45, // 0
    4 * 14, 4 * 15, 4 * 46, 4 * 47, // 1
    4 * 20, 4 * 21, 4 * 52, 4 * 53, // 2
    4 * 22, 4 * 23, 4 * 54, 4 * 55, // 3
    4 * 342, 4 * 343, 4 * 374, 4 * 375, // 4
    4 * 396, 4 * 397, 4 * 428, 4 * 429, // 5
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
    4 * 206, 4 * 207, 4 * 238, 4 * 239, // 0
    4 * 212, 4 * 213, 4 * 244, 4 * 245, // 1
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
    4 * 76, 4 * 77, 4 * 108, 4 * 109, // 0
    4 * 270, 4 * 271, 4 * 302, 4 * 303, // 1
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
    4 * 12, 4 * 13, 4 * 44, 4 * 45, // 0
    4 * 76, 4 * 77, 4 * 108, 4 * 109, // 1
    4 * 338, 4 * 339, 4 * 370, 4 * 371, // 2
    4 * 462, 4 * 463, 4 * 494, 4 * 495, // 3
    4 * 464, 4 * 465, 4 * 496, 4 * 497, // 4
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
    4 * 144, 4 * 145, 4 * 176, 4 * 177, // 0
    4 * 146, 4 * 147, 4 * 178, 4 * 179, // 1
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
    4 * 462, 4 * 463, 4 * 494, 4 * 495, // 0
    4 * 468, 4 * 469, 4 * 500, 4 * 501, // 1
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

