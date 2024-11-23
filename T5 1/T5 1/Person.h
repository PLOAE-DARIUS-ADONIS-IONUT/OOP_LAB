#pragma once
#include "Address.h"
#include <string>

class Person {
protected:
    std::string name;
    Address address;

public:
    Person(std::string n, Address a) : name(n), address(a) {}

    std::string getName() const { return name; }
    Address getAddress() const { return address; }
};