#include "OrderRepoIml.hpp"
#include <iostream>
#include "Order.hpp"

using namespace std;

void OrderRepoImpl::saveOrder(const Order &order)
{
    orders[order.getOrderId()] = order;
}

Order *OrderRepoImpl::getOrder(const string &orderId)
{
    auto it = orders.find(orderId);
    return (it != orders.end()) ? &it->second : nullptr;
}