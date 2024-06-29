#include "unknown_types.h"

const u16 S0102MapChangedTiles[] = {
    4 * 82, 4 * 83, 4 * 98, 4 * 99, // 0
    4 * 84, 4 * 85, 4 * 100, 4 * 101, // 1
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
    4 * 46, 4 * 47, 4 * 62, 4 * 63, // 0
    4 * 52, 4 * 53, 4 * 68, 4 * 69, // 1
    4 * 78, 4 * 79, 4 * 94, 4 * 95, // 2
    4 * 80, 4 * 81, 4 * 96, 4 * 97, // 3
    4 * 82, 4 * 83, 4 * 98, 4 * 99, // 4
    4 * 84, 4 * 85, 4 * 100, 4 * 101, // 5
    4 * 140, 4 * 141, 4 * 156, 4 * 157, // 6
    4 * 142, 4 * 143, 4 * 158, 4 * 159, // 7
    4 * 148, 4 * 149, 4 * 164, 4 * 165, // 8
    4 * 150, 4 * 151, 4 * 166, 4 * 167, // 9
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
    4 * 12, 4 * 13, 4 * 28, 4 * 29, // 0
    4 * 14, 4 * 15, 4 * 30, 4 * 31, // 1
    4 * 16, 4 * 17, 4 * 32, 4 * 33, // 2
    4 * 50, 4 * 51, 4 * 66, 4 * 67, // 3
    4 * 78, 4 * 79, 4 * 94, 4 * 95, // 4
    4 * 114, 4 * 115, 4 * 130, 4 * 131, // 5
    4 * 142, 4 * 143, 4 * 158, 4 * 159, // 6
    4 * 178, 4 * 179, 4 * 194, 4 * 195, // 7
    4 * 204, 4 * 205, 4 * 220, 4 * 221, // 8
    4 * 208, 4 * 209, 4 * 224, 4 * 225, // 9
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
    4 * 12, 4 * 13, 4 * 28, 4 * 29, // 0
    4 * 14, 4 * 15, 4 * 30, 4 * 31, // 1
    4 * 16, 4 * 17, 4 * 32, 4 * 33, // 2
    4 * 22, 4 * 23, 4 * 38, 4 * 39, // 3
    4 * 44, 4 * 45, 4 * 60, 4 * 61, // 4
    4 * 54, 4 * 55, 4 * 70, 4 * 71, // 5
    4 * 80, 4 * 81, 4 * 96, 4 * 97, // 6
    4 * 82, 4 * 83, 4 * 98, 4 * 99, // 7
    4 * 84, 4 * 85, 4 * 100, 4 * 101, // 8
    4 * 86, 4 * 87, 4 * 102, 4 * 103, // 9
    4 * 114, 4 * 115, 4 * 130, 4 * 131, // 10
    4 * 118, 4 * 119, 4 * 134, 4 * 135, // 11
    4 * 140, 4 * 141, 4 * 156, 4 * 157, // 12
    4 * 142, 4 * 143, 4 * 158, 4 * 159, // 13
    4 * 150, 4 * 151, 4 * 166, 4 * 167, // 14
    4 * 174, 4 * 175, 4 * 190, 4 * 191, // 15
    4 * 178, 4 * 179, 4 * 194, 4 * 195, // 16
    4 * 182, 4 * 183, 4 * 198, 4 * 199, // 17
    4 * 206, 4 * 207, 4 * 222, 4 * 223, // 18
    4 * 208, 4 * 209, 4 * 224, 4 * 225, // 19
    4 * 210, 4 * 211, 4 * 226, 4 * 227, // 20
    4 * 214, 4 * 215, 4 * 230, 4 * 231, // 21
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
    4 * 76, 4 * 77, 4 * 92, 4 * 93, // 0
    4 * 112, 4 * 113, 4 * 128, 4 * 129, // 1
    4 * 114, 4 * 115, 4 * 130, 4 * 131, // 2
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
    4 * 46, 4 * 47, 4 * 62, 4 * 63, // 0
    4 * 48, 4 * 49, 4 * 64, 4 * 65, // 1
    4 * 50, 4 * 51, 4 * 66, 4 * 67, // 2
    4 * 52, 4 * 53, 4 * 68, 4 * 69, // 3
    4 * 78, 4 * 79, 4 * 94, 4 * 95, // 4
    4 * 84, 4 * 85, 4 * 100, 4 * 101, // 5
    4 * 86, 4 * 87, 4 * 102, 4 * 103, // 6
    4 * 108, 4 * 109, 4 * 124, 4 * 125, // 7
    4 * 110, 4 * 111, 4 * 126, 4 * 127, // 8
    4 * 116, 4 * 117, 4 * 132, 4 * 133, // 9
    4 * 142, 4 * 143, 4 * 158, 4 * 159, // 10
    4 * 148, 4 * 149, 4 * 164, 4 * 165, // 11
    4 * 174, 4 * 175, 4 * 190, 4 * 191, // 12
    4 * 176, 4 * 177, 4 * 192, 4 * 193, // 13
    4 * 178, 4 * 179, 4 * 194, 4 * 195, // 14
    4 * 180, 4 * 181, 4 * 196, 4 * 197, // 15
    4 * 210, 4 * 211, 4 * 226, 4 * 227, // 16
    4 * 240, 4 * 241, 4 * 256, 4 * 257, // 17
    4 * 242, 4 * 243, 4 * 258, 4 * 259, // 18
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
    4 * 14, 4 * 15, 4 * 30, 4 * 31, // 0
    4 * 20, 4 * 21, 4 * 36, 4 * 37, // 1
    4 * 46, 4 * 47, 4 * 62, 4 * 63, // 2
    4 * 52, 4 * 53, 4 * 68, 4 * 69, // 3
    4 * 78, 4 * 79, 4 * 94, 4 * 95, // 4
    4 * 84, 4 * 85, 4 * 100, 4 * 101, // 5
    4 * 110, 4 * 111, 4 * 126, 4 * 127, // 6
    4 * 112, 4 * 113, 4 * 128, 4 * 129, // 7
    4 * 114, 4 * 115, 4 * 130, 4 * 131, // 8
    4 * 116, 4 * 117, 4 * 132, 4 * 133, // 9
    4 * 142, 4 * 143, 4 * 158, 4 * 159, // 10
    4 * 148, 4 * 149, 4 * 164, 4 * 165, // 11
    4 * 206, 4 * 207, 4 * 222, 4 * 223, // 12
    4 * 212, 4 * 213, 4 * 228, 4 * 229, // 13
    4 * 240, 4 * 241, 4 * 256, 4 * 257, // 14
    4 * 242, 4 * 243, 4 * 258, 4 * 259, // 15
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
    4 * 12, 4 * 13, 4 * 28, 4 * 29, // 0
    4 * 16, 4 * 17, 4 * 32, 4 * 33, // 1
    4 * 44, 4 * 45, 4 * 60, 4 * 61, // 2
    4 * 46, 4 * 47, 4 * 62, 4 * 63, // 3
    4 * 48, 4 * 49, 4 * 64, 4 * 65, // 4
    4 * 50, 4 * 51, 4 * 66, 4 * 67, // 5
    4 * 52, 4 * 53, 4 * 68, 4 * 69, // 6
    4 * 76, 4 * 77, 4 * 92, 4 * 93, // 7
    4 * 80, 4 * 81, 4 * 96, 4 * 97, // 8
    4 * 84, 4 * 85, 4 * 100, 4 * 101, // 9
    4 * 108, 4 * 109, 4 * 124, 4 * 125, // 10
    4 * 110, 4 * 111, 4 * 126, 4 * 127, // 11
    4 * 112, 4 * 113, 4 * 128, 4 * 129, // 12
    4 * 114, 4 * 115, 4 * 130, 4 * 131, // 13
    4 * 116, 4 * 117, 4 * 132, 4 * 133, // 14
    4 * 118, 4 * 119, 4 * 134, 4 * 135, // 15
    4 * 140, 4 * 141, 4 * 156, 4 * 157, // 16
    4 * 144, 4 * 145, 4 * 160, 4 * 161, // 17
    4 * 148, 4 * 149, 4 * 164, 4 * 165, // 18
    4 * 172, 4 * 173, 4 * 188, 4 * 189, // 19
    4 * 174, 4 * 175, 4 * 190, 4 * 191, // 20
    4 * 176, 4 * 177, 4 * 192, 4 * 193, // 21
    4 * 178, 4 * 179, 4 * 194, 4 * 195, // 22
    4 * 180, 4 * 181, 4 * 196, 4 * 197, // 23
    4 * 182, 4 * 183, 4 * 198, 4 * 199, // 24
    4 * 204, 4 * 205, 4 * 220, 4 * 221, // 25
    4 * 208, 4 * 209, 4 * 224, 4 * 225, // 26
    4 * 212, 4 * 213, 4 * 228, 4 * 229, // 27
    4 * 236, 4 * 237, 4 * 252, 4 * 253, // 28
    4 * 238, 4 * 239, 4 * 254, 4 * 255, // 29
    4 * 240, 4 * 241, 4 * 256, 4 * 257, // 30
    4 * 242, 4 * 243, 4 * 258, 4 * 259, // 31
    4 * 244, 4 * 245, 4 * 260, 4 * 261, // 32
    4 * 246, 4 * 247, 4 * 262, 4 * 263, // 33
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
    4 * 12, 4 * 13, 4 * 28, 4 * 29, // 0
    4 * 14, 4 * 15, 4 * 30, 4 * 31, // 1
    4 * 20, 4 * 21, 4 * 36, 4 * 37, // 2
    4 * 22, 4 * 23, 4 * 38, 4 * 39, // 3
    4 * 44, 4 * 45, 4 * 60, 4 * 61, // 4
    4 * 54, 4 * 55, 4 * 70, 4 * 71, // 5
    4 * 110, 4 * 111, 4 * 126, 4 * 127, // 6
    4 * 112, 4 * 113, 4 * 128, 4 * 129, // 7
    4 * 114, 4 * 115, 4 * 130, 4 * 131, // 8
    4 * 116, 4 * 117, 4 * 132, 4 * 133, // 9
    4 * 142, 4 * 143, 4 * 158, 4 * 159, // 10
    4 * 144, 4 * 145, 4 * 160, 4 * 161, // 11
    4 * 146, 4 * 147, 4 * 162, 4 * 163, // 12
    4 * 148, 4 * 149, 4 * 164, 4 * 165, // 13
    4 * 204, 4 * 205, 4 * 220, 4 * 221, // 14
    4 * 214, 4 * 215, 4 * 230, 4 * 231, // 15
    4 * 236, 4 * 237, 4 * 252, 4 * 253, // 16
    4 * 238, 4 * 239, 4 * 254, 4 * 255, // 17
    4 * 244, 4 * 245, 4 * 260, 4 * 261, // 18
    4 * 246, 4 * 247, 4 * 262, 4 * 263, // 19
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
    4 * 110, 4 * 111, 4 * 126, 4 * 127, // 0
    4 * 210, 4 * 211, 4 * 226, 4 * 227, // 1
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
    4 * 16, 4 * 17, 4 * 32, 4 * 33, // 0
    4 * 18, 4 * 19, 4 * 34, 4 * 35, // 1
    4 * 20, 4 * 21, 4 * 36, 4 * 37, // 2
    4 * 22, 4 * 23, 4 * 38, 4 * 39, // 3
    4 * 48, 4 * 49, 4 * 64, 4 * 65, // 4
    4 * 80, 4 * 81, 4 * 96, 4 * 97, // 5
    4 * 82, 4 * 83, 4 * 98, 4 * 99, // 6
    4 * 84, 4 * 85, 4 * 100, 4 * 101, // 7
    4 * 144, 4 * 145, 4 * 160, 4 * 161, // 8
    4 * 146, 4 * 147, 4 * 162, 4 * 163, // 9
    4 * 148, 4 * 149, 4 * 164, 4 * 165, // 10
    4 * 176, 4 * 177, 4 * 192, 4 * 193, // 11
    4 * 208, 4 * 209, 4 * 224, 4 * 225, // 12
    4 * 210, 4 * 211, 4 * 226, 4 * 227, // 13
    4 * 212, 4 * 213, 4 * 228, 4 * 229, // 14
    4 * 214, 4 * 215, 4 * 230, 4 * 231, // 15
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
    4 * 76, 4 * 77, 4 * 92, 4 * 93, // 0
    4 * 78, 4 * 79, 4 * 94, 4 * 95, // 1
    4 * 84, 4 * 85, 4 * 100, 4 * 101, // 2
    4 * 86, 4 * 87, 4 * 102, 4 * 103, // 3
    4 * 116, 4 * 117, 4 * 132, 4 * 133, // 4
    4 * 142, 4 * 143, 4 * 158, 4 * 159, // 5
    4 * 144, 4 * 145, 4 * 160, 4 * 161, // 6
    4 * 146, 4 * 147, 4 * 162, 4 * 163, // 7
    4 * 148, 4 * 149, 4 * 164, 4 * 165, // 8
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
    4 * 48, 4 * 49, 4 * 64, 4 * 65, // 0
    4 * 50, 4 * 51, 4 * 66, 4 * 67, // 1
    4 * 76, 4 * 77, 4 * 92, 4 * 93, // 2
    4 * 78, 4 * 79, 4 * 94, 4 * 95, // 3
    4 * 84, 4 * 85, 4 * 100, 4 * 101, // 4
    4 * 86, 4 * 87, 4 * 102, 4 * 103, // 5
    4 * 176, 4 * 177, 4 * 192, 4 * 193, // 6
    4 * 178, 4 * 179, 4 * 194, 4 * 195, // 7
    4 * 204, 4 * 205, 4 * 220, 4 * 221, // 8
    4 * 206, 4 * 207, 4 * 222, 4 * 223, // 9
    4 * 212, 4 * 213, 4 * 228, 4 * 229, // 10
    4 * 214, 4 * 215, 4 * 230, 4 * 231, // 11
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
    4 * 14, 4 * 15, 4 * 30, 4 * 31, // 0
    4 * 16, 4 * 17, 4 * 32, 4 * 33, // 1
    4 * 18, 4 * 19, 4 * 34, 4 * 35, // 2
    4 * 22, 4 * 23, 4 * 38, 4 * 39, // 3
    4 * 46, 4 * 47, 4 * 62, 4 * 63, // 4
    4 * 50, 4 * 51, 4 * 66, 4 * 67, // 5
    4 * 54, 4 * 55, 4 * 70, 4 * 71, // 6
    4 * 116, 4 * 117, 4 * 132, 4 * 133, // 7
    4 * 140, 4 * 141, 4 * 156, 4 * 157, // 8
    4 * 142, 4 * 143, 4 * 158, 4 * 159, // 9
    4 * 146, 4 * 147, 4 * 162, 4 * 163, // 10
    4 * 204, 4 * 205, 4 * 220, 4 * 221, // 11
    4 * 206, 4 * 207, 4 * 222, 4 * 223, // 12
    4 * 208, 4 * 209, 4 * 224, 4 * 225, // 13
    4 * 246, 4 * 247, 4 * 262, 4 * 263, // 14
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
    4 * 46, 4 * 47, 4 * 62, 4 * 63, // 0
    4 * 52, 4 * 53, 4 * 68, 4 * 69, // 1
    4 * 78, 4 * 79, 4 * 94, 4 * 95, // 2
    4 * 84, 4 * 85, 4 * 100, 4 * 101, // 3
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
    4 * 78, 4 * 79, 4 * 94, 4 * 95, // 0
    4 * 114, 4 * 115, 4 * 130, 4 * 131, // 1
    4 * 146, 4 * 147, 4 * 162, 4 * 163, // 2
    4 * 148, 4 * 149, 4 * 164, 4 * 165, // 3
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
    4 * 12, 4 * 13, 4 * 28, 4 * 29, // 0
    4 * 14, 4 * 15, 4 * 30, 4 * 31, // 1
    4 * 16, 4 * 17, 4 * 32, 4 * 33, // 2
    4 * 18, 4 * 19, 4 * 34, 4 * 35, // 3
    4 * 20, 4 * 21, 4 * 36, 4 * 37, // 4
    4 * 22, 4 * 23, 4 * 38, 4 * 39, // 5
    4 * 44, 4 * 45, 4 * 60, 4 * 61, // 6
    4 * 76, 4 * 77, 4 * 92, 4 * 93, // 7
    4 * 80, 4 * 81, 4 * 96, 4 * 97, // 8
    4 * 84, 4 * 85, 4 * 100, 4 * 101, // 9
    4 * 108, 4 * 109, 4 * 124, 4 * 125, // 10
    4 * 140, 4 * 141, 4 * 156, 4 * 157, // 11
    4 * 142, 4 * 143, 4 * 158, 4 * 159, // 12
    4 * 144, 4 * 145, 4 * 160, 4 * 161, // 13
    4 * 148, 4 * 149, 4 * 164, 4 * 165, // 14
    4 * 150, 4 * 151, 4 * 166, 4 * 167, // 15
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
    4 * 16, 4 * 17, 4 * 32, 4 * 33, // 0
    4 * 80, 4 * 81, 4 * 96, 4 * 97, // 1
    4 * 82, 4 * 83, 4 * 98, 4 * 99, // 2
    4 * 84, 4 * 85, 4 * 100, 4 * 101, // 3
    4 * 86, 4 * 87, 4 * 102, 4 * 103, // 4
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
    4 * 12, 4 * 13, 4 * 28, 4 * 29, // 0
    4 * 16, 4 * 17, 4 * 32, 4 * 33, // 1
    4 * 18, 4 * 19, 4 * 34, 4 * 35, // 2
    4 * 22, 4 * 23, 4 * 38, 4 * 39, // 3
    4 * 142, 4 * 143, 4 * 158, 4 * 159, // 4
    4 * 144, 4 * 145, 4 * 160, 4 * 161, // 5
    4 * 148, 4 * 149, 4 * 164, 4 * 165, // 6
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
    4 * 110, 4 * 111, 4 * 126, 4 * 127, // 0
    4 * 116, 4 * 117, 4 * 132, 4 * 133, // 1
    4 * 146, 4 * 147, 4 * 162, 4 * 163, // 2
    4 * 150, 4 * 151, 4 * 166, 4 * 167, // 3
    4 * 172, 4 * 173, 4 * 188, 4 * 189, // 4
    4 * 208, 4 * 209, 4 * 224, 4 * 225, // 5
    4 * 214, 4 * 215, 4 * 230, 4 * 231, // 6
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
    4 * 46, 4 * 47, 4 * 62, 4 * 63, // 0
    4 * 146, 4 * 147, 4 * 162, 4 * 163, // 1
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
    4 * 22, 4 * 23, 4 * 38, 4 * 39, // 0
    4 * 46, 4 * 47, 4 * 62, 4 * 63, // 1
    4 * 114, 4 * 115, 4 * 130, 4 * 131, // 2
    4 * 116, 4 * 117, 4 * 132, 4 * 133, // 3
    4 * 118, 4 * 119, 4 * 134, 4 * 135, // 4
    4 * 140, 4 * 141, 4 * 156, 4 * 157, // 5
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
    4 * 238, 4 * 239, 4 * 254, 4 * 255, // 0
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
    4 * 144, 4 * 145, 4 * 160, 4 * 161, // 0
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
    4 * 46, 4 * 47, 4 * 62, 4 * 63, // 0
    4 * 52, 4 * 53, 4 * 68, 4 * 69, // 1
    4 * 78, 4 * 79, 4 * 94, 4 * 95, // 2
    4 * 116, 4 * 117, 4 * 132, 4 * 133, // 3
    4 * 142, 4 * 143, 4 * 158, 4 * 159, // 4
    4 * 148, 4 * 149, 4 * 164, 4 * 165, // 5
    4 * 150, 4 * 151, 4 * 166, 4 * 167, // 6
    4 * 172, 4 * 173, 4 * 188, 4 * 189, // 7
    4 * 174, 4 * 175, 4 * 190, 4 * 191, // 8
    4 * 182, 4 * 183, 4 * 198, 4 * 199, // 9
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
    4 * 140, 4 * 141, 4 * 156, 4 * 157, // 0
    4 * 150, 4 * 151, 4 * 166, 4 * 167, // 1
    4 * 176, 4 * 177, 4 * 192, 4 * 193, // 2
    4 * 178, 4 * 179, 4 * 194, 4 * 195, // 3
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
    4 * 46, 4 * 47, 4 * 62, 4 * 63, // 0
    4 * 108, 4 * 109, 4 * 124, 4 * 125, // 1
    4 * 246, 4 * 247, 4 * 262, 4 * 263, // 2
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
    4 * 84, 4 * 85, 4 * 100, 4 * 101, // 0
    4 * 214, 4 * 215, 4 * 230, 4 * 231, // 1
    4 * 240, 4 * 241, 4 * 256, 4 * 257, // 2
    4 * 246, 4 * 247, 4 * 262, 4 * 263, // 3
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
    4 * 86, 4 * 87, 4 * 102, 4 * 103, // 0
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
    4 * 206, 4 * 207, 4 * 222, 4 * 223, // 0
    4 * 212, 4 * 213, 4 * 228, 4 * 229, // 1
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
    4 * 78, 4 * 79, 4 * 94, 4 * 95, // 0
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
    4 * 84, 4 * 85, 4 * 100, 4 * 101, // 0
    4 * 86, 4 * 87, 4 * 102, 4 * 103, // 1
    4 * 116, 4 * 117, 4 * 132, 4 * 133, // 2
    4 * 118, 4 * 119, 4 * 134, 4 * 135, // 3
    4 * 174, 4 * 175, 4 * 190, 4 * 191, // 4
    4 * 176, 4 * 177, 4 * 192, 4 * 193, // 5
    4 * 206, 4 * 207, 4 * 222, 4 * 223, // 6
    4 * 208, 4 * 209, 4 * 224, 4 * 225, // 7
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
    4 * 12, 4 * 13, 4 * 28, 4 * 29, // 0
    4 * 22, 4 * 23, 4 * 38, 4 * 39, // 1
    4 * 44, 4 * 45, 4 * 60, 4 * 61, // 2
    4 * 54, 4 * 55, 4 * 70, 4 * 71, // 3
    4 * 110, 4 * 111, 4 * 126, 4 * 127, // 4
    4 * 112, 4 * 113, 4 * 128, 4 * 129, // 5
    4 * 114, 4 * 115, 4 * 130, 4 * 131, // 6
    4 * 116, 4 * 117, 4 * 132, 4 * 133, // 7
    4 * 204, 4 * 205, 4 * 220, 4 * 221, // 8
    4 * 206, 4 * 207, 4 * 222, 4 * 223, // 9
    4 * 212, 4 * 213, 4 * 228, 4 * 229, // 10
    4 * 214, 4 * 215, 4 * 230, 4 * 231, // 11
    4 * 236, 4 * 237, 4 * 252, 4 * 253, // 12
    4 * 238, 4 * 239, 4 * 254, 4 * 255, // 13
    4 * 244, 4 * 245, 4 * 260, 4 * 261, // 14
    4 * 246, 4 * 247, 4 * 262, 4 * 263, // 15
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
    4 * 18, 4 * 19, 4 * 34, 4 * 35, // 0
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
    4 * 86, 4 * 87, 4 * 102, 4 * 103, // 0
    4 * 140, 4 * 141, 4 * 156, 4 * 157, // 1
    4 * 146, 4 * 147, 4 * 162, 4 * 163, // 2
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
    4 * 46, 4 * 47, 4 * 62, 4 * 63, // 0
    4 * 118, 4 * 119, 4 * 134, 4 * 135, // 1
    4 * 140, 4 * 141, 4 * 156, 4 * 157, // 2
    4 * 142, 4 * 143, 4 * 158, 4 * 159, // 3
    4 * 180, 4 * 181, 4 * 196, 4 * 197, // 4
    4 * 238, 4 * 239, 4 * 254, 4 * 255, // 5
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
    4 * 114, 4 * 115, 4 * 130, 4 * 131, // 0
    4 * 140, 4 * 141, 4 * 156, 4 * 157, // 1
    4 * 182, 4 * 183, 4 * 198, 4 * 199, // 2
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
    4 * 178, 4 * 179, 4 * 194, 4 * 195, // 0
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
    4 * 14, 4 * 15, 4 * 30, 4 * 31, // 0
    4 * 46, 4 * 47, 4 * 62, 4 * 63, // 1
    4 * 78, 4 * 79, 4 * 94, 4 * 95, // 2
    4 * 114, 4 * 115, 4 * 130, 4 * 131, // 3
    4 * 146, 4 * 147, 4 * 162, 4 * 163, // 4
    4 * 148, 4 * 149, 4 * 164, 4 * 165, // 5
    4 * 212, 4 * 213, 4 * 228, 4 * 229, // 6
    4 * 214, 4 * 215, 4 * 230, 4 * 231, // 7
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
    4 * 12, 4 * 13, 4 * 28, 4 * 29, // 0
    4 * 114, 4 * 115, 4 * 130, 4 * 131, // 1
    4 * 142, 4 * 143, 4 * 158, 4 * 159, // 2
    4 * 148, 4 * 149, 4 * 164, 4 * 165, // 3
    4 * 236, 4 * 237, 4 * 252, 4 * 253, // 4
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
    4 * 46, 4 * 47, 4 * 62, 4 * 63, // 0
    4 * 76, 4 * 77, 4 * 92, 4 * 93, // 1
    4 * 78, 4 * 79, 4 * 94, 4 * 95, // 2
    4 * 80, 4 * 81, 4 * 96, 4 * 97, // 3
    4 * 110, 4 * 111, 4 * 126, 4 * 127, // 4
    4 * 142, 4 * 143, 4 * 158, 4 * 159, // 5
    4 * 148, 4 * 149, 4 * 164, 4 * 165, // 6
    4 * 180, 4 * 181, 4 * 196, 4 * 197, // 7
    4 * 210, 4 * 211, 4 * 226, 4 * 227, // 8
    4 * 212, 4 * 213, 4 * 228, 4 * 229, // 9
    4 * 214, 4 * 215, 4 * 230, 4 * 231, // 10
    4 * 244, 4 * 245, 4 * 260, 4 * 261, // 11
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
    4 * 14, 4 * 15, 4 * 30, 4 * 31, // 0
    4 * 16, 4 * 17, 4 * 32, 4 * 33, // 1
    4 * 22, 4 * 23, 4 * 38, 4 * 39, // 2
    4 * 48, 4 * 49, 4 * 64, 4 * 65, // 3
    4 * 54, 4 * 55, 4 * 70, 4 * 71, // 4
    4 * 84, 4 * 85, 4 * 100, 4 * 101, // 5
    4 * 108, 4 * 109, 4 * 124, 4 * 125, // 6
    4 * 110, 4 * 111, 4 * 126, 4 * 127, // 7
    4 * 176, 4 * 177, 4 * 192, 4 * 193, // 8
    4 * 178, 4 * 179, 4 * 194, 4 * 195, // 9
    4 * 210, 4 * 211, 4 * 226, 4 * 227, // 10
    4 * 212, 4 * 213, 4 * 228, 4 * 229, // 11
    4 * 236, 4 * 237, 4 * 252, 4 * 253, // 12
    4 * 238, 4 * 239, 4 * 254, 4 * 255, // 13
    4 * 240, 4 * 241, 4 * 256, 4 * 257, // 14
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
    4 * 86, 4 * 87, 4 * 102, 4 * 103, // 0
    4 * 108, 4 * 109, 4 * 124, 4 * 125, // 1
    4 * 148, 4 * 149, 4 * 164, 4 * 165, // 2
    4 * 172, 4 * 173, 4 * 188, 4 * 189, // 3
    4 * 212, 4 * 213, 4 * 228, 4 * 229, // 4
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
    4 * 108, 4 * 109, 4 * 124, 4 * 125, // 0
    4 * 116, 4 * 117, 4 * 132, 4 * 133, // 1
    4 * 208, 4 * 209, 4 * 224, 4 * 225, // 2
    4 * 210, 4 * 211, 4 * 226, 4 * 227, // 3
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
    4 * 78, 4 * 79, 4 * 94, 4 * 95, // 0
    4 * 110, 4 * 111, 4 * 126, 4 * 127, // 1
    4 * 116, 4 * 117, 4 * 132, 4 * 133, // 2
    4 * 204, 4 * 205, 4 * 220, 4 * 221, // 3
    4 * 206, 4 * 207, 4 * 222, 4 * 223, // 4
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
    4 * 112, 4 * 113, 4 * 128, 4 * 129, // 0
    4 * 116, 4 * 117, 4 * 132, 4 * 133, // 1
    4 * 178, 4 * 179, 4 * 194, 4 * 195, // 2
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
    4 * 146, 4 * 147, 4 * 162, 4 * 163, // 0
    4 * 208, 4 * 209, 4 * 224, 4 * 225, // 1
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
    4 * 116, 4 * 117, 4 * 132, 4 * 133, // 0
    4 * 142, 4 * 143, 4 * 158, 4 * 159, // 1
    4 * 236, 4 * 237, 4 * 252, 4 * 253, // 2
    4 * 246, 4 * 247, 4 * 262, 4 * 263, // 3
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
    4 * 54, 4 * 55, 4 * 70, 4 * 71, // 0
    4 * 116, 4 * 117, 4 * 132, 4 * 133, // 1
    4 * 142, 4 * 143, 4 * 158, 4 * 159, // 2
    4 * 174, 4 * 175, 4 * 190, 4 * 191, // 3
    4 * 206, 4 * 207, 4 * 222, 4 * 223, // 4
    4 * 208, 4 * 209, 4 * 224, 4 * 225, // 5
    4 * 210, 4 * 211, 4 * 226, 4 * 227, // 6
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
    4 * 76, 4 * 77, 4 * 92, 4 * 93, // 0
    4 * 110, 4 * 111, 4 * 126, 4 * 127, // 1
    4 * 112, 4 * 113, 4 * 128, 4 * 129, // 2
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
    4 * 108, 4 * 109, 4 * 124, 4 * 125, // 0
    4 * 148, 4 * 149, 4 * 164, 4 * 165, // 1
    4 * 150, 4 * 151, 4 * 166, 4 * 167, // 2
    4 * 206, 4 * 207, 4 * 222, 4 * 223, // 3
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
    4 * 86, 4 * 87, 4 * 102, 4 * 103, // 0
    4 * 118, 4 * 119, 4 * 134, 4 * 135, // 1
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
    4 * 12, 4 * 13, 4 * 28, 4 * 29, // 0
    4 * 14, 4 * 15, 4 * 30, 4 * 31, // 1
    4 * 20, 4 * 21, 4 * 36, 4 * 37, // 2
    4 * 22, 4 * 23, 4 * 38, 4 * 39, // 3
    4 * 182, 4 * 183, 4 * 198, 4 * 199, // 4
    4 * 204, 4 * 205, 4 * 220, 4 * 221, // 5
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
    4 * 110, 4 * 111, 4 * 126, 4 * 127, // 0
    4 * 116, 4 * 117, 4 * 132, 4 * 133, // 1
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
    4 * 44, 4 * 45, 4 * 60, 4 * 61, // 0
    4 * 142, 4 * 143, 4 * 158, 4 * 159, // 1
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
    4 * 12, 4 * 13, 4 * 28, 4 * 29, // 0
    4 * 44, 4 * 45, 4 * 60, 4 * 61, // 1
    4 * 178, 4 * 179, 4 * 194, 4 * 195, // 2
    4 * 238, 4 * 239, 4 * 254, 4 * 255, // 3
    4 * 240, 4 * 241, 4 * 256, 4 * 257, // 4
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
    4 * 80, 4 * 81, 4 * 96, 4 * 97, // 0
    4 * 82, 4 * 83, 4 * 98, 4 * 99, // 1
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
    4 * 238, 4 * 239, 4 * 254, 4 * 255, // 0
    4 * 244, 4 * 245, 4 * 260, 4 * 261, // 1
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

