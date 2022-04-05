//
// Created by Kieran Osgood on 04/04/2022.
//

#include "Factorial.h"

int Factorial::calculate(int n) {
    if (n == 0) return 1;
    return n * Factorial::calculate(n - 1);
};