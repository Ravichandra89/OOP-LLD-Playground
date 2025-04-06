#include "OrderService.hpp"
#include "Order.hpp"
#include <iostream>

using namespace std;

OrderService::OrderService(IOrderRepo *orderRepo, IPayment *payment, IEventStore *eventStore, IShipping *shipping, IPromotions *promotions)
    : orderRepo(orderRepo), payment(payment), eventStore(eventStore), shipping(shipping), promotions(promotions) {}

void OrderService::createOrder(const string &orderId, const string &userId, double amount)
{
    // Apply Promotions
    double finalAmount = promotions->apply(amount);

    // Create Order
    Order order(orderId, userId, finalAmount);

    // Process Payment
    payment->processPayment(amount);

    orderRepo->saveOrder(order);

    shipping->shipOrder(orderId);
    eventStore->storeEvent("OrderCreated", "Order " + orderId + " created for Rs." + std::to_string(finalAmount));
}

