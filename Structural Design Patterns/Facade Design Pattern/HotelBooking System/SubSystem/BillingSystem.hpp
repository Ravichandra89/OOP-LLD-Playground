#ifndef HOTEL_BOOKING_BILLING_SYSTEM_HPP
#define HOTEL_BOOKING_BILLING_SYSTEM_HPP

#include <string>
using namespace std;

class BillingSystem {
    public:
        bool processPayment(const string& cardInfo, double amount);
        string getInvoice(int roomNumber, double amount);
};

#endif