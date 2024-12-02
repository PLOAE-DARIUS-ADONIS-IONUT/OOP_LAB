#include "OnlineShop.h"
#include <iostream>

int main()
{
    OnlineShop shop;

    // Creare categorii
    Category electronics("Electronice");
    Category fashion("Moda");

    // Creare produse
    Product tv("Televizor Samsung", 500.00, true);
    Product laptop("Laptop Dell", 800.00);
    Product shoes("Pantofi Nike", 100.00, true);
    Product jacket("Geaca Piele", 150.00);

    // Adaugare produse in categorii
    electronics.addProduct(&tv);
    electronics.addProduct(&laptop);
    fashion.addProduct(&shoes);
    fashion.addProduct(&jacket);

    // Adaugare categorii in magazin
    shop.addCategory(&electronics);
    shop.addCategory(&fashion);

    // Afisare produse
    cout << "Toate produsele din magazin:" << endl;
    shop.displayAllProducts();

    // Afisare produse la promotie
    shop.displayPromotionalProducts();

    // Cautare produse
    shop.searchProduct("Pantofi", 50, 200);

    return 0;
}
