cmake_minimum_required(VERSION 3.3)
project(cpp_experiments)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES constantref.cpp)
add_executable(constantref ${SOURCE_FILES})