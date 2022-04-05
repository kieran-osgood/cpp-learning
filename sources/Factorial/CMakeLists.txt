cmake_minimum_required(VERSION 3.21)
project(Factorial VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(Factorial_Src
        Factorial.cpp
        Factorial.h
        )

add_library(${PROJECT_NAME} ${Factorial_Src})