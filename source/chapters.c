#include "chapterinfo.h"
#include "chapterNew.h"
#include "constants/chapters.h"
#include "debugchapter.h"

struct ChapterInfo const newChapters[] = {
    [CHAPTER_CH_NEW - CHAPTER_CH_NEW] = {
        .debug_name = "debugmap",
        .asset_img_b = 2,
        .asset_img_anims = 6,
        .title_id = 4,
        .msg_38 = 0xb72,
        .unk_0F = 3, // initial X
        .unk_10 = 14, // initial Y
        .numberId = 10,
        .wall_hp = 10,
        .song_blue_bgm = 10,
        .song_blue_bgm = 2,
        .song_blue_bgm = 10,
        .song_blue_bgm = 0x1e,
        .song_blue_bgm = 2,
    },
};

void const * const ChapterMaps[] = {
    [CHAPTER_CH_NEW - CHAPTER_CH_NEW] = DebugChapterMap,
};

void const * const ChapterMapChanges[] = {
    [CHAPTER_CH_NEW - CHAPTER_CH_NEW] = NULL,
};

void const * const ChapterMapGraphics[] = {
    [CHAPTER_CH_NEW - CHAPTER_CH_NEW] = (void const * const)0x082478F0,
};

void const * const ChapterMapTilesets[] = {
    [CHAPTER_CH_NEW - CHAPTER_CH_NEW] = (void const * const)0x0823956C,
};

void const * const ChapterMapPalettes[] = {
    [CHAPTER_CH_NEW - CHAPTER_CH_NEW] = (void const * const)0x0823C980,
};

void const * const ChapterEvents[] = {
    [CHAPTER_CH_NEW - CHAPTER_CH_NEW] = &DebugChapterEvent,
};

#ifdef SPLIT_MAP_ANIMATION_FOR_NEW_CHAPTERS
void const * const ChapterMapGraphicAnimations[] = {
    [CHAPTER_CH_NEW - CHAPTER_CH_NEW] = (void const * const)0x085C788C,
};

void const * const ChapterMapPaletteAnimations[] = {
    [CHAPTER_CH_NEW - CHAPTER_CH_NEW] = NULL,
};
#endif