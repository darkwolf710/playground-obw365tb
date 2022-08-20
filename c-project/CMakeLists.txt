cmake_minimum_required(VERSION 2.8.9)
project (tests)
add_executable(tests tests.cpp factorial.cpp factorial.h fonction42.cpp fonction42.h)
add_executable(tests operators.cpp operators.h)
add_executable(tests angle.cpp angle.h)

include_directories(${CATCH_INCLUDE_DIR} ${COMMON_INCLUDES})
enable_testing(true)  # Enables unit-testing.
