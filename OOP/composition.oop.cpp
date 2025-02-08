/*
 Implementing the composition using E - Commerce Order and OrderItem Object Relations
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class OrderItems
{
private:
    string productName;
    int quantity;
    double price;

public:
    OrderItems(string name, int stock, double unitPrice)
    {
        productName = name;
        quantity = stock;
        price = unitPrice;
    }

    double getTotalPrice() const
    {
        return price * quantity;
    }

    void displayProduct() const
    {
        cout << "Product Name: " << productName << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "UnitPrice: $" << price << endl;
        cout << "Total Price: " << getTotalPrice() << endl;
    }
};

class Order
{
private:
    int orderId;
    // Composition relation with orderItems
    vector<OrderItems> orderItems;

public:
    // addItem() getOrderTotal() displayOrder()
    Order(int orderId)
    {
        this->orderId = orderId;
    }

    void addItem(const OrderItems &it)
    {
        orderItems.push_back(it);
    }

    double getOrderTotal() const
    {
        double total = 0;
        for (const auto &item : orderItems)
        {
            total += item.getTotalPrice();
        }
        return total;
    }

    void displayOrder()
    {
        cout << "Order ID: " << orderId << endl;

        // Shows the Product from orderItems

        for (const auto &it : orderItems)
        {
            it.displayProduct();
        }

        // show OrderTotal
        cout << "Order Total: $" << getOrderTotal() << endl;
    }
};

int main () {
    Order order(1001);

    // order.addItem("Mobile", 40, 10000.00); Gives Error Resolved it 
    order.addItem(OrderItems("Mobile", 40, 10000.00));
    order.addItem(OrderItems("Laptop", 20, 50000.00));
    order.addItem(OrderItems("Tv", 10, 50000.00));

    order.displayOrder();

    return 0;
}