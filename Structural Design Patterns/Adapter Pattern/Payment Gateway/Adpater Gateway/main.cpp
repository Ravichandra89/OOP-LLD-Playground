#include <iostream>
#include "thirdparty/PayPalSDK.hpp"
#include "thirdparty/StripeSDK.hpp"
#include "thirdparty/RazorpaySDK.hpp"

#include "Adpater/IPaymentProcessor.hpp"
#include "Adpater/PaypalAdapter.cpp"
#include "Adpater/StripeAdapter.cpp"
#include "Adpater/RazorpayAdapter.cpp"

using namespace std;

void processPayment(IPaymentGateway * ptr, double amount) {
    ptr->pay(amount);
}

int main() {
    IPaymentGateway * razorpay = new RazorpayAdapter();
    IPaymentGateway * paypal = new PaypalAdapter();
    IPaymentGateway * stripe = new StripeAdapter();

    cout << "Processing with Razorpay" << endl;
    processPayment(razorpay, 180.00);

    cout << "Processing with Stripe" << endl;
    processPayment(stripe, 190.00);

    cout << "Processing with Paypal" << endl;
    processPayment(paypal, 200.00);

    // Cleaning up the memory
    delete razorpay;
    delete paypal;
    delete stripe;

    return 0;
}