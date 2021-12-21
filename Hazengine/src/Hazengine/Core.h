#pragma once

#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define HAZENGINE_API __declspec(dllexport)
	#else
		#define HAZENGINE_API __declspec(dllimport)
	#endif 
#else
	#error Hazengine only supports Windows!
#endif