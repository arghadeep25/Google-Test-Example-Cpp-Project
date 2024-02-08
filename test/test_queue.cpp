#include <gtest/gtest.h>

#include <cstdlib>
#include <stdexcept>

#include "gtest/gtest.h"
#include "queue.hpp"

TEST(Queue, valid_front) {
  dataStructure::queue::queue<int> q;
  q.enqueue(5);
  q.enqueue(6);
  EXPECT_EQ(5, q.front());
}

TEST(Queue, empty_front) {
  dataStructure::queue::queue<int> q;
  EXPECT_THROW(
      {
        try {
          q.front();
        } catch (const std::range_error& e) {
          EXPECT_STREQ(e.what(), "empty");
          throw;
        }
        FAIL() << "Expected std::range_error not thrown.";
      },
      std::range_error);
}

TEST(Queue, empty_dequeue) {
  dataStructure::queue::queue<int> q;
  EXPECT_THROW(
      {
        try {
          q.dequeue();
        } catch (const std::range_error& e) {
          EXPECT_STREQ(e.what(), "empty");
          throw;
        }
        FAIL() << "Expected std::range_error not thrown.";
      },
      std::range_error);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}