add_subdirectory(3pp/googletest)

add_executable(runExcaliburTests excaliburTests.cpp)

target_link_libraries(runExcaliburTests gtest gtest_main)

