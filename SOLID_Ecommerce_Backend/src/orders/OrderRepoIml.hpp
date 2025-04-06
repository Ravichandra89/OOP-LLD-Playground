#ifndef ORDERREPOIMPL_HPP
#define ORDERREPOIMPL_HPP

#include "IOrderRepo.hpp"
#include "Order.hpp"
#include <string>
#include <map>

class OrderRepoImpl : public IOrderRepo {
        map<string, Order> orders;
    public: 
        Order* getOrder(const string & orderId) override;
        void saveOrder(const Order & order) override;
};

#endif