cmake_minimum_required(VERSION 3.6)
project(OOP)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Product.cpp Product.h Buy.cpp Buy.h Check.cpp Check.h)
add_executable(OOP ${SOURCE_FILES})