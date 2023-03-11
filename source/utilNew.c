#include "utilNew.h"

#include "common.h"

#include "log.h"

void FixTiles256(vu16 *tiles, u8 palref, int width, int height)
{
    Assert(tiles && width && height);

    for(int i = 0; i < width * height / 2; i++)
    {
        if(tiles[i] & 0xff)
        {
            tiles[i] += 16 * palref;
        }
        if(tiles[i] >> 8)
        {
            tiles[i] += (16 * palref) << 8;
        }
    }
}

void ClearTilemap256(u16 * tm, int tileref)
{
    Assert(tm);

    for (int i = 0; i < 32; i++)
        for (int j = 0; j < 32; j++)
            tm[i + j * 32] = tileref;
}

void PutAppliedBitmap256(u16 * tm, int tileref, int width, int height)
{
    Assert(tm && width && height);

    for (int i = 0; i < width; i++)
        for (int j = 0; j < height; j++)
            tm[i + j * 32] = tileref + i + j * width;
}
