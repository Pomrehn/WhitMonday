// Copyright 2017
// Author Pelle

// Include functions from the Google test framework.
#include <gtest/gtest.h>

#include "./WhitMonday.h"

TEST(WhitMonday, compueDateOfWhitMonday) {
  ASSERT_EQ(36, computeDateOfWhitMonday(2017));
  ASSERT_EQ(16, computeDateOfWhitMonday(2016));
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
