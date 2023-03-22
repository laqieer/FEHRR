
#include "map.h"
#include "common.h"

#include "hardware.h"
#include "util.h"
#include "bm.h"
#include "bmNew.h"
#include "unit.h"
#include "mapwork.h"
#include "faction.h"
#include "trap.h"
#include "chapterinfo.h"

#include "constants/videoalloc_global.h"
#include "constants/chapters.h"
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

    if (GetChapterInPlaySt(&gPlayStNew) == CHAPTER_UNK_22)
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

void ApplyChapterMapPalettesNew(void)
{
    ApplyPalettes(ChapterAssets[GetChapterInfo(GetChapterInPlaySt(&gPlayStNew))->asset_pal], BGPAL_TILESET, 10);
}

void ApplyChapterMapPalettesOld(void)
{
    ApplyChapterMapPalettesNew();
}
