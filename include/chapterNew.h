#pragma once

#define CHAPTER_CH_NEW  CHAPTER_COUNT
#define CHAPTER_CH_1st  CHAPTER_CH_NEW
#define CHAPTER_CH_NULL 0xFFFF

#define CHAPTER_GOAL_MSG_ID_SEIZE_GATE 2319
#define CHAPTER_GOAL_MSG_ID_SEIZE_THRONE 2322
#define CHAPTER_GOAL_MSG_ID_DEFEAT_ALL 3208
#define CHAPTER_GOAL_MSG_ID_SURVIVAL 3788

#define WALL_HP_DEFAULT 10

enum {
    BANIM_TERRAIN_DEFAULT = 0,
    BANIM_TERRAIN_SNOW,
    BANIM_TERRAIN_LAVA_CAVE,
    BANIM_TERRAIN_POISON_CAVE,
    BANIM_TERRAIN_CASTLE_GRAY,
    BANIM_TERRAIN_TOWN,
    BANIM_TERRAIN_CASTLE_YELLOW,
    BANIM_TERRAIN_MOUNTAIN,
    BANIM_TERRAIN_CASTLE_AGAIN,
    BANIM_TERRAIN_DESERT,
};

bool IsChapterNew(int chapter);
int GetChapterNumber(int chapter);

extern struct ChapterInfo const newChapters[];

// Split ChapterAssets for new chapters
extern void const * const ChapterMaps[];
extern void const * const ChapterMapChanges[];
extern void const * const ChapterMapGraphics[];
extern void const * const ChapterMapTilesets[];
extern void const * const ChapterMapPalettes[];
extern void const * const ChapterMapTerrains[];
#ifdef SPLIT_MAP_ANIMATION_FOR_NEW_CHAPTERS
extern void const * const ChapterMapGraphicAnimations[];
extern void const * const ChapterMapPaletteAnimations[];
#endif
extern void const * const ChapterEvents[];
