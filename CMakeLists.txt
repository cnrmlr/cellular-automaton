project(cellular-automaton)
cmake_minimum_required(VERSION 3.21)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)
add_subdirectory(src/library)
add_subdirectory(src/app)
