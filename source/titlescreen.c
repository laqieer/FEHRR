#include "proc.h"
#include "hardware.h"
#include "util.h"
#include "textNew.h"

#include "gfx_misc.h"

extern const unsigned int TitleScreenBG1_Tiles[];
extern const unsigned int TitleScreenOBJ_Tiles[];

void func_fe6_0809B398(ProcPtr proc);
void func_fe6_0809B4A8(ProcPtr proc);

const unsigned int * const TitleScreenBG1Tiles[] = {
    [LANGUAGE_JAPANESE] = TitleScreenBG1_Tiles,
    [LANGUAGE_ENGLISH] = TitleScreenBG1_EN_SoSTiles,
    [LANGUAGE_CHINESE] = TitleScreenBG1_CNTiles,
};

const unsigned int * const TitleScreenOBJTiles[] = {
    [LANGUAGE_JAPANESE] = TitleScreenOBJ_Tiles,
    [LANGUAGE_ENGLISH] = TitleScreenOBJ_ENTiles,
    [LANGUAGE_CHINESE] = TitleScreenOBJ_CNTiles,
};

void decompressTitleScreenBG1(ProcPtr proc) {
    func_fe6_0809B398(proc);
    Decompress(TitleScreenBG1Tiles[GetLangNew()], ((void *) VRAM) + GetBgChrOffset(0));
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
    Decompress(TitleScreenOBJTiles[GetLangNew()], OBJ_VRAM0);
}

const ProcFunc pDecompressTitleScreenOBJ_1 = decompressTitleScreenOBJ;
const ProcFunc pDecompressTitleScreenOBJ_2 = decompressTitleScreenOBJ;
