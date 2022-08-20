cmake_minimum_required(VERSION 2.8.9)
project (tests)
add_executable(tests tests.cpp
                     operators.cpp operators.h
                     angle.cpp angle.h)


include_directories(${CATCH_INCLUDE_DIR} ${COMMON_INCLUDES})
enable_testing(true)  # Enables unit-testing.
