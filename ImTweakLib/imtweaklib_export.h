#pragma once

#ifdef OPTION_IM_TWEAK_LIB_BUILD_SHARED
    #if _WIN32
        #ifdef IM_TWEAK_LIB_EXPORTS
            #define IM_TWEAK_LIB_API __declspec(dllexport)
        #else
            #define IM_TWEAK_LIB_API __declspec(dllimport)
        #endif
    #else
        #define IM_TWEAK_LIB_API
    #endif
#else
#   define IM_TWEAK_LIB_API
#endif