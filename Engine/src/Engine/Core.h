#pragma once

#ifndef __EMSCRIPTEN__

	#define SK_PLATFORM_WINDOWS

#endif // __EMSCRIPTEN__


#ifdef SK_PLATFORM_WINDOWS
	#ifdef SK_BUILD_DLL
		#define SK_API __declspec(dllexport)
	#else
		#define SK_API __declspec(dllimport)
	#endif // SK_BUILD_DLL


#else
	#define SK_API 
#endif // PlatformWindows
