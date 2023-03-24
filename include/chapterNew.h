#pragma once

#define CHAPTER_CH_NEW CHAPTER_COUNT
#define CHAPTER_CH_1st CHAPTER_CH_NEW
#define CHAPTER_CH_NULL 0xFFFF

bool IsChapterNew(int chapter);

extern struct ChapterInfo const newChapters[];

// Split ChapterAssets for new chapters
extern void const * const ChapterMaps[];
extern void const * const ChapterMapChanges[];
extern void const * const ChapterMapGraphics[];
extern void const * const ChapterMapTilesets[];
extern void const * const ChapterMapPalettes[];
#ifdef SPLIT_MAP_ANIMATION_FOR_NEW_CHAPTERS
extern void const * const ChapterMapGraphicAnimations[];
extern void const * const ChapterMapPaletteAnimations[];
#endif
extern void const * const ChapterEvents[];
