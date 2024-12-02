#include "Mosquito.h"
#include <iostream>

void Mosquito::moveTo(const std::string& location) {
    currentLocation = location;
}

void Mosquito::display() const {
    std::cout << "Mosquito is currently in: " << currentLocation << "\n";
}

bool Mosquito::isInLocation(const std::string& location) const {
    return currentLocation == location;
}