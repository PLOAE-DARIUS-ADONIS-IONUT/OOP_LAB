#include "Person.h"
#include <iostream>

Person::Person(std::string n, Address a) : name(n), address(a) {}

std::string Person::getName() const {
    return name;
}

Address Person::getAddress() const {
    return address;
}