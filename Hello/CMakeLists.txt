cmake_minimum_required(VERSION 2.8)

project(hello CXX)

if(CMAKE_COMPILER_IS_GNUCXX)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}  -g -std=c++98 -pedantic -Wall -Wextra -Wfatal-errors -fprofile-arcs -ftest-coverage")
endif()

add_executable(hello hello.cpp)
