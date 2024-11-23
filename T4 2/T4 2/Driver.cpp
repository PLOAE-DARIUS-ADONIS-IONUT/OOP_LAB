#include "Driver.h"

Driver::Driver(std::string n, int exp) : name(n), experienceYears(exp) {}

void Driver::display() const {
    std::cout << "Driver: " << name << ", Experience: " << experienceYears << " years\n";
}