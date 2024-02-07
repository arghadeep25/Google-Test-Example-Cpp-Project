add_subdirectory(googletest)

add_executable(runTests test_main.cpp)
target_link_libraries(runTests PRIVATE gtest gtest_main)
target_include_directories(runTests PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../include/)
enable_testing()
include(CTest)
add_test(runTests ${CMAKE_CURRENT_SOURCE_DIR}/../build/test/runTests)