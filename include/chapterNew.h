#pragma once

#define CHAPTER_CH_NEW  CHAPTER_COUNT
#define CHAPTER_CH_1st  CHAPTER_CH_NEW
#define CHAPTER_CH_NULL 0xFFFF

#define CHAPTER_GOAL_MSG_ID_SEIZE_GATE 2319
#define CHAPTER_GOAL_MSG_ID_SEIZE_THRONE 2322
#define CHAPTER_GOAL_MSG_ID_DEFEAT_ALL 3208
#define CHAPTER_GOAL_MSG_ID_SURVIVAL 3788
#define MSG_ID_BLUE_ARMY 3804
#define MSG_ID_RED_ARMY 3805

#define WALL_HP_DEFAULT 10
#define HARD_MODE_BONUS_LEVELS_DEFAULT 5

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

struct ChapterInfoNew
{
    /* 00 */ char const * debug_name;

    /* 04 */ u8 asset_img_a;
    /* 05 */ u8 asset_img_b;
    /* 06 */ u8 asset_pal;
    /* 07 */ u8 asset_tileset;
    /* 08 */ u8 asset_map;
    /* 09 */ u8 asset_img_anims;
    /* 0A */ u8 asset_pal_anims;
    /* 0B */ u8 asset_map_changes;

    /* 0C */ u8 fog;
    /* 0D */ u8 has_prep;
    /* 0E */ u8 title_id;
    /* 0F */ u8 initial_x;
    /* 10 */ u8 initial_y;
    /* 11 */ u8 weather;
    /* 12 */ u8 banim_terrain_id;
    /* 13 */ u8 hard_bonus_levels;

    /* 14 */ u8 song_blue_bgm;
    /* 15 */ u8 song_red_bgm;
    /* 16 */ u8 song_green_bgm;
    /* 17 */ u8 song_intro_bgm;
    /* 18 */ u8 song_opening_bgm;

    /* 19 */ u8 wall_hp;
    /* 1A */ u8 class_roll_set;

    /* 1B */ u8 rank_turns[4]; // A, B, C, D (turns to clear current map)

    /* 1F */ u8 pad_1F[0x20 - 0x1F];

    /* 20 */ u16 rank_exps[4]; // A, B, C, D (total level up times)
    /* 28 */ u16 rank_stats[4]; // A, B, C, D (total stats)

    /* 30 */ u16 msg_goal;
    /* 32 */ u16 msg_blue_army;
    /* 34 */ u16 msg_red_army;
    /* 36 */ u16 chibi_red_army;
    /* 38 */ u16 msg_title;
    /* 3A */ u8 asset_event_info;

    /* 3B */ u8 asset_wm_event_info;

    /* 3C */ u16 msg_wm_place;
    /* 3E */ u8 number_id;
    /* 3F */ u8 wm_x;
    /* 40 */ u8 wm_y;
    /* 41 */ u8 wm_point_x;
    /* 42 */ u8 wm_point_y;
    /* 43 */ i8 victory_bgm_enemy_threshold;
};

bool IsChapterNew(int chapter);
int GetChapterNumber(int chapter);

extern struct ChapterInfoNew const newChapters[];

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
extern const u16 ChapterMapBGMs[];
extern const u16 ChapterOPBGMs[];
