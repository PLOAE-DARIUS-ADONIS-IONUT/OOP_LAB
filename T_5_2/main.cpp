#include <iostream>
#include "Department.h"
#include "Order.h"
#include "Product.h"

int main()
{
    // Create departments
    Department shoes, toys;

    // Add products to departments
    shoes.addProducts({
        Product("Puma Runner", 90),
        Product("Adidas Boost", 120),
        Product("Nike Air Max", 130)
        });
    toys.addProducts({
        Product("Lego City", 50),
        Product("Barbie Dreamhouse", 100),
        Product("Hot Wheels Track", 40)
        });

    // Display products
    std::cout << "Shoes department:" << std::endl;
    shoes.displayProducts();
    std::cout << "Toys department:" << std::endl;
    toys.displayProducts();

    // Find and remove a product
    Product* found = shoes.findProduct("Nike Air Max");
    if (found)
        std::cout << "Found product: " << found->name << " - $" << found->price << std::endl;

    shoes.removeProduct("Nike Air Max");
    std::cout << "After removing Nike Air Max:" << std::endl;
    shoes.displayProducts();

    // Get sorted products
    std::cout << "Toys department sorted by price:" << std::endl;
    auto sortedToys = toys.getSortedProducts(true);
    for (const auto& toy : sortedToys)
        std::cout << toy.name << " - $" << toy.price << std::endl;

    // Create orders
    Order order1, order2;
    order1.addProducts({ Product("Puma Runner", 90), Product("Lego City", 50) });
    order2.addProducts({ Product("Barbie Dreamhouse", 100), Product("Hot Wheels Track", 40) });

    // Display orders
    std::cout << "Order 1:" << std::endl;
    order1.displayOrder();
    std::cout << "Order 2:" << std::endl;
    order2.displayOrder();

    // Search product in orders
    std::cout << "Searching for 'Lego' in orders:" << std::endl;
    for (const auto& product : order1.findProductsInOrder("Lego"))
        std::cout << product.name << " - $" << product.price << std::endl;

    // Compute total order values
    std::cout << "Order 1 total: $" << order1.computeTotal() << std::endl;
    std::cout << "Order 2 total: $" << order2.computeTotal() << std::endl;

    return 0;
}
