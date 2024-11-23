#pragma once
#include <string>
#include <iostream>

class Driver {
private:
    std::string name;
    int experienceYears;

public:
    Driver(std::string n, int exp);
    void display() const;
};