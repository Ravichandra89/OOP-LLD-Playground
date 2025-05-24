/**
 * Kitchen Sub System For Zomato Complex System Using Facade
 * 
 */

#ifndef FACADE_PATTERN_KITCHEN_SERVICE_HPP
#define FACADE_PATTERN_KITCHEN_SERVICE_HPP

class KitchenService {
    public: 
        KitchenService() = default;
        void prepareOrder(int orderId);
};

#endif