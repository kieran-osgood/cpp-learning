cmake_minimum_required(VERSION 3.21)

project(Factorial_Test VERSION 1.0)

# link against gtest or gtest_main as needed. Eg
add_executable(${PROJECT_NAME} Factorial_Test.cpp)
target_link_libraries(${PROJECT_NAME}
        Factorial
        gtest_main
        )

add_test(NAME Factorial_Test COMMAND ${PROJECT_NAME})

# post build command
add_custom_command(
        TARGET ${PROJECT_NAME}
        COMMENT "Run tests"
        POST_BUILD
        COMMAND ${PROJECT_NAME}
)