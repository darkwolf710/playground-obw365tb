Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v2.13.9 # or a later release
)

FetchContent_MakeAvailable(Catch2)

target_link_libraries(tests Catch2::Catch2)

cmake_minimum_required(VERSION 2.8.9)
project (tests)
add_executable(tests tests.cpp factorial.cpp factorial.h)

# Includes Catch in the project:
add_subdirectory(catch)
include_directories(${CATCH_INCLUDE_DIR} ${COMMON_INCLUDES})
enable_testing(true)  # Enables unit-testing.

add_dependencies(tests catch)

add_test(factorial ./tests [factorial])
