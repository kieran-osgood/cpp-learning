#include <iostream>
#include "Car/Car.h"
//#include <term.h>

//void ClearScreen() {
//    if (!cur_term) {
//        int result;
//        setupterm(NULL, STDOUT_FILENO, &result);
//        if (result <= 0) return;
//    }
//
//    putp(tigetstr("clear"));
//}

int main() {
    std::cout << "Hello World";
    Car myCar("Super fast");
    myCar.move();

    system("read -p 'Press Enter to continue...' var");
}

//int main() {
//    FlyingCar flyingCar("Volvo");
//    std::cout << flyingCar.Name << std::endl;
//
//    FlyingCar* fcar = &flyingCar;
//    fcar->move();
//
//    Car* car = &flyingCar;
//    car->move();
//}
