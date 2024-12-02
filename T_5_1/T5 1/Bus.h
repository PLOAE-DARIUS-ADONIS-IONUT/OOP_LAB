#pragma once
#include "Vehicle.h"
#include "Driver.h"
#include "Engine.h"
#include "Address.h"
#include <vector>

class Bus : public Vehicle {
private:
    Driver driver;
    Engine engine;
    std::vector<Address> stops;
    std::vector<Person*> passengers;

public:
    Bus(std::string number, Driver d, Engine e)
        : Vehicle(number), driver(d), engine(e) {}

    void addStop(const Address& address) { stops.push_back(address); }
    void addPassenger(Person* p) { passengers.push_back(p); }

    void startEngine() { engine.start(); }

    int getPassengerCount() const { return passengers.size(); }

    void displayStops() const {
        std::cout << "Stops for bus " << getVehicleNumber() << ":\n";
        for (const auto& stop : stops) {
            stop.display();
        }
    }

    Driver getDriver() const { return driver; }
};