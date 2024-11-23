#include "Bus.h"
#include <iostream>

Bus::Bus(std::string number, Driver d, Engine e) : busNumber(number), driver(d), engine(e) {}

void Bus::display() const {
    std::cout << "Bus Number: " << busNumber << "\n";
    driver.display();
    engine.display();
}