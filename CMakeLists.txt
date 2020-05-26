cmake_minimum_required (VERSION 3.12 FATAL_ERROR)
set (CMAKE_CXX_STANDARD 11)
find_package(fmt CONFIG REQUIRED)

add_library(calcstatic STATIC
    calc.cpp
)

add_library(calcdyn SHARED
    calc.cpp
)

add_executable (exectest 
    test.cpp
)

target_link_libraries(exectest PRIVATE calcdyn fmt::fmt)