# CMake LibExample

此示例包含4个子工程，其中ImApp为一个可执行项目, ImStaticLib为静态库工程，ImSharedLib为动态库工程， ImTweakLib则可以根据根目录中CMakeLists.txt文件中的OPTION_IM_TWEAK_LIB_BUILD_SHARED选项开决定编译为静态库还是动态库.
