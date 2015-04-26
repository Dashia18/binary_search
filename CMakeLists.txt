cmake_minimum_required(VERSION 2.6)
project(binary_search)

set(CMAKE_BUILD_TYPE Debug)

set(SOURCES . main.cpp binary_search.cpp)
set(HEADERS . binary_search.hpp)

add_executable(binary_search ${SOURCES} ${HEADERS})
