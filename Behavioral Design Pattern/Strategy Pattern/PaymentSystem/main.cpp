#include <iostream>

#include "Strategy/CreditCardPayment.hpp"
#include "Strategy/PayPalPayment.hpp"
#include "Strategy/UpiPayment.hpp"
#include "Context/PaymentContext.hpp"

using namespace std;

int main() {
    cout << "🛒 Welcome to Jodhpur Bazar Checkout!\n" << endl;

    CreditCardPayment credit;
    PayPalPayment paypal;
    UpiPayment upi;

    PaymentContext context(&credit);
    context.processPayment(100.00);
    
    context.setStrategy(&paypal);
    context.processPayment(2500.00);

    context.setStrategy(&upi);
    context.processPayment(3000.00);

    return 0;
}