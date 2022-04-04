//
// Created by Kieran Osgood on 22/03/2022.
//

#ifndef UNTITLED_FLYINGCAR_H
#define UNTITLED_FLYINGCAR_H

#include "Car.h"

class FlyingCar : public Car {
public:
    explicit FlyingCar(std::string name);

    void move();

    ~FlyingCar();
};


#endif //UNTITLED_FLYINGCAR_H
