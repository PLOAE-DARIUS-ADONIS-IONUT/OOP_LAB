#include "BusStation.h"
#include <iostream>

void BusStation::displayBuses() const {
    std::cout << "Buses at " << address.getCity() << " Bus Station:\n";
    for (const auto& bus : buses) {
        std::cout << "Bus: " << bus.getBusNumber() << "\n";
        bus.displayStops();
    }
}

int BusStation::getTotalPassengers() const {
    int total = 0;
    for (const auto& bus : buses) {
        total += bus.getPassengerCount();
    }
    return total;
}

bool BusStation::isStudentInBusWithDriver(const Student& student, const Driver& driver) const {
    for (const auto& bus : buses) {
        if (bus.getDriver().getName() == driver.getName()) {
            for (const auto& pass : bus.getPassengerCount()) {
                if (pass->getName() == student.getName()) {
                    return true;
                }
            }
        }
    }
    return false;
}