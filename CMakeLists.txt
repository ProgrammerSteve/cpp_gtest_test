cmake_minimum_required(VERSION 3.10)

project(MyProject)

# Add gtest using vcpkg
set(CMAKE_TOOLCHAIN_FILE "${CMAKE_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake")

# Enable C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find gtest
find_package(GTest REQUIRED)

# Add your test source files
add_executable(MyTest test.cpp)

# Link gtest
target_link_libraries(MyTest GTest::gtest GTest::gtest_main)
