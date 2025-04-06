#ifndef ORDER_SERVICE_HPP
#define ORDER_SERVICE_HPP

#include "IOrderRepo.hpp"
#include "../payments/IPayment.hpp"
#include "../events/IEventStore.hpp"
#include "../shipments/IShipping.hpp"
#include "../promotions/IPromotions.hpp"

#include <string>
using namespace std;

class OrderService
{
private:
    IOrderRepo *orderRepo;
    IPayment *payment;
    IEventStore *eventStore;
    IShipping *shipping;
    IPromotions *promotions;

public:
    OrderService(IOrderRepo *orderRepo, IPayment *payment, IEventStore *eventStore, IShipping *shipping, IPromotions *promotions);

    void createOrder(const string &orderId, const string &userId, double amount);
};

#endif