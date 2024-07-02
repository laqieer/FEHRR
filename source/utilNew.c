#include "utilNew.h"

#include "prelude.h"
#include "hardware.h"

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

void SetBlendTargetANew(int bg0, int bg1, int bg2, int bg3, int obj)
{
    gDispIo.blend_ct.target1_enable_bg0 = bg0;
    gDispIo.blend_ct.target1_enable_bg1 = bg1;
    gDispIo.blend_ct.target1_enable_bg2 = bg2;
    gDispIo.blend_ct.target1_enable_bg3 = bg3;
    gDispIo.blend_ct.target1_enable_obj = obj;
}

void SetBlendTargetBNew(int bg0, int bg1, int bg2, int bg3, int obj)
{
    gDispIo.blend_ct.target2_enable_bg0 = bg0;
    gDispIo.blend_ct.target2_enable_bg1 = bg1;
    gDispIo.blend_ct.target2_enable_bg2 = bg2;
    gDispIo.blend_ct.target2_enable_bg3 = bg3;
    gDispIo.blend_ct.target2_enable_obj = obj;
}

const char sStrZeroUtf8[] = "０";
const char sStrDashUtf8[] = "ー";

int NumberToStringNew(int number, char * buf)
{
    int numOff, numStart;

    numOff = 0;

    if (number == 0)
    {
        *buf++ = sStrZeroUtf8[0];
        *buf++ = sStrZeroUtf8[1];
        *buf++ = sStrZeroUtf8[2];
        *buf++ = '\0';

        return 1;
    }

    if (number < 0)
    {
        buf[0] = sStrDashUtf8[0];
        buf[1] = sStrDashUtf8[1];
        buf[2] = sStrDashUtf8[2];

        number = -number;
        numOff = 3;
    }

    if (number > 99999)
        numOff += 15;
    else if (number > 9999)
        numOff += 12;
    else if (number > 999)
        numOff += 9;
    else if (number > 99)
        numOff += 6;
    else if (number > 9)
        numOff += 3;

    numStart = numOff;

    while (number > 0)
    {
        int rem = DivRem(number, 10);

        buf[numOff]   = sStrZeroUtf8[0];
        buf[numOff+1] = sStrZeroUtf8[1];
        buf[numOff+2] = sStrZeroUtf8[2] + rem;

        number = Div(number, 10);
        numOff -= 3;
    }

    *(buf + numStart + 3) = '\0';
    return (numStart / 3) + 1;
}

int NumberToStringOld(int number, char * buf)
{
    return NumberToStringNew(number, buf);
}
