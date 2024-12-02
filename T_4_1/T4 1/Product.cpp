#include "Product.h"
#include <iostream>

Product::Product(string name, double price, bool isOnPromotion)
    : name(name), price(price), isOnPromotion(isOnPromotion) {}

void Product::display() const
{
    cout << "Produs: " << name
        << ", Pret: $" << price
        << ", Promotie: " << (isOnPromotion ? "Da" : "Nu")
        << endl;
}

string Product::getName() const
{
    return name;
}

double Product::getPrice() const
{
    return price;
}

bool Product::getIsOnPromotion() const
{
    return isOnPromotion;
}

void Product::setPrice(double newPrice)
{
    price = newPrice;
}

void Product::setIsOnPromotion(bool promotion)
{
    isOnPromotion = promotion;
}
