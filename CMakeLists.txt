cmake_minimum_required(VERSION 3.15)
project(Excalibur)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(test)

add_executable(Excalibur main.cpp)