#include "Category.h"
#include <iostream>

Category::Category(string name) : name(name), productCount(0) {}

void Category::addProduct(Product* product)
{
    if (productCount < 10) {
        products[productCount++] = product;
    }
    else {
        cout << "Categoria este plina." << endl;
    }
}

void Category::removeProduct(const string& productName)
{
    for (int i = 0; i < productCount; i++) {
        if (products[i]->getName() == productName) {
            for (int j = i; j < productCount - 1; j++) {
                products[j] = products[j + 1];
            }
            productCount--;
            cout << "Produsul " << productName << " a fost sters din categoria " << name << "." << endl;
            return;
        }
    }
    cout << "Produsul " << productName << " nu a fost gasit in categoria " << name << "." << endl;
}

void Category::updateProductPrice(const string& productName, double newPrice)
{
    for (int i = 0; i < productCount; i++) {
        if (products[i]->getName() == productName) {
            products[i]->setPrice(newPrice);
            cout << "Pretul produsului " << productName << " a fost actualizat la $" << newPrice << "." << endl;
            return;
        }
    }
    cout << "Produsul " << productName << " nu a fost gasit in categoria " << name << "." << endl;
}

void Category::displayProducts() const
{
    cout << "Categoria: " << name << endl;
    for (int i = 0; i < productCount; i++) {
        products[i]->display();
    }
}

string Category::getName() const
{
    return name;
}

Product* Category::getProduct(int index) const
{
    return products[index];
}

int Category::getProductCount() const
{
    return productCount;
}
