cmake_minimum_required(VERSION 3.15)
project(Excalibur)

set(CMAKE_CXX_STANDARD 20)
add_subdirectory(test)

set(Qt5_DIR "3pp/Qt/5.12.6/mingw73_64/lib/cmake/Qt5")
set(CMAKE_AUTOMOC ON)

find_package(Qt5 COMPONENTS Core Widgets REQUIRED)

add_executable(Excalibur main.cpp src/MainWindow.cpp src/MainWindow.h src/GameWindow.cpp src/GameWindow.h src/GameBoard.cpp src/GameBoard.h src/Knight.cpp src/Knight.h)

target_link_libraries(Excalibur Qt5::Core Qt5::Widgets)

file(COPY images DESTINATION ${CMAKE_CURRENT_BINARY_DIR})