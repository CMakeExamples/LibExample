# CMake LibExample

This Repo is an example of cmake based c/c++ project, aims to show how to use cmake to config c/c++ static library, or shared library, or code support both two, which in this example named ImTweakLib.

This Example contains 4 sub Project:
- ImApp: An Executable Project.
- ImStaticLib: Static Lib Project.
- ImSharedLib, Shared Lib Projet.
- ImTweakLib, could compiled to static lib or shared lib. it is based on a CMake Option named `OPTION_IM_TWEAK_LIB_BUILD_SHARED` in root cmake project file. if it turns to `ON`,  it will generate .dll file, if `OFF`, it'll generate .lib file

## REFERENCE:
https://github.com/liu-yabin/shared_lib_test
