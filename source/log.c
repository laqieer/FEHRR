#include "common.h"

#include "log.h"

void LogInit()
{
    mgba_open();
    Info("Log initialized");
}
