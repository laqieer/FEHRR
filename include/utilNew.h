#pragma once

#include <gba_types.h>

void FixTiles256(vu16 *tiles, u8 palref, int width, int height);
void ClearTilemap256(u16 * tm, int tileref);
void PutAppliedBitmap256(u16 * tm, int tileref, int width, int height);
