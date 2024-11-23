#include "Order.h"
#include <algorithm>
#include <iostream>

void Order::addProduct(const Product& p)
{
    items.push_back(p);
}

void Order::addProducts(const std::vector<Product>& newItems)
{
    items.insert(items.end(), newItems.begin(), newItems.end());
}

std::vector<Product> Order::findProductsInOrder(const std::string& name)
{
    std::vector<Product> foundProducts;
    for (const auto& item : items)
        if (item.name.find(name) != std::string::npos) // Partial match
            foundProducts.push_back(item);
    return foundProducts;
}

float Order::computeTotal() const
{
    float total = 0;
    for (const auto& item : items)
        total += item.price;
    return total;
}

void Order::displayOrder()
{
    for (const auto& item : items)
        std::cout << item.name << " - $" << item.price << std::endl;
}
