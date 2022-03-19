#pragma once

#ifdef CPS_PLATFORM_WINDOWS
	#ifdef CPS_BUILD_DLL
		#define CPS_API __declspec(dllexport)
	#else
		#define CPS_API __declspec(dllimport)
	#endif 
#else
	#error Chips only support Windows!
#endif 
