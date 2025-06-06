#ifndef ORDER_HANDLER_HPP
#define ORDER_HANDLER_HPP

#include "../order.hpp"
#include <string>
#include <memory>

using namespace std;

class OrderHandler {
        shared_ptr<OrderHandler> next_{nullptr};
    
    protected : 
        virtual bool processOrder(shared_ptr<Order> order) = 0;
    
    public : 
        virtual ~OrderHandler() = default;

        void setNext(shared_ptr<OrderHandler> next) {
            next_ = next;
        }

        void handle(shared_ptr<Order> order) {
            if (!processOrder(order) && next_) {
                next_->handle(order);
            }
        }
};

#endif