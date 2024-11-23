#pragma once
#include <string>
#include <iostream>

class Commuter {
private:
    std::string name;
    std::string ticketType;

public:
    Commuter(std::string n, std::string ticket);
    void display() const;
};