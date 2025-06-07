#include <iostream>
#include <vector>
#include <memory>

#include "handlers/FraudHandler.hpp"
#include "handlers/InventoryHandler.hpp"
#include "handlers/NotificationHandler.hpp"
#include "handlers/PaymentHandler.hpp"
#include "handlers/ShippingHandler.hpp"
#include "handlers/OrderHandler.hpp"

#include "Order.hpp"

using namespace std;

int main() {
    // Create Handlers 
    auto inventory = make_shared<InventoryHandler> ();
    auto payment = make_shared<PaymentHandler> ();
    auto fruad = make_shared<FraudHandler> ();
    auto ship = make_shared<ShippingHandler> ();
    auto notification = make_shared<NotificationHandler> ();


    // Form the Chain of Handlers
    inventory->setNext(payment);
    payment->setNext(fruad);
    fruad->setNext(ship);
    ship->setNext(notification);

    vector<std::shared_ptr<Order>> orders = {
        make_shared<Order>(1, "Alice", std::vector<std::string>{"Laptop", "Mouse"}, 1200.0),
        make_shared<Order>(2, "Bob",   std::vector<std::string>{"Headset"}, 300.0),
        make_shared<Order>(3, "Carol", std::vector<std::string>{"Monitor"}, 6000.0),
        make_shared<Order>(4, "Dave",  std::vector<std::string>{"Keyboard"}, 100.0)
    };


    // Processing the Sample Orders
    for (auto & it : orders) {
        cout << "---- Processing Order #" << it->orderId << " for" << it->customerName << "----" << endl;
        inventory->handle(it);
    }

    return 0;
}