#include <iostream>
#include "Product.hpp"
#include "ProductCategory.hpp"

using namespace std;

int main() {
    // Root Category
    auto electronics = make_unique<ProductCategory>("Root");

    // Creating Subcategories and inside them having products
    auto mobile = make_unique<ProductCategory>("Mobile");
    auto laptop = make_unique<ProductCategory>("Laptop");

    mobile->add(make_unique<Product>("iPhone", 999.99));
    mobile->add(make_unique<Product>("Samsung Galaxy", 799.99));

    laptop->add(make_unique<Product>("Dell XPS", 1299.99));
    laptop->add(make_unique<Product>("MacBook Pro", 2399.99));

    electronics->add(move(mobile));
    electronics->add(move(laptop));

    electronics->display();
    cout << "Total Price: $" << electronics->getPrice() << endl;

    return 0;
}