#include <iostream>
using namespace std;

// Customer Interface
class ICustomer
{
public:
    virtual void browseProducts() = 0;
    virtual void placeOrder() = 0; // Pure virtual function
    virtual ~ICustomer() {};
};

// Interface for Sellers
class ISeller
{
public:
    virtual void manageInventory() = 0;
    virtual void addProducts() = 0;
    virtual ~ISeller() {};
};

class IAdmin
{
public:
    virtual void manageUsers() = 0;
    virtual void genralReports() = 0;
    virtual ~IAdmin() {};
};

// Customer Class
class Customer : public ICustomer
{
public:
    void browseProducts() override
    {
        cout << "Customer browsing products..." << endl;
    }
    void placeOrder() override
    {
        cout << "Customer placing order..." << endl;
    }
};

class Seller : public ISeller
{
public:
    void manageInventory() override
    {
        cout << "Seller managing inventory..." << endl;
    };

    void addProducts() override
    {
        cout << "Seller adding products..." << endl;
    }
};

class Admin : public IAdmin
{
public:
    void manageUsers() override
    {
        cout << "Admin managing users..." << endl;
    };
    void genralReports() override
    {
        cout << "Admin generating reports..." << endl;
    }
};

int main()
{
    Customer c1;
    c1.browseProducts();
    c1.placeOrder();

    Seller s1;
    s1.manageInventory();
    s1.addProducts();

    Admin a;
    a.manageUsers();
    return 0;
}