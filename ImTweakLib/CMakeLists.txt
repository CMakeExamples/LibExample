cmake_minimum_required(VERSION 3.10)
project(ImTweakLib C)

add_library(imtweaklib STATIC imtweaklib.c)
target_compile_definitions(imtweaklib PRIVATE -DIM_TWEAK_LIB_EXPORTS)
target_include_directories(imtweaklib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
set_target_properties(imtweaklib PROPERTIES
        LANGUAGES C
        OUTPUT_NAME "imtweaklib"
        PREFIX "")

