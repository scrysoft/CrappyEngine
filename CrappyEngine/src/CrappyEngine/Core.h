#pragma once

#include "Events/Event.h"

#ifdef CE_PLATFORM_WINDOWS
	#ifdef CE_BUILD_DLL
		#define CRAPPYENGINE_API __declspec(dllexport)
	#else
		#define CRAPPYENGINE_API __declspec(dllimport)
	#endif	
#else
	#error CrappyEngine only supports Windows!
#endif

#define BIT(x) (1 << x)