#pragma once
#include <vector>
#include "Product.h"

class Department
{
    std::vector<Product> products;

public:
    void addProduct(const Product& p);
    void addProducts(const std::vector<Product>& newProducts);
    Product* findProduct(const std::string& name);
    void removeProduct(const std::string& name);
    void removeProducts(const std::vector<std::string>& names);
    std::vector<Product> getSortedProducts(bool sortByPrice = false);
    void displayProducts();
};
