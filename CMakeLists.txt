cmake_minimum_required(VERSION 3.10)

project(calculator)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(calculator_lib STATIC calculator.cpp advanced_calculator.cpp)

add_executable(calculator main.cpp)

target_link_libraries(calculator calculator_lib)

