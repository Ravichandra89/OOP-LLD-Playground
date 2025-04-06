#include "PaymentProcessor.hpp"
#include <iostream>
#include <string>

using namespace std;

// Constructor for PaymentProcessors
PaymentProcessor::PaymentProcessor(IPaymentMethod *method, IDiscount *discount, ILogger *logger) : py(method), ds(discount), lg(logger) {};

void PaymentProcessor::processPayment(double amount) {
    double finalAmount = ds->applyDiscount(amount);
    py->processPayment(finalAmount);
    lg->log("Payment of " + to_string(finalAmount) + " processed.");
}
