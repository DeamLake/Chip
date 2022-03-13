#pragma once

#ifdef CPS_PLATFORM_WINDOWS
	#ifdef CPS_BUILD_DLL
		#define CHIPS_API __declspec(dllexport)
	#else
		#define CHIPS_API __declspec(dllimport)
	#endif 
#else
	#error Chips only support Windows!
#endif 
