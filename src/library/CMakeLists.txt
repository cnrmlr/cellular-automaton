project(cellular-automaton-library)
cmake_minimum_required(VERSION 3.21)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)
add_library(cellular-automaton-library STATIC cellular_automaton.cpp)
target_include_directories(cellular-automaton-library PRIVATE ../../include)
