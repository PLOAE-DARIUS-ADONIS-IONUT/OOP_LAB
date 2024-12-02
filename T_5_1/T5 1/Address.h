#pragma once
#include <string>
#include <iostream>

class Address {
private:
    std::string street;
    std::string city;
    int zipCode;

public:
    Address(std::string s, std::string c, int z) : street(s), city(c), zipCode(z) {}

    void display() const {
        std::cout << "Address: " << street << ", " << city << ", ZIP: " << zipCode << "\n";
    }

    std::string getCity() const { return city; }
};