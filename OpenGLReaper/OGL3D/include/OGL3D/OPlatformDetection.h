#pragma once

#ifdef _WIN64
//define something for Windows (64-bit)
#define TARGET_OS_WIN 1
#elif _WIN32
//define something for Windows (32-bit)
#define TARGET_OS_WIN 1
#elif __APPLE__
#include "TargetConditionals.h"
#if TARGET_OS_IPHONE && TARGET_OS_SIMULATOR
// define something for simulator
// (although, checking for TARGET_OS_IPHONE should not be required).
#elif TARGET_OS_IPHONE && TARGET_OS_MACCATALYST
// define something for Mac's Catalyst
#elif TARGET_OS_IPHONE
// define something for iphone  
#else
#define TARGET_OS_OSX 1
// define something for OSX
#endif
#elif __linux
// linux
#define TARGET_OS_LINUX 1
#elif __unix // all unices not caught above
// Unix
#elif __posix
// POSIX
#endif