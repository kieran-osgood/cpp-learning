//
// Created by Kieran Osgood on 31/03/2022.
//

// Tests factorial of 0.
TEST(Factorial, example_test) {
    EXPECT_EQ(Factorial(0),1);
}

// Tests factorial of positive numbers.
TEST(Factorial, HandlesPositiveInput) {
    EXPECT_EQ(Factorial(1),1);
    EXPECT_EQ(Factorial(2),2);
    EXPECT_EQ(Factorial(3),6);
    EXPECT_EQ(Factorial(4),24);
    EXPECT_EQ(Factorial(8),40320);
}