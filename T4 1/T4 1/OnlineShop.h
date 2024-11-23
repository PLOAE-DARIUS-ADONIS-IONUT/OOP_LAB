#pragma once
#include "Category.h"
#include <string>

class OnlineShop
{
private:
    Category* categories[5];
    int categoryCount;

public:
    OnlineShop();
    void addCategory(Category* category);
    void removeCategory(const string& categoryName);
    void displayAllProducts() const;
    void displayPromotionalProducts() const;
    void searchProduct(const string& name, double minPrice, double maxPrice) const;
};
