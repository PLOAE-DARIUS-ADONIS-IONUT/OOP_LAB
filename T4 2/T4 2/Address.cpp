#include "Address.h"

Address::Address(std::string s, std::string c, int z) : street(s), city(c), zipCode(z) {}

void Address::display() const {
    std::cout << "Address: " << street << ", " << city << ", ZIP: " << zipCode << "\n";
}