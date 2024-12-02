#pragma once
#include <string>

class Vehicle {
protected:
    std::string vehicleNumber;

public:
    Vehicle(std::string number) : vehicleNumber(number) {}

    std::string getVehicleNumber() const { return vehicleNumber; }
};