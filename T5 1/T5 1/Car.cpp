#include "Car.h"
#include <iostream>

void Car::addPassenger(Student* student) {
    passengers.push_back(student);
}

int Car::getPassengerCount() const {
    return passengers.size();
}