#include "Department.h"
#include <algorithm>
#include <iostream>

void Department::addProduct(const Product& p)
{
    products.push_back(p);
}

void Department::addProducts(const std::vector<Product>& newProducts)
{
    products.insert(products.end(), newProducts.begin(), newProducts.end());
}

Product* Department::findProduct(const std::string& name)
{
    for (auto& product : products)
        if (product.name == name)
            return &product;
    return nullptr;
}

void Department::removeProduct(const std::string& name)
{
    products.erase(
        std::remove_if(products.begin(), products.end(), [&](Product& p) { return p.name == name; }),
        products.end()
    );
}

void Department::removeProducts(const std::vector<std::string>& names)
{
    for (const auto& name : names)
        removeProduct(name);
}

std::vector<Product> Department::getSortedProducts(bool sortByPrice)
{
    std::vector<Product> sortedProducts = products;
    if (sortByPrice)
        std::sort(sortedProducts.begin(), sortedProducts.end(), [](const Product& a, const Product& b) {
        return a.price < b.price; // Sort by price
            });
    else
        std::sort(sortedProducts.begin(), sortedProducts.end()); // Sort by name
    return sortedProducts;
}

void Department::displayProducts()
{
    for (const auto& product : products)
        std::cout << product.name << " - $" << product.price << std::endl;
}
