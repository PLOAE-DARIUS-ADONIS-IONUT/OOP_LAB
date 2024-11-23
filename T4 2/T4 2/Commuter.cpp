#include "Commuter.h"

Commuter::Commuter(std::string n, std::string ticket) : name(n), ticketType(ticket) {}

void Commuter::display() const {
    std::cout << "Commuter: " << name << ", Ticket Type: " << ticketType << "\n";
}