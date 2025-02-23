cmake_minimum_required(VERSION 3.10)


# Set vcpkg toolchain file BEFORE project()
if(DEFINED ENV{VCPKG_ROOT})
    set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake" CACHE STRING "")
else()
    set(CMAKE_TOOLCHAIN_FILE "${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake" CACHE STRING "")
endif()

project(MyProject)

# Enable C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Use vcpkg-installed GTest (automatically handled if toolchain is set)
find_package(GTest REQUIRED)

enable_testing()

# Add your test source files
add_executable(MyTest main.cpp)
add_executable(hello_test hello_test.cc)

# Link GTest
target_link_libraries(MyTest GTest::gtest GTest::gtest_main)
target_link_libraries(hello_test GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(hello_test)
