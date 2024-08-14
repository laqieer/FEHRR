
#include "prelude.h"
#include "constants/chapters.h"
#include "chapterNew.h"
#include "chapters.h"
#include "texts.h"

const u16 ChapterEnemyHeroNames[][14] = {
    [CHAPTER_CH_S0102 - CHAPTER_CH_NEW] = {
        MPID_ミネルバ, MPID_H_ミネルバ, // 1
        MPID_パオラ, MPID_H_パオラ, // 2
        MPID_カチュア, MPID_H_カチュア, // 3
        MPID_マリア, MPID_H_マリア, // 4
    },
    [CHAPTER_CH_S0201 - CHAPTER_CH_NEW] = {
        MPID_マルス, MPID_H_マルス, // 1
        MPID_ジェイガン, MPID_H_ジェイガン, // 2
        MPID_シーダ, MPID_H_シーダ, // 3
    },
    [CHAPTER_CH_S0202 - CHAPTER_CH_NEW] = {
        MPID_オグマ, MPID_H_オグマ, // 1
    },
    [CHAPTER_CH_S0203 - CHAPTER_CH_NEW] = {
        MPID_リンダ, MPID_H_リンダ, // 1
        MPID_マリク, MPID_H_マリク, // 2
    },
    [CHAPTER_CH_S0204 - CHAPTER_CH_NEW] = {
        MPID_カイン, MPID_H_カイン, // 1
        MPID_アベル, MPID_H_アベル, // 2
        MPID_ゴードン, MPID_H_ゴードン, // 3
    },
    [CHAPTER_CH_S0205 - CHAPTER_CH_NEW] = {
        MPID_ゴードン, MPID_H_ゴードン, // 1
        MPID_マルス, MPID_H_マルス, // 2
        MPID_マリク, MPID_H_マリク, // 3
        MPID_シーダ, MPID_H_シーダ, // 4
    },
    [CHAPTER_CH_S0301 - CHAPTER_CH_NEW] = {
        MPID_カミラ, MPID_H_カミラ, // 1
        MPID_レオン, MPID_H_レオン, // 2
        MPID_エリーゼ, MPID_H_エリーゼ, // 3
    },
    [CHAPTER_CH_S0302 - CHAPTER_CH_NEW] = {
        MPID_エリーゼ, MPID_H_エリーゼ, // 1
        MPID_ハロルド, MPID_H_ハロルド, // 2
        MPID_エルフィ, MPID_H_エルフィ, // 3
    },
    [CHAPTER_CH_S0303 - CHAPTER_CH_NEW] = {
        MPID_レオン, MPID_H_レオン, // 1
        MPID_ゼロ, MPID_H_ゼロ, // 2
        MPID_オーディン, MPID_H_オーディン, // 3
    },
    [CHAPTER_CH_S0304 - CHAPTER_CH_NEW] = {
        MPID_カミラ, MPID_H_カミラ, // 1
        MPID_ベルカ, MPID_H_ベルカ, // 2
        MPID_ルーナ, MPID_H_ルーナ, // 3
    },
    [CHAPTER_CH_S0305 - CHAPTER_CH_NEW] = {
        MPID_ピエリ, MPID_H_ピエリ, // 1
        MPID_ラズワルド, MPID_H_ラズワルド, // 2
    },
    [CHAPTER_CH_S0401 - CHAPTER_CH_NEW] = {
        MPID_ロイ, MPID_H_ロイ, // 1
    },
    [CHAPTER_CH_S0402 - CHAPTER_CH_NEW] = {
        MPID_クラリーネ, MPID_H_クラリーネ, // 1
        MPID_セシリア, MPID_H_セシリア, // 2
    },
    [CHAPTER_CH_S0403 - CHAPTER_CH_NEW] = {
        MPID_ファ, MPID_H_ファ, // 1
        MPID_ソフィーヤ, MPID_H_ソフィーヤ, // 2
        MPID_レイ, MPID_H_レイ, // 3
    },
    [CHAPTER_CH_S0404 - CHAPTER_CH_NEW] = {
        MPID_フィル, MPID_H_フィル, // 1
        MPID_バアトル, MPID_H_バアトル, // 2
        MPID_シャニー, MPID_H_シャニー, // 3
    },
    [CHAPTER_CH_S0405 - CHAPTER_CH_NEW] = {
        MPID_ロイ, MPID_H_ロイ, // 1
        MPID_リリーナ, MPID_H_リリーナ, // 2
        MPID_ウェンディ, MPID_H_ウェンディ, // 3
    },
    [CHAPTER_CH_S0501 - CHAPTER_CH_NEW] = {
        MPID_クロム, MPID_H_クロム, // 1
        MPID_フレデリク, MPID_H_フレデリク, // 2
        MPID_リズ, MPID_H_リズ, // 3
    },
    [CHAPTER_CH_S0502 - CHAPTER_CH_NEW] = {
        MPID_ロンクー, MPID_H_ロンクー, // 1
        MPID_オリヴィエ, MPID_H_オリヴィエ, // 2
    },
    [CHAPTER_CH_S0503 - CHAPTER_CH_NEW] = {
        MPID_ティアモ, MPID_H_ティアモ, // 1
    },
    [CHAPTER_CH_S0504 - CHAPTER_CH_NEW] = {
        MPID_ルフレ女, MPID_H_ルフレ女, // 1
        MPID_ドニ, MPID_H_ドニ, // 2
    },
    [CHAPTER_CH_S0505 - CHAPTER_CH_NEW] = {
        MPID_クロム, MPID_H_クロム, // 1
        MPID_ルフレ女, MPID_H_ルフレ女, // 2
        MPID_ソール, MPID_H_ソール, // 3
        MPID_ソワレ, MPID_H_ソワレ, // 4
    },
    [CHAPTER_CH_S0601 - CHAPTER_CH_NEW] = {
        MPID_ナバール, MPID_H_ナバール, // 1
        MPID_リフ, MPID_H_リフ, // 2
    },
    [CHAPTER_CH_S0602 - CHAPTER_CH_NEW] = {
        MPID_マリア, MPID_H_マリア, // 1
        MPID_ミネルバ, MPID_H_ミネルバ, // 2
    },
    [CHAPTER_CH_S0603 - CHAPTER_CH_NEW] = {
        MPID_ジョルジュ, MPID_H_ジョルジュ, // 1
        MPID_バーツ, MPID_H_バーツ, // 2
    },
    [CHAPTER_CH_S0604 - CHAPTER_CH_NEW] = {
        MPID_カチュア, MPID_H_カチュア, // 1
        MPID_パオラ, MPID_H_パオラ, // 2
        MPID_エスト, MPID_H_エスト, // 3
    },
    [CHAPTER_CH_S0605 - CHAPTER_CH_NEW] = {
        MPID_チキ, MPID_H_チキ, // 1
        MPID_ミネルバ, MPID_H_ミネルバ, // 2
    },
    [CHAPTER_CH_S0701 - CHAPTER_CH_NEW] = {
        MPID_リョウマ, MPID_H_リョウマ, // 1
        MPID_タクミ, MPID_H_タクミ, // 2
        MPID_サクラ, MPID_H_サクラ, // 3
        MPID_ヒノカ, MPID_H_ヒノカ, // 4
    },
    [CHAPTER_CH_S0702 - CHAPTER_CH_NEW] = {
        MPID_タクミ, MPID_H_タクミ, // 1
        MPID_オボロ, MPID_H_オボロ, // 2
        MPID_ヒナタ, MPID_H_ヒナタ, // 3
        MPID_サイゾウ, MPID_H_サイゾウ, // 4
    },
    [CHAPTER_CH_S0703 - CHAPTER_CH_NEW] = {
        MPID_ヒノカ, MPID_H_ヒノカ, // 1
        MPID_アサマ, MPID_H_アサマ, // 2
        MPID_セツナ, MPID_H_セツナ, // 3
        MPID_ツバキ, MPID_H_ツバキ, // 4
    },
    [CHAPTER_CH_S0704 - CHAPTER_CH_NEW] = {
        MPID_サクラ, MPID_H_サクラ, // 1
        MPID_カザハナ, MPID_H_カザハナ, // 2
        MPID_ツバキ, MPID_H_ツバキ, // 3
        MPID_カゲロウ, MPID_H_カゲロウ, // 4
    },
    [CHAPTER_CH_S0705 - CHAPTER_CH_NEW] = {
        MPID_リョウマ, MPID_H_リョウマ, // 1
        MPID_サイゾウ, MPID_H_サイゾウ, // 2
        MPID_カゲロウ, MPID_H_カゲロウ, // 3
        MPID_オボロ, MPID_H_オボロ, // 4
        MPID_ヒナタ, MPID_H_ヒナタ, // 5
    },
    [CHAPTER_CH_S0801 - CHAPTER_CH_NEW] = {
        MPID_マシュー, MPID_H_マシュー, // 1
        MPID_セーラ, MPID_H_セーラ, // 2
    },
    [CHAPTER_CH_S0802 - CHAPTER_CH_NEW] = {
        MPID_エリウッド, MPID_H_エリウッド, // 1
        MPID_ヘクトル, MPID_H_ヘクトル, // 2
    },
    [CHAPTER_CH_S0803 - CHAPTER_CH_NEW] = {
        MPID_レイヴァン, MPID_H_レイヴァン, // 1
        MPID_ニノ, MPID_H_ニノ, // 2
    },
    [CHAPTER_CH_S0804 - CHAPTER_CH_NEW] = {
        MPID_ホークアイ, MPID_H_ホークアイ, // 1
        MPID_リン, MPID_H_リン, // 2
        MPID_フロリーナ, MPID_H_フロリーナ, // 3
    },
    [CHAPTER_CH_S0805 - CHAPTER_CH_NEW] = {
        MPID_エリウッド, MPID_H_エリウッド, // 1
        MPID_ヘクトル, MPID_H_ヘクトル, // 2
        MPID_リン, MPID_H_リン, // 3
    },
    [CHAPTER_CH_S0901 - CHAPTER_CH_NEW] = {
        MPID_ルフレ男, MPID_H_ルフレ男, // 1
        MPID_サーリャ, MPID_H_サーリャ, // 2
    },
    [CHAPTER_CH_S0902 - CHAPTER_CH_NEW] = {
        MPID_ノノ, MPID_H_ノノ, // 1
        MPID_ヘンリー, MPID_H_ヘンリー, // 2
    },
    [CHAPTER_CH_S0903 - CHAPTER_CH_NEW] = {
        MPID_ヴィオール, MPID_H_ヴィオール, // 1
        MPID_セルジュ, MPID_H_セルジュ, // 2
    },
    [CHAPTER_CH_S0904 - CHAPTER_CH_NEW] = {
        MPID_チキ覚醒, MPID_H_チキ覚醒, // 1
        MPID_ルキナ, MPID_H_ルキナ, // 2
    },
    [CHAPTER_CH_S0905 - CHAPTER_CH_NEW] = {
        MPID_ルフレ男, MPID_H_ルフレ男, // 1
        MPID_ルキナ, MPID_H_ルキナ, // 2
        MPID_ガイア, MPID_H_ガイア, // 3
    },
    [CHAPTER_CH_S1001 - CHAPTER_CH_NEW] = {
        MPID_ミシェイル, MPID_H_ミシェイル, // 1
        MPID_カミュ, MPID_H_カミュ, // 2
    },
    [CHAPTER_CH_S1002 - CHAPTER_CH_NEW] = {
        MPID_ゼフィール, MPID_H_ゼフィール, // 1
        MPID_ナーシェン, MPID_H_ナーシェン, // 2
    },
    [CHAPTER_CH_S1003 - CHAPTER_CH_NEW] = {
        MPID_ウルスラ, MPID_H_ウルスラ, // 1
    },
    [CHAPTER_CH_S1101 - CHAPTER_CH_NEW] = {
        MPID_アイク, MPID_H_アイク, // 1
        MPID_セネリオ, MPID_H_セネリオ, // 2
    },
    [CHAPTER_CH_S1102 - CHAPTER_CH_NEW] = {
        MPID_ティアマト, MPID_H_ティアマト, // 1
        MPID_ミスト, MPID_H_ミスト, // 2
    },
    [CHAPTER_CH_S1103 - CHAPTER_CH_NEW] = {
        MPID_ティアマト, MPID_H_ティアマト, // 1
        MPID_セネリオ, MPID_H_セネリオ, // 2
        MPID_ミスト, MPID_H_ミスト, // 3
    },
    [CHAPTER_CH_S1104 - CHAPTER_CH_NEW] = {
        MPID_アイク, MPID_H_アイク, // 1
        MPID_ティアマト, MPID_H_ティアマト, // 2
        MPID_セネリオ, MPID_H_セネリオ, // 3
    },
    [CHAPTER_CH_S1105 - CHAPTER_CH_NEW] = {
        MPID_アイク, MPID_H_アイク, // 1
        MPID_ミスト, MPID_H_ミスト, // 2
        MPID_ティアマト, MPID_H_ティアマト, // 3
        MPID_セネリオ, MPID_H_セネリオ, // 4
    },
    [CHAPTER_CH_S1201 - CHAPTER_CH_NEW] = {
        MPID_セリカ, MPID_H_セリカ, // 1
        MPID_ジェニー, MPID_H_ジェニー, // 2
        MPID_エスト, MPID_H_エスト, // 3
    },
    [CHAPTER_CH_S1202 - CHAPTER_CH_NEW] = {
        MPID_メイ, MPID_H_メイ, // 1
        MPID_ボーイ, MPID_H_ボーイ, // 2
    },
    [CHAPTER_CH_S1203 - CHAPTER_CH_NEW] = {
        MPID_セリカ, MPID_H_セリカ, // 1
        MPID_メイ, MPID_H_メイ, // 2
        MPID_ジェニー, MPID_H_ジェニー, // 3
        MPID_パオラ, MPID_H_パオラ, // 4
    },
    [CHAPTER_CH_S1204 - CHAPTER_CH_NEW] = {
        MPID_メイ, MPID_H_メイ, // 1
        MPID_ボーイ, MPID_H_ボーイ, // 2
        MPID_ジェニー, MPID_H_ジェニー, // 3
        MPID_カチュア, MPID_H_カチュア, // 4
    },
    [CHAPTER_CH_S1205 - CHAPTER_CH_NEW] = {
        MPID_セリカ, MPID_H_セリカ, // 1
        MPID_ボーイ, MPID_H_ボーイ, // 2
        MPID_メイ, MPID_H_メイ, // 3
        MPID_ジェニー, MPID_H_ジェニー, // 4
    },
    [CHAPTER_CH_S1301 - CHAPTER_CH_NEW] = {
        MPID_デューテ, MPID_H_デューテ, // 1
    },
    [CHAPTER_CH_S1302 - CHAPTER_CH_NEW] = {
        MPID_セーバー, MPID_H_セーバー, // 1
        MPID_ソニア, MPID_H_ソニア, // 2
        MPID_レオ, MPID_H_レオ, // 3
    },
    [CHAPTER_CH_S1303 - CHAPTER_CH_NEW] = {
        MPID_クレーベ, MPID_H_クレーベ, // 1
        MPID_マチルダ, MPID_H_マチルダ, // 2
        MPID_グレイ, MPID_H_グレイ, // 3
        MPID_ロビン, MPID_H_ロビン, // 4
    },
    [CHAPTER_CH_S1304 - CHAPTER_CH_NEW] = {
        MPID_セーバー, MPID_H_セーバー, // 1
        MPID_ソニア, MPID_H_ソニア, // 2
        MPID_レオ, MPID_H_レオ, // 3
    },
    [CHAPTER_CH_S1305 - CHAPTER_CH_NEW] = {
        MPID_グレイ, MPID_H_グレイ, // 1
        MPID_ロビン, MPID_H_ロビン, // 2
        MPID_クレーベ, MPID_H_クレーベ, // 3
        MPID_マチルダ, MPID_H_マチルダ, // 4
        MPID_ソニア, MPID_H_ソニア, // 5
    },
    [CHAPTER_CH_S1402 - CHAPTER_CH_NEW] = {
        MPID_エリンシア, MPID_H_エリンシア, // 1
        MPID_ネフェニー, MPID_H_ネフェニー, // 2
    },
    [CHAPTER_CH_S1403 - CHAPTER_CH_NEW] = {
        MPID_オスカー, MPID_H_オスカー, // 1
        MPID_漆黒の騎士, MPID_H_漆黒の騎士, // 2
    },
    [CHAPTER_CH_S1404 - CHAPTER_CH_NEW] = {
        MPID_ネフェニー, MPID_H_ネフェニー, // 1
        MPID_オスカー, MPID_H_オスカー, // 2
        MPID_エリンシア, MPID_H_エリンシア, // 3
    },
    [CHAPTER_CH_S1405 - CHAPTER_CH_NEW] = {
        MPID_エリンシア, MPID_H_エリンシア, // 1
        MPID_漆黒の騎士, MPID_H_漆黒の騎士, // 2
        MPID_総選挙アイク, MPID_H_総選挙アイク, // 3
        MPID_オスカー, MPID_H_オスカー, // 4
    },
    [CHAPTER_CH_S1501 - CHAPTER_CH_NEW] = {
        MPID_アルム, MPID_H_アルム, // 1
        MPID_ユリア, MPID_H_ユリア, // 2
        MPID_ゼロ, MPID_H_ゼロ, // 3
        MPID_ネフェニー, MPID_H_ネフェニー, // 4
    },
    [CHAPTER_CH_S1601 - CHAPTER_CH_NEW] = {
        MPID_セリス, MPID_H_セリス, // 1
        MPID_リンダ, MPID_H_リンダ, // 2
        MPID_マリク, MPID_H_マリク, // 3
        MPID_ユリア, MPID_H_ユリア, // 4
        MPID_エリウッド, MPID_H_エリウッド, // 5
    },
    [CHAPTER_CH_S2022 - CHAPTER_CH_NEW] = {
        MPID_シノノメ, MPID_H_シノノメ, // 1
        MPID_シャラ, MPID_H_シャラ, // 2
    },
    [CHAPTER_CH_S2023 - CHAPTER_CH_NEW] = {
        MPID_ジークベルト, MPID_H_ジークベルト, // 1
        MPID_ソレイユ, MPID_H_ソレイユ, // 2
    },
    [CHAPTER_CH_S2024 - CHAPTER_CH_NEW] = {
        MPID_シノノメ, MPID_H_シノノメ, // 1
        MPID_ジークベルト, MPID_H_ジークベルト, // 2
    },
    [CHAPTER_CH_S2031 - CHAPTER_CH_NEW] = {
        MPID_サザ, MPID_H_サザ, // 1
    },
    [CHAPTER_CH_S2032 - CHAPTER_CH_NEW] = {
        MPID_サザ, MPID_H_サザ, // 1
        MPID_ミカヤ, MPID_H_ミカヤ, // 2
    },
    [CHAPTER_CH_S2033 - CHAPTER_CH_NEW] = {
        MPID_オリヴァー, MPID_H_オリヴァー, // 1
    },
    [CHAPTER_CH_S2034 - CHAPTER_CH_NEW] = {
        MPID_サザ, MPID_H_サザ, // 1
        MPID_ミカヤ, MPID_H_ミカヤ, // 2
        MPID_ゼルギウス, MPID_H_ゼルギウス, // 3
    },
    [CHAPTER_CH_S2041 - CHAPTER_CH_NEW] = {
        MPID_エイリーク2, MPID_H_エイリーク2, // 1
    },
    [CHAPTER_CH_S2042 - CHAPTER_CH_NEW] = {
        MPID_マリカ, MPID_H_マリカ, // 1
    },
    [CHAPTER_CH_S2043 - CHAPTER_CH_NEW] = {
        MPID_エイリーク2, MPID_H_エイリーク2, // 1
        MPID_ラーチェル, MPID_H_ラーチェル, // 2
    },
    [CHAPTER_CH_S2044 - CHAPTER_CH_NEW] = {
        MPID_ミルラ, MPID_H_ミルラ, // 1
    },
    [CHAPTER_CH_S2052 - CHAPTER_CH_NEW] = {
        MPID_魔女セリカ, MPID_H_魔女セリカ, // 1
    },
    [CHAPTER_CH_S2053 - CHAPTER_CH_NEW] = {
        MPID_邪竜ルフレ男, MPID_H_邪竜ルフレ男, // 1
    },
    [CHAPTER_CH_S2054 - CHAPTER_CH_NEW] = {
        MPID_暗黒ハーディン, MPID_H_暗黒ハーディン, // 1
    },
    [CHAPTER_CH_S2055 - CHAPTER_CH_NEW] = {
        MPID_暗黒ハーディン, MPID_H_暗黒ハーディン, // 1
        MPID_邪竜ルフレ男, MPID_H_邪竜ルフレ男, // 2
    },
    [CHAPTER_CH_S2061 - CHAPTER_CH_NEW] = {
        MPID_マーク女, MPID_H_マーク女, // 1
    },
    [CHAPTER_CH_S2062 - CHAPTER_CH_NEW] = {
        MPID_クロム2, MPID_H_クロム2, // 1
    },
    [CHAPTER_CH_S2063 - CHAPTER_CH_NEW] = {
        MPID_マーク女, MPID_H_マーク女, // 1
        MPID_ジェローム, MPID_H_ジェローム, // 2
    },
    [CHAPTER_CH_S2064 - CHAPTER_CH_NEW] = {
        MPID_マーク男, MPID_H_マーク男, // 1
    },
    [CHAPTER_CH_S2065 - CHAPTER_CH_NEW] = {
        MPID_クロム2, MPID_H_クロム2, // 1
        MPID_ジェローム, MPID_H_ジェローム, // 2
        MPID_マーク女, MPID_H_マーク女, // 3
    },
    [CHAPTER_CH_S2071 - CHAPTER_CH_NEW] = {
        MPID_フィン, MPID_H_フィン, // 1
    },
    [CHAPTER_CH_S2072 - CHAPTER_CH_NEW] = {
        MPID_ラインハルト2, MPID_H_ラインハルト2, // 1
        MPID_ナンナ, MPID_H_ナンナ, // 2
    },
    [CHAPTER_CH_S2073 - CHAPTER_CH_NEW] = {
        MPID_リーフ, MPID_H_リーフ, // 1
        MPID_ナンナ, MPID_H_ナンナ, // 2
        MPID_フィン, MPID_H_フィン, // 3
    },
    [CHAPTER_CH_S2074 - CHAPTER_CH_NEW] = {
        MPID_ラインハルト2, MPID_H_ラインハルト2, // 1
        MPID_オルエン2, MPID_H_オルエン2, // 2
    },
    [CHAPTER_CH_S2075 - CHAPTER_CH_NEW] = {
        MPID_リーフ, MPID_H_リーフ, // 1
        MPID_ナンナ, MPID_H_ナンナ, // 2
        MPID_ラインハルト2, MPID_H_ラインハルト2, // 3
        MPID_フィン, MPID_H_フィン, // 4
        MPID_オルエン2, MPID_H_オルエン2, // 5
    },
    [CHAPTER_CH_S2081 - CHAPTER_CH_NEW] = {
        MPID_カンナ女, MPID_H_カンナ女, // 1
    },
    [CHAPTER_CH_S2082 - CHAPTER_CH_NEW] = {
        MPID_スズカゼ, MPID_H_スズカゼ, // 1
    },
    [CHAPTER_CH_S2083 - CHAPTER_CH_NEW] = {
        MPID_ヒノカ2, MPID_H_ヒノカ2, // 1
        MPID_シグレ, MPID_H_シグレ, // 2
    },
    [CHAPTER_CH_S2084 - CHAPTER_CH_NEW] = {
        MPID_カンナ女, MPID_H_カンナ女, // 1
        MPID_カンナ男, MPID_H_カンナ男, // 2
    },
    [CHAPTER_CH_S2085 - CHAPTER_CH_NEW] = {
        MPID_カンナ女, MPID_H_カンナ女, // 1
        MPID_カンナ男, MPID_H_カンナ男, // 2
        MPID_ヒノカ2, MPID_H_ヒノカ2, // 3
        MPID_シグレ, MPID_H_シグレ, // 4
        MPID_スズカゼ, MPID_H_スズカゼ, // 5
    },
    [CHAPTER_CH_S2092 - CHAPTER_CH_NEW] = {
        MPID_アレス, MPID_H_アレス, // 1
    },
    [CHAPTER_CH_S2093 - CHAPTER_CH_NEW] = {
        MPID_イシュタル, MPID_H_イシュタル, // 1
    },
    [CHAPTER_CH_S2094 - CHAPTER_CH_NEW] = {
        MPID_アレス, MPID_H_アレス, // 1
        MPID_リーン, MPID_H_リーン, // 2
    },
    [CHAPTER_CH_S2095 - CHAPTER_CH_NEW] = {
        MPID_リーン, MPID_H_リーン, // 1
        MPID_イシュタル, MPID_H_イシュタル, // 2
        MPID_アレス, MPID_H_アレス, // 3
    },
    [CHAPTER_CH_S2101 - CHAPTER_CH_NEW] = {
        MPID_ラガルト, MPID_H_ラガルト, // 1
    },
    [CHAPTER_CH_S2102 - CHAPTER_CH_NEW] = {
        MPID_カナス, MPID_H_カナス, // 1
    },
    [CHAPTER_CH_S2103 - CHAPTER_CH_NEW] = {
        MPID_ニノ2, MPID_H_ニノ2, // 1
        MPID_ライナス, MPID_H_ライナス, // 2
        MPID_ロイド, MPID_H_ロイド, // 3
    },
    [CHAPTER_CH_S2104 - CHAPTER_CH_NEW] = {
        MPID_カアラ, MPID_H_カアラ, // 1
    },
    [CHAPTER_CH_S2105 - CHAPTER_CH_NEW] = {
        MPID_ラガルト, MPID_H_ラガルト, // 1
        MPID_ニノ2, MPID_H_ニノ2, // 2
        MPID_ウルスラ, MPID_H_ウルスラ, // 3
        MPID_カナス, MPID_H_カナス, // 4
        MPID_ジャファル, MPID_H_ジャファル, // 5
        MPID_ライナス, MPID_H_ライナス, // 6
        MPID_ロイド, MPID_H_ロイド, // 7
    },
    [CHAPTER_CH_S2112 - CHAPTER_CH_NEW] = {
        MPID_スミア, MPID_H_スミア, // 1
    },
    [CHAPTER_CH_S2113 - CHAPTER_CH_NEW] = {
        MPID_マリアベル, MPID_H_マリアベル, // 1
    },
    [CHAPTER_CH_S2114 - CHAPTER_CH_NEW] = {
        MPID_オリヴィエ2, MPID_H_オリヴィエ2, // 1
        MPID_リベラ, MPID_H_リベラ, // 2
    },
    [CHAPTER_CH_S2115 - CHAPTER_CH_NEW] = {
        MPID_マリアベル, MPID_H_マリアベル, // 1
        MPID_リベラ, MPID_H_リベラ, // 2
        MPID_スミア, MPID_H_スミア, // 3
    },
    [CHAPTER_CH_S2121 - CHAPTER_CH_NEW] = {
        MPID_ジャムカ, MPID_H_ジャムカ, // 1
        MPID_キュアン, MPID_H_キュアン, // 2
    },
    [CHAPTER_CH_S2122 - CHAPTER_CH_NEW] = {
        MPID_キュアン, MPID_H_キュアン, // 1
        MPID_エスリン, MPID_H_エスリン, // 2
    },
    [CHAPTER_CH_S2123 - CHAPTER_CH_NEW] = {
        MPID_ジャムカ, MPID_H_ジャムカ, // 1
    },
    [CHAPTER_CH_S2124 - CHAPTER_CH_NEW] = {
        MPID_レヴィン, MPID_H_レヴィン, // 1
        MPID_シルヴィア, MPID_H_シルヴィア, // 2
    },
    [CHAPTER_CH_S2125 - CHAPTER_CH_NEW] = {
        MPID_シルヴィア, MPID_H_シルヴィア, // 1
        MPID_レヴィン, MPID_H_レヴィン, // 2
        MPID_キュアン, MPID_H_キュアン, // 3
        MPID_エスリン, MPID_H_エスリン, // 4
        MPID_ジャムカ, MPID_H_ジャムカ, // 5
    },
    [CHAPTER_CH_S2131 - CHAPTER_CH_NEW] = {
        MPID_サイラス, MPID_H_サイラス, // 1
    },
    [CHAPTER_CH_S2132 - CHAPTER_CH_NEW] = {
        MPID_エポニーヌ, MPID_H_エポニーヌ, // 1
    },
    [CHAPTER_CH_S2133 - CHAPTER_CH_NEW] = {
        MPID_オフェリア, MPID_H_オフェリア, // 1
        MPID_フローラ, MPID_H_フローラ, // 2
    },
    [CHAPTER_CH_S2134 - CHAPTER_CH_NEW] = {
        MPID_オフェリア, MPID_H_オフェリア, // 1
        MPID_エポニーヌ, MPID_H_エポニーヌ, // 2
    },
    [CHAPTER_CH_S2135 - CHAPTER_CH_NEW] = {
        MPID_サイラス, MPID_H_サイラス, // 1
        MPID_フローラ, MPID_H_フローラ, // 2
    },
    [CHAPTER_CH_S3031 - CHAPTER_CH_NEW] = {
        MPID_リュシオン, MPID_H_リュシオン, // 1
        MPID_リアーネ, MPID_H_リアーネ, // 2
    },
    [CHAPTER_CH_S3032 - CHAPTER_CH_NEW] = {
        MPID_ネサラ, MPID_H_ネサラ, // 1
        MPID_リアーネ, MPID_H_リアーネ, // 2
    },
    [CHAPTER_CH_S3033 - CHAPTER_CH_NEW] = {
        MPID_ニケ, MPID_H_ニケ, // 1
    },
    [CHAPTER_CH_S3034 - CHAPTER_CH_NEW] = {
        MPID_ティバーン, MPID_H_ティバーン, // 1
        MPID_リュシオン, MPID_H_リュシオン, // 2
    },
    [CHAPTER_CH_S3035 - CHAPTER_CH_NEW] = {
        MPID_リアーネ, MPID_H_リアーネ, // 1
        MPID_ティバーン, MPID_H_ティバーン, // 2
        MPID_ニケ, MPID_H_ニケ, // 3
    },
    [CHAPTER_CH_S3041 - CHAPTER_CH_NEW] = {
        MPID_ベルベット, MPID_H_ベルベット, // 1
    },
    [CHAPTER_CH_S3042 - CHAPTER_CH_NEW] = {
        MPID_キヌ, MPID_H_キヌ, // 1
        MPID_ニシキ, MPID_H_ニシキ, // 2
    },
    [CHAPTER_CH_S3043 - CHAPTER_CH_NEW] = {
        MPID_ベロア, MPID_H_ベロア, // 1
        MPID_フランネル, MPID_H_フランネル, // 2
    },
    [CHAPTER_CH_S3044 - CHAPTER_CH_NEW] = {
        MPID_ベロア, MPID_H_ベロア, // 1
        MPID_キヌ, MPID_H_キヌ, // 2
    },
    [CHAPTER_CH_S3045 - CHAPTER_CH_NEW] = {
        MPID_ニシキ, MPID_H_ニシキ, // 1
        MPID_フランネル, MPID_H_フランネル, // 2
        MPID_ベルベット, MPID_H_ベルベット, // 3
    },
    [CHAPTER_CH_S3051 - CHAPTER_CH_NEW] = {
        MPID_ルゥ, MPID_H_ルゥ, // 1
    },
    [CHAPTER_CH_S3052 - CHAPTER_CH_NEW] = {
        MPID_ティト, MPID_H_ティト, // 1
    },
    [CHAPTER_CH_S3053 - CHAPTER_CH_NEW] = {
        MPID_ルトガー, MPID_H_ルトガー, // 1
        MPID_スー, MPID_H_スー, // 2
    },
    [CHAPTER_CH_S3054 - CHAPTER_CH_NEW] = {
        MPID_イドゥン, MPID_H_イドゥン, // 1
    },
    [CHAPTER_CH_S3055 - CHAPTER_CH_NEW] = {
        MPID_スー, MPID_H_スー, // 1
        MPID_ティト, MPID_H_ティト, // 2
        MPID_ルトガー, MPID_H_ルトガー, // 3
    },
    [CHAPTER_CH_S3061 - CHAPTER_CH_NEW] = {
        MPID_レテ, MPID_H_レテ, // 1
    },
    [CHAPTER_CH_S3062 - CHAPTER_CH_NEW] = {
        MPID_モゥディ, MPID_H_モゥディ, // 1
        MPID_ライ, MPID_H_ライ, // 2
    },
    [CHAPTER_CH_S3064 - CHAPTER_CH_NEW] = {
        MPID_カイネギス, MPID_H_カイネギス, // 1
        MPID_ライ, MPID_H_ライ, // 2
    },
    [CHAPTER_CH_S3065 - CHAPTER_CH_NEW] = {
        MPID_モゥディ, MPID_H_モゥディ, // 1
        MPID_レテ, MPID_H_レテ, // 2
    },
    [CHAPTER_CH_S3071 - CHAPTER_CH_NEW] = {
        MPID_魔剣マリータ, MPID_H_魔剣マリータ, // 1
    },
    [CHAPTER_CH_S3072 - CHAPTER_CH_NEW] = {
        MPID_暴走カムイ女, MPID_H_暴走カムイ女, // 1
    },
    [CHAPTER_CH_S3073 - CHAPTER_CH_NEW] = {
        MPID_魔剣マリータ, MPID_H_魔剣マリータ, // 1
        MPID_催眠チキ, MPID_H_催眠チキ, // 2
    },
    [CHAPTER_CH_S3074 - CHAPTER_CH_NEW] = {
        MPID_闇ベルクト, MPID_H_闇ベルクト, // 1
    },
    [CHAPTER_CH_S3075 - CHAPTER_CH_NEW] = {
        MPID_暴走カムイ女, MPID_H_暴走カムイ女, // 1
        MPID_催眠チキ, MPID_H_催眠チキ, // 2
        MPID_闇ベルクト, MPID_H_闇ベルクト, // 3
        MPID_魔剣マリータ, MPID_H_魔剣マリータ, // 4
    },
    [CHAPTER_CH_S3081 - CHAPTER_CH_NEW] = {
        MPID_シンシア, MPID_H_シンシア, // 1
    },
    [CHAPTER_CH_S3082 - CHAPTER_CH_NEW] = {
        MPID_ブレディ, MPID_H_ブレディ, // 1
        MPID_シャンブレー, MPID_H_シャンブレー, // 2
    },
    [CHAPTER_CH_S3083 - CHAPTER_CH_NEW] = {
        MPID_デジェル, MPID_H_デジェル, // 1
    },
    [CHAPTER_CH_S3084 - CHAPTER_CH_NEW] = {
        MPID_ンン, MPID_H_ンン, // 1
        MPID_シンシア, MPID_H_シンシア, // 2
    },
    [CHAPTER_CH_S3085 - CHAPTER_CH_NEW] = {
        MPID_ンン, MPID_H_ンン, // 1
        MPID_デジェル, MPID_H_デジェル, // 2
        MPID_ブレディ, MPID_H_ブレディ, // 3
        MPID_シャンブレー, MPID_H_シャンブレー, // 4
    },
    [CHAPTER_CH_S3091 - CHAPTER_CH_NEW] = {
        MPID_ベレス, MPID_H_ベレス, // 1
    },
    [CHAPTER_CH_S3092 - CHAPTER_CH_NEW] = {
        MPID_ディミトリ, MPID_H_ディミトリ, // 1
    },
    [CHAPTER_CH_S3093 - CHAPTER_CH_NEW] = {
        MPID_クロード, MPID_H_クロード, // 1
    },
    [CHAPTER_CH_S3094 - CHAPTER_CH_NEW] = {
        MPID_エーデルガルト, MPID_H_エーデルガルト, // 1
    },
    [CHAPTER_CH_S3095 - CHAPTER_CH_NEW] = {
        MPID_ベレス, MPID_H_ベレス, // 1
        MPID_ディミトリ, MPID_H_ディミトリ, // 2
        MPID_エーデルガルト, MPID_H_エーデルガルト, // 3
        MPID_クロード, MPID_H_クロード, // 4
    },
    [CHAPTER_CH_S3101 - CHAPTER_CH_NEW] = {
        MPID_ペトラ, MPID_H_ペトラ, // 1
    },
    [CHAPTER_CH_S3102 - CHAPTER_CH_NEW] = {
        MPID_ヒルダ, MPID_H_ヒルダ, // 1
        MPID_メルセデス, MPID_H_メルセデス, // 2
    },
    [CHAPTER_CH_S3103 - CHAPTER_CH_NEW] = {
        MPID_ヒューベルト, MPID_H_ヒューベルト, // 1
        MPID_ペトラ, MPID_H_ペトラ, // 2
    },
    [CHAPTER_CH_S3104 - CHAPTER_CH_NEW] = {
        MPID_死神騎士, MPID_H_死神騎士, // 1
    },
    [CHAPTER_CH_S3105 - CHAPTER_CH_NEW] = {
        MPID_ペトラ, MPID_H_ペトラ, // 1
        MPID_ヒルダ, MPID_H_ヒルダ, // 2
        MPID_メルセデス, MPID_H_メルセデス, // 3
        MPID_ヒューベルト, MPID_H_ヒューベルト, // 4
        MPID_死神騎士, MPID_H_死神騎士, // 5
    },
    [CHAPTER_CH_S3111 - CHAPTER_CH_NEW] = {
        MPID_ノルン, MPID_H_ノルン, // 1
        MPID_フィーナ, MPID_H_フィーナ, // 2
    },
    [CHAPTER_CH_S3112 - CHAPTER_CH_NEW] = {
        MPID_シリウス, MPID_H_シリウス, // 1
    },
    [CHAPTER_CH_S3113 - CHAPTER_CH_NEW] = {
        MPID_アストリア, MPID_H_アストリア, // 1
        MPID_フィーナ, MPID_H_フィーナ, // 2
    },
    [CHAPTER_CH_S3114 - CHAPTER_CH_NEW] = {
        MPID_バヌトゥ, MPID_H_バヌトゥ, // 1
        MPID_ナギ, MPID_H_ナギ, // 2
    },
    [CHAPTER_CH_S3115 - CHAPTER_CH_NEW] = {
        MPID_ノルン, MPID_H_ノルン, // 1
        MPID_フィーナ, MPID_H_フィーナ, // 2
        MPID_ナギ, MPID_H_ナギ, // 3
        MPID_シリウス, MPID_H_シリウス, // 4
    },
    [CHAPTER_CH_S3121 - CHAPTER_CH_NEW] = {
        MPID_バルボ, MPID_H_バルボ, // 1
    },
    [CHAPTER_CH_S3122 - CHAPTER_CH_NEW] = {
        MPID_バルボ, MPID_H_バルボ, // 1
        MPID_シルク, MPID_H_シルク, // 2
    },
    [CHAPTER_CH_S3123 - CHAPTER_CH_NEW] = {
        MPID_フォルス, MPID_H_フォルス, // 1
        MPID_パイソン, MPID_H_パイソン, // 2
        MPID_シルク, MPID_H_シルク, // 3
    },
    [CHAPTER_CH_S3124 - CHAPTER_CH_NEW] = {
        MPID_外伝カチュア, MPID_H_外伝カチュア, // 1
        MPID_コンラート, MPID_H_コンラート, // 2
    },
    [CHAPTER_CH_S3125 - CHAPTER_CH_NEW] = {
        MPID_外伝カチュア, MPID_H_外伝カチュア, // 1
        MPID_フォルス, MPID_H_フォルス, // 2
        MPID_パイソン, MPID_H_パイソン, // 3
        MPID_シルク, MPID_H_シルク, // 4
        MPID_バルボ, MPID_H_バルボ, // 5
        MPID_コンラート, MPID_H_コンラート, // 6
        MPID_レオ, MPID_H_レオ, // 7
    },
    [CHAPTER_CH_S3131 - CHAPTER_CH_NEW] = {
        MPID_ロス, MPID_H_ロス, // 1
        MPID_ユアン, MPID_H_ユアン, // 2
    },
    [CHAPTER_CH_S3132 - CHAPTER_CH_NEW] = {
        MPID_ジスト, MPID_H_ジスト, // 1
        MPID_テティス, MPID_H_テティス, // 2
    },
    [CHAPTER_CH_S3134 - CHAPTER_CH_NEW] = {
        MPID_比翼エフラム, MPID_H_比翼エフラム, // 1
    },
    [CHAPTER_CH_S3135 - CHAPTER_CH_NEW] = {
        MPID_比翼エフラム, MPID_H_比翼エフラム, // 1
        MPID_ジスト, MPID_H_ジスト, // 2
        MPID_テティス, MPID_H_テティス, // 3
        MPID_クーガー, MPID_H_クーガー, // 4
    },
    [CHAPTER_CH_S4021 - CHAPTER_CH_NEW] = {
        MPID_タニア, MPID_H_タニア, // 1
        MPID_オーシン, MPID_H_オーシン, // 2
    },
    [CHAPTER_CH_S4022 - CHAPTER_CH_NEW] = {
        MPID_ケンプフ, MPID_H_ケンプフ, // 1
    },
    [CHAPTER_CH_S4023 - CHAPTER_CH_NEW] = {
        MPID_マリータ, MPID_H_マリータ, // 1
    },
    [CHAPTER_CH_S4024 - CHAPTER_CH_NEW] = {
        MPID_エーヴェル, MPID_H_エーヴェル, // 1
        MPID_オーシン, MPID_H_オーシン, // 2
        MPID_タニア, MPID_H_タニア, // 3
    },
    [CHAPTER_CH_S4025 - CHAPTER_CH_NEW] = {
        MPID_エーヴェル, MPID_H_エーヴェル, // 1
        MPID_マリータ, MPID_H_マリータ, // 2
    },
    [CHAPTER_CH_S4031 - CHAPTER_CH_NEW] = {
        MPID_シャナン, MPID_H_シャナン, // 1
    },
    [CHAPTER_CH_S4032 - CHAPTER_CH_NEW] = {
        MPID_アルテナ, MPID_H_アルテナ, // 1
    },
    [CHAPTER_CH_S4033 - CHAPTER_CH_NEW] = {
        MPID_ラクチェ, MPID_H_ラクチェ, // 1
        MPID_シャナン, MPID_H_シャナン, // 2
    },
    [CHAPTER_CH_S4034 - CHAPTER_CH_NEW] = {
        MPID_セティ, MPID_H_セティ, // 1
    },
    [CHAPTER_CH_S4035 - CHAPTER_CH_NEW] = {
        MPID_アルテナ, MPID_H_アルテナ, // 1
        MPID_ラクチェ, MPID_H_ラクチェ, // 2
        MPID_セティ, MPID_H_セティ, // 3
    },
    [CHAPTER_CH_S4041 - CHAPTER_CH_NEW] = {
        MPID_ラス, MPID_H_ラス, // 1
        MPID_ヒース, MPID_H_ヒース, // 2
    },
    [CHAPTER_CH_S4042 - CHAPTER_CH_NEW] = {
        MPID_ニルス, MPID_H_ニルス, // 1
    },
    [CHAPTER_CH_S4043 - CHAPTER_CH_NEW] = {
        MPID_フィオーラ, MPID_H_フィオーラ, // 1
    },
    [CHAPTER_CH_S4044 - CHAPTER_CH_NEW] = {
        MPID_レイラ, MPID_H_レイラ, // 1
        MPID_ラス, MPID_H_ラス, // 2
    },
    [CHAPTER_CH_S4045 - CHAPTER_CH_NEW] = {
        MPID_ニルス, MPID_H_ニルス, // 1
        MPID_フィオーラ, MPID_H_フィオーラ, // 2
        MPID_レイラ, MPID_H_レイラ, // 3
    },
    [CHAPTER_CH_S4052 - CHAPTER_CH_NEW] = {
        MPID_アネット, MPID_H_アネット, // 1
    },
    [CHAPTER_CH_S4053 - CHAPTER_CH_NEW] = {
        MPID_リシテア, MPID_H_リシテア, // 1
    },
    [CHAPTER_CH_S4054 - CHAPTER_CH_NEW] = {
        MPID_フェルディナント, MPID_H_フェルディナント, // 1
        MPID_ベルナデッタ, MPID_H_ベルナデッタ, // 2
    },
    [CHAPTER_CH_S4055 - CHAPTER_CH_NEW] = {
        MPID_炎帝, MPID_H_炎帝, // 1
        MPID_リシテア, MPID_H_リシテア, // 2
        MPID_フェルディナント, MPID_H_フェルディナント, // 3
    },
    [CHAPTER_CH_S4062 - CHAPTER_CH_NEW] = {
        MPID_リンカ, MPID_H_リンカ, // 1
    },
    [CHAPTER_CH_S4063 - CHAPTER_CH_NEW] = {
        MPID_リリス, MPID_H_リリス, // 1
    },
    [CHAPTER_CH_S4064 - CHAPTER_CH_NEW] = {
        MPID_フォレオ, MPID_H_フォレオ, // 1
        MPID_ミドリコ, MPID_H_ミドリコ, // 2
    },
    [CHAPTER_CH_S4065 - CHAPTER_CH_NEW] = {
        MPID_マクベス, MPID_H_マクベス, // 1
        MPID_フォレオ, MPID_H_フォレオ, // 2
    },
    [CHAPTER_CH_S4072 - CHAPTER_CH_NEW] = {
        MPID_催眠ユリア, MPID_H_催眠ユリア, // 1
    },
    [CHAPTER_CH_S4073 - CHAPTER_CH_NEW] = {
        MPID_魔王リオン, MPID_H_魔王リオン, // 1
    },
    [CHAPTER_CH_S4074 - CHAPTER_CH_NEW] = {
        MPID_暴走アイク, MPID_H_暴走アイク, // 1
    },
    [CHAPTER_CH_S4075 - CHAPTER_CH_NEW] = {
        MPID_暴走アイク, MPID_H_暴走アイク, // 1
        MPID_暴走カムイ男, MPID_H_暴走カムイ男, // 2
        MPID_催眠ユリア, MPID_H_催眠ユリア, // 3
    },
    [CHAPTER_CH_S4081 - CHAPTER_CH_NEW] = {
        MPID_エメリナ, MPID_H_エメリナ, // 1
    },
    [CHAPTER_CH_S4082 - CHAPTER_CH_NEW] = {
        MPID_覚醒アンナ, MPID_H_覚醒アンナ, // 1
        MPID_エメリナ, MPID_H_エメリナ, // 2
    },
    [CHAPTER_CH_S4083 - CHAPTER_CH_NEW] = {
        MPID_サイリ, MPID_H_サイリ, // 1
    },
    [CHAPTER_CH_S4084 - CHAPTER_CH_NEW] = {
        MPID_ギャンレル, MPID_H_ギャンレル, // 1
        MPID_ムスタファー, MPID_H_ムスタファー, // 2
    },
    [CHAPTER_CH_S4085 - CHAPTER_CH_NEW] = {
        MPID_ギャンレル, MPID_H_ギャンレル, // 1
        MPID_サイリ, MPID_H_サイリ, // 2
        MPID_覚醒アンナ, MPID_H_覚醒アンナ, // 3
        MPID_ムスタファー, MPID_H_ムスタファー, // 4
    },
    [CHAPTER_CH_S4091 - CHAPTER_CH_NEW] = {
        MPID_クリス男, MPID_H_クリス男, // 1
    },
    [CHAPTER_CH_S4092 - CHAPTER_CH_NEW] = {
        MPID_ジュリアン, MPID_H_ジュリアン, // 1
        MPID_レナ, MPID_H_レナ, // 2
    },
    [CHAPTER_CH_S4093 - CHAPTER_CH_NEW] = {
        MPID_クリス女, MPID_H_クリス女, // 1
    },
    [CHAPTER_CH_S4094 - CHAPTER_CH_NEW] = {
        MPID_エレミヤ, MPID_H_エレミヤ, // 1
    },
    [CHAPTER_CH_S4095 - CHAPTER_CH_NEW] = {
        MPID_クリス男, MPID_H_クリス男, // 1
        MPID_クリス女, MPID_H_クリス女, // 2
        MPID_エレミヤ, MPID_H_エレミヤ, // 3
        MPID_レナ, MPID_H_レナ, // 4
        MPID_ジュリアン, MPID_H_ジュリアン, // 5
    },
    [CHAPTER_CH_S4101 - CHAPTER_CH_NEW] = {
        MPID_総選挙リシテア, MPID_H_総選挙リシテア, // 1
    },
    [CHAPTER_CH_S4102 - CHAPTER_CH_NEW] = {
        MPID_総選挙ディミトリ, MPID_H_総選挙ディミトリ, // 1
    },
    [CHAPTER_CH_S4103 - CHAPTER_CH_NEW] = {
        MPID_総選挙クロード, MPID_H_総選挙クロード, // 1
    },
    [CHAPTER_CH_S4104 - CHAPTER_CH_NEW] = {
        MPID_総選挙エーデル, MPID_H_総選挙エーデル, // 1
    },
    [CHAPTER_CH_S4105 - CHAPTER_CH_NEW] = {
        MPID_総選挙リシテア, MPID_H_総選挙リシテア, // 1
        MPID_総選挙ディミトリ, MPID_H_総選挙ディミトリ, // 2
        MPID_総選挙クロード, MPID_H_総選挙クロード, // 3
        MPID_総選挙エーデル, MPID_H_総選挙エーデル, // 4
    },
    [CHAPTER_CH_S4111 - CHAPTER_CH_NEW] = {
        MPID_イレース, MPID_H_イレース, // 1
    },
    [CHAPTER_CH_S4112 - CHAPTER_CH_NEW] = {
        MPID_シノン, MPID_H_シノン, // 1
        MPID_ジル, MPID_H_ジル, // 2
    },
    [CHAPTER_CH_S4113 - CHAPTER_CH_NEW] = {
        MPID_シノン, MPID_H_シノン, // 1
        MPID_ガトリー, MPID_H_ガトリー, // 2
    },
    [CHAPTER_CH_S4114 - CHAPTER_CH_NEW] = {
        MPID_プラハ, MPID_H_プラハ, // 1
    },
    [CHAPTER_CH_S4115 - CHAPTER_CH_NEW] = {
        MPID_シノン, MPID_H_シノン, // 1
        MPID_ガトリー, MPID_H_ガトリー, // 2
        MPID_ジル, MPID_H_ジル, // 3
    },
    [CHAPTER_CH_S4121 - CHAPTER_CH_NEW] = {
        MPID_カトリーヌ, MPID_H_カトリーヌ, // 1
    },
    [CHAPTER_CH_S4122 - CHAPTER_CH_NEW] = {
        MPID_フレン, MPID_H_フレン, // 1
    },
    [CHAPTER_CH_S4123 - CHAPTER_CH_NEW] = {
        MPID_セテス, MPID_H_セテス, // 1
        MPID_フレン, MPID_H_フレン, // 2
    },
    [CHAPTER_CH_S4124 - CHAPTER_CH_NEW] = {
        MPID_カトリーヌ, MPID_H_カトリーヌ, // 1
        MPID_シャミア, MPID_H_シャミア, // 2
    },
    [CHAPTER_CH_S4125 - CHAPTER_CH_NEW] = {
        MPID_カトリーヌ, MPID_H_カトリーヌ, // 1
        MPID_シャミア, MPID_H_シャミア, // 2
        MPID_セテス, MPID_H_セテス, // 3
        MPID_フレン, MPID_H_フレン, // 4
    },
    [CHAPTER_CH_S4131 - CHAPTER_CH_NEW] = {
        MPID_ゲイル, MPID_H_ゲイル, // 1
    },
    [CHAPTER_CH_S4132 - CHAPTER_CH_NEW] = {
        MPID_ディーク, MPID_H_ディーク, // 1
        MPID_マリナス, MPID_H_マリナス, // 2
    },
    [CHAPTER_CH_S4133 - CHAPTER_CH_NEW] = {
        MPID_ギネヴィア, MPID_H_ギネヴィア, // 1
        MPID_ミレディ, MPID_H_ミレディ, // 2
    },
    [CHAPTER_CH_S4134 - CHAPTER_CH_NEW] = {
        MPID_ディーク, MPID_H_ディーク, // 1
        MPID_ギネヴィア, MPID_H_ギネヴィア, // 2
        MPID_ミレディ, MPID_H_ミレディ, // 3
        MPID_マリナス, MPID_H_マリナス, // 4
        MPID_ゲイル, MPID_H_ゲイル, // 5
    },
    [CHAPTER_CH_S5021 - CHAPTER_CH_NEW] = {
        MPID_ナターシャ, MPID_H_ナターシャ, // 1
        MPID_ノール, MPID_H_ノール, // 2
    },
    [CHAPTER_CH_S5022 - CHAPTER_CH_NEW] = {
        MPID_ケセルダ, MPID_H_ケセルダ, // 1
    },
    [CHAPTER_CH_S5023 - CHAPTER_CH_NEW] = {
        MPID_セライナ, MPID_H_セライナ, // 1
    },
    [CHAPTER_CH_S5024 - CHAPTER_CH_NEW] = {
        MPID_デュッセル, MPID_H_デュッセル, // 1
    },
    [CHAPTER_CH_S5025 - CHAPTER_CH_NEW] = {
        MPID_ケセルダ, MPID_H_ケセルダ, // 1
        MPID_デュッセル, MPID_H_デュッセル, // 2
        MPID_セライナ, MPID_H_セライナ, // 3
    },
    [CHAPTER_CH_S5031 - CHAPTER_CH_NEW] = {
        MPID_ロナン, MPID_H_ロナン, // 1
    },
    [CHAPTER_CH_S5032 - CHAPTER_CH_NEW] = {
        MPID_ミランダ, MPID_H_ミランダ, // 1
    },
    [CHAPTER_CH_S5033 - CHAPTER_CH_NEW] = {
        MPID_サラ, MPID_H_サラ, // 1
    },
    [CHAPTER_CH_S5034 - CHAPTER_CH_NEW] = {
        MPID_アスベル, MPID_H_アスベル, // 1
    },
    [CHAPTER_CH_S5035 - CHAPTER_CH_NEW] = {
        MPID_ミランダ, MPID_H_ミランダ, // 1
        MPID_サラ, MPID_H_サラ, // 2
        MPID_ロナン, MPID_H_ロナン, // 3
        MPID_アスベル, MPID_H_アスベル, // 4
    },
    [CHAPTER_CH_S5041 - CHAPTER_CH_NEW] = {
        MPID_アゼル, MPID_H_アゼル, // 1
    },
    [CHAPTER_CH_S5042 - CHAPTER_CH_NEW] = {
        MPID_マーニャ, MPID_H_マーニャ, // 1
    },
    [CHAPTER_CH_S5043 - CHAPTER_CH_NEW] = {
        MPID_フュリー, MPID_H_フュリー, // 1
    },
    [CHAPTER_CH_S5044 - CHAPTER_CH_NEW] = {
        MPID_アゼル, MPID_H_アゼル, // 1
        MPID_レックス, MPID_H_レックス, // 2
    },
    [CHAPTER_CH_S5045 - CHAPTER_CH_NEW] = {
        MPID_フュリー, MPID_H_フュリー, // 1
        MPID_マーニャ, MPID_H_マーニャ, // 2
        MPID_アゼル, MPID_H_アゼル, // 3
    },
    [CHAPTER_CH_S5051 - CHAPTER_CH_NEW] = {
        MPID_ドゥドゥ_, MPID_H_ドゥドゥ_, // 1
    },
    [CHAPTER_CH_S5052 - CHAPTER_CH_NEW] = {
        MPID_イングリット, MPID_H_イングリット, // 1
    },
    [CHAPTER_CH_S5053 - CHAPTER_CH_NEW] = {
        MPID_リンハルト, MPID_H_リンハルト, // 1
    },
    [CHAPTER_CH_S5054 - CHAPTER_CH_NEW] = {
        MPID_マリアンヌ, MPID_H_マリアンヌ, // 1
    },
    [CHAPTER_CH_S5055 - CHAPTER_CH_NEW] = {
        MPID_ドゥドゥ_, MPID_H_ドゥドゥ_, // 1
        MPID_マリアンヌ, MPID_H_マリアンヌ, // 2
    },
    [CHAPTER_CH_S5061 - CHAPTER_CH_NEW] = {
        MPID_エルク, MPID_H_エルク, // 1
    },
    [CHAPTER_CH_S5062 - CHAPTER_CH_NEW] = {
        MPID_ファリナ, MPID_H_ファリナ, // 1
    },
    [CHAPTER_CH_S5063 - CHAPTER_CH_NEW] = {
        MPID_ソーニャ, MPID_H_ソーニャ, // 1
    },
    [CHAPTER_CH_S5064 - CHAPTER_CH_NEW] = {
        MPID_パント, MPID_H_パント, // 1
        MPID_ルイーズ, MPID_H_ルイーズ, // 2
        MPID_エルク, MPID_H_エルク, // 3
    },
    [CHAPTER_CH_S5065 - CHAPTER_CH_NEW] = {
        MEID_フード無印, MEID_H_フード無印, // 1
        MPID_パント, MPID_H_パント, // 2
        MPID_ファリナ, MPID_H_ファリナ, // 3
    },
    [CHAPTER_CH_S5071 - CHAPTER_CH_NEW] = {
        MPID_闇マーク男, MPID_H_闇マーク男, // 1
    },
    [CHAPTER_CH_S5072 - CHAPTER_CH_NEW] = {
        MPID_闇マーク女, MPID_H_闇マーク女, // 1
    },
    [CHAPTER_CH_S5073 - CHAPTER_CH_NEW] = {
        MPID_闇ディミトリ, MPID_H_闇ディミトリ, // 1
    },
    [CHAPTER_CH_S5074 - CHAPTER_CH_NEW] = {
        MPID_覇骸エーデルガルト, MPID_H_覇骸エーデルガルト, // 1
    },
    [CHAPTER_CH_S5075 - CHAPTER_CH_NEW] = {
        MPID_闇マーク女, MPID_H_闇マーク女, // 1
        MPID_闇マーク男, MPID_H_闇マーク男, // 2
        MPID_闇ディミトリ, MPID_H_闇ディミトリ, // 3
        MPID_覇骸エーデルガルト, MPID_H_覇骸エーデルガルト, // 4
    },
    [CHAPTER_CH_S5081 - CHAPTER_CH_NEW] = {
        MPID_ティータ, MPID_H_ティータ, // 1
    },
    [CHAPTER_CH_S5082 - CHAPTER_CH_NEW] = {
        MPID_リュート, MPID_H_リュート, // 1
    },
    [CHAPTER_CH_S5083 - CHAPTER_CH_NEW] = {
        MPID_ティータ, MPID_H_ティータ, // 1
        MPID_ジーク, MPID_H_ジーク, // 2
    },
    [CHAPTER_CH_S5084 - CHAPTER_CH_NEW] = {
        MPID_外伝パオラ, MPID_H_外伝パオラ, // 1
    },
    [CHAPTER_CH_S5085 - CHAPTER_CH_NEW] = {
        MPID_外伝パオラ, MPID_H_外伝パオラ, // 1
        MPID_リュート, MPID_H_リュート, // 2
        MPID_ティータ, MPID_H_ティータ, // 3
        MPID_ジーク, MPID_H_ジーク, // 4
    },
    [CHAPTER_CH_S5091 - CHAPTER_CH_NEW] = {
        MPID_ブノワ, MPID_H_ブノワ, // 1
    },
    [CHAPTER_CH_S5092 - CHAPTER_CH_NEW] = {
        MPID_オロチ, MPID_H_オロチ, // 1
        MPID_シェンメイ, MPID_H_シェンメイ, // 2
    },
    [CHAPTER_CH_S5093 - CHAPTER_CH_NEW] = {
        MPID_ニュクス, MPID_H_ニュクス, // 1
    },
    [CHAPTER_CH_S5094 - CHAPTER_CH_NEW] = {
        MPID_シャーロッテ, MPID_H_シャーロッテ, // 1
        MPID_ニュクス, MPID_H_ニュクス, // 2
    },
    [CHAPTER_CH_S5095 - CHAPTER_CH_NEW] = {
        MPID_ブノワ, MPID_H_ブノワ, // 1
        MPID_オロチ, MPID_H_オロチ, // 2
        MPID_シェンメイ, MPID_H_シェンメイ, // 3
        MPID_シャーロッテ, MPID_H_シャーロッテ, // 4
        MPID_ニュクス, MPID_H_ニュクス, // 5
    },
    [CHAPTER_CH_S5101 - CHAPTER_CH_NEW] = {
        MPID_総選挙マルス, MPID_H_総選挙マルス, // 1
    },
    [CHAPTER_CH_S5102 - CHAPTER_CH_NEW] = {
        MPID_総選挙マリアンヌ, MPID_H_総選挙マリアンヌ, // 1
    },
    [CHAPTER_CH_S5103 - CHAPTER_CH_NEW] = {
        MPID_総選挙エイリーク, MPID_H_総選挙エイリーク, // 1
    },
    [CHAPTER_CH_S5104 - CHAPTER_CH_NEW] = {
        MPID_総選挙マリアンヌ, MPID_H_総選挙マリアンヌ, // 1
        MPID_総選挙門番, MPID_H_総選挙門番, // 2
    },
    [CHAPTER_CH_S5105 - CHAPTER_CH_NEW] = {
        MPID_総選挙マルス, MPID_H_総選挙マルス, // 1
        MPID_総選挙マリアンヌ, MPID_H_総選挙マリアンヌ, // 2
        MPID_総選挙門番, MPID_H_総選挙門番, // 3
        MPID_総選挙エイリーク, MPID_H_総選挙エイリーク, // 4
    },
    [CHAPTER_CH_S5111 - CHAPTER_CH_NEW] = {
        MEID_ファフニール2, MEID_H_ファフニール2, // 1
        MPID_バルタザール, MPID_H_バルタザール, // 2
    },
    [CHAPTER_CH_S5112 - CHAPTER_CH_NEW] = {
        MPID_ハピ, MPID_H_ハピ, // 1
    },
    [CHAPTER_CH_S5113 - CHAPTER_CH_NEW] = {
        MPID_コンスタンツェ, MPID_H_コンスタンツェ, // 1
        MPID_ハピ, MPID_H_ハピ, // 2
    },
    [CHAPTER_CH_S5114 - CHAPTER_CH_NEW] = {
        MPID_ユーリス, MPID_H_ユーリス, // 1
        MPID_バルタザール, MPID_H_バルタザール, // 2
    },
    [CHAPTER_CH_S5115 - CHAPTER_CH_NEW] = {
        MPID_ユーリス, MPID_H_ユーリス, // 1
        MPID_ハピ, MPID_H_ハピ, // 2
        MPID_バルタザール, MPID_H_バルタザール, // 3
        MPID_コンスタンツェ, MPID_H_コンスタンツェ, // 4
    },
    [CHAPTER_CH_S5121 - CHAPTER_CH_NEW] = {
        MPID_マリス, MPID_H_マリス, // 1
    },
    [CHAPTER_CH_S5122 - CHAPTER_CH_NEW] = {
        MEID_ファフニール2, MEID_H_ファフニール2, // 1
        MPID_ビラク, MPID_H_ビラク, // 2
        MPID_ロシェ, MPID_H_ロシェ, // 3
    },
    [CHAPTER_CH_S5123 - CHAPTER_CH_NEW] = {
        MEID_ファフニール2, MEID_H_ファフニール2, // 1
        MPID_ウルフ, MPID_H_ウルフ, // 2
        MPID_ザガロ, MPID_H_ザガロ, // 3
    },
    [CHAPTER_CH_S5124 - CHAPTER_CH_NEW] = {
        MPID_ビラク, MPID_H_ビラク, // 1
        MPID_ロシェ, MPID_H_ロシェ, // 2
        MPID_ウルフ, MPID_H_ウルフ, // 3
        MPID_ザガロ, MPID_H_ザガロ, // 4
    },
    [CHAPTER_CH_S5125 - CHAPTER_CH_NEW] = {
        MEID_ファフニール2, MEID_H_ファフニール2, // 1
        MPID_ビラク, MPID_H_ビラク, // 2
        MPID_ロシェ, MPID_H_ロシェ, // 3
        MPID_マリス, MPID_H_マリス, // 4
        MPID_ウルフ, MPID_H_ウルフ, // 5
        MPID_ザガロ, MPID_H_ザガロ, // 6
    },
    [CHAPTER_CH_S5131 - CHAPTER_CH_NEW] = {
        MPID_ベウフォレス, MPID_H_ベウフォレス, // 1
    },
    [CHAPTER_CH_S5132 - CHAPTER_CH_NEW] = {
        MPID_タニス, MPID_H_タニス, // 1
    },
    [CHAPTER_CH_S5133 - CHAPTER_CH_NEW] = {
        MPID_ステラ, MPID_H_ステラ, // 1
    },
    [CHAPTER_CH_S5134 - CHAPTER_CH_NEW] = {
        MPID_フォルカ, MPID_H_フォルカ, // 1
        MEID_フード無印, MEID_H_フード無印, // 2
    },
    [CHAPTER_CH_S5135 - CHAPTER_CH_NEW] = {
        MPID_ステラ, MPID_H_ステラ, // 1
        MPID_フォルカ, MPID_H_フォルカ, // 2
        MPID_タニス, MPID_H_タニス, // 3
        MPID_マーシャ, MPID_H_マーシャ, // 4
    },
    [CHAPTER_CH_S6021 - CHAPTER_CH_NEW] = {
        MPID_フラヴィア, MPID_H_フラヴィア, // 1
    },
    [CHAPTER_CH_S6022 - CHAPTER_CH_NEW] = {
        MPID_ミリエル, MPID_H_ミリエル, // 1
    },
    [CHAPTER_CH_S6023 - CHAPTER_CH_NEW] = {
        MPID_パリス, MPID_H_パリス, // 1
    },
    [CHAPTER_CH_S6024 - CHAPTER_CH_NEW] = {
        MPID_フラヴィア, MPID_H_フラヴィア, // 1
        MPID_バジーリオ, MPID_H_バジーリオ, // 2
    },
    [CHAPTER_CH_S6025 - CHAPTER_CH_NEW] = {
        MPID_パリス, MPID_H_パリス, // 1
        MPID_ミリエル, MPID_H_ミリエル, // 2
        MPID_バジーリオ, MPID_H_バジーリオ, // 3
    },
    [CHAPTER_CH_S6031 - CHAPTER_CH_NEW] = {
        MEID_ヴェロニカ洗脳, MEID_H_ヴェロニカ洗脳, // 1
        MPID_コーマ, MPID_H_コーマ, // 2
    },
    [CHAPTER_CH_S6032 - CHAPTER_CH_NEW] = {
        MPID_レナック, MPID_H_レナック, // 1
    },
    [CHAPTER_CH_S6033 - CHAPTER_CH_NEW] = {
        MPID_コーマ, MPID_H_コーマ, // 1
        MPID_ネイミー, MPID_H_ネイミー, // 2
    },
    [CHAPTER_CH_S6034 - CHAPTER_CH_NEW] = {
        MPID_開花ヨシュア, MPID_H_開花ヨシュア, // 1
    },
    [CHAPTER_CH_S6035 - CHAPTER_CH_NEW] = {
        MEID_ヴェロニカ洗脳, MEID_H_ヴェロニカ洗脳, // 1
        MPID_開花ヨシュア, MPID_H_開花ヨシュア, // 2
        MPID_アーヴ, MPID_H_アーヴ, // 3
        MPID_コーマ, MPID_H_コーマ, // 4
        MPID_レナック, MPID_H_レナック, // 5
        MPID_ネイミー, MPID_H_ネイミー, // 6
    },
    [CHAPTER_CH_S6041 - CHAPTER_CH_NEW] = {
        MPID_ゴンザレス, MPID_H_ゴンザレス, // 1
    },
    [CHAPTER_CH_S6042 - CHAPTER_CH_NEW] = {
        MPID_ヒュウ, MPID_H_ヒュウ, // 1
        MPID_ニイメ, MPID_H_ニイメ, // 2
    },
    [CHAPTER_CH_S6043 - CHAPTER_CH_NEW] = {
        MPID_キャス, MPID_H_キャス, // 1
    },
    [CHAPTER_CH_S6044 - CHAPTER_CH_NEW] = {
        MPID_開花イドゥン, MPID_H_開花イドゥン, // 1
    },
    [CHAPTER_CH_S6045 - CHAPTER_CH_NEW] = {
        MPID_開花イドゥン, MPID_H_開花イドゥン, // 1
        MPID_ヒュウ, MPID_H_ヒュウ, // 2
        MPID_ニイメ, MPID_H_ニイメ, // 3
    },
    [CHAPTER_CH_S6051 - CHAPTER_CH_NEW] = {
        MPID_ガルザス, MPID_H_ガルザス, // 1
    },
    [CHAPTER_CH_S6052 - CHAPTER_CH_NEW] = {
        MPID_アウグスト, MPID_H_アウグスト, // 1
        MPID_カリン, MPID_H_カリン, // 2
    },
    [CHAPTER_CH_S6053 - CHAPTER_CH_NEW] = {
        MPID_セイラム, MPID_H_セイラム, // 1
    },
    [CHAPTER_CH_S6054 - CHAPTER_CH_NEW] = {
        MPID_開花マリータ, MPID_H_開花マリータ, // 1
    },
    [CHAPTER_CH_S6055 - CHAPTER_CH_NEW] = {
        MPID_ガルザス, MPID_H_ガルザス, // 1
        MPID_開花マリータ, MPID_H_開花マリータ, // 2
        MPID_カリン, MPID_H_カリン, // 3
    },
    [CHAPTER_CH_S6061 - CHAPTER_CH_NEW] = {
        MPID_スカサハ, MPID_H_スカサハ, // 1
    },
    [CHAPTER_CH_S6062 - CHAPTER_CH_NEW] = {
        MPID_ティニー, MPID_H_ティニー, // 1
    },
    [CHAPTER_CH_S6063 - CHAPTER_CH_NEW] = {
        MPID_アーサー, MPID_H_アーサー, // 1
    },
    [CHAPTER_CH_S6064 - CHAPTER_CH_NEW] = {
        MPID_開花イシュタル, MPID_H_開花イシュタル, // 1
    },
    [CHAPTER_CH_S6065 - CHAPTER_CH_NEW] = {
        MPID_開花イシュタル, MPID_H_開花イシュタル, // 1
        MPID_アーサー, MPID_H_アーサー, // 2
        MPID_スカサハ, MPID_H_スカサハ, // 3
    },
    [CHAPTER_CH_S6071 - CHAPTER_CH_NEW] = {
        MPID_闇リリス, MPID_H_闇リリス, // 1
    },
    [CHAPTER_CH_S6072 - CHAPTER_CH_NEW] = {
        MPID_暴走レア, MPID_H_暴走レア, // 1
        MPID_闇リリス, MPID_H_闇リリス, // 2
    },
    [CHAPTER_CH_S6074 - CHAPTER_CH_NEW] = {
        MPID_暴走レア, MPID_H_暴走レア, // 1
    },
    [CHAPTER_CH_S6075 - CHAPTER_CH_NEW] = {
        MPID_催眠ニニアン, MPID_H_催眠ニニアン, // 1
        MPID_闇リリス, MPID_H_闇リリス, // 2
    },
    [CHAPTER_CH_S6082 - CHAPTER_CH_NEW] = {
        MPID_ケント, MPID_H_ケント, // 1
        MPID_セイン, MPID_H_セイン, // 2
    },
    [CHAPTER_CH_S6083 - CHAPTER_CH_NEW] = {
        MPID_ギィ, MPID_H_ギィ, // 1
    },
    [CHAPTER_CH_S6084 - CHAPTER_CH_NEW] = {
        MPID_開花フロリーナ, MPID_H_開花フロリーナ, // 1
        MPID_ギィ, MPID_H_ギィ, // 2
    },
    [CHAPTER_CH_S6085 - CHAPTER_CH_NEW] = {
        MEID_レティシア洗脳, MEID_H_レティシア洗脳, // 1
        MPID_開花フロリーナ, MPID_H_開花フロリーナ, // 2
        MPID_セイン, MPID_H_セイン, // 3
        MPID_ケント, MPID_H_ケント, // 4
        MPID_リムステラ, MPID_H_リムステラ, // 5
    },
    [CHAPTER_CH_S6091 - CHAPTER_CH_NEW] = {
        MEID_ブルーノ洗脳, MEID_H_ブルーノ洗脳, // 1
        MPID_外伝カムイ, MPID_H_外伝カムイ, // 2
        MPID_アトラス, MPID_H_アトラス, // 3
    },
    [CHAPTER_CH_S6092 - CHAPTER_CH_NEW] = {
        MPID_外伝エスト, MPID_H_外伝エスト, // 1
    },
    [CHAPTER_CH_S6093 - CHAPTER_CH_NEW] = {
        MPID_開花セリカ, MPID_H_開花セリカ, // 1
    },
    [CHAPTER_CH_S6094 - CHAPTER_CH_NEW] = {
        MPID_外伝エスト, MPID_H_外伝エスト, // 1
        MPID_アトラス, MPID_H_アトラス, // 2
    },
    [CHAPTER_CH_S6095 - CHAPTER_CH_NEW] = {
        MEID_ヴェロニカ洗脳2, MEID_H_ヴェロニカ洗脳2, // 1
        MPID_外伝エスト, MPID_H_外伝エスト, // 2
        MPID_開花セリカ, MPID_H_開花セリカ, // 3
        MPID_外伝カムイ, MPID_H_外伝カムイ, // 4
        MPID_アトラス, MPID_H_アトラス, // 5
    },
    [CHAPTER_CH_S6101 - CHAPTER_CH_NEW] = {
        MPID_総選挙ベレス, MPID_H_総選挙ベレス, // 1
    },
    [CHAPTER_CH_S6102 - CHAPTER_CH_NEW] = {
        MPID_総選挙セリス, MPID_H_総選挙セリス, // 1
    },
    [CHAPTER_CH_S6103 - CHAPTER_CH_NEW] = {
        MPID_総選挙クロム, MPID_H_総選挙クロム, // 1
    },
    [CHAPTER_CH_S6104 - CHAPTER_CH_NEW] = {
        MPID_総選挙覚醒チキ, MPID_H_総選挙覚醒チキ, // 1
    },
    [CHAPTER_CH_S6105 - CHAPTER_CH_NEW] = {
        MPID_総選挙ベレス, MPID_H_総選挙ベレス, // 1
        MPID_総選挙セリス, MPID_H_総選挙セリス, // 2
        MPID_総選挙クロム, MPID_H_総選挙クロム, // 3
        MPID_総選挙覚醒チキ, MPID_H_総選挙覚醒チキ, // 4
    },
    [CHAPTER_CH_S6111 - CHAPTER_CH_NEW] = {
        MPID_モニカ, MPID_H_モニカ, // 1
    },
    [CHAPTER_CH_S6112 - CHAPTER_CH_NEW] = {
        MPID_開花ヒルダ, MPID_H_開花ヒルダ, // 1
    },
    [CHAPTER_CH_S6113 - CHAPTER_CH_NEW] = {
        MPID_シェズ女, MPID_H_シェズ女, // 1
    },
    [CHAPTER_CH_S6114 - CHAPTER_CH_NEW] = {
        MEID_ブルーノ素顔, MEID_H_ブルーノ素顔, // 1
        MPID_開花ヒルダ, MPID_H_開花ヒルダ, // 2
        MPID_ホルスト, MPID_H_ホルスト, // 3
    },
    [CHAPTER_CH_S6115 - CHAPTER_CH_NEW] = {
        MEID_ブルーノ素顔, MEID_H_ブルーノ素顔, // 1
        MPID_開花ヒルダ, MPID_H_開花ヒルダ, // 2
        MPID_モニカ, MPID_H_モニカ, // 3
        MPID_シェズ女, MPID_H_シェズ女, // 4
        MPID_シェズ男, MPID_H_シェズ男, // 5
    },
    [CHAPTER_CH_S6121 - CHAPTER_CH_NEW] = {
        MPID_フィレイン, MPID_H_フィレイン, // 1
    },
    [CHAPTER_CH_S6122 - CHAPTER_CH_NEW] = {
        MPID_セルバンテス, MPID_H_セルバンテス, // 1
    },
    [CHAPTER_CH_S6123 - CHAPTER_CH_NEW] = {
        MPID_グレゴ, MPID_H_グレゴ, // 1
        MPID_リヒト, MPID_H_リヒト, // 2
    },
    [CHAPTER_CH_S6124 - CHAPTER_CH_NEW] = {
        MPID_魔器ルフレ女, MPID_H_魔器ルフレ女, // 1
    },
    [CHAPTER_CH_S6125 - CHAPTER_CH_NEW] = {
        MEID_ヴェロニカ2, MEID_H_ヴェロニカ2, // 1
        MPID_魔器ルフレ女, MPID_H_魔器ルフレ女, // 2
        MPID_グレゴ, MPID_H_グレゴ, // 3
        MPID_リヒト, MPID_H_リヒト, // 4
        MPID_フィレイン, MPID_H_フィレイン, // 5
    },
    [CHAPTER_CH_S6131 - CHAPTER_CH_NEW] = {
        MPID_ニーナ, MPID_H_ニーナ, // 1
    },
    [CHAPTER_CH_S6132 - CHAPTER_CH_NEW] = {
        MPID_ハーディン, MPID_H_ハーディン, // 1
    },
    [CHAPTER_CH_S6133 - CHAPTER_CH_NEW] = {
        MPID_エリス, MPID_H_エリス, // 1
        MPID_マチス, MPID_H_マチス, // 2
    },
    [CHAPTER_CH_S6134 - CHAPTER_CH_NEW] = {
        MPID_開花チキ, MPID_H_開花チキ, // 1
        MPID_エリス, MPID_H_エリス, // 2
    },
    [CHAPTER_CH_S6135 - CHAPTER_CH_NEW] = {
        MPID_開花チキ, MPID_H_開花チキ, // 1
        MPID_ハーディン, MPID_H_ハーディン, // 2
    },
    [CHAPTER_CH_S7011 - CHAPTER_CH_NEW] = {
        MPID_ガンズ, MPID_H_ガンズ, // 1
    },
    [CHAPTER_CH_S7012 - CHAPTER_CH_NEW] = {
        MPID_キサラギ, MPID_H_キサラギ, // 1
        MPID_ディーア, MPID_H_ディーア, // 2
    },
    [CHAPTER_CH_S7013 - CHAPTER_CH_NEW] = {
        MPID_マトイ, MPID_H_マトイ, // 1
        MPID_キサラギ, MPID_H_キサラギ, // 2
    },
    [CHAPTER_CH_S7014 - CHAPTER_CH_NEW] = {
        MPID_魔器オフェリア, MPID_H_魔器オフェリア, // 1
        MPID_ディーア, MPID_H_ディーア, // 2
    },
    [CHAPTER_CH_S7015 - CHAPTER_CH_NEW] = {
        MPID_魔器オフェリア, MPID_H_魔器オフェリア, // 1
        MPID_ガンズ, MPID_H_ガンズ, // 2
        MPID_マトイ, MPID_H_マトイ, // 3
    },
    [CHAPTER_CH_S7031 - CHAPTER_CH_NEW] = {
        MPID_セリーヌ, MPID_H_セリーヌ, // 1
    },
    [CHAPTER_CH_S7032 - CHAPTER_CH_NEW] = {
        MPID_クロエ, MPID_H_クロエ, // 1
    },
    [CHAPTER_CH_S7033 - CHAPTER_CH_NEW] = {
        MPID_リュール女, MPID_H_リュール女, // 1
    },
    [CHAPTER_CH_S7034 - CHAPTER_CH_NEW] = {
        MPID_エーティエ, MPID_H_エーティエ, // 1
        MPID_魔器アルフレッド, MPID_H_魔器アルフレッド, // 2
    },
    [CHAPTER_CH_S7035 - CHAPTER_CH_NEW] = {
        MPID_セリーヌ, MPID_H_セリーヌ, // 1
        MPID_クロエ, MPID_H_クロエ, // 2
        MPID_リュール女, MPID_H_リュール女, // 3
        MPID_魔器アルフレッド, MPID_H_魔器アルフレッド, // 4
    },
    [CHAPTER_CH_S7041 - CHAPTER_CH_NEW] = {
        MPID_ユリシーズ, MPID_H_ユリシーズ, // 1
    },
    [CHAPTER_CH_S7042 - CHAPTER_CH_NEW] = {
        MPID_ルキノ, MPID_H_ルキノ, // 1
        MPID_ユリシーズ, MPID_H_ユリシーズ, // 2
    },
    [CHAPTER_CH_S7043 - CHAPTER_CH_NEW] = {
        MPID_ジョフレ, MPID_H_ジョフレ, // 1
    },
    [CHAPTER_CH_S7044 - CHAPTER_CH_NEW] = {
        MPID_開花エリンシア, MPID_H_開花エリンシア, // 1
        MPID_ジョフレ, MPID_H_ジョフレ, // 2
    },
    [CHAPTER_CH_S7045 - CHAPTER_CH_NEW] = {
        MPID_開花エリンシア, MPID_H_開花エリンシア, // 1
        MPID_ルキノ, MPID_H_ルキノ, // 2
        MPID_ユリシーズ, MPID_H_ユリシーズ, // 3
    },
    [CHAPTER_CH_S7051 - CHAPTER_CH_NEW] = {
        MPID_ヴァネッサ, MPID_H_ヴァネッサ, // 1
    },
    [CHAPTER_CH_S7052 - CHAPTER_CH_NEW] = {
        MPID_ヴァネッサ, MPID_H_ヴァネッサ, // 1
        MPID_シレーネ, MPID_H_シレーネ, // 2
    },
    [CHAPTER_CH_S7053 - CHAPTER_CH_NEW] = {
        MPID_ギリアム, MPID_H_ギリアム, // 1
        MPID_シレーネ, MPID_H_シレーネ, // 2
    },
    [CHAPTER_CH_S7054 - CHAPTER_CH_NEW] = {
        MPID_ギリアム, MPID_H_ギリアム, // 1
        MPID_魔器ターナ, MPID_H_魔器ターナ, // 2
    },
    [CHAPTER_CH_S7055 - CHAPTER_CH_NEW] = {
        MPID_ギリアム, MPID_H_ギリアム, // 1
        MPID_シレーネ, MPID_H_シレーネ, // 2
        MPID_ヴァネッサ, MPID_H_ヴァネッサ, // 3
        MPID_魔器ターナ, MPID_H_魔器ターナ, // 4
    },
    [CHAPTER_CH_S7061 - CHAPTER_CH_NEW] = {
        MPID_フェリクス, MPID_H_フェリクス, // 1
    },
    [CHAPTER_CH_S7062 - CHAPTER_CH_NEW] = {
        MPID_フェリクス, MPID_H_フェリクス, // 1
        MPID_シルヴァン, MPID_H_シルヴァン, // 2
    },
    [CHAPTER_CH_S7063 - CHAPTER_CH_NEW] = {
        MPID_魔器イングリット, MPID_H_魔器イングリット, // 1
    },
    [CHAPTER_CH_S7064 - CHAPTER_CH_NEW] = {
        MPID_レア, MPID_H_レア, // 1
    },
    [CHAPTER_CH_S7065 - CHAPTER_CH_NEW] = {
        MPID_魔器イングリット, MPID_H_魔器イングリット, // 1
        MPID_フェリクス, MPID_H_フェリクス, // 2
        MPID_シルヴァン, MPID_H_シルヴァン, // 3
        MPID_レア, MPID_H_レア, // 4
    },
    [CHAPTER_CH_S7071 - CHAPTER_CH_NEW] = {
        MPID_闇ライナス, MPID_H_闇ライナス, // 1
    },
    [CHAPTER_CH_S7072 - CHAPTER_CH_NEW] = {
        MPID_闇マリア, MPID_H_闇マリア, // 1
    },
    [CHAPTER_CH_S7073 - CHAPTER_CH_NEW] = {
        MPID_闇ハイドラ, MPID_H_闇ハイドラ, // 1
    },
    [CHAPTER_CH_S7074 - CHAPTER_CH_NEW] = {
        MPID_闇ベレス, MPID_H_闇ベレス, // 1
    },
    [CHAPTER_CH_S7075 - CHAPTER_CH_NEW] = {
        MPID_魔器闇クロム, MPID_H_魔器闇クロム, // 1
        MPID_闇ベレス, MPID_H_闇ベレス, // 2
        MPID_闇マリア, MPID_H_闇マリア, // 3
        MPID_闇ハイドラ, MPID_H_闇ハイドラ, // 4
    },
    [CHAPTER_CH_S7081 - CHAPTER_CH_NEW] = {
        MPID_ノア, MPID_H_ノア, // 1
    },
    [CHAPTER_CH_S7082 - CHAPTER_CH_NEW] = {
        MPID_ドロシー, MPID_H_ドロシー, // 1
    },
    [CHAPTER_CH_S7083 - CHAPTER_CH_NEW] = {
        MPID_ドロシー, MPID_H_ドロシー, // 1
        MPID_サウル, MPID_H_サウル, // 2
    },
    [CHAPTER_CH_S7084 - CHAPTER_CH_NEW] = {
        MPID_ノア, MPID_H_ノア, // 1
        MPID_開花フィル, MPID_H_開花フィル, // 2
    },
    [CHAPTER_CH_S7085 - CHAPTER_CH_NEW] = {
        MPID_マードック, MPID_H_マードック, // 1
        MPID_サウル, MPID_H_サウル, // 2
        MPID_ノア, MPID_H_ノア, // 3
        MPID_開花フィル, MPID_H_開花フィル, // 4
    },
    [CHAPTER_CH_S7091 - CHAPTER_CH_NEW] = {
        MPID_リュール男, MPID_H_リュール男, // 1
    },
    [CHAPTER_CH_S7092 - CHAPTER_CH_NEW] = {
        MPID_ディアマンド, MPID_H_ディアマンド, // 1
    },
    [CHAPTER_CH_S7093 - CHAPTER_CH_NEW] = {
        MPID_ラピス, MPID_H_ラピス, // 1
        MPID_シトリニカ, MPID_H_シトリニカ, // 2
    },
    [CHAPTER_CH_S7094 - CHAPTER_CH_NEW] = {
        MPID_魔器スタルーク, MPID_H_魔器スタルーク, // 1
        MPID_ディアマンド, MPID_H_ディアマンド, // 2
        MPID_シトリニカ, MPID_H_シトリニカ, // 3
    },
    [CHAPTER_CH_S7095 - CHAPTER_CH_NEW] = {
        MPID_魔器スタルーク, MPID_H_魔器スタルーク, // 1
        MPID_リュール男, MPID_H_リュール男, // 2
        MPID_シトリニカ, MPID_H_シトリニカ, // 3
    },
    [CHAPTER_CH_S7101 - CHAPTER_CH_NEW] = {
        MPID_総選挙セネリオ, MPID_H_総選挙セネリオ, // 1
    },
    [CHAPTER_CH_S7102 - CHAPTER_CH_NEW] = {
        MPID_総選挙ルフレ男, MPID_H_総選挙ルフレ男, // 1
    },
    [CHAPTER_CH_S7103 - CHAPTER_CH_NEW] = {
        MPID_総選挙カムイ女, MPID_H_総選挙カムイ女, // 1
    },
    [CHAPTER_CH_S7104 - CHAPTER_CH_NEW] = {
        MPID_総選挙グルヴェイグ, MPID_H_総選挙グルヴェイグ, // 1
    },
    [CHAPTER_CH_S7105 - CHAPTER_CH_NEW] = {
        MPID_総選挙グルヴェイグ, MPID_H_総選挙グルヴェイグ, // 1
        MPID_総選挙カムイ女, MPID_H_総選挙カムイ女, // 2
        MPID_総選挙ルフレ男, MPID_H_総選挙ルフレ男, // 3
        MPID_総選挙セネリオ, MPID_H_総選挙セネリオ, // 4
        MPID_ツィリル, MPID_H_ツィリル, // 5
    },
    [CHAPTER_CH_S7111 - CHAPTER_CH_NEW] = {
        MPID_フィー, MPID_H_フィー, // 1
    },
    [CHAPTER_CH_S7112 - CHAPTER_CH_NEW] = {
        MPID_パティ, MPID_H_パティ, // 1
        MPID_ファバル, MPID_H_ファバル, // 2
    },
    [CHAPTER_CH_S7113 - CHAPTER_CH_NEW] = {
        MPID_アリオーン, MPID_H_アリオーン, // 1
    },
    [CHAPTER_CH_S7114 - CHAPTER_CH_NEW] = {
        MPID_開花セティ, MPID_H_開花セティ, // 1
    },
    [CHAPTER_CH_S7115 - CHAPTER_CH_NEW] = {
        MPID_開花セティ, MPID_H_開花セティ, // 1
        MPID_アリオーン, MPID_H_アリオーン, // 2
        MPID_ファバル, MPID_H_ファバル, // 3
    },
};
