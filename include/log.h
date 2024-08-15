#pragma once

#include <stdlib.h>
#include <string.h>

#include "mgba.h"
#include "nocashgba.h"
// AgbPrint in vba series is not supported here because it is implemented based on a custom swi which breaks on hardware.

#define LogInit mgba_open

#define LogPrint(string) { mgba_printf(MGBA_LOG_INFO, string); \
                            NoCashGBAPrint(string); }
#define LogPrintf(format, ...) { mgba_printf(MGBA_LOG_INFO, format, __VA_ARGS__); \
                            NoCashGBAPrintf(format, __VA_ARGS__); }

#define LogFatal(string) { mgba_printf(MGBA_LOG_FATAL, string); \
                            NoCashGBAPrint("[FATAL] "string); \
                            abort(); }

#define LogFatalf(format, ...) { mgba_printf(MGBA_LOG_FATAL, format, __VA_ARGS__); \
                            NoCashGBAPrintf("[FATAL] "format, __VA_ARGS__); \
                            abort(); };

#define LogError(string) { mgba_printf(MGBA_LOG_ERROR, string); \
                            NoCashGBAPrint("[ERROR] "string); }
#define LogErrorf(format, ...) { mgba_printf(MGBA_LOG_ERROR, format, __VA_ARGS__); \
                            NoCashGBAPrintf("[ERROR] "format, __VA_ARGS__); }

#define LogWarn(string) { mgba_printf(MGBA_LOG_WARN, string); \
                            NoCashGBAPrint("[WARN] "string); }
#define LogWarnf(format, ...) { mgba_printf(MGBA_LOG_WARN, format, __VA_ARGS__); \
                            NoCashGBAPrintf("[WARN] "format, __VA_ARGS__); }

#define LogInfo(string) { mgba_printf(MGBA_LOG_INFO, string); \
                            NoCashGBAPrint("[INFO] "string); }
#define LogInfof(format, ...) { mgba_printf(MGBA_LOG_INFO, format, __VA_ARGS__); \
                            NoCashGBAPrintf("[INFO] "format, __VA_ARGS__); }

#define LogDebug(string) { mgba_printf(MGBA_LOG_DEBUG, string); \
                            NoCashGBAPrint("[DEBUG] "string); }
#define LogDebugf(format, ...) { mgba_printf(MGBA_LOG_DEBUG, format, __VA_ARGS__); \
                            NoCashGBAPrintf("[DEBUG] "format, __VA_ARGS__); }

#define __FILENAME__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)

#define Print(string) LogPrintf("%s:%d(%s): %s", __FILENAME__, __LINE__, __func__, string)
#define Printf(format, ...) LogPrintf("%s:%d(%s): "format, __FILENAME__, __LINE__, __func__, __VA_ARGS__)

#define Fatal(string) LogFatalf("%s:%d(%s): %s", __FILENAME__, __LINE__, __func__, string)
#define Fatalf(format, ...) LogFatalf("%s:%d(%s): "format, __FILENAME__, __LINE__, __func__, __VA_ARGS__)

#define Error(string) LogErrorf("%s:%d(%s): %s", __FILENAME__, __LINE__, __func__, string)
#define Errorf(format, ...) LogErrorf("%s:%d(%s): "format, __FILENAME__, __LINE__, __func__, __VA_ARGS__)

#define Warn(string) LogWarnf("%s:%d(%s): %s", __FILENAME__, __LINE__, __func__, string)
#define Warnf(format, ...) LogWarnf("%s:%d(%s): "format, __FILENAME__, __LINE__, __func__, __VA_ARGS__)

#define Info(string) LogInfof("%s:%d(%s): %s", __FILENAME__, __LINE__, __func__, string)
#define Infof(format, ...) LogInfof("%s:%d(%s): "format, __FILENAME__, __LINE__, __func__, __VA_ARGS__)

#define Debug(string) LogDebugf("%s:%d(%s): %s", __FILENAME__, __LINE__, __func__, string)
#define Debugf(format, ...) LogDebugf("%s:%d(%s): "format, __FILENAME__, __LINE__, __func__, __VA_ARGS__)

#define Assert(condition) if (!(condition)) { Fatal("Assertion failed: " #condition); }
#define Assertf(condition, format, ...) if (!(condition)) { Fatalf("Assertion failed: " #condition ", Debug info: " format, __VA_ARGS__); }
