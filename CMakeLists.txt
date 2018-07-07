cmake_minimum_required(VERSION 3.8)
project(MyTonaTest)

set(CMAKE_CXX_STANDARD 11)

include_directories(./descriptions)
include_directories(./solutions)

set(SOURCE_FILES main.cpp Task.h Task.cpp Solution.cpp Solution.h)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
add_executable(MyTonaTest ${SOURCE_FILES} Task.h)
