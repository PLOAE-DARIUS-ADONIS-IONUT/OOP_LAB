#pragma once
#include <string>
#include <iostream>

class Apartment {
private:
    std::string location;

public:
    Apartment(std::string loc) : location(loc) {}

    std::string getLocation() const { return location; }

    void display() const {
        std::cout << "Apartment located at: " << location << "\n";
    }
};