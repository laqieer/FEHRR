#include "jobs.h"

#include "constants/iids.h"
#include "constants/msg.h"
#include "constants/faces.h"
#include "constants/unitsprites.h"

#include "gamedata.h"

#define MSG_NAME_HALBERDIER 3807
#define MSG_HELP_HALBERDIER 3808
#define MSG_NAME_THIEF_LEADER 3809
#define MSG_HELP_THIEF MSG_570
#define MSG_HELP_THIEF_LEADER MSG_HELP_THIEF

const struct JInfo newJobs[] =
{
    [JID_HALBERDIER - MAX_JIDS] =
    {
        .id = JID_HALBERDIER,
        .msg_name = MSG_NAME_HALBERDIER,
        .msg_desc = MSG_HELP_HALBERDIER,
        .jid_promote = JID_SOLDIER,
        .map_sprite = UNITSPRITE_SOLDIER,
        .walk_speed = UNIT_WALKSPEED_FAST,
        .fid = FID_B1,
        .sort_order_key = 38,
        .base_hp = 22,
        .base_pow = 7,
        .base_skl = 9,
        .base_spd = 5,
        .base_def = 8,
        .base_res = 1,
        .base_con = 11,
        .base_mov = 6,
        .max_hp = 60,
        .max_pow = 28,
        .max_skl = 27,
        .max_spd = 26,
        .max_def = 24,
        .max_res = 22,
        .max_con = 20,
        .power_level = 3,
        .growth_hp = 90,
        .growth_pow = 30,
        .growth_skl = 28,
        .growth_spd = 20,
        .growth_def = 17,
        .growth_res = 10,
        .growth_lck = 25,
        .attributes = UNIT_ATTR_CRITBONUS | UNIT_ATTR_PROMOTED,
        .wexp =
        {
            [ITEM_KIND_LANCE] = WEXP_C,
        },
        .banim_info = BanimInfo_Soldier,
        .mov_table = MoveTable_Footie,
        .avo_terrain_table = TerrainAvoTable_Default,
        .def_terrain_table = TerrainDefTable_Default,
        .res_terrain_table = TerrainResTable_Default,
    },

    [JID_THIEF_LEADER - MAX_JIDS] =
    {
        .id = JID_THIEF_LEADER,
        .msg_name = MSG_NAME_THIEF_LEADER,
        .msg_desc = MSG_HELP_THIEF_LEADER,
        .jid_promote = JID_THIEF,
        .map_sprite = UNITSPRITE_THIEF,
        .walk_speed = UNIT_WALKSPEED_FAST,
        .fid = FID_B5,
        .sort_order_key = 39,
        .base_hp = 16,
        .base_pow = 3,
        .base_skl = 1,
        .base_spd = 9,
        .base_def = 2,
        .base_con = 8,
        .base_mov = 7,
        .max_hp = 60,
        .max_pow = 20,
        .max_skl = 30,
        .max_spd = 30,
        .max_def = 20,
        .max_res = 20,
        .max_con = 20,
        .power_level = 3,
        .growth_hp = 50,
        .growth_pow = 10,
        .growth_skl = 45,
        .growth_spd = 40,
        .growth_def = 5,
        .growth_res = 20,
        .growth_lck = 40,
        .attributes = UNIT_ATTR_STEAL | UNIT_ATTR_THIEF | UNIT_ATTR_PROMOTED,
        .wexp =
        {
            [ITEM_KIND_SWORD] = WEXP_D,
        },
        .banim_info = BanimInfo_Thief,
        .mov_table = MoveTable_Thief,
        .avo_terrain_table = TerrainAvoTable_Default,
        .def_terrain_table = TerrainDefTable_Default,
        .res_terrain_table = TerrainResTable_Default,
    },

    [JID_THIEF_LEADER_F - MAX_JIDS] =
    {
        .id = JID_THIEF_LEADER_F,
        .msg_name = MSG_NAME_THIEF_LEADER,
        .msg_desc = MSG_HELP_THIEF_LEADER,
        .jid_promote = JID_THIEF_F,
        .map_sprite = UNITSPRITE_THIEF_F,
        .walk_speed = UNIT_WALKSPEED_FAST,
        .fid = FID_B5,
        .sort_order_key = 40,
        .base_hp = 16,
        .base_pow = 1,
        .base_skl = 1,
        .base_spd = 7,
        .base_def = 1,
        .base_res = 1,
        .base_con = 5,
        .base_mov = 7,
        .max_hp = 60,
        .max_pow = 20,
        .max_skl = 30,
        .max_spd = 30,
        .max_def = 20,
        .max_res = 20,
        .max_con = 20,
        .power_level = 3,
        .growth_hp = 45,
        .growth_pow = 10,
        .growth_skl = 45,
        .growth_spd = 40,
        .growth_def = 5,
        .growth_res = 20,
        .growth_lck = 40,
        .attributes = UNIT_ATTR_STEAL | UNIT_ATTR_THIEF | UNIT_ATTR_PROMOTED,
        .wexp =
        {
            [ITEM_KIND_SWORD] = WEXP_D,
        },
        .banim_info = BanimInfo_Thief_F,
        .mov_table = MoveTable_Thief,
        .avo_terrain_table = TerrainAvoTable_Default,
        .def_terrain_table = TerrainDefTable_Default,
        .res_terrain_table = TerrainResTable_Default,
    },
};
