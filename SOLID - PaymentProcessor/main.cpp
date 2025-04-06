#include "Src/Payments/CreditPayment.hpp"
#include "Src/Payments/UPIPayment.hpp"
#include "Src/Payments/PaypalPayment.hpp"
#include "Src/PaymentProcessor.hpp"
#include "Src/Discounts/PrecentageDiscount.hpp"
#include "Src/Discounts/FlatDiscount.hpp"
#include "Src/logger/ConsoleLogger.hpp"
#include "Src/Discounts/NoDiscount.hpp"

// All the Interfaces 
#include "Src/logger/ILogger.hpp"
#include "Src/Payments/IPaymentMethod.hpp"
#include "Src/Discounts/IDiscount.hpp"

#include <iostream>
#include <string>

using namespace std;

int main() {
    ILogger *logger = new ConsoleLogger();

    // Payment methods creations
    IPaymentMethod *creditPayment = new CreditPayment();
    IPaymentMethod *upiPayment = new UPIPayment();
    IPaymentMethod *paypalPayment = new PaypalPayment();

    // Discount methods creations
    IDiscount *flatDiscount = new FlatDiscount(50);
    IDiscount *precentageDiscount = new PrecentageDiscount(10);
    IDiscount *noDiscount = new NoDiscount();

    // Processing the Payments
    PaymentProcessor p1(creditPayment, flatDiscount, logger);
    p1.processPayment(1000.0);

    PaymentProcessor p2(upiPayment, precentageDiscount, logger);
    p2.processPayment(1000.0);

    PaymentProcessor p3(paypalPayment, noDiscount, logger);
    p3.processPayment(1000.0);

    // Clean up the allocated memory
    delete creditPayment;
    delete upiPayment;
    delete paypalPayment;
    delete flatDiscount;
    delete precentageDiscount;
    delete noDiscount;
    delete logger;

    return 0;
}

