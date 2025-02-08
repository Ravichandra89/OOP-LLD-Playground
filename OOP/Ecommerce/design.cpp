#include <iostream>
#include <vector>
#include <string>
#include <numeric> // for accumulate

using namespace std;

// Base User Class
class User
{
protected:
    string userId;
    string name;
    string email;

public:
    User(string id, string n, string e) : userId(id), name(n), email(e) {}
    virtual void login()
    {
        cout << name << " logged in." << endl;
    }
    string getName() const { return name; }
    virtual ~User() {}
};

// Derived Customer Class
class Customer : public User
{
private:
    string address;

public:
    Customer(string id, string n, string e, string addr)
        : User(id, n, e), address(addr) {}
    void updateAddress(const string &newAddress)
    {
        address = newAddress;
        cout << "Address updated to " << address << "." << endl;
    }
    string getAddress() const { return address; }
};

// Product Class
class Product
{
private:
    string productId;
    string name;
    double price;
    int stockQuantity;

public:
    Product(string id, string n, double p, int stock)
        : productId(id), name(n), price(p), stockQuantity(stock) {}
    void updateStock(int quantity)
    {
        stockQuantity -= quantity;
        cout << name << " stock updated to " << stockQuantity << "." << endl;
    }
    double getPrice() const { return price; }
    string getName() const { return name; }
    int getStock() const { return stockQuantity; }
};

// Cart Class
class Cart
{
private:
    vector<pair<Product, int> > items; // Add space between consecutive '>>'

public:
    void addItem(const Product &product, int quantity)
    {
        // Instead of pushing a copy, push a reference if necessary
        items.push_back(make_pair(product, quantity)); // Fixed: `make_pair` to handle pair
        cout << quantity << " x " << product.getName() << " added to cart." << endl;
    }

    double calculateTotal() const
    {
        double total = 0.0;
        for (const auto &item : items)
        {
            total += calculateItemTotal(item); // Call the separate function for total calculation
        }
        return total;
    }

    // Separate function to calculate total for an item
    double calculateItemTotal(const pair<Product, int> &item) const
    {
        return item.first.getPrice() * item.second;
    }

    vector<pair<Product, int> > getItems() const { return items; } // Add space between consecutive '>>'
};

// Order Class
class Order
{
private:
    string orderId;
    User *user;
    vector<pair<Product, int> > products;
    string status;

public:
    Order(string id, User *u, const vector<pair<Product, int> > &prod)
        : orderId(id), user(u), products(prod), status("Pending") {}

    void placeOrder()
    {
        cout << "Order " << orderId << " placed for user " << user->getName() << "." << endl;
        status = "Processing";
    }

    void cancelOrder()
    {
        status = "Cancelled";
        cout << "Order " << orderId << " has been cancelled." << endl;
    }

    void trackOrder() const
    {
        cout << "Order " << orderId << " is currently " << status << "." << endl;
    }
};

// Main Function (Demonstrating the Model)
int main()
{
    // Create a Customer
    Customer customer("u001", "Ravi", "ravi@example.com", "123 Street, City");
    customer.login();

    // Create Products
    Product laptop("p001", "Laptop", 1000.00, 10);
    Product phone("p002", "Phone", 500.00, 20);

    // Create a Cart and Add Products
    Cart cart;
    cart.addItem(laptop, 1);
    cart.addItem(phone, 2);
    cout << "Total Cart Price: $" << cart.calculateTotal() << endl;

    // Place an Order
    Order order("o001", &customer, cart.getItems());
    order.placeOrder();
    order.trackOrder();

    // Cancel the Order
    order.cancelOrder();
    order.trackOrder();

    return 0;
}
