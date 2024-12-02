#include "Driver.h"
#include <iostream>

Driver::Driver(std::string n, Address a, int exp)
    : name(n), address(a), experienceYears(exp) {}

std::string Driver::getName() const {
    return name;
}

Address Driver::getAddress() const {
    return address;
}

int Driver::getExperience() const {
    return experienceYears;
}