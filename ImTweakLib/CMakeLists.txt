cmake_minimum_required(VERSION 3.10)
project(ImTweakLib LANGUAGES C)
include(CMakePrintHelpers)

if(OPTION_IM_TWEAK_LIB_BUILD_SHARED)
    add_library(imtweaklib SHARED imtweaklib.c)
    # 必须将IM_TWEAK_LIB_BUILD_SHARED设为public,以便引用此库的工程能够使用此预定义宏,在include头文件的时候使用导入表(lib文件)
    target_compile_definitions(imtweaklib PUBLIC -DIM_TWEAK_LIB_BUILD_SHARED)
    target_compile_definitions(imtweaklib PRIVATE -DIM_TWEAK_LIB_EXPORTS)
else()
    add_library(imtweaklib STATIC imtweaklib.c)
endif()

target_include_directories(imtweaklib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
set_target_properties(imtweaklib PROPERTIES
        LANGUAGES C
        OUTPUT_NAME "imtweaklib"
        PREFIX "")

