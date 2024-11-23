#pragma once
#include "Person.h"
#include <string>

class Commuter : public Person {
private:
    std::string ticketType;

public:
    Commuter(std::string n, Address a, std::string ticket)
        : Person(n, a), ticketType(ticket) {}

    std::string getTicketType() const { return ticketType; }
};