cmake_minimum_required(VERSION 2.8.9)
project (tests)
add_executable(tests tests.cpp factorial.cpp factorial.h)

# Includes Catch in the project:
add_subdirectory(/project/build/catch)
include_directories(${CATCH_INCLUDE_DIR} ${COMMON_INCLUDES})
enable_testing(true)  # Enables unit-testing.

add_dependencies(tests catch)

add_test(factorial ./tests [factorial])
