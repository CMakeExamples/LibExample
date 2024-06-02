cmake_minimum_required(VERSION 3.10)
project(ImStaticLib)
add_library(imstaticlib imstaticlib.c)
target_include_directories(imstaticlib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
