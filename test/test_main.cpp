#include <gtest/gtest.h>

#include "calc.hpp"

TEST(CalcTest, Sum) {
  EXPECT_EQ(7, Calc::sum(3, 4));
  EXPECT_EQ(0, Calc::sum(0, 0));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}