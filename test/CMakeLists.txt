add_executable(Testing hello_test.cc)
# Link GTest
target_link_libraries(Testing GTest::gtest_main)

# Discover tests
include(GoogleTest)
gtest_discover_tests(Testing)