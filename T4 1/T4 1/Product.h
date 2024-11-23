#pragma once
#include <string>
using namespace std;

class Product
{
private:
    string name;
    double price;
    bool isOnPromotion;

public:
    Product(string name, double price, bool isOnPromotion = false);
    void display() const;
    string getName() const;
    double getPrice() const;
    bool getIsOnPromotion() const;
    void setPrice(double newPrice);
    void setIsOnPromotion(bool promotion);
};
