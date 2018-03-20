cmake_minimum_required(VERSION 2.8)
project(HELLO)
set(SRC_LIST main.c)
message(${PROJECT_BINARY_DIR})
message(${PROJECT_SOURCE_DIR})
add_executable(hello ${SRC_LIST})

