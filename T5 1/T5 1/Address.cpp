#include "Address.h"

void Address::display() const {
    std::cout << "Address: " << street << ", " << city << ", ZIP: " << zipCode << "\n";
}