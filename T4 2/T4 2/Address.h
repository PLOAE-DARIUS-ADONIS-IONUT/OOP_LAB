#pragma once
#include <string>
#include <iostream>

class Address {
private:
    std::string street;
    std::string city;
    int zipCode;

public:
    Address(std::string s, std::string c, int z);
    void display() const;
};