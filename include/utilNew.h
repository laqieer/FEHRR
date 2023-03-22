#pragma once

#include <gba_types.h>

#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))

void FixTiles256(vu16 *tiles, u8 palref, int width, int height);
void ClearTilemap256(u16 * tm, int tileref);
void PutAppliedBitmap256(u16 * tm, int tileref, int width, int height);

void SetBlendTargetANew(int bg0, int bg1, int bg2, int bg3, int obj);
void SetBlendTargetBNew(int bg0, int bg1, int bg2, int bg3, int obj);
