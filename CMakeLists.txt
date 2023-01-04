cmake_minimum_required(VERSION 3.23)
project(FT2)

set(CMAKE_CXX_STANDARD 14)

add_executable(FT2 main.cpp Composite.cpp Composite.h Leaf.cpp Leaf.h Component.h)
