#ifndef FACADE_PATTERN_PAYMENT_SERVICE_HPP
#define FACADE_PATTERN_PAYMENT_SERVICE_HPP

#include <string>
using namespace std;

class PaymentService {
    public: 
        PaymentService() = default;
        bool pay(int orderId, double amount, const string & method);
};

#endif