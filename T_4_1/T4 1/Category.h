#pragma once
#include "Product.h"
#include <string>

class Category
{
private:
    string name;
    Product* products[10];
    int productCount;

public:
    Category(string name);
    void addProduct(Product* product);
    void removeProduct(const string& productName);
    void updateProductPrice(const string& productName, double newPrice);
    void displayProducts() const;
    string getName() const;
    Product* getProduct(int index) const;
    int getProductCount() const;
};
