#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle(std::string number) : vehicleNumber(number) {}

std::string Vehicle::getVehicleNumber() const {
    return vehicleNumber;
}