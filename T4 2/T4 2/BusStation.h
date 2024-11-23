#pragma once
#include <vector>
#include "Address.h"
#include "Bus.h"
#include "Commuter.h"

class BusStation {
private:
    Address address;
    std::vector<Bus> buses;
    std::vector<Commuter> commuters;

public:
    BusStation(Address a);
    void addBus(const Bus& bus);
    void addCommuter(const Commuter& commuter);
    void displayStationDetails() const;
};