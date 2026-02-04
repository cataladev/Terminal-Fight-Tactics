cmake_minimum_required(VERSION 3.10)

project(GameProject)

set(CMAKE_CXX_STANDARD 11)

# Add the executable target for the game
add_executable(game src/main.cpp)

# Enable testing
enable_testing()

# Help CMake find Homebrew's googletest package
list(APPEND CMAKE_PREFIX_PATH "/opt/homebrew/opt/googletest")

# Find GoogleTest
find_package(GTest REQUIRED)

# Add a test executable
add_executable(placeholder_test tests/placeholder_test.cpp)

# Link GoogleTest
target_link_libraries(placeholder_test PRIVATE GTest::gtest_main)

# Register the test with CTest
include(GoogleTest)
gtest_discover_tests(placeholder_test)