#include "BusStation.h"
#include <iostream>

BusStation::BusStation(Address a) : address(a) {}

void BusStation::addBus(const Bus& bus) {
    buses.push_back(bus);
}

void BusStation::addCommuter(const Commuter& commuter) {
    commuters.push_back(commuter);
}

void BusStation::displayStationDetails() const {
    std::cout << "Bus Station Details:\n";
    address.display();
    std::cout << "Buses in Station:\n";
    for (const auto& bus : buses) {
        bus.display();
        std::cout << "\n";
    }
    std::cout << "Commuters at Station:\n";
    for (const auto& commuter : commuters) {
        commuter.display();
        std::cout << "\n";
    }
}