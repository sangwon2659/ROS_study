cmake_minimum_required (VERSION 2.6)

project (tutorial)

MESSAGE("Name of project is: " ${CMAKE_PROJECT_NAME})

include_directories ("include/my_math")

add_library (MathFunctions src/my_math/mysqrt.cpp)
add_executable (tutorial src/tutorial.cpp)

target_link_libraries (tutorial MathFunctions)