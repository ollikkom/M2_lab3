cmake_minimum_required(VERSION 3.6)
project(M2_lab3)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp TInteger.h TInteger.cpp)
add_executable(M2_lab3 ${SOURCE_FILES})