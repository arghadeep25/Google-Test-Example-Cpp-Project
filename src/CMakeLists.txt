add_executable(MyCalcProject main.cpp)
add_executable(Queue queue_run.cpp)
target_include_directories(MyCalcProject PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../include/)
target_include_directories(Queue PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../include/)