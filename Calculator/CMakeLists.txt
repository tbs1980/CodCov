cmake_minimum_required(VERSION 2.8)

project(Calculator CXX)

if(CMAKE_COMPILER_IS_GNUCXX)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}  -g -std=c++98 -pedantic -Wall -Wextra -Wfatal-errors -fprofile-arcs -ftest-coverage")
endif()

include_directories(${CMAKE_SOURCE_DIR}/Calculator)

add_executable(testCalculator testCalculator.cpp)
