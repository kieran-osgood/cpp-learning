#include <iostream>
#include "Car/Car.h"
#include "Factorial/Factorial.h"

int main() {
    std::cout << "Hello World" << std::endl;
    Car myCar("Super fast");
    myCar.move();
    std::cout << std::endl << "factorial of 1=" << Factorial().calculate(1);
//    system("read -p 'Press Enter to continue...' var");
}
