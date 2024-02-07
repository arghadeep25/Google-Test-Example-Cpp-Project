cmake_minimum_required(VERSION 3.12)
project(gtest_example)
set(CMAKE_CXX_STANDARD 17)
add_subdirectory(src)

enable_testing()
add_subdirectory(test)