#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Product
{
public:
    string name, category;
    int rating;
    double price;

    Product(string name, string category, int rating, double price)
    {
        this->name = name;
        this->category = category;
        this->price = price;
        this->rating = rating;
    }
};

class ECommerce
{
public:
    vector<Product> items;

    // Filter by price range
    vector<Product> filterProduct(double minPrice, double maxPrice)
    {
        vector<Product> ans;

        // Filter by the min and maxPrice
        for (const auto &it : items)
        {
            if (it.price >= minPrice && it.price <= maxPrice)
            {
                ans.push_back(it);
            }
        }
        return ans;
    }

    // Filter by category
    vector<Product> filterProduct(const string &category)
    {
        vector<Product> ans;
        for (const auto &it : items)
        {
            if (it.category == category)
            {
                ans.push_back(it);
            }
        }
        return ans;
    }

    // Filter by price range and category
    vector<Product> filterProduct(double minPrice, double maxPrice, const string &category)
    {
        vector<Product> ans;
        for (const auto &it : items)
        {
            if (it.price >= minPrice && it.price <= maxPrice && it.category == category)
            {
                ans.push_back(it);
            }
        }
        return ans;
    }

    // Display the filtered products
    void displayProducts(const vector<Product> &filterProducts)
    {
        if (filterProducts.empty())
        {
            cout << "No products found matching the criteria.\n";
        }
        else
        {
            for (const auto &it : filterProducts)
            {
                cout << "Name: " << it.name
                     << ", Category: " << it.category
                     << ", Price: $" << it.price
                     << ", Rating: " << it.rating << "/5\n";
            }
        }
    }
};

int main()
{
    // Create some products
    ECommerce ecommerce;
    ecommerce.items.push_back(Product("Laptop", "Electronics", 5, 1200.00));
    ecommerce.items.push_back(Product("Smartphone", "Electronics", 4, 800.00));
    ecommerce.items.push_back(Product("Shirt", "Clothing", 4, 30.00));
    ecommerce.items.push_back(Product("Jeans", "Clothing", 5, 50.00));
    ecommerce.items.push_back(Product("Watch", "Accessories", 5, 200.00));

    // Example usage of overloaded filterProduct function

    // Filter by price range
    cout << "Filter by Price Range (500 - 1000):\n";
    vector<Product> priceFiltered = ecommerce.filterProduct(500.00, 1000.00);
    ecommerce.displayProducts(priceFiltered);
    cout << endl;

    // Filter by category
    cout << "Filter by Category (Clothing):\n";
    vector<Product> categoryFiltered = ecommerce.filterProduct("Clothing");
    ecommerce.displayProducts(categoryFiltered);
    cout << endl;

    // Filter by price range and category
    cout << "Filter by Price Range (30 - 100) and Category (Clothing):\n";
    vector<Product> bothFiltered = ecommerce.filterProduct(30.00, 100.00, "Clothing");
    ecommerce.displayProducts(bothFiltered);

    return 0;
}
