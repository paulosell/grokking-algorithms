cmake_minimum_required(VERSION 3.22.1)
project(greeting) 

add_executable(greeting src/greeting.cpp) 

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
