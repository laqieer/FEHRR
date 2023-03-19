#pragma once

#include <gba_types.h>

void DebugPutFmtNew(u16 * tm, char const * fmt, ...);
void DebugPrintFmtNew(char const * fmt, ...);
void DebugPutObjFmt(int x, int y, char const * fmt, ...);
