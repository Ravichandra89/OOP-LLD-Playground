#ifndef PAYMENT_SERVICE_HPP
#define PAYMENT_SERVICE_HPP

#include <iostream>
using namespace std;

class PaymentService {
    public : 
        void processPayment(const string & riderId, double amount) {
            cout << "[PaymentService] Processing payment of $" << amount
             << " for rider: " << riderId << endl;
        }
};

#endif