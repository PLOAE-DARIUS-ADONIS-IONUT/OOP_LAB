#include "Product.h"

Product::Product(std::string n, float p) : name(n), price(p) {}

bool Product::operator<(const Product& other) const
{
    return name < other.name; // Sort by name
}
