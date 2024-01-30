cmake_minimum_required(VERSION 3.24)
project(SandPile)

set(CMAKE_CXX_STANDARD 20)

add_executable(SandPile main.cpp bmp.cpp pileChanging.cpp parser.h bmp.h pileChanging.h parser.cpp)
