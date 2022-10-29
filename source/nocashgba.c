#include <gba_types.h>
#include <stdarg.h>
#include <stdio.h>

#define NOCASHGBAPRINTADDR1 0x4FFFA10

void NoCashGBAPrint(const char *pBuf)
{
    *(volatile u32 *)NOCASHGBAPRINTADDR1 = (u32)pBuf;
}

void NoCashGBAPrintf(const char *pBuf, ...)
{
    char bufPrint[0x100];
    va_list vArgv;
    va_start(vArgv, pBuf);
    vsprintf(bufPrint, pBuf, vArgv);
    va_end(vArgv);
    NoCashGBAPrint(bufPrint);
}
