#pragma once
#include <string>
#include "Driver.h"
#include "Engine.h"

class Bus {
private:
    std::string busNumber;
    Driver driver;
    Engine engine;

public:
    Bus(std::string number, Driver d, Engine e);
    void display() const;
};