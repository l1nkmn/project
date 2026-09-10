cmake_minimum_required(VERSION 3.5)

set(PROJECT_NAME_STR Project)

project(${PROJECT_NAME_STR})

file(GLOB SOURCE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/src/*.hpp ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

add_executable(${PROJECT_NAME_STR} ${SOURCE_PATH})