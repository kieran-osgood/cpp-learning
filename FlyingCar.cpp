//
// Created by Kieran Osgood on 22/03/2022.
//

#include <string>
#include <iostream>
#include "FlyingCar.h"

FlyingCar::FlyingCar(std::string name) : Car(std::move(name)) {}

FlyingCar::~FlyingCar() = default;

void FlyingCar::move() {
    Car::move();
    std::cout << "Wazoooooo" << std::endl;
}