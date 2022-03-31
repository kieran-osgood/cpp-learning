#include <utility>

//
// Created by Kieran Osgood on 21/03/2022.
//

#ifndef UNTITLED_CAR_H
#define UNTITLED_CAR_H

class Car {
public:
    std::string Name;
    explicit Car(std::string name);
    void move() const;
};

#endif //UNTITLED_CAR_H
