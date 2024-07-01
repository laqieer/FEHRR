
#include "map.h"
#include "prelude.h"

#include "hardware.h"
#include "util.h"
#include "bm.h"
#include "bmNew.h"
#include "unit.h"
#include "mapwork.h"
#include "faction.h"
#include "trap.h"
#include "chapterinfo.h"
#include "chapterNew.h"

#include "constants/videoalloc_global.h"
#include "constants/chapters.h"
#include "chapters.h"
#include "constants/terrains.h"

enum { MAP_POOL_SIZE = 0x7B8 };
enum { TILESET_METATILES = 0x400 };

void MapInit(u8 * data, u8 *** rowsOut, int width, int height);
void UnpackRawMap(void * buf, int chapter);
void InitMetatilesMap(void);
void RenderMapColumn(u16 xOffset);
void RenderMapLine(u16 yOffset);

extern u16 gMapBuf[]; // ??

extern struct Vec2i gMapSize;

extern u8 ** gMapUnit;
extern u8 ** gMapTerrain;
extern u8 ** gMapMovement;
extern u8 ** gMapRange;
extern u8 ** gMapFog;
extern u8 ** gMapHidden;
extern u8 ** gMapOther;

extern u8 ** sInitializingMap;

extern u8 sMapUnitData[MAP_POOL_SIZE];
extern u8 sMapTerrainData[MAP_POOL_SIZE];
extern u8 sMapMovementData[MAP_POOL_SIZE];
extern u8 sMapRangeData[MAP_POOL_SIZE];
extern u8 sMapFogData[MAP_POOL_SIZE];
extern u8 sMapHiddenData[MAP_POOL_SIZE];
extern u8 sMapOtherData[MAP_POOL_SIZE];
extern u16 sTilesetInfo[TILESET_METATILES*4 + (TILESET_METATILES+1)/2];
extern u16 sMapMetatiles[MAP_POOL_SIZE];

void InitMapForChapterNew(int chapter)
{
    UnpackRawMap(gMapBuf, chapter);
    ApplyChapterMapGraphics(chapter);

    MapInit(sMapUnitData,     &gMapUnit,     gMapSize.x, gMapSize.y);
    MapInit(sMapTerrainData,  &gMapTerrain,  gMapSize.x, gMapSize.y);
    MapInit(sMapMovementData, &gMapMovement, gMapSize.x, gMapSize.y);
    MapInit(sMapRangeData,    &gMapRange,    gMapSize.x, gMapSize.y);
    MapInit(sMapFogData,      &gMapFog,      gMapSize.x, gMapSize.y);
    MapInit(sMapHiddenData,   &gMapHidden,   gMapSize.x, gMapSize.y);
    MapInit(sMapOtherData,    &gMapOther,    gMapSize.x, gMapSize.y);

    MapFill(gMapUnit, 0);
    MapFill(gMapTerrain, 0);

    InitMetatilesMap();
    ApplyEnabledMapChanges();
    RefreshTerrainMap();

    if (GetChapterInPlaySt(&gPlayStNew) == CHAPTER_14X)
        func_fe6_080187EC();
}

void InitMapForChapterOld(int chapter)
{
    InitMapForChapterNew(chapter);
}

void func_fe6_080188F4New(void)
{
    UnpackRawMap(gMapBuf, GetChapterInPlaySt(&gPlayStNew));

    InitMetatilesMap();
    ApplyEnabledMapChanges();
    RefreshTerrainMap();

    func_fe6_080187EC();
}

void func_fe6_080188F4Old(void)
{
    func_fe6_080188F4New();
}

void UnpackRawMapNew(void * buf, int chapter)
{
    // Decompress map data
    Decompress(GetChapterMap(chapter), buf);

    // Setting map size
    gMapSize.x = ((u8 *) buf)[0];
    gMapSize.y = ((u8 *) buf)[1];

    // Decompress tileset info
    if(IsChapterNew(chapter) && chapter != CHAPTER_CH_S0000)
    {
        // preserve 1st metatile for subtitlehelp text background
        sTilesetInfo[0] = 0;
        sTilesetInfo[1] = 0;
        sTilesetInfo[2] = 0;
        sTilesetInfo[3] = 0;
        // map tiles start from 2nd metatile
        Decompress(ChapterMapTerrains[chapter - CHAPTER_CH_NEW], &sTilesetInfo[4]);
    }
    else{
        Decompress(IsChapterNew(chapter) ? ChapterMapTilesets[chapter - CHAPTER_CH_NEW] : ChapterAssets[GetChapterInfo(chapter)->asset_tileset], sTilesetInfo);
    }

    // Decompress terrain info
    if(IsChapterNew(chapter) && ChapterMapTerrains[chapter - CHAPTER_CH_NEW])
        Decompress(ChapterMapTerrains[chapter - CHAPTER_CH_NEW], &sTilesetInfo[TILESET_METATILES*4]);

    // Setting max camera offsets
    gBmSt.camera_max.x = gMapSize.x*16 - DISPLAY_WIDTH;
    gBmSt.camera_max.y = gMapSize.y*16 - DISPLAY_HEIGHT;
}

void UnpackRawMapOld(void * buf, int chapter)
{
    UnpackRawMapNew(buf, chapter);
}

void ApplyChapterMapGraphicsNew(int chapter)
{
    // Decompress tileset graphics (part 1)
    Decompress(
        IsChapterNew(chapter) ?
        ChapterMapGraphics[chapter - CHAPTER_CH_NEW] :
        ChapterAssets[GetChapterInfo(chapter)->asset_img_a],
        (void *) BG_VRAM + CHR_SIZE * BGCHR_TILESET_A);

    // Decompress tileset graphics (part 2, if it exists)
    // New chapters don't have part 2
    if (ChapterAssets[GetChapterInfo(chapter)->asset_img_b])
        Decompress(
            ChapterAssets[GetChapterInfo(chapter)->asset_img_b],
            (void *) BG_VRAM + CHR_SIZE * BGCHR_TILESET_B);

    // Apply tileset palette
    ApplyPalettes(
        IsChapterNew(chapter) ?
        ChapterMapPalettes[chapter - CHAPTER_CH_NEW] :
        ChapterAssets[GetChapterInfo(chapter)->asset_pal],
        BGPAL_TILESET, 10);
}

void ApplyChapterMapGraphicsOld(int chapter)
{
    ApplyChapterMapGraphicsNew(chapter);
}

void ApplyChapterMapPalettesNew(void)
{
    int chapter = GetChapterInPlaySt(&gPlayStNew);

    ApplyPalettes(IsChapterNew(chapter) ? ChapterMapPalettes[chapter - CHAPTER_CH_NEW] : ChapterAssets[GetChapterInfo(chapter)->asset_pal], BGPAL_TILESET, 10);
}

void ApplyChapterMapPalettesOld(void)
{
    ApplyChapterMapPalettesNew();
}

void ClearFirstMapMetaTileNew(void)
{
    u16 const * tile = sTilesetInfo;

    SetBlankChr(BGCHR_TILESET_A + (*tile++ & 0x3FF));
    SetBlankChr(BGCHR_TILESET_A + (*tile++ & 0x3FF));
    SetBlankChr(BGCHR_TILESET_A + (*tile++ & 0x3FF));
    SetBlankChr(BGCHR_TILESET_A + (*tile++ & 0x3FF));

    // set backdrop color to black
    SetBackdropColor(RGB(0, 0, 0));
}

void ClearFirstMapMetaTileOld(void)
{
    ClearFirstMapMetaTileNew();
}
