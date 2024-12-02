#include "OnlineShop.h"
#include <iostream>

OnlineShop::OnlineShop() : categoryCount(0) {}

void OnlineShop::addCategory(Category* category)
{
    if (categoryCount < 5) {
        categories[categoryCount++] = category;
    }
    else {
        cout << "Magazinul este plin. Nu se pot adauga mai multe categorii." << endl;
    }
}

void OnlineShop::removeCategory(const string& categoryName)
{
    for (int i = 0; i < categoryCount; i++) {
        if (categories[i]->getName() == categoryName) {
            for (int j = i; j < categoryCount - 1; j++) {
                categories[j] = categories[j + 1];
            }
            categoryCount--;
            cout << "Categoria " << categoryName << " a fost stearsa din magazin." << endl;
            return;
        }
    }
    cout << "Categoria " << categoryName << " nu a fost gasita in magazin." << endl;
}

void OnlineShop::displayAllProducts() const
{
    for (int i = 0; i < categoryCount; i++) {
        categories[i]->displayProducts();
    }
}

void OnlineShop::displayPromotionalProducts() const
{
    cout << "\nProduse la promotie:" << endl;
    for (int i = 0; i < categoryCount; i++) {
        for (int j = 0; j < categories[i]->getProductCount(); j++) {
            if (categories[i]->getProduct(j)->getIsOnPromotion()) {
                categories[i]->getProduct(j)->display();
            }
        }
    }
}

void OnlineShop::searchProduct(const string& name, double minPrice, double maxPrice) const
{
    cout << "\nCautare produse cu numele care contine '" << name
        << "' si pret intre $" << minPrice << " si $" << maxPrice << ":" << endl;

    for (int i = 0; i < categoryCount; i++) {
        for (int j = 0; j < categories[i]->getProductCount(); j++) {
            Product* p = categories[i]->getProduct(j);
            if (p->getName().find(name) != string::npos && p->getPrice() >= minPrice && p->getPrice() <= maxPrice) {
                p->display();
            }
        }
    }
}
