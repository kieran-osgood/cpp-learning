//
// Created by Kieran Osgood on 05/04/2022.
//

#include "gtest/gtest.h"
#include "../Factorial/Factorial.h"

// Tests factorial of 0.
TEST(Factorial, example_test) {
    EXPECT_EQ(Factorial().calculate(0), 1);
}

// Tests factorial of positive numbers.
TEST(Factorial, HandlesPositiveInput) {
    EXPECT_EQ(Factorial().calculate(1), 1);
    EXPECT_EQ(Factorial().calculate(2), 2);
    EXPECT_EQ(Factorial().calculate(3), 6);
    EXPECT_EQ(Factorial().calculate(4), 24);
    EXPECT_EQ(Factorial().calculate(8), 40320);
}