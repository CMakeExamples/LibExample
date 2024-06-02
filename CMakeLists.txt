cmake_minimum_required(VERSION 3.10)
project(LibExample)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

option(OPTION_IM_TWEAK_LIB_BUILD_SHARED "specify the tweak lib build type" ON)

add_subdirectory(ImStaticLib)
add_subdirectory(ImSharedLib)
add_subdirectory(ImTweakLib)
add_subdirectory(ImApp)
