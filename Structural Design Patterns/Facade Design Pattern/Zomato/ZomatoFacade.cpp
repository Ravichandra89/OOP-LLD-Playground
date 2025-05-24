#include "ZomatoFacade.hpp"
#include <iostream>
using namespace std;

// Default Constructor
ZomatoFacade::ZomatoFacade() = default;


// Placing Zomato Order
void ZomatoFacade::ZomatoPlaceOrder(const string & item, int quantity, double amount, const string & paymentMethod) {
    int orderId = order.createOrder(item, quantity);
    kitchen.prepareOrder(orderId);
    bool paid = payment.pay(orderId, amount, paymentMethod);

    if (paid) {
        notification.notify(orderId, "Your order has been confirmed and is being prepared.");
        delivery.assignDelivery(orderId);
    } else {
        notification.notify(orderId, "Payment failed. Please try again!");
    }
}

void ZomatoFacade::ZomatoCompeleteOrder(int orderId, const string & review) {
    notification.notify(orderId, "Your order has been delivered. Enjoy your meal!");

    //TODO: Store Review Here
}

