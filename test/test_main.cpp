#include <gtest/gtest.h>

#include <stdexcept>

#include "calc.hpp"

TEST(CalcTest, Sum) {
  EXPECT_EQ(7, Calc::sum(3, 4));
  EXPECT_EQ(0, Calc::sum(0, 0));
}

TEST(CalcTest, Diff) {
  EXPECT_EQ(-1, Calc::diff(3, 4));
  EXPECT_EQ(100, Calc::diff(300, 200));
}

TEST(CalcTest, Div) {
  EXPECT_EQ(1, Calc::div(3, 3));
  EXPECT_EQ(2, Calc::div(300, 150));
  EXPECT_THROW(Calc::div(1, 0), std::logic_error);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}