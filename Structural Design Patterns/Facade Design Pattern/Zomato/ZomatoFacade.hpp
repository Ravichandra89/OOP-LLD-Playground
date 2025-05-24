/***
 * Simplified Client Interface for dealing with all the complex sub systems
 */

#ifndef ZOMATO_FACADE_HPP
#define ZOMATO_FACADE_HPP

// Import All Service
#include "DeliveryService.hpp"
#include "KitchenService.hpp"
#include "NotificationService.hpp"
#include "OrderService.hpp"
#include "PaymentService.hpp"
#include "ReviewService.hpp"

class ZomatoFacade {
        OrderService order;
        KitchenService kitchen;
        PaymentService payment;
        NotificationService notification;
        DeliveryService delivery;
        ReviewService review;
    
    public: 
    // Default Constructor
        ZomatoFacade();
        void ZomatoPlaceOrder(const string & item, int quantity, double amount, const string & paymentMethod);

        void ZomatoCompeleteOrder(int orderId, const string & review);
};

#endif