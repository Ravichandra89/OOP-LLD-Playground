#include <iostream>
#include <memory>
#include <string>
#include "./src/paymentFactory.hpp"

int main() {
    string type = "paypal"; 
    double amount = 150.0;

    try {
        auto processor = paymentFactory::create(type);
        bool success = processor->processPayment(amount);

        if (success) {
            cout << "🎉 Payment of " << amount << " processed via " << type << endl;
        } else {
            cerr << "❌ Payment failed for " << type << endl;
        }
    } catch (const exception& ex) {
        cerr << "Error: " << ex.what() << endl;
        return 1;
    }

    return 0;
}
