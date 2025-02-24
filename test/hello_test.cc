#include<gtest/gtest.h>

TEST(HelloTest, BasicAssertions){
    EXPECT_STRNE("hello", "world")<<"hello and world should not be equal";
    EXPECT_EQ(7*6,42)<< "7*6 should be 42";
}

TEST(SampleTest, TestCase1) {
    EXPECT_EQ(1 + 1, 2)<<"1+1 should be 2";
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}