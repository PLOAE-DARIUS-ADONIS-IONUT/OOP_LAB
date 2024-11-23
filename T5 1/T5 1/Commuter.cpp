#include "Commuter.h"
#include <iostream>

Commuter::Commuter(std::string n, Address a, std::string ticket)
    : Person(n, a), ticketType(ticket) {}

std::string Commuter::getTicketType() const {
    return ticketType;
}