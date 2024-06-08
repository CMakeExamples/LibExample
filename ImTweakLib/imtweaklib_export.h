#pragma once

#ifdef IM_TWEAK_LIB_BUILD_SHARED
    #if _WIN32
        #ifdef IM_TWEAK_LIB_EXPORTS
            #define IM_TWEAK_LIB_API __declspec(dllexport)
        #else
            #define IM_TWEAK_LIB_API __declspec(dllimport)
        #endif
    #else
        #define IM_TWEAK_LIB_API
    #endif //! _WIN32
#else
#define IM_TWEAK_LIB_API
#endif