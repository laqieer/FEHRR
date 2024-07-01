
#include "prelude.h"
#include "constants/chapters.h"
#include "chapterNew.h"
#include "chapters.h"
#include "facesNew.h"

const u16 ChapterEnemyHeroFaces[][7] = {
    [CHAPTER_CH_S0102 - CHAPTER_CH_NEW] = {
        FID_ch01_21_Minerba_F_Normal, // 1: PID_ミネルバ
        FID_ch01_18_Paora_F_Normal, // 2: PID_パオラ
        FID_ch01_19_Katua_F_Normal, // 3: PID_カチュア
        FID_ch01_08_Maria_F_Normal, // 4: PID_マリア
    },
    [CHAPTER_CH_S0201 - CHAPTER_CH_NEW] = {
        FID_ch01_00_Marth_M_Normal, // 1: PID_マルス
        FID_ch01_14_Jeigan_M_Normal, // 2: PID_ジェイガン
        FID_ch01_17_Sheeda_F_Normal, // 3: PID_シーダ
    },
    [CHAPTER_CH_S0202 - CHAPTER_CH_NEW] = {
        FID_ch01_01_Oguma_M_Normal, // 1: PID_オグマ
    },
    [CHAPTER_CH_S0203 - CHAPTER_CH_NEW] = {
        FID_ch01_07_Rinda_F_Normal, // 1: PID_リンダ
        FID_ch01_06_Marich_M_Normal, // 2: PID_マリク
    },
    [CHAPTER_CH_S0204 - CHAPTER_CH_NEW] = {
        FID_ch01_13_Kain_M_Normal, // 1: PID_カイン
        FID_ch01_16_Abel_M_Normal, // 2: PID_アベル
        FID_ch01_04_Gohdon_M_Normal, // 3: PID_ゴードン
    },
    [CHAPTER_CH_S0205 - CHAPTER_CH_NEW] = {
        FID_ch01_04_Gohdon_M_Normal, // 1: PID_ゴードン
        FID_ch01_00_Marth_M_Normal, // 2: PID_マルス
        FID_ch01_06_Marich_M_Normal, // 3: PID_マリク
        FID_ch01_17_Sheeda_F_Normal, // 4: PID_シーダ
    },
    [CHAPTER_CH_S0301 - CHAPTER_CH_NEW] = {
        FID_ch05_28_Camilla_F_Normal, // 1: PID_カミラ
        FID_ch05_24_Leon_M_Normal, // 2: PID_レオン
        FID_ch05_25_Elise_F_Normal, // 3: PID_エリーゼ
    },
    [CHAPTER_CH_S0302 - CHAPTER_CH_NEW] = {
        FID_ch05_25_Elise_F_Normal, // 1: PID_エリーゼ
        FID_ch05_08_Harold_M_Normal, // 2: PID_ハロルド
        FID_ch05_20_Elfi_F_Normal, // 3: PID_エルフィ
    },
    [CHAPTER_CH_S0303 - CHAPTER_CH_NEW] = {
        FID_ch05_24_Leon_M_Normal, // 1: PID_レオン
        FID_ch05_11_Zero_M_Normal, // 2: PID_ゼロ
        FID_ch05_16_Odin_M_Normal, // 3: PID_オーディン
    },
    [CHAPTER_CH_S0304 - CHAPTER_CH_NEW] = {
        FID_ch05_28_Camilla_F_Normal, // 1: PID_カミラ
        FID_ch05_29_Berka_F_Normal, // 2: PID_ベルカ
        FID_ch05_05_Luna_F_Normal, // 3: PID_ルーナ
    },
    [CHAPTER_CH_S0305 - CHAPTER_CH_NEW] = {
        FID_ch05_22_Pieri_F_Normal, // 1: PID_ピエリ
        FID_ch05_04_Lazward_M_Normal, // 2: PID_ラズワルド
    },
    [CHAPTER_CH_S0401 - CHAPTER_CH_NEW] = {
        FID_ch02_00_Roy_M_Normal, // 1: PID_ロイ
    },
    [CHAPTER_CH_S0402 - CHAPTER_CH_NEW] = {
        FID_ch02_10_Clarine_F_Normal, // 1: PID_クラリーネ
        FID_ch02_09_Secilia_F_Normal, // 2: PID_セシリア
    },
    [CHAPTER_CH_S0403 - CHAPTER_CH_NEW] = {
        FID_ch02_06_Fa_F_Normal, // 1: PID_ファ
        FID_ch02_04_Sofiya_F_Normal, // 2: PID_ソフィーヤ
        FID_ch02_05_Lleu_M_Normal, // 3: PID_レイ
    },
    [CHAPTER_CH_S0404 - CHAPTER_CH_NEW] = {
        FID_ch02_01_Fir_F_Normal, // 1: PID_フィル
        FID_ch02_02_Bartr_M_Normal, // 2: PID_バアトル
        FID_ch02_11_Thany_F_Normal, // 3: PID_シャニー
    },
    [CHAPTER_CH_S0405 - CHAPTER_CH_NEW] = {
        FID_ch02_00_Roy_M_Normal, // 1: PID_ロイ
        FID_ch02_03_Lilina_F_Normal, // 2: PID_リリーナ
        FID_ch02_07_Wendy_F_Normal, // 3: PID_ウェンディ
    },
    [CHAPTER_CH_S0501 - CHAPTER_CH_NEW] = {
        FID_ch04_00_Chrom_M_Normal, // 1: PID_クロム
        FID_ch04_16_Frederik_M_Normal, // 2: PID_フレデリク
        FID_ch04_11_Liz_F_Normal, // 3: PID_リズ
    },
    [CHAPTER_CH_S0502 - CHAPTER_CH_NEW] = {
        FID_ch04_02_Ronkuu_M_Normal, // 1: PID_ロンクー
        FID_ch04_03_Olivie_F_Normal, // 2: PID_オリヴィエ
    },
    [CHAPTER_CH_S0503 - CHAPTER_CH_NEW] = {
        FID_ch04_17_Tiamo_F_Normal, // 1: PID_ティアモ
    },
    [CHAPTER_CH_S0504 - CHAPTER_CH_NEW] = {
        FID_ch04_08_Reflet_F_Normal, // 1: PID_ルフレ女
        FID_ch04_04_Denis_M_Normal, // 2: PID_ドニ
    },
    [CHAPTER_CH_S0505 - CHAPTER_CH_NEW] = {
        FID_ch04_00_Chrom_M_Normal, // 1: PID_クロム
        FID_ch04_08_Reflet_F_Normal, // 2: PID_ルフレ女
        FID_ch04_14_Sort_M_Normal, // 3: PID_ソール
        FID_ch04_15_Soiree_F_Normal, // 4: PID_ソワレ
    },
    [CHAPTER_CH_S0601 - CHAPTER_CH_NEW] = {
        FID_ch01_02_Nabarl_M_Normal, // 1: PID_ナバール
        FID_ch01_09_Riff_M_Normal, // 2: PID_リフ
    },
    [CHAPTER_CH_S0602 - CHAPTER_CH_NEW] = {
        FID_ch01_08_Maria_F_Normal, // 1: PID_マリア
        FID_ch01_21_Minerba_F_Normal, // 2: PID_ミネルバ
    },
    [CHAPTER_CH_S0603 - CHAPTER_CH_NEW] = {
        FID_ch01_05_Jorjue_M_Normal, // 1: PID_ジョルジュ
        FID_ch01_03_Barts_M_Normal, // 2: PID_バーツ
    },
    [CHAPTER_CH_S0604 - CHAPTER_CH_NEW] = {
        FID_ch01_19_Katua_F_Normal, // 1: PID_カチュア
        FID_ch01_18_Paora_F_Normal, // 2: PID_パオラ
        FID_ch01_20_Est_F_Normal, // 3: PID_エスト
    },
    [CHAPTER_CH_S0605 - CHAPTER_CH_NEW] = {
        FID_ch01_10_Tiki_F_Normal, // 1: PID_チキ
        FID_ch01_21_Minerba_F_Normal, // 2: PID_ミネルバ
    },
    [CHAPTER_CH_S0701 - CHAPTER_CH_NEW] = {
        FID_ch05_01_Ryouma_M_Normal, // 1: PID_リョウマ
        FID_ch05_09_Takumi_M_Normal, // 2: PID_タクミ
        FID_ch05_18_Sakura_F_Normal, // 3: PID_サクラ
        FID_ch05_26_Hinoka_F_Normal, // 4: PID_ヒノカ
    },
    [CHAPTER_CH_S0702 - CHAPTER_CH_NEW] = {
        FID_ch05_09_Takumi_M_Normal, // 1: PID_タクミ
        FID_ch05_06_Oboro_F_Normal, // 2: PID_オボロ
        FID_ch05_03_Hinata_M_Normal, // 3: PID_ヒナタ
        FID_ch05_12_Saizou_M_Normal, // 4: PID_サイゾウ
    },
    [CHAPTER_CH_S0703 - CHAPTER_CH_NEW] = {
        FID_ch05_26_Hinoka_F_Normal, // 1: PID_ヒノカ
        FID_ch05_17_Asama_M_Normal, // 2: PID_アサマ
        FID_ch05_10_Setsuna_F_Normal, // 3: PID_セツナ
        FID_ch05_27_Tsubaki_M_Normal, // 4: PID_ツバキ
    },
    [CHAPTER_CH_S0704 - CHAPTER_CH_NEW] = {
        FID_ch05_18_Sakura_F_Normal, // 1: PID_サクラ
        FID_ch05_02_Kazahana_F_Normal, // 2: PID_カザハナ
        FID_ch05_27_Tsubaki_M_Normal, // 3: PID_ツバキ
        FID_ch05_13_Kagerou_F_Normal, // 4: PID_カゲロウ
    },
    [CHAPTER_CH_S0705 - CHAPTER_CH_NEW] = {
        FID_ch05_01_Ryouma_M_Normal, // 1: PID_リョウマ
        FID_ch05_12_Saizou_M_Normal, // 2: PID_サイゾウ
        FID_ch05_13_Kagerou_F_Normal, // 3: PID_カゲロウ
        FID_ch05_06_Oboro_F_Normal, // 4: PID_オボロ
        FID_ch05_03_Hinata_M_Normal, // 5: PID_ヒナタ
    },
    [CHAPTER_CH_S0801 - CHAPTER_CH_NEW] = {
        FID_ch03_02_Matthew_M_Normal, // 1: PID_マシュー
        FID_ch03_04_Serra_F_Normal, // 2: PID_セーラ
    },
    [CHAPTER_CH_S0802 - CHAPTER_CH_NEW] = {
        FID_ch03_06_Eliwod_M_Normal, // 1: PID_エリウッド
        FID_ch03_05_Hector_M_Normal, // 2: PID_ヘクトル
    },
    [CHAPTER_CH_S0803 - CHAPTER_CH_NEW] = {
        FID_ch03_09_Leyvan_M_Normal, // 1: PID_レイヴァン
        FID_ch03_03_Nino_F_Normal, // 2: PID_ニノ
    },
    [CHAPTER_CH_S0804 - CHAPTER_CH_NEW] = {
        FID_ch03_01_Hawkeye_M_Normal, // 1: PID_ホークアイ
        FID_ch03_00_Lin_F_Normal, // 2: PID_リン
        FID_ch03_08_Flolina_F_Normal, // 3: PID_フロリーナ
    },
    [CHAPTER_CH_S0805 - CHAPTER_CH_NEW] = {
        FID_ch03_06_Eliwod_M_Normal, // 1: PID_エリウッド
        FID_ch03_05_Hector_M_Normal, // 2: PID_ヘクトル
        FID_ch03_00_Lin_F_Normal, // 3: PID_リン
    },
    [CHAPTER_CH_S0901 - CHAPTER_CH_NEW] = {
        FID_ch04_07_Reflet_M_Normal, // 1: PID_ルフレ男
        FID_ch04_10_Sallya_F_Normal, // 2: PID_サーリャ
    },
    [CHAPTER_CH_S0902 - CHAPTER_CH_NEW] = {
        FID_ch04_13_Nono_F_Normal, // 1: PID_ノノ
        FID_ch04_09_Henri_M_Normal, // 2: PID_ヘンリー
    },
    [CHAPTER_CH_S0903 - CHAPTER_CH_NEW] = {
        FID_ch04_05_Viaur_M_Normal, // 1: PID_ヴィオール
        FID_ch04_18_Serge_F_Normal, // 2: PID_セルジュ
    },
    [CHAPTER_CH_S0904 - CHAPTER_CH_NEW] = {
        FID_ch04_12_Tiki_F_Normal, // 1: PID_チキ覚醒
        FID_ch04_01_Lucina_F_Normal, // 2: PID_ルキナ
    },
    [CHAPTER_CH_S0905 - CHAPTER_CH_NEW] = {
        FID_ch04_07_Reflet_M_Normal, // 1: PID_ルフレ男
        FID_ch04_01_Lucina_F_Normal, // 2: PID_ルキナ
        FID_ch04_06_Guire_M_Normal, // 3: PID_ガイア
    },
    [CHAPTER_CH_S1001 - CHAPTER_CH_NEW] = {
        FID_ch01_22_Misheil_M_Normal, // 1: PID_ミシェイル
        FID_ch01_15_Camus_M_Normal, // 2: PID_カミュ
    },
    [CHAPTER_CH_S1002 - CHAPTER_CH_NEW] = {
        FID_ch02_08_Zefhyr_M_Normal, // 1: PID_ゼフィール
        FID_ch02_12_Nacien_M_Normal, // 2: PID_ナーシェン
    },
    [CHAPTER_CH_S1003 - CHAPTER_CH_NEW] = {
        FID_ch03_07_Ursula_F_Normal, // 1: PID_ウルスラ
    },
    [CHAPTER_CH_S1101 - CHAPTER_CH_NEW] = {
        FID_ch09_00_Ike_M_Normal, // 1: PID_アイク
        FID_ch09_02_Senerio_M_Normal, // 2: PID_セネリオ
    },
    [CHAPTER_CH_S1102 - CHAPTER_CH_NEW] = {
        FID_ch09_04_Tiamat_F_Normal, // 1: PID_ティアマト
        FID_ch09_03_Mist_F_Normal, // 2: PID_ミスト
    },
    [CHAPTER_CH_S1103 - CHAPTER_CH_NEW] = {
        FID_ch09_04_Tiamat_F_Normal, // 1: PID_ティアマト
        FID_ch09_02_Senerio_M_Normal, // 2: PID_セネリオ
        FID_ch09_03_Mist_F_Normal, // 3: PID_ミスト
    },
    [CHAPTER_CH_S1104 - CHAPTER_CH_NEW] = {
        FID_ch09_00_Ike_M_Normal, // 1: PID_アイク
        FID_ch09_04_Tiamat_F_Normal, // 2: PID_ティアマト
        FID_ch09_02_Senerio_M_Normal, // 3: PID_セネリオ
    },
    [CHAPTER_CH_S1105 - CHAPTER_CH_NEW] = {
        FID_ch09_00_Ike_M_Normal, // 1: PID_アイク
        FID_ch09_03_Mist_F_Normal, // 2: PID_ミスト
        FID_ch09_04_Tiamat_F_Normal, // 3: PID_ティアマト
        FID_ch09_02_Senerio_M_Normal, // 4: PID_セネリオ
    },
    [CHAPTER_CH_S1201 - CHAPTER_CH_NEW] = {
        FID_ch10_08_Cellica_F_Normal, // 1: PID_セリカ
        FID_ch10_13_Jenny_F_Normal, // 2: PID_ジェニー
        FID_ch01_20_Est_F_Normal, // 3: PID_エスト
    },
    [CHAPTER_CH_S1202 - CHAPTER_CH_NEW] = {
        FID_ch10_16_May_F_Normal, // 1: PID_メイ
        FID_ch10_12_Boowy_M_Normal, // 2: PID_ボーイ
    },
    [CHAPTER_CH_S1203 - CHAPTER_CH_NEW] = {
        FID_ch10_08_Cellica_F_Normal, // 1: PID_セリカ
        FID_ch10_16_May_F_Normal, // 2: PID_メイ
        FID_ch10_13_Jenny_F_Normal, // 3: PID_ジェニー
        FID_ch01_18_Paora_F_Normal, // 4: PID_パオラ
    },
    [CHAPTER_CH_S1204 - CHAPTER_CH_NEW] = {
        FID_ch10_16_May_F_Normal, // 1: PID_メイ
        FID_ch10_12_Boowy_M_Normal, // 2: PID_ボーイ
        FID_ch10_13_Jenny_F_Normal, // 3: PID_ジェニー
        FID_ch01_19_Katua_F_Normal, // 4: PID_カチュア
    },
    [CHAPTER_CH_S1205 - CHAPTER_CH_NEW] = {
        FID_ch10_08_Cellica_F_Normal, // 1: PID_セリカ
        FID_ch10_12_Boowy_M_Normal, // 2: PID_ボーイ
        FID_ch10_16_May_F_Normal, // 3: PID_メイ
        FID_ch10_13_Jenny_F_Normal, // 4: PID_ジェニー
    },
    [CHAPTER_CH_S1301 - CHAPTER_CH_NEW] = {
        FID_ch10_04_Dyute_F_Normal, // 1: PID_デューテ
    },
    [CHAPTER_CH_S1302 - CHAPTER_CH_NEW] = {
        FID_ch10_09_Savor_M_Normal, // 1: PID_セーバー
        FID_ch10_10_Sonya_F_Normal, // 2: PID_ソニア
        FID_ch10_11_Leo_M_Normal, // 3: PID_レオ
    },
    [CHAPTER_CH_S1303 - CHAPTER_CH_NEW] = {
        FID_ch10_07_Clerbe_M_Normal, // 1: PID_クレーベ
        FID_ch10_05_Machilda_F_Normal, // 2: PID_マチルダ
        FID_ch10_01_Gray_M_Normal, // 3: PID_グレイ
        FID_ch10_02_Robin_M_Normal, // 4: PID_ロビン
    },
    [CHAPTER_CH_S1304 - CHAPTER_CH_NEW] = {
        FID_ch10_09_Savor_M_Normal, // 1: PID_セーバー
        FID_ch10_10_Sonya_F_Normal, // 2: PID_ソニア
        FID_ch10_11_Leo_M_Normal, // 3: PID_レオ
    },
    [CHAPTER_CH_S1305 - CHAPTER_CH_NEW] = {
        FID_ch10_01_Gray_M_Normal, // 1: PID_グレイ
        FID_ch10_02_Robin_M_Normal, // 2: PID_ロビン
        FID_ch10_07_Clerbe_M_Normal, // 3: PID_クレーベ
        FID_ch10_05_Machilda_F_Normal, // 4: PID_マチルダ
        FID_ch10_10_Sonya_F_Normal, // 5: PID_ソニア
    },
    [CHAPTER_CH_S1402 - CHAPTER_CH_NEW] = {
        FID_ch09_06_Erincia_F_Normal, // 1: PID_エリンシア
        FID_ch09_07_Nepenee_F_Normal, // 2: PID_ネフェニー
    },
    [CHAPTER_CH_S1403 - CHAPTER_CH_NEW] = {
        FID_ch09_05_Oscar_M_Normal, // 1: PID_オスカー
        FID_ch09_08_BlackNight_M_Normal, // 2: PID_漆黒の騎士
    },
    [CHAPTER_CH_S1404 - CHAPTER_CH_NEW] = {
        FID_ch09_07_Nepenee_F_Normal, // 1: PID_ネフェニー
        FID_ch09_05_Oscar_M_Normal, // 2: PID_オスカー
        FID_ch09_06_Erincia_F_Normal, // 3: PID_エリンシア
    },
    [CHAPTER_CH_S1405 - CHAPTER_CH_NEW] = {
        FID_ch09_06_Erincia_F_Normal, // 1: PID_エリンシア
        FID_ch09_08_BlackNight_M_Normal, // 2: PID_漆黒の騎士
        FID_ch09_00_Ike_M_ELECTION01, // 3: PID_総選挙アイク
        FID_ch09_05_Oscar_M_Normal, // 4: PID_オスカー
    },
    [CHAPTER_CH_S1501 - CHAPTER_CH_NEW] = {
        FID_ch10_00_Arum_M_Normal, // 1: PID_アルム
        FID_ch06_03_Yuria_F_Normal, // 2: PID_ユリア
        FID_ch05_11_Zero_M_Normal, // 3: PID_ゼロ
        FID_ch09_07_Nepenee_F_Normal, // 4: PID_ネフェニー
    },
    [CHAPTER_CH_S1601 - CHAPTER_CH_NEW] = {
        FID_ch06_00_Celice_M_Normal, // 1: PID_セリス
        FID_ch01_07_Rinda_F_Normal, // 2: PID_リンダ
        FID_ch01_06_Marich_M_Normal, // 3: PID_マリク
        FID_ch06_03_Yuria_F_Normal, // 4: PID_ユリア
        FID_ch03_06_Eliwod_M_Normal, // 5: PID_エリウッド
    },
    [CHAPTER_CH_S2022 - CHAPTER_CH_NEW] = {
        FID_ch05_31_Shinonome_M_Normal, // 1: PID_シノノメ
        FID_ch05_39_Syalla_F_Normal, // 2: PID_シャラ
    },
    [CHAPTER_CH_S2023 - CHAPTER_CH_NEW] = {
        FID_ch05_30_Siegbert_M_Normal, // 1: PID_ジークベルト
        FID_ch05_40_Soleil_F_Normal, // 2: PID_ソレイユ
    },
    [CHAPTER_CH_S2024 - CHAPTER_CH_NEW] = {
        FID_ch05_31_Shinonome_M_Normal, // 1: PID_シノノメ
        FID_ch05_30_Siegbert_M_Normal, // 2: PID_ジークベルト
    },
    [CHAPTER_CH_S2031 - CHAPTER_CH_NEW] = {
        FID_ch11_02_Sothe_M_Normal, // 1: PID_サザ
    },
    [CHAPTER_CH_S2032 - CHAPTER_CH_NEW] = {
        FID_ch11_02_Sothe_M_Normal, // 1: PID_サザ
        FID_ch11_01_Micaiah_F_Normal, // 2: PID_ミカヤ
    },
    [CHAPTER_CH_S2033 - CHAPTER_CH_NEW] = {
        FID_ch11_04_Oliver_M_Normal, // 1: PID_オリヴァー
    },
    [CHAPTER_CH_S2034 - CHAPTER_CH_NEW] = {
        FID_ch11_02_Sothe_M_Normal, // 1: PID_サザ
        FID_ch11_01_Micaiah_F_Normal, // 2: PID_ミカヤ
        FID_ch11_03_Zelgius_M_Normal, // 3: PID_ゼルギウス
    },
    [CHAPTER_CH_S2041 - CHAPTER_CH_NEW] = {
        FID_ch08_01_Eirik_F_Normal2, // 1: PID_エイリーク2
    },
    [CHAPTER_CH_S2042 - CHAPTER_CH_NEW] = {
        FID_ch08_11_Marica_F_Normal, // 1: PID_マリカ
    },
    [CHAPTER_CH_S2043 - CHAPTER_CH_NEW] = {
        FID_ch08_01_Eirik_F_Normal2, // 1: PID_エイリーク2
        FID_ch08_10_Larchel_F_Normal, // 2: PID_ラーチェル
    },
    [CHAPTER_CH_S2044 - CHAPTER_CH_NEW] = {
        FID_ch08_09_Myrrh_F_Normal, // 1: PID_ミルラ
    },
    [CHAPTER_CH_S2052 - CHAPTER_CH_NEW] = {
        FID_ch10_08_Cellica_F_Dark, // 1: PID_魔女セリカ
    },
    [CHAPTER_CH_S2053 - CHAPTER_CH_NEW] = {
        FID_ch04_07_Reflet_M_Dark, // 1: PID_邪竜ルフレ男
    },
    [CHAPTER_CH_S2054 - CHAPTER_CH_NEW] = {
        FID_ch01_29_Hardin_M_Dark, // 1: PID_暗黒ハーディン
    },
    [CHAPTER_CH_S2055 - CHAPTER_CH_NEW] = {
        FID_ch01_29_Hardin_M_Dark, // 1: PID_暗黒ハーディン
        FID_ch04_07_Reflet_M_Dark, // 2: PID_邪竜ルフレ男
    },
    [CHAPTER_CH_S2061 - CHAPTER_CH_NEW] = {
        FID_ch04_24_Marc_F_Normal, // 1: PID_マーク女
    },
    [CHAPTER_CH_S2062 - CHAPTER_CH_NEW] = {
        FID_ch04_00_Chrom_M_Normal2, // 1: PID_クロム2
    },
    [CHAPTER_CH_S2063 - CHAPTER_CH_NEW] = {
        FID_ch04_24_Marc_F_Normal, // 1: PID_マーク女
        FID_ch04_21_Jerome_M_Normal, // 2: PID_ジェローム
    },
    [CHAPTER_CH_S2064 - CHAPTER_CH_NEW] = {
        FID_ch04_22_Marc_M_Normal, // 1: PID_マーク男
    },
    [CHAPTER_CH_S2065 - CHAPTER_CH_NEW] = {
        FID_ch04_00_Chrom_M_Normal2, // 1: PID_クロム2
        FID_ch04_21_Jerome_M_Normal, // 2: PID_ジェローム
        FID_ch04_24_Marc_F_Normal, // 3: PID_マーク女
    },
    [CHAPTER_CH_S2071 - CHAPTER_CH_NEW] = {
        FID_ch07_04_Fin_M_Normal, // 1: PID_フィン
    },
    [CHAPTER_CH_S2072 - CHAPTER_CH_NEW] = {
        FID_ch07_01_Reinhardt_M_Normal2, // 1: PID_ラインハルト2
        FID_ch07_03_Nanna_F_Normal, // 2: PID_ナンナ
    },
    [CHAPTER_CH_S2073 - CHAPTER_CH_NEW] = {
        FID_ch07_02_Leaf_M_Normal, // 1: PID_リーフ
        FID_ch07_03_Nanna_F_Normal, // 2: PID_ナンナ
        FID_ch07_04_Fin_M_Normal, // 3: PID_フィン
    },
    [CHAPTER_CH_S2074 - CHAPTER_CH_NEW] = {
        FID_ch07_01_Reinhardt_M_Normal2, // 1: PID_ラインハルト2
        FID_ch07_00_Olwen_F_Normal2, // 2: PID_オルエン2
    },
    [CHAPTER_CH_S2075 - CHAPTER_CH_NEW] = {
        FID_ch07_02_Leaf_M_Normal, // 1: PID_リーフ
        FID_ch07_03_Nanna_F_Normal, // 2: PID_ナンナ
        FID_ch07_01_Reinhardt_M_Normal2, // 3: PID_ラインハルト2
        FID_ch07_04_Fin_M_Normal, // 4: PID_フィン
        FID_ch07_00_Olwen_F_Normal2, // 5: PID_オルエン2
    },
    [CHAPTER_CH_S2081 - CHAPTER_CH_NEW] = {
        FID_ch05_34_Kannna_F_Normal, // 1: PID_カンナ女
    },
    [CHAPTER_CH_S2082 - CHAPTER_CH_NEW] = {
        FID_ch05_38_Suzukaze_M_Normal, // 1: PID_スズカゼ
    },
    [CHAPTER_CH_S2083 - CHAPTER_CH_NEW] = {
        FID_ch05_26_Hinoka_F_Normal2, // 1: PID_ヒノカ2
        FID_ch05_32_Shigure_M_Normal, // 2: PID_シグレ
    },
    [CHAPTER_CH_S2084 - CHAPTER_CH_NEW] = {
        FID_ch05_34_Kannna_F_Normal, // 1: PID_カンナ女
        FID_ch05_33_Kannna_M_Normal, // 2: PID_カンナ男
    },
    [CHAPTER_CH_S2085 - CHAPTER_CH_NEW] = {
        FID_ch05_34_Kannna_F_Normal, // 1: PID_カンナ女
        FID_ch05_33_Kannna_M_Normal, // 2: PID_カンナ男
        FID_ch05_26_Hinoka_F_Normal2, // 3: PID_ヒノカ2
        FID_ch05_32_Shigure_M_Normal, // 4: PID_シグレ
        FID_ch05_38_Suzukaze_M_Normal, // 5: PID_スズカゼ
    },
    [CHAPTER_CH_S2092 - CHAPTER_CH_NEW] = {
        FID_ch06_10_Aless_M_Normal, // 1: PID_アレス
    },
    [CHAPTER_CH_S2093 - CHAPTER_CH_NEW] = {
        FID_ch06_11_Ishtar_F_Normal, // 1: PID_イシュタル
    },
    [CHAPTER_CH_S2094 - CHAPTER_CH_NEW] = {
        FID_ch06_10_Aless_M_Normal, // 1: PID_アレス
        FID_ch06_13_Lean_F_Normal, // 2: PID_リーン
    },
    [CHAPTER_CH_S2095 - CHAPTER_CH_NEW] = {
        FID_ch06_13_Lean_F_Normal, // 1: PID_リーン
        FID_ch06_11_Ishtar_F_Normal, // 2: PID_イシュタル
        FID_ch06_10_Aless_M_Normal, // 3: PID_アレス
    },
    [CHAPTER_CH_S2101 - CHAPTER_CH_NEW] = {
        FID_ch03_20_Lagarto_M_Normal, // 1: PID_ラガルト
    },
    [CHAPTER_CH_S2102 - CHAPTER_CH_NEW] = {
        FID_ch03_18_Canas_M_Normal, // 1: PID_カナス
    },
    [CHAPTER_CH_S2103 - CHAPTER_CH_NEW] = {
        FID_ch03_03_Nino_F_Normal2, // 1: PID_ニノ2
        FID_ch03_21_Linus_M_Normal, // 2: PID_ライナス
        FID_ch03_10_Lloyd_M_Normal, // 3: PID_ロイド
    },
    [CHAPTER_CH_S2104 - CHAPTER_CH_NEW] = {
        FID_ch03_19_Karla_F_Normal, // 1: PID_カアラ
    },
    [CHAPTER_CH_S2105 - CHAPTER_CH_NEW] = {
        FID_ch03_20_Lagarto_M_Normal, // 1: PID_ラガルト
        FID_ch03_03_Nino_F_Normal2, // 2: PID_ニノ2
        FID_ch03_07_Ursula_F_Normal, // 3: PID_ウルスラ
        FID_ch03_18_Canas_M_Normal, // 4: PID_カナス
        FID_ch03_12_Jaffar_M_Normal, // 5: PID_ジャファル
        FID_ch03_21_Linus_M_Normal, // 6: PID_ライナス
        FID_ch03_10_Lloyd_M_Normal, // 7: PID_ロイド
    },
    [CHAPTER_CH_S2112 - CHAPTER_CH_NEW] = {
        FID_ch04_27_Smia_F_Normal, // 1: PID_スミア
    },
    [CHAPTER_CH_S2113 - CHAPTER_CH_NEW] = {
        FID_ch04_28_Mariabell_F_Normal, // 1: PID_マリアベル
    },
    [CHAPTER_CH_S2114 - CHAPTER_CH_NEW] = {
        FID_ch04_03_Olivie_F_Normal2, // 1: PID_オリヴィエ2
        FID_ch04_29_Riviera_F_Normal, // 2: PID_リベラ
    },
    [CHAPTER_CH_S2115 - CHAPTER_CH_NEW] = {
        FID_ch04_28_Mariabell_F_Normal, // 1: PID_マリアベル
        FID_ch04_29_Riviera_F_Normal, // 2: PID_リベラ
        FID_ch04_27_Smia_F_Normal, // 3: PID_スミア
    },
    [CHAPTER_CH_S2121 - CHAPTER_CH_NEW] = {
        FID_ch06_18_Jamka_M_Normal, // 1: PID_ジャムカ
        FID_ch06_14_Cuan_M_Normal, // 2: PID_キュアン
    },
    [CHAPTER_CH_S2122 - CHAPTER_CH_NEW] = {
        FID_ch06_14_Cuan_M_Normal, // 1: PID_キュアン
        FID_ch06_15_Ethlin_F_Normal, // 2: PID_エスリン
    },
    [CHAPTER_CH_S2123 - CHAPTER_CH_NEW] = {
        FID_ch06_18_Jamka_M_Normal, // 1: PID_ジャムカ
    },
    [CHAPTER_CH_S2124 - CHAPTER_CH_NEW] = {
        FID_ch06_16_Levn_M_Normal, // 1: PID_レヴィン
        FID_ch06_17_Sylvia_F_Normal, // 2: PID_シルヴィア
    },
    [CHAPTER_CH_S2125 - CHAPTER_CH_NEW] = {
        FID_ch06_17_Sylvia_F_Normal, // 1: PID_シルヴィア
        FID_ch06_16_Levn_M_Normal, // 2: PID_レヴィン
        FID_ch06_14_Cuan_M_Normal, // 3: PID_キュアン
        FID_ch06_15_Ethlin_F_Normal, // 4: PID_エスリン
        FID_ch06_18_Jamka_M_Normal, // 5: PID_ジャムカ
    },
    [CHAPTER_CH_S2131 - CHAPTER_CH_NEW] = {
        FID_ch05_42_Silas_M_Normal, // 1: PID_サイラス
    },
    [CHAPTER_CH_S2132 - CHAPTER_CH_NEW] = {
        FID_ch05_43_Eponine_F_Normal, // 1: PID_エポニーヌ
    },
    [CHAPTER_CH_S2133 - CHAPTER_CH_NEW] = {
        FID_ch05_44_Ophelia_F_Normal, // 1: PID_オフェリア
        FID_ch05_41_Flora_F_Normal, // 2: PID_フローラ
    },
    [CHAPTER_CH_S2134 - CHAPTER_CH_NEW] = {
        FID_ch05_44_Ophelia_F_Normal, // 1: PID_オフェリア
        FID_ch05_43_Eponine_F_Normal, // 2: PID_エポニーヌ
    },
    [CHAPTER_CH_S2135 - CHAPTER_CH_NEW] = {
        FID_ch05_42_Silas_M_Normal, // 1: PID_サイラス
        FID_ch05_41_Flora_F_Normal, // 2: PID_フローラ
    },
    [CHAPTER_CH_S3031 - CHAPTER_CH_NEW] = {
        FID_ch11_07_Rieusion_M_Normal, // 1: PID_リュシオン
        FID_ch11_08_Learne_F_Normal, // 2: PID_リアーネ
    },
    [CHAPTER_CH_S3032 - CHAPTER_CH_NEW] = {
        FID_ch11_06_Naesala_M_Normal, // 1: PID_ネサラ
        FID_ch11_08_Learne_F_Normal, // 2: PID_リアーネ
    },
    [CHAPTER_CH_S3033 - CHAPTER_CH_NEW] = {
        FID_ch11_09_Nike_F_Normal, // 1: PID_ニケ
    },
    [CHAPTER_CH_S3034 - CHAPTER_CH_NEW] = {
        FID_ch11_05_Tibarn_M_Normal, // 1: PID_ティバーン
        FID_ch11_07_Rieusion_M_Normal, // 2: PID_リュシオン
    },
    [CHAPTER_CH_S3035 - CHAPTER_CH_NEW] = {
        FID_ch11_08_Learne_F_Normal, // 1: PID_リアーネ
        FID_ch11_05_Tibarn_M_Normal, // 2: PID_ティバーン
        FID_ch11_09_Nike_F_Normal, // 3: PID_ニケ
    },
    [CHAPTER_CH_S3041 - CHAPTER_CH_NEW] = {
        FID_ch04_32_Velvet_F_Normal, // 1: PID_ベルベット
    },
    [CHAPTER_CH_S3042 - CHAPTER_CH_NEW] = {
        FID_ch05_47_Kinu_F_Normal, // 1: PID_キヌ
        FID_ch05_49_Nishiki_M_Normal, // 2: PID_ニシキ
    },
    [CHAPTER_CH_S3043 - CHAPTER_CH_NEW] = {
        FID_ch05_48_Velour_F_Normal, // 1: PID_ベロア
        FID_ch05_50_Flannel_M_Normal, // 2: PID_フランネル
    },
    [CHAPTER_CH_S3044 - CHAPTER_CH_NEW] = {
        FID_ch05_48_Velour_F_Normal, // 1: PID_ベロア
        FID_ch05_47_Kinu_F_Normal, // 2: PID_キヌ
    },
    [CHAPTER_CH_S3045 - CHAPTER_CH_NEW] = {
        FID_ch05_49_Nishiki_M_Normal, // 1: PID_ニシキ
        FID_ch05_50_Flannel_M_Normal, // 2: PID_フランネル
        FID_ch04_32_Velvet_F_Normal, // 3: PID_ベルベット
    },
    [CHAPTER_CH_S3051 - CHAPTER_CH_NEW] = {
        FID_ch02_15_Lugh_M_Normal, // 1: PID_ルゥ
    },
    [CHAPTER_CH_S3052 - CHAPTER_CH_NEW] = {
        FID_ch02_17_Thite_F_Normal, // 1: PID_ティト
    },
    [CHAPTER_CH_S3053 - CHAPTER_CH_NEW] = {
        FID_ch02_18_Rutger_M_Normal, // 1: PID_ルトガー
        FID_ch02_16_Sue_F_Normal, // 2: PID_スー
    },
    [CHAPTER_CH_S3054 - CHAPTER_CH_NEW] = {
        FID_ch02_14_Idenn_F_Normal, // 1: PID_イドゥン
    },
    [CHAPTER_CH_S3055 - CHAPTER_CH_NEW] = {
        FID_ch02_16_Sue_F_Normal, // 1: PID_スー
        FID_ch02_17_Thite_F_Normal, // 2: PID_ティト
        FID_ch02_18_Rutger_M_Normal, // 3: PID_ルトガー
    },
    [CHAPTER_CH_S3061 - CHAPTER_CH_NEW] = {
        FID_ch11_11_Rethe_F_Normal, // 1: PID_レテ
    },
    [CHAPTER_CH_S3062 - CHAPTER_CH_NEW] = {
        FID_ch11_12_Mordy_M_Normal, // 1: PID_モゥディ
        FID_ch11_10_Lay_M_Normal, // 2: PID_ライ
    },
    [CHAPTER_CH_S3064 - CHAPTER_CH_NEW] = {
        FID_ch11_13_Caineghis_M_Normal, // 1: PID_カイネギス
        FID_ch11_10_Lay_M_Normal, // 2: PID_ライ
    },
    [CHAPTER_CH_S3065 - CHAPTER_CH_NEW] = {
        FID_ch11_12_Mordy_M_Normal, // 1: PID_モゥディ
        FID_ch11_11_Rethe_F_Normal, // 2: PID_レテ
    },
    [CHAPTER_CH_S3071 - CHAPTER_CH_NEW] = {
        FID_ch07_06_Mareeta_F_Dark, // 1: PID_魔剣マリータ
    },
    [CHAPTER_CH_S3072 - CHAPTER_CH_NEW] = {
        FID_ch05_19_Kamui_F_Dark, // 1: PID_暴走カムイ女
    },
    [CHAPTER_CH_S3073 - CHAPTER_CH_NEW] = {
        FID_ch07_06_Mareeta_F_Dark, // 1: PID_魔剣マリータ
        FID_ch01_10_Tiki_F_Dark, // 2: PID_催眠チキ
    },
    [CHAPTER_CH_S3074 - CHAPTER_CH_NEW] = {
        FID_ch10_14_Berkut_M_Dark, // 1: PID_闇ベルクト
    },
    [CHAPTER_CH_S3075 - CHAPTER_CH_NEW] = {
        FID_ch05_19_Kamui_F_Dark, // 1: PID_暴走カムイ女
        FID_ch01_10_Tiki_F_Dark, // 2: PID_催眠チキ
        FID_ch10_14_Berkut_M_Dark, // 3: PID_闇ベルクト
        FID_ch07_06_Mareeta_F_Dark, // 4: PID_魔剣マリータ
    },
    [CHAPTER_CH_S3081 - CHAPTER_CH_NEW] = {
        FID_ch04_34_Cynthia_F_Normal, // 1: PID_シンシア
    },
    [CHAPTER_CH_S3082 - CHAPTER_CH_NEW] = {
        FID_ch04_36_Bredy_M_Normal, // 1: PID_ブレディ
        FID_ch04_37_Chanbray_M_Normal, // 2: PID_シャンブレー
    },
    [CHAPTER_CH_S3083 - CHAPTER_CH_NEW] = {
        FID_ch04_38_Degel_F_Normal, // 1: PID_デジェル
    },
    [CHAPTER_CH_S3084 - CHAPTER_CH_NEW] = {
        FID_ch04_35_Nn_F_Normal, // 1: PID_ンン
        FID_ch04_34_Cynthia_F_Normal, // 2: PID_シンシア
    },
    [CHAPTER_CH_S3085 - CHAPTER_CH_NEW] = {
        FID_ch04_35_Nn_F_Normal, // 1: PID_ンン
        FID_ch04_38_Degel_F_Normal, // 2: PID_デジェル
        FID_ch04_36_Bredy_M_Normal, // 3: PID_ブレディ
        FID_ch04_37_Chanbray_M_Normal, // 4: PID_シャンブレー
    },
    [CHAPTER_CH_S3091 - CHAPTER_CH_NEW] = {
        FID_ch17_01_Beleth_F_Normal, // 1: PID_ベレス
    },
    [CHAPTER_CH_S3092 - CHAPTER_CH_NEW] = {
        FID_ch17_03_Dimitri_M_Normal, // 1: PID_ディミトリ
    },
    [CHAPTER_CH_S3093 - CHAPTER_CH_NEW] = {
        FID_ch17_04_Claude_M_Normal, // 1: PID_クロード
    },
    [CHAPTER_CH_S3094 - CHAPTER_CH_NEW] = {
        FID_ch17_02_Edelgardr_F_Normal, // 1: PID_エーデルガルト
    },
    [CHAPTER_CH_S3095 - CHAPTER_CH_NEW] = {
        FID_ch17_01_Beleth_F_Normal, // 1: PID_ベレス
        FID_ch17_03_Dimitri_M_Normal, // 2: PID_ディミトリ
        FID_ch17_02_Edelgardr_F_Normal, // 3: PID_エーデルガルト
        FID_ch17_04_Claude_M_Normal, // 4: PID_クロード
    },
    [CHAPTER_CH_S3101 - CHAPTER_CH_NEW] = {
        FID_ch17_12_Petra_F_Normal, // 1: PID_ペトラ
    },
    [CHAPTER_CH_S3102 - CHAPTER_CH_NEW] = {
        FID_ch17_25_Hilda_F_Normal, // 1: PID_ヒルダ
        FID_ch17_17_Mercedes_F_Normal, // 2: PID_メルセデス
    },
    [CHAPTER_CH_S3103 - CHAPTER_CH_NEW] = {
        FID_ch17_06_Hubert_M_Normal, // 1: PID_ヒューベルト
        FID_ch17_12_Petra_F_Normal, // 2: PID_ペトラ
    },
    [CHAPTER_CH_S3104 - CHAPTER_CH_NEW] = {
        FID_ch17_42_Deathknight_M_Normal, // 1: PID_死神騎士
    },
    [CHAPTER_CH_S3105 - CHAPTER_CH_NEW] = {
        FID_ch17_12_Petra_F_Normal, // 1: PID_ペトラ
        FID_ch17_25_Hilda_F_Normal, // 2: PID_ヒルダ
        FID_ch17_17_Mercedes_F_Normal, // 3: PID_メルセデス
        FID_ch17_06_Hubert_M_Normal, // 4: PID_ヒューベルト
        FID_ch17_42_Deathknight_M_Normal, // 5: PID_死神騎士
    },
    [CHAPTER_CH_S3111 - CHAPTER_CH_NEW] = {
        FID_ch01_34_Norn_F_Normal, // 1: PID_ノルン
        FID_ch01_33_Fina_F_Normal, // 2: PID_フィーナ
    },
    [CHAPTER_CH_S3112 - CHAPTER_CH_NEW] = {
        FID_ch01_31_Sirius_M_Normal, // 1: PID_シリウス
    },
    [CHAPTER_CH_S3113 - CHAPTER_CH_NEW] = {
        FID_ch01_35_Astria_M_Normal, // 1: PID_アストリア
        FID_ch01_33_Fina_F_Normal, // 2: PID_フィーナ
    },
    [CHAPTER_CH_S3114 - CHAPTER_CH_NEW] = {
        FID_ch01_36_Banutu_M_Normal, // 1: PID_バヌトゥ
        FID_ch01_32_Nagi_F_Normal, // 2: PID_ナギ
    },
    [CHAPTER_CH_S3115 - CHAPTER_CH_NEW] = {
        FID_ch01_34_Norn_F_Normal, // 1: PID_ノルン
        FID_ch01_33_Fina_F_Normal, // 2: PID_フィーナ
        FID_ch01_32_Nagi_F_Normal, // 3: PID_ナギ
        FID_ch01_31_Sirius_M_Normal, // 4: PID_シリウス
    },
    [CHAPTER_CH_S3121 - CHAPTER_CH_NEW] = {
        FID_ch10_25_Balbo_M_Normal, // 1: PID_バルボ
    },
    [CHAPTER_CH_S3122 - CHAPTER_CH_NEW] = {
        FID_ch10_25_Balbo_M_Normal, // 1: PID_バルボ
        FID_ch10_23_Silque_F_Normal, // 2: PID_シルク
    },
    [CHAPTER_CH_S3123 - CHAPTER_CH_NEW] = {
        FID_ch10_21_Forsyth_M_Normal, // 1: PID_フォルス
        FID_ch10_22_Python_M_Normal, // 2: PID_パイソン
        FID_ch10_23_Silque_F_Normal, // 3: PID_シルク
    },
    [CHAPTER_CH_S3124 - CHAPTER_CH_NEW] = {
        FID_ch10_20_Katua_F_Normal, // 1: PID_外伝カチュア
        FID_ch10_24_Conrad_M_Normal, // 2: PID_コンラート
    },
    [CHAPTER_CH_S3125 - CHAPTER_CH_NEW] = {
        FID_ch10_20_Katua_F_Normal, // 1: PID_外伝カチュア
        FID_ch10_21_Forsyth_M_Normal, // 2: PID_フォルス
        FID_ch10_22_Python_M_Normal, // 3: PID_パイソン
        FID_ch10_23_Silque_F_Normal, // 4: PID_シルク
        FID_ch10_25_Balbo_M_Normal, // 5: PID_バルボ
        FID_ch10_24_Conrad_M_Normal, // 6: PID_コンラート
        FID_ch10_11_Leo_M_Normal, // 7: PID_レオ
    },
    [CHAPTER_CH_S3131 - CHAPTER_CH_NEW] = {
        FID_ch08_18_Ross_M_Normal, // 1: PID_ロス
        FID_ch08_15_Ewan_M_Normal, // 2: PID_ユアン
    },
    [CHAPTER_CH_S3132 - CHAPTER_CH_NEW] = {
        FID_ch08_14_Xyst_M_Normal, // 1: PID_ジスト
        FID_ch08_16_Tethys_F_Normal, // 2: PID_テティス
    },
    [CHAPTER_CH_S3134 - CHAPTER_CH_NEW] = {
        FID_ch08_00_Ephraim_MM_Pair, // 1: PID_比翼エフラム
    },
    [CHAPTER_CH_S3135 - CHAPTER_CH_NEW] = {
        FID_ch08_00_Ephraim_MM_Pair, // 1: PID_比翼エフラム
        FID_ch08_14_Xyst_M_Normal, // 2: PID_ジスト
        FID_ch08_16_Tethys_F_Normal, // 3: PID_テティス
        FID_ch08_17_Cugar_M_Normal, // 4: PID_クーガー
    },
    [CHAPTER_CH_S4021 - CHAPTER_CH_NEW] = {
        FID_ch07_08_Tania_F_Normal, // 1: PID_タニア
        FID_ch07_07_Othin_M_Normal, // 2: PID_オーシン
    },
    [CHAPTER_CH_S4022 - CHAPTER_CH_NEW] = {
        FID_ch07_10_Kempf_M_Normal, // 1: PID_ケンプフ
    },
    [CHAPTER_CH_S4023 - CHAPTER_CH_NEW] = {
        FID_ch07_06_Mareeta_F_Normal, // 1: PID_マリータ
    },
    [CHAPTER_CH_S4024 - CHAPTER_CH_NEW] = {
        FID_ch07_09_Evel_F_Normal, // 1: PID_エーヴェル
        FID_ch07_07_Othin_M_Normal, // 2: PID_オーシン
        FID_ch07_08_Tania_F_Normal, // 3: PID_タニア
    },
    [CHAPTER_CH_S4025 - CHAPTER_CH_NEW] = {
        FID_ch07_09_Evel_F_Normal, // 1: PID_エーヴェル
        FID_ch07_06_Mareeta_F_Normal, // 2: PID_マリータ
    },
    [CHAPTER_CH_S4031 - CHAPTER_CH_NEW] = {
        FID_ch06_21_Shanan_M_Normal, // 1: PID_シャナン
    },
    [CHAPTER_CH_S4032 - CHAPTER_CH_NEW] = {
        FID_ch06_23_Altena_F_Normal, // 1: PID_アルテナ
    },
    [CHAPTER_CH_S4033 - CHAPTER_CH_NEW] = {
        FID_ch06_20_Luchtaine_F_Normal, // 1: PID_ラクチェ
        FID_ch06_21_Shanan_M_Normal, // 2: PID_シャナン
    },
    [CHAPTER_CH_S4034 - CHAPTER_CH_NEW] = {
        FID_ch06_22_Seti_M_Normal, // 1: PID_セティ
    },
    [CHAPTER_CH_S4035 - CHAPTER_CH_NEW] = {
        FID_ch06_23_Altena_F_Normal, // 1: PID_アルテナ
        FID_ch06_20_Luchtaine_F_Normal, // 2: PID_ラクチェ
        FID_ch06_22_Seti_M_Normal, // 3: PID_セティ
    },
    [CHAPTER_CH_S4041 - CHAPTER_CH_NEW] = {
        FID_ch03_26_Ruth_M_Normal, // 1: PID_ラス
        FID_ch03_29_Heath_M_Normal, // 2: PID_ヒース
    },
    [CHAPTER_CH_S4042 - CHAPTER_CH_NEW] = {
        FID_ch03_28_Nils_M_Normal, // 1: PID_ニルス
    },
    [CHAPTER_CH_S4043 - CHAPTER_CH_NEW] = {
        FID_ch03_24_Fiora_F_Normal, // 1: PID_フィオーラ
    },
    [CHAPTER_CH_S4044 - CHAPTER_CH_NEW] = {
        FID_ch03_27_Laila_F_Normal, // 1: PID_レイラ
        FID_ch03_26_Ruth_M_Normal, // 2: PID_ラス
    },
    [CHAPTER_CH_S4045 - CHAPTER_CH_NEW] = {
        FID_ch03_28_Nils_M_Normal, // 1: PID_ニルス
        FID_ch03_24_Fiora_F_Normal, // 2: PID_フィオーラ
        FID_ch03_27_Laila_F_Normal, // 3: PID_レイラ
    },
    [CHAPTER_CH_S4052 - CHAPTER_CH_NEW] = {
        FID_ch17_18_Annette_F_Normal, // 1: PID_アネット
    },
    [CHAPTER_CH_S4053 - CHAPTER_CH_NEW] = {
        FID_ch17_23_Lysithea_F_Normal, // 1: PID_リシテア
    },
    [CHAPTER_CH_S4054 - CHAPTER_CH_NEW] = {
        FID_ch17_07_Ferdinant_M_Normal, // 1: PID_フェルディナント
        FID_ch17_10_Bernadeta_F_Normal, // 2: PID_ベルナデッタ
    },
    [CHAPTER_CH_S4055 - CHAPTER_CH_NEW] = {
        FID_ch17_47_Frameemperor_N_Normal, // 1: PID_炎帝
        FID_ch17_23_Lysithea_F_Normal, // 2: PID_リシテア
        FID_ch17_07_Ferdinant_M_Normal, // 3: PID_フェルディナント
    },
    [CHAPTER_CH_S4062 - CHAPTER_CH_NEW] = {
        FID_ch05_51_Rinka_F_Normal, // 1: PID_リンカ
    },
    [CHAPTER_CH_S4063 - CHAPTER_CH_NEW] = {
        FID_ch05_53_Lilith_F_Normal, // 1: PID_リリス
    },
    [CHAPTER_CH_S4064 - CHAPTER_CH_NEW] = {
        FID_ch05_52_Foleo_M_Normal, // 1: PID_フォレオ
        FID_ch05_54_Midoriko_F_Normal, // 2: PID_ミドリコ
    },
    [CHAPTER_CH_S4065 - CHAPTER_CH_NEW] = {
        FID_ch05_55_Macbeth_M_Normal, // 1: PID_マクベス
        FID_ch05_52_Foleo_M_Normal, // 2: PID_フォレオ
    },
    [CHAPTER_CH_S4072 - CHAPTER_CH_NEW] = {
        FID_ch06_03_Yuria_F_Dark, // 1: PID_催眠ユリア
    },
    [CHAPTER_CH_S4073 - CHAPTER_CH_NEW] = {
        FID_ch08_12_Lyon_M_Dark, // 1: PID_魔王リオン
    },
    [CHAPTER_CH_S4074 - CHAPTER_CH_NEW] = {
        FID_ch11_00_Ike_M_Dark, // 1: PID_暴走アイク
    },
    [CHAPTER_CH_S4075 - CHAPTER_CH_NEW] = {
        FID_ch11_00_Ike_M_Dark, // 1: PID_暴走アイク
        FID_ch05_00_Kamui_M_Dark, // 2: PID_暴走カムイ男
        FID_ch06_03_Yuria_F_Dark, // 3: PID_催眠ユリア
    },
    [CHAPTER_CH_S4081 - CHAPTER_CH_NEW] = {
        FID_ch04_40_Emerina_F_Normal, // 1: PID_エメリナ
    },
    [CHAPTER_CH_S4082 - CHAPTER_CH_NEW] = {
        FID_ch04_39_Anna_F_Normal, // 1: PID_覚醒アンナ
        FID_ch04_40_Emerina_F_Normal, // 2: PID_エメリナ
    },
    [CHAPTER_CH_S4083 - CHAPTER_CH_NEW] = {
        FID_ch04_41_Sairi_F_Normal, // 1: PID_サイリ
    },
    [CHAPTER_CH_S4084 - CHAPTER_CH_NEW] = {
        FID_ch04_42_Gangrel_M_Normal, // 1: PID_ギャンレル
        FID_ch04_43_Mustafa_M_Normal, // 2: PID_ムスタファー
    },
    [CHAPTER_CH_S4085 - CHAPTER_CH_NEW] = {
        FID_ch04_42_Gangrel_M_Normal, // 1: PID_ギャンレル
        FID_ch04_41_Sairi_F_Normal, // 2: PID_サイリ
        FID_ch04_39_Anna_F_Normal, // 3: PID_覚醒アンナ
        FID_ch04_43_Mustafa_M_Normal, // 4: PID_ムスタファー
    },
    [CHAPTER_CH_S4091 - CHAPTER_CH_NEW] = {
        FID_ch01_37_Chris_M_Normal, // 1: PID_クリス男
    },
    [CHAPTER_CH_S4092 - CHAPTER_CH_NEW] = {
        FID_ch01_39_Julian_M_Normal, // 1: PID_ジュリアン
        FID_ch01_40_Lena_F_Normal, // 2: PID_レナ
    },
    [CHAPTER_CH_S4093 - CHAPTER_CH_NEW] = {
        FID_ch01_38_Chris_F_Normal, // 1: PID_クリス女
    },
    [CHAPTER_CH_S4094 - CHAPTER_CH_NEW] = {
        FID_ch01_41_Jeremiah_F_Normal, // 1: PID_エレミヤ
    },
    [CHAPTER_CH_S4095 - CHAPTER_CH_NEW] = {
        FID_ch01_37_Chris_M_Normal, // 1: PID_クリス男
        FID_ch01_38_Chris_F_Normal, // 2: PID_クリス女
        FID_ch01_41_Jeremiah_F_Normal, // 3: PID_エレミヤ
        FID_ch01_40_Lena_F_Normal, // 4: PID_レナ
        FID_ch01_39_Julian_M_Normal, // 5: PID_ジュリアン
    },
    [CHAPTER_CH_S4101 - CHAPTER_CH_NEW] = {
        FID_ch17_23_Lysithea_F_ELECTION01, // 1: PID_総選挙リシテア
    },
    [CHAPTER_CH_S4102 - CHAPTER_CH_NEW] = {
        FID_ch17_03_Dimitri_M_ELECTION01, // 1: PID_総選挙ディミトリ
    },
    [CHAPTER_CH_S4103 - CHAPTER_CH_NEW] = {
        FID_ch17_04_Claude_M_ELECTION01, // 1: PID_総選挙クロード
    },
    [CHAPTER_CH_S4104 - CHAPTER_CH_NEW] = {
        FID_ch17_02_Edelgardr_F_ELECTION01, // 1: PID_総選挙エーデル
    },
    [CHAPTER_CH_S4105 - CHAPTER_CH_NEW] = {
        FID_ch17_23_Lysithea_F_ELECTION01, // 1: PID_総選挙リシテア
        FID_ch17_03_Dimitri_M_ELECTION01, // 2: PID_総選挙ディミトリ
        FID_ch17_04_Claude_M_ELECTION01, // 3: PID_総選挙クロード
        FID_ch17_02_Edelgardr_F_ELECTION01, // 4: PID_総選挙エーデル
    },
    [CHAPTER_CH_S4111 - CHAPTER_CH_NEW] = {
        FID_ch09_14_Erase_F_Normal, // 1: PID_イレース
    },
    [CHAPTER_CH_S4112 - CHAPTER_CH_NEW] = {
        FID_ch09_18_Chinon_M_Normal, // 1: PID_シノン
        FID_ch09_17_Jill_F_Normal, // 2: PID_ジル
    },
    [CHAPTER_CH_S4113 - CHAPTER_CH_NEW] = {
        FID_ch09_18_Chinon_M_Normal, // 1: PID_シノン
        FID_ch09_20_Gatrie_M_Normal, // 2: PID_ガトリー
    },
    [CHAPTER_CH_S4114 - CHAPTER_CH_NEW] = {
        FID_ch09_19_Prague_F_Normal, // 1: PID_プラハ
    },
    [CHAPTER_CH_S4115 - CHAPTER_CH_NEW] = {
        FID_ch09_18_Chinon_M_Normal, // 1: PID_シノン
        FID_ch09_20_Gatrie_M_Normal, // 2: PID_ガトリー
        FID_ch09_17_Jill_F_Normal, // 3: PID_ジル
    },
    [CHAPTER_CH_S4121 - CHAPTER_CH_NEW] = {
        FID_ch17_33_Catherine_F_Normal, // 1: PID_カトリーヌ
    },
    [CHAPTER_CH_S4122 - CHAPTER_CH_NEW] = {
        FID_ch17_28_Flayn_F_Normal, // 1: PID_フレン
    },
    [CHAPTER_CH_S4123 - CHAPTER_CH_NEW] = {
        FID_ch17_27_Seteth_M_Normal, // 1: PID_セテス
        FID_ch17_28_Flayn_F_Normal, // 2: PID_フレン
    },
    [CHAPTER_CH_S4124 - CHAPTER_CH_NEW] = {
        FID_ch17_33_Catherine_F_Normal, // 1: PID_カトリーヌ
        FID_ch17_34_Shamir_F_Normal, // 2: PID_シャミア
    },
    [CHAPTER_CH_S4125 - CHAPTER_CH_NEW] = {
        FID_ch17_33_Catherine_F_Normal, // 1: PID_カトリーヌ
        FID_ch17_34_Shamir_F_Normal, // 2: PID_シャミア
        FID_ch17_27_Seteth_M_Normal, // 3: PID_セテス
        FID_ch17_28_Flayn_F_Normal, // 4: PID_フレン
    },
    [CHAPTER_CH_S4131 - CHAPTER_CH_NEW] = {
        FID_ch02_31_Gayle_M_Normal, // 1: PID_ゲイル
    },
    [CHAPTER_CH_S4132 - CHAPTER_CH_NEW] = {
        FID_ch02_29_Deak_M_Normal, // 1: PID_ディーク
        FID_ch02_30_Marinas_M_Normal, // 2: PID_マリナス
    },
    [CHAPTER_CH_S4133 - CHAPTER_CH_NEW] = {
        FID_ch02_27_Guinevere_F_Normal, // 1: PID_ギネヴィア
        FID_ch02_28_Milady_F_Normal, // 2: PID_ミレディ
    },
    [CHAPTER_CH_S4134 - CHAPTER_CH_NEW] = {
        FID_ch02_29_Deak_M_Normal, // 1: PID_ディーク
        FID_ch02_27_Guinevere_F_Normal, // 2: PID_ギネヴィア
        FID_ch02_28_Milady_F_Normal, // 3: PID_ミレディ
        FID_ch02_30_Marinas_M_Normal, // 4: PID_マリナス
        FID_ch02_31_Gayle_M_Normal, // 5: PID_ゲイル
    },
    [CHAPTER_CH_S5021 - CHAPTER_CH_NEW] = {
        FID_ch08_22_Natasha_F_Normal, // 1: PID_ナターシャ
        FID_ch08_20_Nord_M_Normal, // 2: PID_ノール
    },
    [CHAPTER_CH_S5022 - CHAPTER_CH_NEW] = {
        FID_ch08_23_Kethelda_M_Normal, // 1: PID_ケセルダ
    },
    [CHAPTER_CH_S5023 - CHAPTER_CH_NEW] = {
        FID_ch08_19_Celina_F_Normal, // 1: PID_セライナ
    },
    [CHAPTER_CH_S5024 - CHAPTER_CH_NEW] = {
        FID_ch08_21_Dussel_M_Normal, // 1: PID_デュッセル
    },
    [CHAPTER_CH_S5025 - CHAPTER_CH_NEW] = {
        FID_ch08_23_Kethelda_M_Normal, // 1: PID_ケセルダ
        FID_ch08_21_Dussel_M_Normal, // 2: PID_デュッセル
        FID_ch08_19_Celina_F_Normal, // 3: PID_セライナ
    },
    [CHAPTER_CH_S5031 - CHAPTER_CH_NEW] = {
        FID_ch07_13_Ronan_M_Normal, // 1: PID_ロナン
    },
    [CHAPTER_CH_S5032 - CHAPTER_CH_NEW] = {
        FID_ch07_14_Miranda_F_Normal, // 1: PID_ミランダ
    },
    [CHAPTER_CH_S5033 - CHAPTER_CH_NEW] = {
        FID_ch07_11_Sara_F_Normal, // 1: PID_サラ
    },
    [CHAPTER_CH_S5034 - CHAPTER_CH_NEW] = {
        FID_ch07_12_Asbel_M_Normal, // 1: PID_アスベル
    },
    [CHAPTER_CH_S5035 - CHAPTER_CH_NEW] = {
        FID_ch07_14_Miranda_F_Normal, // 1: PID_ミランダ
        FID_ch07_11_Sara_F_Normal, // 2: PID_サラ
        FID_ch07_13_Ronan_M_Normal, // 3: PID_ロナン
        FID_ch07_12_Asbel_M_Normal, // 4: PID_アスベル
    },
    [CHAPTER_CH_S5041 - CHAPTER_CH_NEW] = {
        FID_ch06_28_Azel_M_Normal, // 1: PID_アゼル
    },
    [CHAPTER_CH_S5042 - CHAPTER_CH_NEW] = {
        FID_ch06_26_Magna_F_Normal, // 1: PID_マーニャ
    },
    [CHAPTER_CH_S5043 - CHAPTER_CH_NEW] = {
        FID_ch06_27_Fury_F_Normal, // 1: PID_フュリー
    },
    [CHAPTER_CH_S5044 - CHAPTER_CH_NEW] = {
        FID_ch06_28_Azel_M_Normal, // 1: PID_アゼル
        FID_ch06_29_Rex_M_Normal, // 2: PID_レックス
    },
    [CHAPTER_CH_S5045 - CHAPTER_CH_NEW] = {
        FID_ch06_27_Fury_F_Normal, // 1: PID_フュリー
        FID_ch06_26_Magna_F_Normal, // 2: PID_マーニャ
        FID_ch06_28_Azel_M_Normal, // 3: PID_アゼル
    },
    [CHAPTER_CH_S5051 - CHAPTER_CH_NEW] = {
        FID_ch17_13_Dodue_M_Normal, // 1: PID_ドゥドゥ_
    },
    [CHAPTER_CH_S5052 - CHAPTER_CH_NEW] = {
        FID_ch17_19_Ingrid_F_Normal, // 1: PID_イングリット
    },
    [CHAPTER_CH_S5053 - CHAPTER_CH_NEW] = {
        FID_ch17_08_Linhardt_M_Normal, // 1: PID_リンハルト
    },
    [CHAPTER_CH_S5054 - CHAPTER_CH_NEW] = {
        FID_ch17_24_Marianne_F_Normal, // 1: PID_マリアンヌ
    },
    [CHAPTER_CH_S5055 - CHAPTER_CH_NEW] = {
        FID_ch17_13_Dodue_M_Normal, // 1: PID_ドゥドゥ_
        FID_ch17_24_Marianne_F_Normal, // 2: PID_マリアンヌ
    },
    [CHAPTER_CH_S5061 - CHAPTER_CH_NEW] = {
        FID_ch03_32_Elk_M_Normal, // 1: PID_エルク
    },
    [CHAPTER_CH_S5062 - CHAPTER_CH_NEW] = {
        FID_ch03_30_Farina_F_Normal, // 1: PID_ファリナ
    },
    [CHAPTER_CH_S5063 - CHAPTER_CH_NEW] = {
        FID_ch03_33_Sonja_F_Normal, // 1: PID_ソーニャ
    },
    [CHAPTER_CH_S5064 - CHAPTER_CH_NEW] = {
        FID_ch03_23_Pant_M_Normal, // 1: PID_パント
        FID_ch03_22_Luise_F_Normal, // 2: PID_ルイーズ
        FID_ch03_32_Elk_M_Normal, // 3: PID_エルク
    },
    [CHAPTER_CH_S5065 - CHAPTER_CH_NEW] = {
        FID_ch00_29_Hood_N_Muji, // 1: EID_フード無印
        FID_ch03_23_Pant_M_Normal, // 2: PID_パント
        FID_ch03_30_Farina_F_Normal, // 3: PID_ファリナ
    },
    [CHAPTER_CH_S5071 - CHAPTER_CH_NEW] = {
        FID_ch04_22_Marc_M_Dark04, // 1: PID_闇マーク男
    },
    [CHAPTER_CH_S5072 - CHAPTER_CH_NEW] = {
        FID_ch04_24_Marc_F_Dark04, // 1: PID_闇マーク女
    },
    [CHAPTER_CH_S5073 - CHAPTER_CH_NEW] = {
        FID_ch17_03_Dimitri_M_Dark04, // 1: PID_闇ディミトリ
    },
    [CHAPTER_CH_S5074 - CHAPTER_CH_NEW] = {
        FID_ch17_02_Edelgardr_F_Dark04, // 1: PID_覇骸エーデルガルト
    },
    [CHAPTER_CH_S5075 - CHAPTER_CH_NEW] = {
        FID_ch04_24_Marc_F_Dark04, // 1: PID_闇マーク女
        FID_ch04_22_Marc_M_Dark04, // 2: PID_闇マーク男
        FID_ch17_03_Dimitri_M_Dark04, // 3: PID_闇ディミトリ
        FID_ch17_02_Edelgardr_F_Dark04, // 4: PID_覇骸エーデルガルト
    },
    [CHAPTER_CH_S5081 - CHAPTER_CH_NEW] = {
        FID_ch10_30_Tita_F_Normal, // 1: PID_ティータ
    },
    [CHAPTER_CH_S5082 - CHAPTER_CH_NEW] = {
        FID_ch10_29_Lute_M_Normal, // 1: PID_リュート
    },
    [CHAPTER_CH_S5083 - CHAPTER_CH_NEW] = {
        FID_ch10_30_Tita_F_Normal, // 1: PID_ティータ
        FID_ch10_31_Zeke_M_Normal, // 2: PID_ジーク
    },
    [CHAPTER_CH_S5084 - CHAPTER_CH_NEW] = {
        FID_ch10_28_Paora_F_Normal, // 1: PID_外伝パオラ
    },
    [CHAPTER_CH_S5085 - CHAPTER_CH_NEW] = {
        FID_ch10_28_Paora_F_Normal, // 1: PID_外伝パオラ
        FID_ch10_29_Lute_M_Normal, // 2: PID_リュート
        FID_ch10_30_Tita_F_Normal, // 3: PID_ティータ
        FID_ch10_31_Zeke_M_Normal, // 4: PID_ジーク
    },
    [CHAPTER_CH_S5091 - CHAPTER_CH_NEW] = {
        FID_ch05_56_Benoit_M_Normal, // 1: PID_ブノワ
    },
    [CHAPTER_CH_S5092 - CHAPTER_CH_NEW] = {
        FID_ch05_58_Orochi_F_Normal, // 1: PID_オロチ
        FID_ch05_59_Shenmei_F_Normal, // 2: PID_シェンメイ
    },
    [CHAPTER_CH_S5093 - CHAPTER_CH_NEW] = {
        FID_ch05_57_Nyx_F_Normal, // 1: PID_ニュクス
    },
    [CHAPTER_CH_S5094 - CHAPTER_CH_NEW] = {
        FID_ch05_37_Charlotte_F_Normal, // 1: PID_シャーロッテ
        FID_ch05_57_Nyx_F_Normal, // 2: PID_ニュクス
    },
    [CHAPTER_CH_S5095 - CHAPTER_CH_NEW] = {
        FID_ch05_56_Benoit_M_Normal, // 1: PID_ブノワ
        FID_ch05_58_Orochi_F_Normal, // 2: PID_オロチ
        FID_ch05_59_Shenmei_F_Normal, // 3: PID_シェンメイ
        FID_ch05_37_Charlotte_F_Normal, // 4: PID_シャーロッテ
        FID_ch05_57_Nyx_F_Normal, // 5: PID_ニュクス
    },
    [CHAPTER_CH_S5101 - CHAPTER_CH_NEW] = {
        FID_ch01_00_Marth_M_ELECTION01, // 1: PID_総選挙マルス
    },
    [CHAPTER_CH_S5102 - CHAPTER_CH_NEW] = {
        FID_ch17_24_Marianne_F_ELECTION01, // 1: PID_総選挙マリアンヌ
    },
    [CHAPTER_CH_S5103 - CHAPTER_CH_NEW] = {
        FID_ch08_01_Eirik_F_ELECTION01, // 1: PID_総選挙エイリーク
    },
    [CHAPTER_CH_S5104 - CHAPTER_CH_NEW] = {
        FID_ch17_24_Marianne_F_ELECTION01, // 1: PID_総選挙マリアンヌ
        FID_ch17_66_Gatekeeper_M_ELECTION01, // 2: PID_総選挙門番
    },
    [CHAPTER_CH_S5105 - CHAPTER_CH_NEW] = {
        FID_ch01_00_Marth_M_ELECTION01, // 1: PID_総選挙マルス
        FID_ch17_24_Marianne_F_ELECTION01, // 2: PID_総選挙マリアンヌ
        FID_ch17_66_Gatekeeper_M_ELECTION01, // 3: PID_総選挙門番
        FID_ch08_01_Eirik_F_ELECTION01, // 4: PID_総選挙エイリーク
    },
    [CHAPTER_CH_S5111 - CHAPTER_CH_NEW] = {
        FID_ch00_32_Fafnir2_M_Normal, // 1: EID_ファフニール2
        FID_ch17_61_Balthazar_M_Normal, // 2: PID_バルタザール
    },
    [CHAPTER_CH_S5112 - CHAPTER_CH_NEW] = {
        FID_ch17_63_Hapi_F_Normal, // 1: PID_ハピ
    },
    [CHAPTER_CH_S5113 - CHAPTER_CH_NEW] = {
        FID_ch17_62_Constanze_F_Normal, // 1: PID_コンスタンツェ
        FID_ch17_63_Hapi_F_Normal, // 2: PID_ハピ
    },
    [CHAPTER_CH_S5114 - CHAPTER_CH_NEW] = {
        FID_ch17_60_Euris_M_Normal, // 1: PID_ユーリス
        FID_ch17_61_Balthazar_M_Normal, // 2: PID_バルタザール
    },
    [CHAPTER_CH_S5115 - CHAPTER_CH_NEW] = {
        FID_ch17_60_Euris_M_Normal, // 1: PID_ユーリス
        FID_ch17_63_Hapi_F_Normal, // 2: PID_ハピ
        FID_ch17_61_Balthazar_M_Normal, // 3: PID_バルタザール
        FID_ch17_62_Constanze_F_Normal, // 4: PID_コンスタンツェ
    },
    [CHAPTER_CH_S5121 - CHAPTER_CH_NEW] = {
        FID_ch01_47_Maris_F_Normal, // 1: PID_マリス
    },
    [CHAPTER_CH_S5122 - CHAPTER_CH_NEW] = {
        FID_ch00_32_Fafnir2_M_Normal, // 1: EID_ファフニール2
        FID_ch01_48_Virac_M_Normal, // 2: PID_ビラク
        FID_ch01_46_Roche_M_Normal, // 3: PID_ロシェ
    },
    [CHAPTER_CH_S5123 - CHAPTER_CH_NEW] = {
        FID_ch00_32_Fafnir2_M_Normal, // 1: EID_ファフニール2
        FID_ch01_45_Wolf_M_Normal, // 2: PID_ウルフ
        FID_ch01_49_Zagallo_M_Normal, // 3: PID_ザガロ
    },
    [CHAPTER_CH_S5124 - CHAPTER_CH_NEW] = {
        FID_ch01_48_Virac_M_Normal, // 1: PID_ビラク
        FID_ch01_46_Roche_M_Normal, // 2: PID_ロシェ
        FID_ch01_45_Wolf_M_Normal, // 3: PID_ウルフ
        FID_ch01_49_Zagallo_M_Normal, // 4: PID_ザガロ
    },
    [CHAPTER_CH_S5125 - CHAPTER_CH_NEW] = {
        FID_ch00_32_Fafnir2_M_Normal, // 1: EID_ファフニール2
        FID_ch01_48_Virac_M_Normal, // 2: PID_ビラク
        FID_ch01_46_Roche_M_Normal, // 3: PID_ロシェ
        FID_ch01_47_Maris_F_Normal, // 4: PID_マリス
        FID_ch01_45_Wolf_M_Normal, // 5: PID_ウルフ
        FID_ch01_49_Zagallo_M_Normal, // 6: PID_ザガロ
    },
    [CHAPTER_CH_S5131 - CHAPTER_CH_NEW] = {
        FID_ch09_28_Beufores_M_Normal, // 1: PID_ベウフォレス
    },
    [CHAPTER_CH_S5132 - CHAPTER_CH_NEW] = {
        FID_ch09_12_Tanis_F_Normal, // 1: PID_タニス
    },
    [CHAPTER_CH_S5133 - CHAPTER_CH_NEW] = {
        FID_ch09_26_Stella_F_Normal, // 1: PID_ステラ
    },
    [CHAPTER_CH_S5134 - CHAPTER_CH_NEW] = {
        FID_ch09_24_Volka_M_Normal, // 1: PID_フォルカ
        FID_ch00_29_Hood_N_Muji, // 2: EID_フード無印
    },
    [CHAPTER_CH_S5135 - CHAPTER_CH_NEW] = {
        FID_ch09_26_Stella_F_Normal, // 1: PID_ステラ
        FID_ch09_24_Volka_M_Normal, // 2: PID_フォルカ
        FID_ch09_12_Tanis_F_Normal, // 3: PID_タニス
        FID_ch09_25_Masha_F_Normal, // 4: PID_マーシャ
    },
    [CHAPTER_CH_S6021 - CHAPTER_CH_NEW] = {
        FID_ch04_46_Flavia_F_Normal, // 1: PID_フラヴィア
    },
    [CHAPTER_CH_S6022 - CHAPTER_CH_NEW] = {
        FID_ch04_44_Miriel_F_Normal, // 1: PID_ミリエル
    },
    [CHAPTER_CH_S6023 - CHAPTER_CH_NEW] = {
        FID_ch04_45_Paris_M_Normal, // 1: PID_パリス
    },
    [CHAPTER_CH_S6024 - CHAPTER_CH_NEW] = {
        FID_ch04_46_Flavia_F_Normal, // 1: PID_フラヴィア
        FID_ch04_47_Basiglio_M_Normal, // 2: PID_バジーリオ
    },
    [CHAPTER_CH_S6025 - CHAPTER_CH_NEW] = {
        FID_ch04_45_Paris_M_Normal, // 1: PID_パリス
        FID_ch04_44_Miriel_F_Normal, // 2: PID_ミリエル
        FID_ch04_47_Basiglio_M_Normal, // 3: PID_バジーリオ
    },
    [CHAPTER_CH_S6031 - CHAPTER_CH_NEW] = {
        FID_ch00_04_Veronica_F_Enemy, // 1: EID_ヴェロニカ洗脳
        FID_ch08_28_Coma_M_Normal, // 2: PID_コーマ
    },
    [CHAPTER_CH_S6032 - CHAPTER_CH_NEW] = {
        FID_ch08_27_Renac_M_Normal, // 1: PID_レナック
    },
    [CHAPTER_CH_S6033 - CHAPTER_CH_NEW] = {
        FID_ch08_28_Coma_M_Normal, // 1: PID_コーマ
        FID_ch08_29_Namy_F_Normal, // 2: PID_ネイミー
    },
    [CHAPTER_CH_S6034 - CHAPTER_CH_NEW] = {
        FID_ch08_07_Jhosua_M_Bloom01, // 1: PID_開花ヨシュア
    },
    [CHAPTER_CH_S6035 - CHAPTER_CH_NEW] = {
        FID_ch00_04_Veronica_F_Enemy, // 1: EID_ヴェロニカ洗脳
        FID_ch08_07_Jhosua_M_Bloom01, // 2: PID_開花ヨシュア
        FID_ch08_30_Abh_M_Normal, // 3: PID_アーヴ
        FID_ch08_28_Coma_M_Normal, // 4: PID_コーマ
        FID_ch08_27_Renac_M_Normal, // 5: PID_レナック
        FID_ch08_29_Namy_F_Normal, // 6: PID_ネイミー
    },
    [CHAPTER_CH_S6041 - CHAPTER_CH_NEW] = {
        FID_ch02_38_Gonzales_M_Normal, // 1: PID_ゴンザレス
    },
    [CHAPTER_CH_S6042 - CHAPTER_CH_NEW] = {
        FID_ch02_35_Hugh_M_Normal, // 1: PID_ヒュウ
        FID_ch02_36_Nimue_F_Normal, // 2: PID_ニイメ
    },
    [CHAPTER_CH_S6043 - CHAPTER_CH_NEW] = {
        FID_ch02_37_Cath_F_Normal, // 1: PID_キャス
    },
    [CHAPTER_CH_S6044 - CHAPTER_CH_NEW] = {
        FID_ch02_14_Idenn_F_Bloom01, // 1: PID_開花イドゥン
    },
    [CHAPTER_CH_S6045 - CHAPTER_CH_NEW] = {
        FID_ch02_14_Idenn_F_Bloom01, // 1: PID_開花イドゥン
        FID_ch02_35_Hugh_M_Normal, // 2: PID_ヒュウ
        FID_ch02_36_Nimue_F_Normal, // 3: PID_ニイメ
    },
    [CHAPTER_CH_S6051 - CHAPTER_CH_NEW] = {
        FID_ch07_18_Garzas_M_Normal, // 1: PID_ガルザス
    },
    [CHAPTER_CH_S6052 - CHAPTER_CH_NEW] = {
        FID_ch07_17_August_M_Normal, // 1: PID_アウグスト
        FID_ch07_19_Karin_F_Normal, // 2: PID_カリン
    },
    [CHAPTER_CH_S6053 - CHAPTER_CH_NEW] = {
        FID_ch07_20_Salem_M_Normal, // 1: PID_セイラム
    },
    [CHAPTER_CH_S6054 - CHAPTER_CH_NEW] = {
        FID_ch07_06_Mareeta_F_Bloom01, // 1: PID_開花マリータ
    },
    [CHAPTER_CH_S6055 - CHAPTER_CH_NEW] = {
        FID_ch07_18_Garzas_M_Normal, // 1: PID_ガルザス
        FID_ch07_06_Mareeta_F_Bloom01, // 2: PID_開花マリータ
        FID_ch07_19_Karin_F_Normal, // 3: PID_カリン
    },
    [CHAPTER_CH_S6061 - CHAPTER_CH_NEW] = {
        FID_ch06_34_Scathach_M_Normal, // 1: PID_スカサハ
    },
    [CHAPTER_CH_S6062 - CHAPTER_CH_NEW] = {
        FID_ch06_32_Tiny_F_Normal, // 1: PID_ティニー
    },
    [CHAPTER_CH_S6063 - CHAPTER_CH_NEW] = {
        FID_ch06_33_Arthur_M_Normal, // 1: PID_アーサー
    },
    [CHAPTER_CH_S6064 - CHAPTER_CH_NEW] = {
        FID_ch06_11_Ishtar_F_Bloom01, // 1: PID_開花イシュタル
    },
    [CHAPTER_CH_S6065 - CHAPTER_CH_NEW] = {
        FID_ch06_11_Ishtar_F_Bloom01, // 1: PID_開花イシュタル
        FID_ch06_33_Arthur_M_Normal, // 2: PID_アーサー
        FID_ch06_34_Scathach_M_Normal, // 3: PID_スカサハ
    },
    [CHAPTER_CH_S6071 - CHAPTER_CH_NEW] = {
        FID_ch05_53_Lilith_F_Dark01, // 1: PID_闇リリス
    },
    [CHAPTER_CH_S6072 - CHAPTER_CH_NEW] = {
        FID_ch17_37_Rare_F_Dark01, // 1: PID_暴走レア
        FID_ch05_53_Lilith_F_Dark01, // 2: PID_闇リリス
    },
    [CHAPTER_CH_S6074 - CHAPTER_CH_NEW] = {
        FID_ch17_37_Rare_F_Dark01, // 1: PID_暴走レア
    },
    [CHAPTER_CH_S6075 - CHAPTER_CH_NEW] = {
        FID_ch03_16_Ninian_F_Dark01, // 1: PID_催眠ニニアン
        FID_ch05_53_Lilith_F_Dark01, // 2: PID_闇リリス
    },
    [CHAPTER_CH_S6082 - CHAPTER_CH_NEW] = {
        FID_ch03_35_Kent_M_Normal, // 1: PID_ケント
        FID_ch03_34_Sein_M_Normal, // 2: PID_セイン
    },
    [CHAPTER_CH_S6083 - CHAPTER_CH_NEW] = {
        FID_ch03_36_Guy_M_Normal, // 1: PID_ギィ
    },
    [CHAPTER_CH_S6084 - CHAPTER_CH_NEW] = {
        FID_ch03_08_Flolina_F_Bloom01, // 1: PID_開花フロリーナ
        FID_ch03_36_Guy_M_Normal, // 2: PID_ギィ
    },
    [CHAPTER_CH_S6085 - CHAPTER_CH_NEW] = {
        FID_ch00_41_Letizia_F_Enemy, // 1: EID_レティシア洗脳
        FID_ch03_08_Flolina_F_Bloom01, // 2: PID_開花フロリーナ
        FID_ch03_34_Sein_M_Normal, // 3: PID_セイン
        FID_ch03_35_Kent_M_Normal, // 4: PID_ケント
        FID_ch03_37_Limstella_N_Normal, // 5: PID_リムステラ
    },
    [CHAPTER_CH_S6091 - CHAPTER_CH_NEW] = {
        FID_ch00_05_Bruno_M_Enemy, // 1: EID_ブルーノ洗脳
        FID_ch10_35_Kamui_M_Normal, // 2: PID_外伝カムイ
        FID_ch10_36_Atlus_M_Normal, // 3: PID_アトラス
    },
    [CHAPTER_CH_S6092 - CHAPTER_CH_NEW] = {
        FID_ch10_34_Est_F_Normal, // 1: PID_外伝エスト
    },
    [CHAPTER_CH_S6093 - CHAPTER_CH_NEW] = {
        FID_ch10_08_Cellica_F_Bloom01, // 1: PID_開花セリカ
    },
    [CHAPTER_CH_S6094 - CHAPTER_CH_NEW] = {
        FID_ch10_34_Est_F_Normal, // 1: PID_外伝エスト
        FID_ch10_36_Atlus_M_Normal, // 2: PID_アトラス
    },
    [CHAPTER_CH_S6095 - CHAPTER_CH_NEW] = {
        FID_ch00_04_Veronica_F_Enemy2, // 1: EID_ヴェロニカ洗脳2
        FID_ch10_34_Est_F_Normal, // 2: PID_外伝エスト
        FID_ch10_08_Cellica_F_Bloom01, // 3: PID_開花セリカ
        FID_ch10_35_Kamui_M_Normal, // 4: PID_外伝カムイ
        FID_ch10_36_Atlus_M_Normal, // 5: PID_アトラス
    },
    [CHAPTER_CH_S6101 - CHAPTER_CH_NEW] = {
        FID_ch17_01_Beleth_F_ELECTION022, // 1: PID_総選挙ベレス
    },
    [CHAPTER_CH_S6102 - CHAPTER_CH_NEW] = {
        FID_ch06_00_Celice_M_ELECTION022, // 1: PID_総選挙セリス
    },
    [CHAPTER_CH_S6103 - CHAPTER_CH_NEW] = {
        FID_ch04_00_Chrom_M_ELECTION022, // 1: PID_総選挙クロム
    },
    [CHAPTER_CH_S6104 - CHAPTER_CH_NEW] = {
        FID_ch04_12_Tiki_F_ELECTION022, // 1: PID_総選挙覚醒チキ
    },
    [CHAPTER_CH_S6105 - CHAPTER_CH_NEW] = {
        FID_ch17_01_Beleth_F_ELECTION022, // 1: PID_総選挙ベレス
        FID_ch06_00_Celice_M_ELECTION022, // 2: PID_総選挙セリス
        FID_ch04_00_Chrom_M_ELECTION022, // 3: PID_総選挙クロム
        FID_ch04_12_Tiki_F_ELECTION022, // 4: PID_総選挙覚醒チキ
    },
    [CHAPTER_CH_S6111 - CHAPTER_CH_NEW] = {
        FID_ch17_53_Monica_F_Normal2, // 1: PID_モニカ
    },
    [CHAPTER_CH_S6112 - CHAPTER_CH_NEW] = {
        FID_ch17_25_Hilda_F_Bloom01, // 1: PID_開花ヒルダ
    },
    [CHAPTER_CH_S6113 - CHAPTER_CH_NEW] = {
        FID_ch17_68_Sheds_F_Normal, // 1: PID_シェズ女
    },
    [CHAPTER_CH_S6114 - CHAPTER_CH_NEW] = {
        FID_ch00_05_Bruno_M_PlainEnemy, // 1: EID_ブルーノ素顔
        FID_ch17_25_Hilda_F_Bloom01, // 2: PID_開花ヒルダ
        FID_ch17_69_Holst_M_Normal, // 3: PID_ホルスト
    },
    [CHAPTER_CH_S6115 - CHAPTER_CH_NEW] = {
        FID_ch00_05_Bruno_M_PlainEnemy, // 1: EID_ブルーノ素顔
        FID_ch17_25_Hilda_F_Bloom01, // 2: PID_開花ヒルダ
        FID_ch17_53_Monica_F_Normal2, // 3: PID_モニカ
        FID_ch17_68_Sheds_F_Normal, // 4: PID_シェズ女
        FID_ch17_67_Sheds_M_Normal, // 5: PID_シェズ男
    },
    [CHAPTER_CH_S6121 - CHAPTER_CH_NEW] = {
        FID_ch04_51_Philein_F_Normal, // 1: PID_フィレイン
    },
    [CHAPTER_CH_S6122 - CHAPTER_CH_NEW] = {
        FID_ch04_52_Cervantes_M_Normal, // 1: PID_セルバンテス
    },
    [CHAPTER_CH_S6123 - CHAPTER_CH_NEW] = {
        FID_ch04_50_Grego_M_Normal, // 1: PID_グレゴ
        FID_ch04_49_Richt_M_Normal, // 2: PID_リヒト
    },
    [CHAPTER_CH_S6124 - CHAPTER_CH_NEW] = {
        FID_ch04_08_Reflet_F_Weapon01, // 1: PID_魔器ルフレ女
    },
    [CHAPTER_CH_S6125 - CHAPTER_CH_NEW] = {
        FID_ch00_04_Veronica2_F_Normal, // 1: EID_ヴェロニカ2
        FID_ch04_08_Reflet_F_Weapon01, // 2: PID_魔器ルフレ女
        FID_ch04_50_Grego_M_Normal, // 3: PID_グレゴ
        FID_ch04_49_Richt_M_Normal, // 4: PID_リヒト
        FID_ch04_51_Philein_F_Normal, // 5: PID_フィレイン
    },
    [CHAPTER_CH_S6131 - CHAPTER_CH_NEW] = {
        FID_ch01_52_Nina_F_Normal, // 1: PID_ニーナ
    },
    [CHAPTER_CH_S6132 - CHAPTER_CH_NEW] = {
        FID_ch01_29_Hardin_M_Normal, // 1: PID_ハーディン
    },
    [CHAPTER_CH_S6133 - CHAPTER_CH_NEW] = {
        FID_ch01_53_Ellis_F_Normal, // 1: PID_エリス
        FID_ch01_54_Matisse_M_Normal, // 2: PID_マチス
    },
    [CHAPTER_CH_S6134 - CHAPTER_CH_NEW] = {
        FID_ch01_10_Tiki_F_Bloom01, // 1: PID_開花チキ
        FID_ch01_53_Ellis_F_Normal, // 2: PID_エリス
    },
    [CHAPTER_CH_S6135 - CHAPTER_CH_NEW] = {
        FID_ch01_10_Tiki_F_Bloom01, // 1: PID_開花チキ
        FID_ch01_29_Hardin_M_Normal, // 2: PID_ハーディン
    },
    [CHAPTER_CH_S7011 - CHAPTER_CH_NEW] = {
        FID_ch05_63_Guns_M_Normal, // 1: PID_ガンズ
    },
    [CHAPTER_CH_S7012 - CHAPTER_CH_NEW] = {
        FID_ch05_62_Kisaragi_M_Normal, // 1: PID_キサラギ
        FID_ch05_60_Deere_M_Normal, // 2: PID_ディーア
    },
    [CHAPTER_CH_S7013 - CHAPTER_CH_NEW] = {
        FID_ch05_61_Matoi_F_Normal, // 1: PID_マトイ
        FID_ch05_62_Kisaragi_M_Normal, // 2: PID_キサラギ
    },
    [CHAPTER_CH_S7014 - CHAPTER_CH_NEW] = {
        FID_ch05_44_Ophelia_F_Weapon01, // 1: PID_魔器オフェリア
        FID_ch05_60_Deere_M_Normal, // 2: PID_ディーア
    },
    [CHAPTER_CH_S7015 - CHAPTER_CH_NEW] = {
        FID_ch05_44_Ophelia_F_Weapon01, // 1: PID_魔器オフェリア
        FID_ch05_63_Guns_M_Normal, // 2: PID_ガンズ
        FID_ch05_61_Matoi_F_Normal, // 3: PID_マトイ
    },
    [CHAPTER_CH_S7031 - CHAPTER_CH_NEW] = {
        FID_ch19_08_Celine_F_Normal, // 1: PID_セリーヌ
    },
    [CHAPTER_CH_S7032 - CHAPTER_CH_NEW] = {
        FID_ch19_10_Chloe_F_Normal, // 1: PID_クロエ
    },
    [CHAPTER_CH_S7033 - CHAPTER_CH_NEW] = {
        FID_ch19_01_Lueue_F_Normal, // 1: PID_リュール女
    },
    [CHAPTER_CH_S7034 - CHAPTER_CH_NEW] = {
        FID_ch19_07_Etie_F_Normal, // 1: PID_エーティエ
        FID_ch19_05_Alfred_M_Weapon01, // 2: PID_魔器アルフレッド
    },
    [CHAPTER_CH_S7035 - CHAPTER_CH_NEW] = {
        FID_ch19_08_Celine_F_Normal, // 1: PID_セリーヌ
        FID_ch19_10_Chloe_F_Normal, // 2: PID_クロエ
        FID_ch19_01_Lueue_F_Normal, // 3: PID_リュール女
        FID_ch19_05_Alfred_M_Weapon01, // 4: PID_魔器アルフレッド
    },
    [CHAPTER_CH_S7041 - CHAPTER_CH_NEW] = {
        FID_ch11_31_Ulysses_M_Normal, // 1: PID_ユリシーズ
    },
    [CHAPTER_CH_S7042 - CHAPTER_CH_NEW] = {
        FID_ch11_30_Lucino_F_Normal, // 1: PID_ルキノ
        FID_ch11_31_Ulysses_M_Normal, // 2: PID_ユリシーズ
    },
    [CHAPTER_CH_S7043 - CHAPTER_CH_NEW] = {
        FID_ch11_29_Jofre_M_Normal, // 1: PID_ジョフレ
    },
    [CHAPTER_CH_S7044 - CHAPTER_CH_NEW] = {
        FID_ch11_28_Erincia_F_Bloom01, // 1: PID_開花エリンシア
        FID_ch11_29_Jofre_M_Normal, // 2: PID_ジョフレ
    },
    [CHAPTER_CH_S7045 - CHAPTER_CH_NEW] = {
        FID_ch11_28_Erincia_F_Bloom01, // 1: PID_開花エリンシア
        FID_ch11_30_Lucino_F_Normal, // 2: PID_ルキノ
        FID_ch11_31_Ulysses_M_Normal, // 3: PID_ユリシーズ
    },
    [CHAPTER_CH_S7051 - CHAPTER_CH_NEW] = {
        FID_ch08_33_Vanessa_Normal, // 1: PID_ヴァネッサ
    },
    [CHAPTER_CH_S7052 - CHAPTER_CH_NEW] = {
        FID_ch08_33_Vanessa_Normal, // 1: PID_ヴァネッサ
        FID_ch08_34_Sirene_Normal, // 2: PID_シレーネ
    },
    [CHAPTER_CH_S7053 - CHAPTER_CH_NEW] = {
        FID_ch08_32_Gilliam_Normal, // 1: PID_ギリアム
        FID_ch08_34_Sirene_Normal, // 2: PID_シレーネ
    },
    [CHAPTER_CH_S7054 - CHAPTER_CH_NEW] = {
        FID_ch08_32_Gilliam_Normal, // 1: PID_ギリアム
        FID_ch08_05_Turner_M_Weapon01, // 2: PID_魔器ターナ
    },
    [CHAPTER_CH_S7055 - CHAPTER_CH_NEW] = {
        FID_ch08_32_Gilliam_Normal, // 1: PID_ギリアム
        FID_ch08_34_Sirene_Normal, // 2: PID_シレーネ
        FID_ch08_33_Vanessa_Normal, // 3: PID_ヴァネッサ
        FID_ch08_05_Turner_M_Weapon01, // 4: PID_魔器ターナ
    },
    [CHAPTER_CH_S7061 - CHAPTER_CH_NEW] = {
        FID_ch17_14_Felix_M_Normal, // 1: PID_フェリクス
    },
    [CHAPTER_CH_S7062 - CHAPTER_CH_NEW] = {
        FID_ch17_14_Felix_M_Normal, // 1: PID_フェリクス
        FID_ch17_16_Sylvain_M_Normal, // 2: PID_シルヴァン
    },
    [CHAPTER_CH_S7063 - CHAPTER_CH_NEW] = {
        FID_ch17_19_Ingrid_F_Weapon01, // 1: PID_魔器イングリット
    },
    [CHAPTER_CH_S7064 - CHAPTER_CH_NEW] = {
        FID_ch17_37_Rare_F_Normal, // 1: PID_レア
    },
    [CHAPTER_CH_S7065 - CHAPTER_CH_NEW] = {
        FID_ch17_19_Ingrid_F_Weapon01, // 1: PID_魔器イングリット
        FID_ch17_14_Felix_M_Normal, // 2: PID_フェリクス
        FID_ch17_16_Sylvain_M_Normal, // 3: PID_シルヴァン
        FID_ch17_37_Rare_F_Normal, // 4: PID_レア
    },
    [CHAPTER_CH_S7071 - CHAPTER_CH_NEW] = {
        FID_ch03_21_Linus_M_Dark23, // 1: PID_闇ライナス
    },
    [CHAPTER_CH_S7072 - CHAPTER_CH_NEW] = {
        FID_ch01_08_Maria_F_Dark23, // 1: PID_闇マリア
    },
    [CHAPTER_CH_S7073 - CHAPTER_CH_NEW] = {
        FID_ch05_64_Hydra_M_Dark23, // 1: PID_闇ハイドラ
    },
    [CHAPTER_CH_S7074 - CHAPTER_CH_NEW] = {
        FID_ch17_01_Beleth_F_Dark23, // 1: PID_闇ベレス
    },
    [CHAPTER_CH_S7075 - CHAPTER_CH_NEW] = {
        FID_ch04_00_Chrom_M_Dark23Weapon01, // 1: PID_魔器闇クロム
        FID_ch17_01_Beleth_F_Dark23, // 2: PID_闇ベレス
        FID_ch01_08_Maria_F_Dark23, // 3: PID_闇マリア
        FID_ch05_64_Hydra_M_Dark23, // 4: PID_闇ハイドラ
    },
    [CHAPTER_CH_S7081 - CHAPTER_CH_NEW] = {
        FID_ch02_42_Noah_M_Normal, // 1: PID_ノア
    },
    [CHAPTER_CH_S7082 - CHAPTER_CH_NEW] = {
        FID_ch02_41_Dorothy_F_Normal, // 1: PID_ドロシー
    },
    [CHAPTER_CH_S7083 - CHAPTER_CH_NEW] = {
        FID_ch02_41_Dorothy_F_Normal, // 1: PID_ドロシー
        FID_ch02_33_Saul_M_Normal, // 2: PID_サウル
    },
    [CHAPTER_CH_S7084 - CHAPTER_CH_NEW] = {
        FID_ch02_42_Noah_M_Normal, // 1: PID_ノア
        FID_ch02_01_Fir_F_Bloom01, // 2: PID_開花フィル
    },
    [CHAPTER_CH_S7085 - CHAPTER_CH_NEW] = {
        FID_ch02_43_Murdoch_M_Normal, // 1: PID_マードック
        FID_ch02_33_Saul_M_Normal, // 2: PID_サウル
        FID_ch02_42_Noah_M_Normal, // 3: PID_ノア
        FID_ch02_01_Fir_F_Bloom01, // 4: PID_開花フィル
    },
    [CHAPTER_CH_S7091 - CHAPTER_CH_NEW] = {
        FID_ch00_49_Heith_F_Enemy00, // 1: EID_ヘイズ敵0
        FID_ch19_00_Lueue_M_Normal, // 2: PID_リュール男
    },
    [CHAPTER_CH_S7092 - CHAPTER_CH_NEW] = {
        FID_ch19_11_Diamand_M_Normal, // 1: PID_ディアマンド
    },
    [CHAPTER_CH_S7093 - CHAPTER_CH_NEW] = {
        FID_ch19_15_Lapis_F_Normal, // 1: PID_ラピス
        FID_ch19_16_Citrinica_F_Normal, // 2: PID_シトリニカ
    },
    [CHAPTER_CH_S7094 - CHAPTER_CH_NEW] = {
        FID_ch19_14_Staluke_M_Weapon01, // 1: PID_魔器スタルーク
        FID_ch19_11_Diamand_M_Normal, // 2: PID_ディアマンド
        FID_ch19_16_Citrinica_F_Normal, // 3: PID_シトリニカ
    },
    [CHAPTER_CH_S7095 - CHAPTER_CH_NEW] = {
        FID_ch00_49_Heith_F_Enemy01, // 1: EID_ヘイズ敵
        FID_ch19_14_Staluke_M_Weapon01, // 2: PID_魔器スタルーク
        FID_ch19_00_Lueue_M_Normal, // 3: PID_リュール男
        FID_ch19_16_Citrinica_F_Normal, // 4: PID_シトリニカ
    },
    [CHAPTER_CH_S7101 - CHAPTER_CH_NEW] = {
        FID_ch09_02_Senerio_M_ELECTION023, // 1: PID_総選挙セネリオ
    },
    [CHAPTER_CH_S7102 - CHAPTER_CH_NEW] = {
        FID_ch04_07_Reflet_M_ELECTION023, // 1: PID_総選挙ルフレ男
    },
    [CHAPTER_CH_S7103 - CHAPTER_CH_NEW] = {
        FID_ch05_19_Kamui_F_ELECTION023, // 1: PID_総選挙カムイ女
    },
    [CHAPTER_CH_S7104 - CHAPTER_CH_NEW] = {
        FID_ch00_47_Gullveig_F_ELECTION023, // 1: PID_総選挙グルヴェイグ
    },
    [CHAPTER_CH_S7105 - CHAPTER_CH_NEW] = {
        FID_ch00_47_Gullveig_F_ELECTION023, // 1: PID_総選挙グルヴェイグ
        FID_ch05_19_Kamui_F_ELECTION023, // 2: PID_総選挙カムイ女
        FID_ch04_07_Reflet_M_ELECTION023, // 3: PID_総選挙ルフレ男
        FID_ch09_02_Senerio_M_ELECTION023, // 4: PID_総選挙セネリオ
        FID_ch17_35_Cyril_M_Normal, // 5: PID_ツィリル
    },
    [CHAPTER_CH_S7111 - CHAPTER_CH_NEW] = {
        FID_ch06_36_Fee_F_Normal, // 1: PID_フィー
    },
    [CHAPTER_CH_S7112 - CHAPTER_CH_NEW] = {
        FID_ch06_37_Patty_F_Normal, // 1: PID_パティ
        FID_ch06_38_Fabal_M_Normal, // 2: PID_ファバル
    },
    [CHAPTER_CH_S7113 - CHAPTER_CH_NEW] = {
        FID_ch06_39_Arione_M_Normal, // 1: PID_アリオーン
    },
    [CHAPTER_CH_S7114 - CHAPTER_CH_NEW] = {
        FID_ch06_22_Seti_M_Bloom01, // 1: PID_開花セティ
    },
    [CHAPTER_CH_S7115 - CHAPTER_CH_NEW] = {
        FID_ch06_22_Seti_M_Bloom01, // 1: PID_開花セティ
        FID_ch06_39_Arione_M_Normal, // 2: PID_アリオーン
        FID_ch06_38_Fabal_M_Normal, // 3: PID_ファバル
    },
};
