#include "BusStation.h"
#include "Bus.h"
#include "Driver.h"
#include "Engine.h"
#include "Student.h"
#include "Commuter.h"
#include "Mosquito.h"
#include "Apartment.h"
#include <iostream>

int main() {
    Address stationAddress("123 Main St", "Cityville", 12345);
    BusStation station(stationAddress);

    Driver busDriver("John Smith", stationAddress, 10);
    Engine busEngine(500, "Diesel");
    Bus bus1("B123", busDriver, busEngine);

    // Add bus stops
    bus1.addStop(Address("44 University Ace", "Cityville", 12345));
    bus1.addStop(Address("69 Bird St", "Cityville", 12345));

    // Add passengers
    Address studentAddress("44 University Ace", "Cityville", 12345);
    Student student("Emilia", studentAddress, 4.0);
    bus1.addPassenger(&student);

    // 1) Start the bus engine
    bus1.startEngine();
    std::cout << "\n";

    // 2) Display bus information
    bus1.displayStops();
    std::cout << "Passenger count: " << bus1.getPassengerCount() << "\n\n";

    // Add the bus to the station
    station.addBus(bus1);

    // 3) Display buses at station
    station.displayBuses();
    std::cout << "Total Passengers at station: " << station.getTotalPassengers() << "\n\n";

    // 7) Create a mosquito and move it to a bus
    Mosquito mosquito("Apartment");
    mosquito.display();
    mosquito.moveTo("Bus B123");
    mosquito.display();

    // 8) Where is a specific mosquito in a specific bus, car, or apartment
    mosquito.isInLocation("Bus B123");
    std::cout << "\n";

    // 9) Create and display a student
    student.display();

    return 0;
}