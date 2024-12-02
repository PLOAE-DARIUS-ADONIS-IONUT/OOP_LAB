#include "Bus.h"
#include <iostream>

void Bus::addStop(const Address& address) {
    stops.push_back(address);
}

int Bus::getPassengerCount() const {
    return passengers.size();
}

void Bus::displayStops() const {
    std::cout << "Stops: \n";
    for (const auto& stop : stops) {
        stop.display();
    }
}

void Bus::startEngine() {
    engine.start();
}