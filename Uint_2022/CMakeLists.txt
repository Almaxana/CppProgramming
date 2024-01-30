cmake_minimum_required(VERSION 3.24)
project(Uint_2022)

set(CMAKE_CXX_STANDARD 20)
add_executable(${CMAKE_PROJECT_NAME}_run lib/number.h lib/number.cpp)

add_executable(Uint_2022 lib/number.cpp)
add_subdirectory(Google_tests)

set(CMAKE_CXX_FLAGS "-g")

target_link_libraries(${CMAKE_PROJECT_NAME}_run ${CMAKE_PROJECT_NAME}_lib)