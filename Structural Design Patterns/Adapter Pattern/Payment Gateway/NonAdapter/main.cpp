#include <iostream>
#include "Services/PaymentService.hpp"
using namespace std;

int main() {
    PaymentService ps;
    ps.pay("Razorpay", 190);
    ps.pay("Stripe", 100);
    ps.pay("PayPal", 100);

    return 0;
}