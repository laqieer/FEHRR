#include "proc.h"
#include "hardware.h"
#include "util.h"
#include "textNew.h"

#include "constants/videoalloc_global.h"

#include "gfx_misc.h"

#define BGCHR_TITLE_SCREEN_GAME_SERIES 416
#define OBCHR_TITLE_SCREEN_GAME_TITLE 64
#define OBCHR_TITLE_SCREEN_COPYRIGHT 192

extern const unsigned int TitleScreenBG1_Tiles[];
extern const unsigned int TitleScreenOBJ_Tiles[];

void func_fe6_0809B398(ProcPtr proc);
void func_fe6_0809B4A8(ProcPtr proc);

const unsigned int * const TitleScreenGameSeriesTiles[] = {
    [LANGUAGE_ENGLISH] = TitleScreenGameSeries_ENTiles,
    [LANGUAGE_CHINESE] = TitleScreenGameSeries_CNTiles,
};

const unsigned int * const TitleScreenGameTitleTiles[] = {
    [LANGUAGE_JAPANESE] = TitleScreenGameTitle_JATiles,
    [LANGUAGE_ENGLISH] = TitleScreenGameTitle_ENTiles,
    [LANGUAGE_CHINESE] = TitleScreenGameTitle_CNTiles,
};

#define TitleScreenGameTitlePal TitleScreenGameTitle_JAPal

void decompressTitleScreenBG1(ProcPtr proc) {
    func_fe6_0809B398(proc);
    if (GetLangNew() != LANGUAGE_JAPANESE)
        Decompress(TitleScreenGameSeriesTiles[GetLangNew()], ((void *) VRAM) + GetBgChrOffset(0) + BGCHR_TITLE_SCREEN_GAME_SERIES * CHR_SIZE);
    Decompress(TitleScreenMotifTiles, ((void *) VRAM) + GetBgChrOffset(0));
    ApplyPalette(TitleScreenMotifPal, 0);
    ApplyPalette(TitleScreenMotifPal, 5);
    ApplyPalette(TitleScreenMotifPal, 6);
    ApplyPalette(TitleScreenMotifPal, 7);
}

const ProcFunc pDecompressTitleScreenBG1_1 = decompressTitleScreenBG1;
const ProcFunc pDecompressTitleScreenBG1_2 = decompressTitleScreenBG1;

void decompressTitleScreenOBJ(ProcPtr proc) {
    func_fe6_0809B4A8(proc);
    Decompress(TitleScreenGameTitleTiles[GetLangNew()], OBJ_VRAM0 + OBCHR_TITLE_SCREEN_GAME_TITLE * CHR_SIZE);
    ApplyObPalette(TitleScreenGameTitlePal, 3);
    Decompress(TitleScreenCopyrightTiles, OBJ_VRAM0 + OBCHR_TITLE_SCREEN_COPYRIGHT * CHR_SIZE);
}

const ProcFunc pDecompressTitleScreenOBJ_1 = decompressTitleScreenOBJ;
const ProcFunc pDecompressTitleScreenOBJ_2 = decompressTitleScreenOBJ;

const u16 TitleScreenCopyrightOBJTemplate[] = {
    // 7, // OBJ amount
    0x4000, 0x4190, 0x20C0, // OBJ 0
    0x4000, 0x41B0, 0x20C4, // OBJ 1
    0x4000, 0x41D0, 0x20C8, // OBJ 2
    0x4000, 0x41F0, 0x20CC, // OBJ 3
    0x4000, 0x4010, 0x20D0, // OBJ 4
    0x4000, 0x4030, 0x20D4, // OBJ 5
    0x4000, 0x4050, 0x20D8 // OBJ 6
};
