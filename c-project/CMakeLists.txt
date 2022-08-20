cmake_minimum_required(VERSION 2.8.9)
project (tests)
add_executable(tests tests.cpp factorial.cpp factorial.h fonction42.cpp fonction42.h operators.cpp operators.h)
# add_executable(tests tests.cpp)

# Includes Catch in the project:
# add_subdirectory(catch)
include_directories(${CATCH_INCLUDE_DIR} ${COMMON_INCLUDES})
enable_testing(true)  # Enables unit-testing.

# add_dependencies(tests catch)

add_test(factorial ./tests [factorial])
