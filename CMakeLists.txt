cmake_minimum_required(VERSION 3.3)
project(Cpp_Interview_Questions)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(Cpp_Interview_Questions ${SOURCE_FILES})