add_subdirectory(googletest)
message(STATUS "------------- BUILDING TEST -------------")

FILE(GLOB EXAMPLE_FILES "${CMAKE_SOURCE_DIR}/test/*.cpp")

foreach (EXAMPLE_FILE IN LISTS EXAMPLE_FILES)
	get_filename_component(EXAMPLE_FILE_WE ${EXAMPLE_FILE} NAME_WE)
	message("TEST NAME: ${EXAMPLE_FILE_WE}")
	add_executable(${EXAMPLE_FILE_WE} ${EXAMPLE_FILE})
	target_link_libraries(${EXAMPLE_FILE_WE} PRIVATE gtest gtest_main)
	target_include_directories(${EXAMPLE_FILE_WE} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../include/)
	add_test(${EXAMPLE_FILE_WE} ${CMAKE_CURRENT_SOURCE_DIR}/../build/test/${EXAMPLE_FILE_WE})
endforeach()

enable_testing()
include(CTest)
set_tests_properties(${TESTS} PROPERTIES TIMEOUT 1)