#pragma once
#ifndef INC_MAIN_H
#define INC_MAIN_H


#pragma warning (disable: 4005 4996)

#include <sdk/amx/amx.h>
#include <sdk/plugincommon.h>

typedef void (*logprintf_t)(char* format, ...);

#ifndef NULL
	#define NULL 0
#endif


#endif // INC_MAIN_H
