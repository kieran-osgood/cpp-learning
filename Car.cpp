//
// Created by Kieran Osgood on 21/03/2022.
//

#include <string>
#include <iostream>
#include "Car.h"

Car::Car(std::string name) {
    Name = std::move(name);
}

void Car::move() const {
    std::cout << Name << "Broom broom" << std::endl;
}

