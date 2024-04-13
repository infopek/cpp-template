#include <arithmetic/add.h>
#include <arithmetic/sub.h>
#include <arithmetic/mul.h>
#include <arithmetic/div.h>

#include <gtest/gtest.h>

TEST(ArithmeticTests, AddTest)
{
    EXPECT_EQ(core::add(14, 16), 30);
    EXPECT_EQ(core::add(0, 0), 0);
    EXPECT_EQ(core::add(-24, 50), 26);
    EXPECT_EQ(core::add(-2, -7), -9);
}

TEST(ArithmeticTests, SubTest)
{
    EXPECT_EQ(core::sub(14, 16), -2);
    EXPECT_EQ(core::sub(0, 0), 0);
    EXPECT_EQ(core::sub(-24, 50), -74);
    EXPECT_EQ(core::sub(-2, -7), 5);
}

TEST(ArithmeticTests, MulTest)
{
    EXPECT_EQ(core::mul(14, 16), 224);
    EXPECT_EQ(core::mul(0, 0), 0);
    EXPECT_EQ(core::mul(-24, 50), -1200);
    EXPECT_EQ(core::mul(-2, -7), 14);
}

TEST(ArithmeticTests, DivTest)
{
    EXPECT_EQ(core::div(14, 16), 0.875);
    EXPECT_DEATH(core::div(0, 0), "");
    EXPECT_EQ(core::div(-24, 50), -0.48);
    EXPECT_EQ(core::div(-2, -8), 0.25);
}
