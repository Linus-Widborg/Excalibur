add_subdirectory(3pp/googletest)


set(Qt5_DIR "../3pp/Qt/5.12.6/mingw73_64/lib/cmake/Qt5")
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 COMPONENTS Core Widgets REQUIRED)

add_executable(runExcaliburTests knightTests.cpp
        ../src/Knight.cpp
        ../src/Knight.h
        ../src/Position.cpp
        ../src/Position.h)

target_link_libraries(runExcaliburTests gtest gtest_main Qt5::Core Qt5::Widgets)

