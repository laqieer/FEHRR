#include "chapterinfo.h"
#include "chapterNew.h"
#include "constants/chapters.h"

struct ChapterInfo const newChapters[] = {
    [CHAPTER_CH_NEW - CHAPTER_CH_NEW] = {
        .debug_name = "new",
        .asset_img_a = 1,
        .asset_img_b = 2,
        .asset_pal = 3,
        .asset_tileset = 4,
        .asset_map = 0x1d,
        .asset_img_anims = 6,
        .asset_pal_anims = 0,
        .asset_map_changes = 0x1e,
        .title_id = 4,
        .msg_38 = 0xb72,
        .unk_0F = 3, // initial X
        .unk_10 = 14, // initial Y
        .asset_event_info = 0x1f,
        .numberId = 10,
        .wall_hp = 10,
        .victory_bgm_enemy_threshold = 1,
        .song_blue_bgm = 10,
        .song_blue_bgm = 2,
        .song_blue_bgm = 10,
        .song_blue_bgm = 0x1e,
        .song_blue_bgm = 2,
    },
};
