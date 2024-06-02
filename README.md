# CMake LibExample

此示例包含4个子工程:
- ImApp, 可执行项目
- ImStaticLib, 静态库工程
- ImSharedLib, 动态库工程
- ImTweakLib, 可以根据根目录中CMakeLists.txt文件中的OPTION_IM_TWEAK_LIB_BUILD_SHARED选项开决定编译为静态库还是动态库.

## 参考项目:
https://github.com/liu-yabin/shared_lib_test
