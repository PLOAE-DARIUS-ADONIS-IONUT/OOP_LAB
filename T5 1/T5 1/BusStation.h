#pragma once
#include "Bus.h"
#include <vector>

class BusStation {
private:
    Address address;
    std::vector<Bus> buses;

public:
    BusStation(Address a) : address(a) {}

    void addBus(const Bus& bus) { buses.push_back(bus); }

    void displayBuses() const {
        std::cout << "Buses at " << address.getCity() << " Bus Station:\n";
        for (const auto& bus : buses) {
            std::cout << "Bus: " << bus.getVehicleNumber() << "\n";
        }
    }

    int getTotalPassengers() const {
        int total = 0;
        for (const auto& bus : buses) {
            total += bus.getPassengerCount();
        }
        return total;
    }
};