#include<gtest/gtest.h>

TEST(HelloTest, BasicAssertions){
    EXPECT_STRNE("hello", "world")<<"hello and world should not be equal";
    EXPECT_EQ(7*6,42)<< "7*6 should be 42";
}