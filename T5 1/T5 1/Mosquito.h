#pragma once
#include <string>
#include <iostream>

class Mosquito {
private:
    std::string currentLocation;

public:
    Mosquito(std::string loc) : currentLocation(loc) {}

    void moveTo(const std::string& location) { currentLocation = location; }

    void display() const {
        std::cout << "Mosquito is currently in: " << currentLocation << "\n";
    }

    bool isInLocation(const std::string& location) const {
        return currentLocation == location;
    }
};