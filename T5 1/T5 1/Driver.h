#pragma once
#include "Person.h"
#include <string>

class Driver : public Person {
private:
    int experienceYears;

public:
    Driver(std::string n, Address a, int exp) : Person(n, a), experienceYears(exp) {}

    int getExperience() const { return experienceYears; }
};