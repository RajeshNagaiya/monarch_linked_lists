cmake_minimum_required(VERSION 2.8.9)
project (lists_app)
include_directories(include)
add_library(lists_data SHARED src/lists.cpp)

add_executable(test test/test.cpp)
target_link_libraries(test lists_data)