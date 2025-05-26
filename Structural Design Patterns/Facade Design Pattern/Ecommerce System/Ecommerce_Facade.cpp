#include "Ecommerce_Facade.hpp"
#include <iostream>
using namespace std;

string Facade::purchase(const string & username, const string & password, const string & productQuery, int quantity, double amount, const string & paymentMethod) {
    // Register user
    auth.registerUser(username, password);

    // Login User
    string token = auth.loginUser(username, password);
    
    // Search Product
    auto results = product.searchProduct(productQuery);
    string productId = results.empty() ? "" : results.front();
    product.getProductDetails(productId);

    if (!inventory.checkStock(productId, quantity)) {
        throw runtime_error("Insufficient stock for product: " + productId);
    }

    inventory.updateStock(productId, quantity);

    // Order Creation
    const string orderId = order.createOrder(token, productId, quantity);

    // Payment Processing
    if (!payment.processPayment(productId, amount, paymentMethod)) {
        throw runtime_error("Payment failed for order: " + productId);
    }

    // Shipping 
    ship.createShipment(orderId);

    // Notification sending
    notification.sendNotification(token, "Your order has been placed successfully. Order ID: " + orderId);
    return orderId;
}