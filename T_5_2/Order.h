#pragma once
#include <vector>
#include "Product.h"

class Order
{
    std::vector<Product> items;

public:
    void addProduct(const Product& p);
    void addProducts(const std::vector<Product>& newItems);
    std::vector<Product> findProductsInOrder(const std::string& name);
    float computeTotal() const;
    void displayOrder();
};
