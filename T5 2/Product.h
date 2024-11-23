#pragma once
using namespace std;
#include <string>

class Product
{
public:
    std::string name;
    float price;

    Product(std::string n = "", float p = 0);

    bool operator<(const Product& other) const;
};
