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
