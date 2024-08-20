#include "heroes.h"
#include "hero_jobs.h"
#include "unit.h"
#include "texts.h"
#include "enemies.h"
#include "facesNew.h"

#include "constants/jids.h"

const struct PInfo heroes[] = {
    [PID_アルフォンス - 1] = {
        .id = PID_アルフォンス,
        .sort_order_key = PID_アルフォンス,
        .jid_default = JID_アルフォンス,
        .msg_name = MPID_アルフォンス,
        .msg_desc = MPID_H_アルフォンス,
        .fid = FID_ch00_01_Alfons_M_Normal,

        .base_level = 1,
        .base_hp = 18,
        .base_pow = 8,
        .base_spd = 5,
        .base_def = 7,
        .base_res = 4,

        .growth_hp = 55,
        .growth_pow = 60,
        .growth_spd = 45,
        .growth_def = 55,
        .growth_res = 40,
    },

    [PID_シャロン - 1] = {
        .id = PID_シャロン,
        .sort_order_key = PID_シャロン,
        .jid_default = JID_シャロン,
        .msg_name = MPID_シャロン,
        .msg_desc = MPID_H_シャロン,
        .fid = FID_ch00_02_Sharon_F_Normal,

        .base_level = 1,
        .base_hp = 18,
        .base_pow = 7,
        .base_spd = 7,
        .base_def = 6,
        .base_res = 4,

        .growth_hp = 55,
        .growth_pow = 55,
        .growth_spd = 55,
        .growth_def = 50,
        .growth_res = 40,

        .attributes = UNIT_ATTR_FEMALE,
    },

    [PID_アンナ - 1] = {
        .id = PID_アンナ,
        .sort_order_key = PID_アンナ,
        .jid_default = JID_アンナ,
        .msg_name = MPID_アンナ,
        .msg_desc = MPID_H_アンナ,
        .fid = FID_ch00_03_Anna_F_Normal,

        .base_level = 1,
        .base_hp = 18,
        .base_pow = 6,
        .base_spd = 9,
        .base_def = 4,
        .base_res = 5,

        .growth_hp = 50,
        .growth_pow = 50,
        .growth_spd = 65,
        .growth_def = 40,
        .growth_res = 50,

        .attributes = UNIT_ATTR_FEMALE,
    },

    [EID_ヴェロニカ - 1] = {
        .id = EID_ヴェロニカ,
        .sort_order_key = EID_ヴェロニカ,
        .jid_default = JID_ヴェロニカ,
        .msg_name = MEID_ヴェロニカ,
        .msg_desc = MEID_H_ヴェロニカ,
        .fid = FID_ch00_04_Veronica_F_Normal,

        .base_level = 1,
        .base_hp = 16,
        .base_pow = 8,
        .base_spd = 4,
        .base_def = 6,
        .base_res = 5,

        .growth_hp = 55,
        .growth_pow = 60,
        .growth_spd = 40,
        .growth_def = 50,
        .growth_res = 35,

        .attributes = UNIT_ATTR_FEMALE,
    },

    [PID_レギン - 1] = {
        .id = PID_レギン,
        .sort_order_key = PID_レギン,
        .jid_default = JID_レギン,
        .msg_name = MPID_レギン,
        .msg_desc = MPID_H_レギン,
        .fid = FID_ch00_30_Reghin_F_Normal,

        .base_level = 1,
        .base_hp = 15,
        .base_pow = 9,
        .base_spd = 9,
        .base_def = 7,
        .base_res = 4,

        .growth_hp = 50,
        .growth_pow = 60,
        .growth_spd = 70,
        .growth_def = 50,
        .growth_res = 45,

        .attributes = UNIT_ATTR_FEMALE,
    },

    [EID_ブルーノ - 1] = {
        .id = EID_ブルーノ,
        .sort_order_key = EID_ブルーノ,
        .jid_default = JID_ブルーノ,
        .msg_name = MEID_ブルーノ,
        .msg_desc = MEID_H_ブルーノ,
        .fid = FID_ch00_05_Bruno_M_Normal,

        .base_level = 1,
        .base_hp = 15,
        .base_pow = 6,
        .base_spd = 8,
        .base_def = 4,
        .base_res = 5,

        .growth_hp = 40,
        .growth_pow = 50,
        .growth_spd = 60,
        .growth_def = 40,
        .growth_res = 45,
    },

    [PID_神階ピアニー - 1] = {
        .id = PID_神階ピアニー,
        .sort_order_key = PID_神階ピアニー,
        .jid_default = JID_神階ピアニー,
        .msg_name = MPID_神階ピアニー,
        .msg_desc = MPID_H_神階ピアニー,
        .fid = FID_ch00_23_Peony_F_Normal,

        .base_level = 1,
        .base_hp = 15,
        .base_pow = 4,
        .base_spd = 7,
        .base_def = 2,
        .base_res = 4,

        .growth_hp = 50,
        .growth_pow = 60,
        .growth_spd = 65,
        .growth_def = 30,
        .growth_res = 45,

        .attributes = UNIT_ATTR_FEMALE,
    },

    [PID_セイズ - 1] = {
        .id = PID_セイズ,
        .sort_order_key = PID_セイズ,
        .jid_default = JID_セイズ,
        .msg_name = MPID_セイズ,
        .msg_desc = MPID_H_セイズ,
        .fid = FID_ch00_46_Seith_F_Normal,

        .base_level = 1,
        .base_hp = 16,
        .base_pow = 12,
        .base_spd = 5,
        .base_def = 3,
        .base_res = 6,

        .growth_hp = 50,
        .growth_pow = 70,
        .growth_spd = 55,
        .growth_def = 30,
        .growth_res = 75,

        .attributes = UNIT_ATTR_FEMALE,
    },

    [PID_フィヨルム - 1] = {
        .id = PID_フィヨルム,
        .sort_order_key = PID_フィヨルム,
        .jid_default = JID_フィヨルム,
        .msg_name = MPID_フィヨルム,
        .msg_desc = MPID_H_フィヨルム,
        .fid = FID_ch00_06_Fjorm_F_Normal,

        .base_level = 1,
        .base_hp = 16,
        .base_pow = 7,
        .base_spd = 6,
        .base_def = 7,
        .base_res = 7,

        .growth_hp = 50,
        .growth_pow = 50,
        .growth_spd = 55,
        .growth_def = 50,
        .growth_res = 60,

        .attributes = UNIT_ATTR_FEMALE,
    },

    [PID_神階エイル - 1] = {
        .id = PID_神階エイル,
        .sort_order_key = PID_神階エイル,
        .jid_default = JID_神階エイル,
        .msg_name = MPID_神階エイル,
        .msg_desc = MPID_H_神階エイル,
        .fid = FID_ch00_20_Eir_F_Normal,

        .base_level = 1,
        .base_hp = 15,
        .base_pow = 7,
        .base_spd = 8,
        .base_def = 3,
        .base_res = 6,

        .growth_hp = 45,
        .growth_pow = 55,
        .growth_spd = 65,
        .growth_def = 25,
        .growth_res = 55,

        .attributes = UNIT_ATTR_FEMALE,
    },

    [EID_レティシア - 1] = {
        .id = EID_レティシア,
        .sort_order_key = EID_レティシア,
        .jid_default = JID_レティシア,
        .msg_name = MEID_レティシア,
        .msg_desc = MEID_H_レティシア,
        .fid = FID_ch00_41_Letizia_F_Normal,

        .base_level = 1,
        .base_hp = 15,
        .base_pow = 9,
        .base_spd = 2,
        .base_def = 8,
        .base_res = 7,

        .growth_hp = 50,
        .growth_pow = 70,
        .growth_spd = 30,
        .growth_def = 60,
        .growth_res = 60,

        .attributes = UNIT_ATTR_FEMALE,
    },

    [EID_オッテル - 1] = {
        .id = EID_オッテル,
        .sort_order_key = EID_オッテル,
        .jid_default = JID_オッテル,
        .msg_name = MEID_オッテル,
        .msg_desc = MEID_H_オッテル,
        .fid = FID_ch00_31_Otr_M_Normal,

        .base_level = 1,
        .base_hp = 16,
        .base_pow = 9,
        .base_spd = 3,
        .base_def = 8,
        .base_res = 8,

        .growth_hp = 55,
        .growth_pow = 70,
        .growth_spd = 30,
        .growth_def = 65,
        .growth_res = 55,
    },

    [EID_ファフニール - 1] = {
        .id = EID_ファフニール,
        .sort_order_key = EID_ファフニール,
        .jid_default = JID_ファフニール,
        .msg_name = MEID_ファフニール,
        .msg_desc = MEID_H_ファフニール,
        .fid = FID_ch00_32_Fafnir_M_Normal,

        .base_level = 1,
        .base_hp = 17,
        .base_pow = 7,
        .base_spd = 10,
        .base_def = 8,
        .base_res = 2,

        .growth_hp = 50,
        .growth_pow = 70,
        .growth_spd = 60,
        .growth_def = 65,
        .growth_res = 30,
    },

    [EID_フレイヤ - 1] = {
        .id = EID_フレイヤ,
        .sort_order_key = EID_フレイヤ,
        .jid_default = JID_フレイヤ,
        .msg_name = MEID_フレイヤ,
        .msg_desc = MEID_H_フレイヤ,
        .fid = FID_ch00_27_Freya_F_Normal,

        .base_level = 1,
        .base_hp = 15,
        .base_pow = 9,
        .base_spd = 10,
        .base_def = 4,
        .base_res = 6,

        .growth_hp = 55,
        .growth_pow = 65,
        .growth_spd = 75,
        .growth_def = 45,
        .growth_res = 35,

        .attributes = UNIT_ATTR_FEMALE,
    },

    [EID_スルト - 1] = {
        .id = EID_スルト,
        .sort_order_key = EID_スルト,
        .jid_default = JID_スルト,
        .msg_name = MEID_スルト,
        .msg_desc = MEID_H_スルト,
        .fid = FID_ch00_07_Surtr_M_Normal,

        .base_level = 1,
        .base_hp = 19,
        .base_pow = 10,
        .base_spd = 3,
        .base_def = 11,
        .base_res = 8,

        .growth_hp = 75,
        .growth_pow = 65,
        .growth_spd = 25,
        .growth_def = 65,
        .growth_res = 60,
    },

    [PID_アシュ - 1] = {
        .id = PID_アシュ,
        .sort_order_key = PID_アシュ,
        .jid_default = JID_アシュ,
        .msg_name = MPID_アシュ,
        .msg_desc = MPID_H_アシュ,
        .fid = FID_ch00_39_Ash_F_Normal,

        .base_level = 1,
        .base_hp = 18,
        .base_pow = 8,
        .base_spd = 4,
        .base_def = 10,
        .base_res = 9,

        .growth_hp = 50,
        .growth_pow = 70,
        .growth_spd = 50,
        .growth_def = 70,
        .growth_res = 55,

        .attributes = UNIT_ATTR_FEMALE,
    },

    [PID_神階アスク - 1] = {
        .id = PID_神階アスク,
        .sort_order_key = PID_神階アスク,
        .jid_default = JID_神階アスク,
        .msg_name = MPID_神階アスク,
        .msg_desc = MPID_H_神階アスク,
        .fid = FID_ch00_42_Ask_M_Normal,

        .base_level = 1,
        .base_hp = 17,
        .base_pow = 9,
        .base_spd = 3,
        .base_def = 12,
        .base_res = 8,

        .growth_hp = 50,
        .growth_pow = 75,
        .growth_spd = 50,
        .growth_def = 70,
        .growth_res = 50,
    },

    [EID_リーヴ - 1] = {
        .id = EID_リーヴ,
        .sort_order_key = EID_リーヴ,
        .jid_default = JID_リーヴ,
        .msg_name = MEID_リーヴ,
        .msg_desc = MEID_H_リーヴ,
        .fid = FID_ch00_17_Lif_M_Normal,

        .base_level = 1,
        .base_hp = 17,
        .base_pow = 10,
        .base_spd = 7,
        .base_def = 7,
        .base_res = 5,

        .growth_hp = 55,
        .growth_pow = 60,
        .growth_spd = 50,
        .growth_def = 60,
        .growth_res = 50,
    },

    [EID_レーギャルン - 1] = {
        .id = EID_レーギャルン,
        .sort_order_key = EID_レーギャルン,
        .jid_default = JID_レーギャルン,
        .msg_name = MEID_レーギャルン,
        .msg_desc = MEID_H_レーギャルン,
        .fid = FID_ch00_11_Laegjarn_F_Normal,

        .base_level = 1,
        .base_hp = 17,
        .base_pow = 7,
        .base_spd = 9,
        .base_def = 8,
        .base_res = 3,

        .growth_hp = 60,
        .growth_pow = 55,
        .growth_spd = 60,
        .growth_def = 65,
        .growth_res = 30,

        .attributes = UNIT_ATTR_FEMALE,
    },

    [EID_ダグ - 1] = {
        .id = EID_ダグ,
        .sort_order_key = EID_ダグ,
        .jid_default = JID_ダグ,
        .msg_name = MEID_ダグ,
        .msg_desc = MEID_H_ダグ,
        .fid = FID_ch00_34_Dagr_F_Normal,

        .base_level = 1,
        .base_hp = 18,
        .base_pow = 8,
        .base_spd = 10,
        .base_def = 7,
        .base_res = 5,

        .growth_hp = 50,
        .growth_pow = 70,
        .growth_spd = 70,
        .growth_def = 50,
        .growth_res = 45,

        .attributes = UNIT_ATTR_FEMALE,
    },

    [EID_エイトリ - 1] = {
        .id = EID_エイトリ,
        .sort_order_key = EID_エイトリ,
        .jid_default = JID_エイトリ,
        .msg_name = MEID_エイトリ,
        .msg_desc = MEID_H_エイトリ,
        .fid = FID_ch00_35_Eitri_F_Normal,

        .base_level = 1,
        .base_hp = 14,
        .base_pow = 10,
        .base_spd = 6,
        .base_def = 7,
        .base_res = 6,

        .growth_hp = 50,
        .growth_pow = 70,
        .growth_spd = 50,
        .growth_def = 50,
        .growth_res = 55,
    },

    [EID_レーヴァテイン - 1] = {
        .id = EID_レーヴァテイン,
        .sort_order_key = EID_レーヴァテイン,
        .jid_default = JID_レーヴァテイン,
        .msg_name = MEID_レーヴァテイン,
        .msg_desc = MEID_H_レーヴァテイン,
        .fid = FID_ch00_09_Laevatain_F_Normal,

        .base_level = 1,
        .base_hp = 18,
        .base_pow = 9,
        .base_spd = 6,
        .base_def = 8,
        .base_res = 5,

        .growth_hp = 55,
        .growth_pow = 60,
        .growth_spd = 55,
        .growth_def = 60,
        .growth_res = 45,

        .attributes = UNIT_ATTR_FEMALE,
    },

    [EID_ヘル - 1] = {
        .id = EID_ヘル,
        .sort_order_key = EID_ヘル,
        .jid_default = JID_ヘル,
        .msg_name = MEID_ヘル,
        .msg_desc = MEID_H_ヘル,
        .fid = FID_ch00_19_Hell_F_Normal,

        .base_level = 1,
        .base_hp = 17,
        .base_pow = 8,
        .base_spd = 8,
        .base_def = 7,
        .base_res = 3,

        .growth_hp = 55,
        .growth_pow = 60,
        .growth_spd = 70,
        .growth_def = 60,
        .growth_res = 30,

        .attributes = UNIT_ATTR_FEMALE,
    },

    [EID_エンブラ - 1] = {
        .id = EID_エンブラ,
        .sort_order_key = EID_エンブラ,
        .jid_default = JID_エンブラ,
        .msg_name = MEID_エンブラ,
        .msg_desc = MEID_H_エンブラ,
        .fid = FID_ch00_43_Embla_Normal,

        .base_level = 1,
        .base_hp = 18,
        .base_pow = 12,
        .base_spd = 10,
        .base_def = 4,
        .base_res = 4,

        .growth_hp = 50,
        .growth_pow = 70,
        .growth_spd = 75,
        .growth_def = 60,
        .growth_res = 45,

        .attributes = UNIT_ATTR_FEMALE,
    },

    [EID_ネルトゥス - 1] = {
        .id = EID_ネルトゥス,
        .sort_order_key = EID_ネルトゥス,
        .jid_default = JID_ネルトゥス,
        .msg_name = MEID_ネルトゥス,
        .msg_desc = MEID_H_ネルトゥス,
        .fid = FID_ch00_50_Nerthus_Normal,

        .base_level = 1,
        .base_hp = 17,
        .base_pow = 11,
        .base_spd = 13,
        .base_def = 3,
        .base_res = 2,

        .growth_hp = 50,
        .growth_pow = 70,
        .growth_spd = 75,
        .growth_def = 60,
        .growth_res = 40,

        .attributes = UNIT_ATTR_FEMALE,
    },

    [EID_グスタフ - 1] = {
        .id = EID_グスタフ,
        .sort_order_key = EID_グスタフ,
        .jid_default = JID_グスタフ,
        .msg_name = MEID_グスタフ,
        .msg_desc = MEID_H_グスタフ,
        .fid = FID_ch00_13_Gustaf_M_Enemy,

        .base_level = 1,
        .base_hp = 17,
        .base_pow = 8,
        .base_spd = 3,
        .base_def = 8,
        .base_res = 6,

        .growth_hp = 55,
        .growth_pow = 65,
        .growth_spd = 50,
        .growth_def = 60,
        .growth_res = 35,
    },

    [PID_ユルグ - 1] = {
        .id = PID_ユルグ,
        .sort_order_key = PID_ユルグ,
        .jid_default = JID_ユルグ,
        .msg_name = MPID_ユルグ,
        .msg_desc = MPID_H_ユルグ,
        .fid = FID_ch00_15_Yurg_F_Normal,

        .base_level = 1,
        .base_hp = 15,
        .base_pow = 6,
        .base_spd = 9,
        .base_def = 6,
        .base_res = 4,

        .growth_hp = 50,
        .growth_pow = 60,
        .growth_spd = 65,
        .growth_def = 35,
        .growth_res = 35,

        .attributes = UNIT_ATTR_FEMALE,
    },

    [PID_愛の祭ヘンリエッテ - 1] = {
        .id = PID_愛の祭ヘンリエッテ,
        .sort_order_key = PID_愛の祭ヘンリエッテ,
        .jid_default = JID_愛の祭ヘンリエッテ,
        .msg_name = MPID_愛の祭ヘンリエッテ,
        .msg_desc = MPID_H_愛の祭ヘンリエッテ,
        .fid = FID_ch00_14_Henriette_F_Valentine21,

        .base_level = 1,
        .base_hp = 19,
        .base_pow = 6,
        .base_spd = 4,
        .base_def = 10,
        .base_res = 9,

        .growth_hp = 50,
        .growth_pow = 75,
        .growth_spd = 30,
        .growth_def = 55,
        .growth_res = 70,

        .attributes = UNIT_ATTR_FEMALE,
    },

    [EID_ロキ - 1] = {
        .id = EID_ロキ,
        .sort_order_key = EID_ロキ,
        .jid_default = JID_ロキ,
        .msg_name = MEID_ロキ,
        .msg_desc = MEID_H_ロキ,
        .fid = FID_ch00_08_Loki_F_Normal,

        .base_level = 1,
        .base_hp = 17,
        .base_pow = 8,
        .base_spd = 8,
        .base_def = 3,
        .base_res = 7,

        .growth_hp = 55,
        .growth_pow = 55,
        .growth_spd = 60,
        .growth_def = 35,
        .growth_res = 50,

        .attributes = UNIT_ATTR_FEMALE,
    },

    [EID_ノート - 1] = {
        .id = EID_ノート,
        .sort_order_key = EID_ノート,
        .jid_default = JID_ノート,
        .msg_name = MEID_ノート,
        .msg_desc = MEID_H_ノート,
        .fid = FID_ch00_33_Nott_F_Normal,

        .base_level = 1,
        .base_hp = 17,
        .base_pow = 10,
        .base_spd = 9,
        .base_def = 5,
        .base_res = 7,

        .growth_hp = 50,
        .growth_pow = 70,
        .growth_spd = 70,
        .growth_def = 50,
        .growth_res = 45,

        .attributes = UNIT_ATTR_FEMALE,
    },

    [EID_スカビオサ - 1] = {
        .id = EID_スカビオサ,
        .sort_order_key = EID_スカビオサ,
        .jid_default = JID_スカビオサ,
        .msg_name = MEID_スカビオサ,
        .msg_desc = MEID_H_スカビオサ,
        .fid = FID_ch00_24_Scabiosa_F_Normal,

        .base_level = 1,
        .base_hp = 15,
        .base_pow = 5,
        .base_spd = 6,
        .base_def = 2,
        .base_res = 4,

        .growth_hp = 50,
        .growth_pow = 65,
        .growth_spd = 65,
        .growth_def = 30,
        .growth_res = 40,

        .attributes = UNIT_ATTR_FEMALE,
    },

    [EID_エルム - 1] = {
        .id = EID_エルム,
        .sort_order_key = EID_エルム,
        .jid_default = JID_エルム,
        .msg_name = MEID_エルム,
        .msg_desc = MEID_H_エルム,
        .fid = FID_ch00_40_Elm_M_Normal,

        .base_level = 1,
        .base_hp = 18,
        .base_pow = 8,
        .base_spd = 11,
        .base_def = 4,
        .base_res = 6,

        .growth_hp = 50,
        .growth_pow = 65,
        .growth_spd = 70,
        .growth_def = 50,
        .growth_res = 55,
    },

    [EID_ヘルビンディ - 1] = {
        .id = EID_ヘルビンディ,
        .sort_order_key = EID_ヘルビンディ,
        .jid_default = JID_ヘルビンディ,
        .msg_name = MEID_ヘルビンディ,
        .msg_desc = MEID_H_ヘルビンディ,
        .fid = FID_ch00_12_Helbindi_M_Normal,

        .base_level = 1,
        .base_hp = 18,
        .base_pow = 8,
        .base_spd = 4,
        .base_def = 9,
        .base_res = 7,

        .growth_hp = 60,
        .growth_pow = 60,
        .growth_spd = 40,
        .growth_def = 60,
        .growth_res = 55,
    },

    [EID_フロージ - 1] = {
        .id = EID_フロージ,
        .sort_order_key = EID_フロージ,
        .jid_default = JID_フロージ,
        .msg_name = MEID_フロージ,
        .msg_desc = MEID_H_フロージ,
        .fid = FID_ch00_26_Froda_M_Normal,

        .base_level = 1,
        .base_hp = 16,
        .base_pow = 11,
        .base_spd = 2,
        .base_def = 9,
        .base_res = 6,

        .growth_hp = 55,
        .growth_pow = 65,
        .growth_spd = 30,
        .growth_def = 50,
        .growth_res = 75,
    },

    [PID_神階ルピナス - 1] = {
        .id = PID_神階ルピナス,
        .sort_order_key = PID_神階ルピナス,
        .jid_default = JID_神階ルピナス,
        .msg_name = MPID_神階ルピナス,
        .msg_desc = MPID_H_神階ルピナス,
        .fid = FID_ch00_28_Lupine_F_Normal,

        .base_level = 1,
        .base_hp = 15,
        .base_pow = 7,
        .base_spd = 4,
        .base_def = 5,
        .base_res = 6,

        .growth_hp = 50,
        .growth_pow = 60,
        .growth_spd = 30,
        .growth_def = 60,
        .growth_res = 65,

        .attributes = UNIT_ATTR_FEMALE,
    },

    [EID_グルヴェイグ - 1] = {
        .id = EID_グルヴェイグ,
        .sort_order_key = EID_グルヴェイグ,
        .jid_default = JID_グルヴェイグ,
        .msg_name = MEID_グルヴェイグ,
        .msg_desc = MEID_H_グルヴェイグ,
        .fid = FID_ch00_47_Gullveig_F_Normal,

        .base_level = 1,
        .base_hp = 14,
        .base_pow = 12,
        .base_spd = 11,
        .base_def = 3,
        .base_res = 2,

        .growth_hp = 50,
        .growth_pow = 70,
        .growth_spd = 75,
        .growth_def = 50,
        .growth_res = 35,

        .attributes = UNIT_ATTR_FEMALE,
    },

    [PID_フリーズ - 1] = {
        .id = PID_フリーズ,
        .sort_order_key = PID_フリーズ,
        .jid_default = JID_フリーズ,
        .msg_name = MPID_フリーズ,
        .msg_desc = MPID_H_フリーズ,
        .fid = FID_ch00_16_Freeze_M_NormalNEW,

        .base_level = 1,
        .base_hp = 18,
        .base_pow = 6,
        .base_spd = 3,
        .base_def = 11,
        .base_res = 3,

        .growth_hp = 50,
        .growth_pow = 70,
        .growth_spd = 30,
        .growth_def = 55,
        .growth_res = 50,
    },

    [EID_プルメリア - 1] = {
        .id = EID_プルメリア,
        .sort_order_key = EID_プルメリア,
        .jid_default = JID_プルメリア,
        .msg_name = MEID_プルメリア,
        .msg_desc = MEID_H_プルメリア,
        .fid = FID_ch00_25_Plumeria_F_Normal,

        .base_level = 1,
        .base_hp = 16,
        .base_pow = 7,
        .base_spd = 4,
        .base_def = 2,
        .base_res = 3,

        .growth_hp = 50,
        .growth_pow = 70,
        .growth_spd = 30,
        .growth_def = 30,
        .growth_res = 70,

        .attributes = UNIT_ATTR_FEMALE,
    },

    [EID_クワシル - 1] = {
        .id = EID_クワシル,
        .sort_order_key = EID_クワシル,
        .jid_default = JID_クワシル,
        .msg_name = MEID_クワシル,
        .msg_desc = MEID_H_クワシル,
        .fid = FID_ch00_48_Kvasir_F_Normal,

        .base_level = 1,
        .base_hp = 17,
        .base_pow = 5,
        .base_spd = 15,
        .base_def = 3,
        .base_res = 2,

        .growth_hp = 50,
        .growth_pow = 80,
        .growth_spd = 70,
        .growth_def = 30,
        .growth_res = 50,

        .attributes = UNIT_ATTR_FEMALE,
    },

    [PID_神階ヘイズ - 1] = {
        .id = PID_神階ヘイズ,
        .sort_order_key = PID_神階ヘイズ,
        .jid_default = JID_神階ヘイズ,
        .msg_name = MPID_神階ヘイズ,
        .msg_desc = MPID_H_神階ヘイズ,
        .fid = FID_ch00_49_Heith_F_God01,

        .base_level = 1,
        .base_hp = 15,
        .base_pow = 14,
        .base_spd = 9,
        .base_def = 4,
        .base_res = 4,

        .growth_hp = 50,
        .growth_pow = 70,
        .growth_spd = 80,
        .growth_def = 55,
        .growth_res = 35,

        .attributes = UNIT_ATTR_FEMALE,
    },

    [EID_スラシル - 1] = {
        .id = EID_スラシル,
        .sort_order_key = EID_スラシル,
        .jid_default = JID_スラシル,
        .msg_name = MEID_スラシル,
        .msg_desc = MEID_H_スラシル,
        .fid = FID_ch00_18_Srasir_F_Normal,

        .base_level = 1,
        .base_hp = 17,
        .base_pow = 8,
        .base_spd = 8,
        .base_def = 5,
        .base_res = 4,

        .growth_hp = 50,
        .growth_pow = 55,
        .growth_spd = 65,
        .growth_def = 40,
        .growth_res = 50,

        .attributes = UNIT_ATTR_FEMALE,
    },

    [PID_マークス - 1] = {
        .id = PID_マークス,
        .sort_order_key = PID_マークス,
        .jid_default = JID_マークス,
        .msg_name = MPID_マークス,
        .msg_desc = MPID_H_マークス,
        .fid = FID_ch05_21_Marks_M_Normal,

        .base_level = 1,
        .base_hp = 19,
        .base_pow = 7,
        .base_spd = 4,
        .base_def = 8,
        .base_res = 3,

        .growth_hp = 55,
        .growth_pow = 55,
        .growth_spd = 45,
        .growth_def = 65,
        .growth_res = 30,
    },

    [PID_スリーズ - 1] = {
        .id = PID_スリーズ,
        .sort_order_key = PID_スリーズ,
        .jid_default = JID_スリーズ,
        .msg_name = MPID_スリーズ,
        .msg_desc = MPID_H_スリーズ,
        .fid = FID_ch00_10_Cerise_F_Normal,

        .base_level = 1,
        .base_hp = 14,
        .base_pow = 6,
        .base_spd = 8,
        .base_def = 5,
        .base_res = 5,

        .growth_hp = 50,
        .growth_pow = 55,
        .growth_spd = 55,
        .growth_def = 30,
        .growth_res = 45,

        .attributes = UNIT_ATTR_FEMALE,
    },

    [EID_フード - 1] = {
        .id = EID_フード,
        .sort_order_key = EID_フード,
        .jid_default = JID_フード,
        .msg_name = MEID_フード,
        .msg_desc = MEID_H_フード,
        .fid = FID_ch00_29_Hood_N_Normal,

        .base_level = 1,
        .base_hp = 18,
        .base_pow = 9,
        .base_spd = 4,
        .base_def = 10,
        .base_res = 7,

        .growth_hp = 60,
        .growth_pow = 70,
        .growth_spd = 40,
        .growth_def = 65,
        .growth_res = 50,
    },

    #include "enemy_data.h"

};

const char * const hero_names[] = {
    [PID_アルフォンス - 1] = "PID_アルフォンス",
    [PID_シャロン - 1] = "PID_シャロン",
    [PID_アンナ - 1] = "PID_アンナ",
    [EID_ヴェロニカ - 1] = "EID_ヴェロニカ",
    [PID_レギン - 1] = "PID_レギン",
    [EID_ブルーノ - 1] = "EID_ブルーノ",
    [PID_神階ピアニー - 1] = "PID_神階ピアニー",
    [PID_セイズ - 1] = "PID_セイズ",
    [PID_フィヨルム - 1] = "PID_フィヨルム",
    [PID_神階エイル - 1] = "PID_神階エイル",
    [EID_レティシア - 1] = "EID_レティシア",
    [EID_オッテル - 1] = "EID_オッテル",
    [EID_ファフニール - 1] = "EID_ファフニール",
    [EID_フレイヤ - 1] = "EID_フレイヤ",
    [EID_スルト - 1] = "EID_スルト",
    [PID_アシュ - 1] = "PID_アシュ",
    [PID_神階アスク - 1] = "PID_神階アスク",
    [EID_リーヴ - 1] = "EID_リーヴ",
    [EID_レーギャルン - 1] = "EID_レーギャルン",
    [EID_ダグ - 1] = "EID_ダグ",
    [EID_エイトリ - 1] = "EID_エイトリ",
    [EID_レーヴァテイン - 1] = "EID_レーヴァテイン",
    [EID_ヘル - 1] = "EID_ヘル",
    [EID_エンブラ - 1] = "EID_エンブラ",
    [EID_ネルトゥス - 1] = "EID_ネルトゥス",
    [EID_グスタフ - 1] = "EID_グスタフ",
    [PID_ユルグ - 1] = "PID_ユルグ",
    [PID_愛の祭ヘンリエッテ - 1] = "PID_愛の祭ヘンリエッテ",
    [EID_ロキ - 1] = "EID_ロキ",
    [EID_ノート - 1] = "EID_ノート",
    [EID_スカビオサ - 1] = "EID_スカビオサ",
    [EID_エルム - 1] = "EID_エルム",
    [EID_ヘルビンディ - 1] = "EID_ヘルビンディ",
    [EID_フロージ - 1] = "EID_フロージ",
    [PID_神階ルピナス - 1] = "PID_神階ルピナス",
    [EID_グルヴェイグ - 1] = "EID_グルヴェイグ",
    [PID_フリーズ - 1] = "PID_フリーズ",
    [EID_プルメリア - 1] = "EID_プルメリア",
    [EID_クワシル - 1] = "EID_クワシル",
    [PID_神階ヘイズ - 1] = "PID_神階ヘイズ",
    [EID_スラシル - 1] = "EID_スラシル",
    [PID_マークス - 1] = "PID_マークス",
    [PID_スリーズ - 1] = "PID_スリーズ",
    [EID_フード - 1] = "EID_フード",
};
