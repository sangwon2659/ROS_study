cmake_minimum_required (VERSION 2.6)

project(tutorial)

add_library (MathFunctions mysqrt.cpp)
add_executable (tutorial tutorial.cpp)

target_link_libraries (tutorial MathFunctions)
