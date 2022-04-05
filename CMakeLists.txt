cmake_minimum_required(VERSION 3.21)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

#add_subdirectory(sources/Car)
#target_link_libraries(${PROJECT_NAME} Car)

#add_subdirectory(sources/Factorial)
#link_libraries(${PROJECT_NAME} Factorial)

add_executable(untitled
        sources/main.cpp
        sources/Car/Car.cpp
        )

add_subdirectory(deps/googletest)
add_subdirectory(sources/Factorial)
add_subdirectory(sources/Factorial_Test)

target_link_libraries(untitled gtest Factorial)