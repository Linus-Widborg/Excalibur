cmake_minimum_required(VERSION 3.15)
project(Excalibur)

set(CMAKE_CXX_STANDARD 20)
set(Qt5_DIR "C:/Qt/5.12.6/mingw73_64/lib/cmake/Qt5")
add_subdirectory(test)

find_package(Qt5 COMPONENTS Core Widgets REQUIRED)

add_executable(Excalibur main.cpp)

target_link_libraries(Excalibur Qt5::Core Qt5::Widgets)