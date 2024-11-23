#include "BusStation.h"
#include "Address.h"
#include "Driver.h"
#include "Engine.h"
#include "Bus.h"
#include "Commuter.h"
#include <iostream>

int main() {
    // Set up the bus station with an address
    Address stationAddress("123 Main St", "Cityville", 12345);
    BusStation station(stationAddress);

    // Create an engine and driver for the bus
    Engine busEngine(500, "Diesel");
    Driver busDriver("John Doe", 10);

    // Add buses to the station
    Bus bus1("B123", busDriver, busEngine);
    station.addBus(bus1);

    // Add commuters to the station
    station.addCommuter(Commuter("Alice Smith", "Monthly Pass"));
    station.addCommuter(Commuter("Bob Jones", "Single Ride"));

    // Display station details, including buses and commuters
    station.displayStationDetails();

    return 0;
}