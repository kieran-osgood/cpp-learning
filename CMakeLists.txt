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

add_subdirectory(sources/Factorial)
add_subdirectory(sources/Factorial_Test)

target_link_libraries(untitled Factorial)

if (NOT googletest) # is googletest defined if already built?
    include(FetchContent)
    FetchContent_Declare(
            googletest
            # Specify the commit you depend on and update it regularly.
            URL https://github.com/google/googletest/archive/refs/heads/master.zip
    )
    # For Windows: Prevent overriding the parent project's compiler/linker settings
    set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
    FetchContent_MakeAvailable(googletest)
endif ()