#include <iostream>
using namespace std;

class paymentGateway {
public:
    virtual void processPayment(double amount) {
        cout << "Processing payment of " << amount << endl;
    }
};

class CreditCardPayment : public paymentGateway {
public:
    void processPayment(double amount) override {
        cout << "Processing payment from Credit Card: " << amount << endl;
    }
};

class PaypalPayment : public paymentGateway {
public:
    void processPayment(double amount) override {
        cout << "Processing payment from PayPal: " << amount << endl;
    }
};

class BitcoinPayment : public paymentGateway {
public:
    void processPayment(double amount) override {
        cout << "Processing payment from Bitcoin: " << amount << endl;
    }
};

int main() {
    paymentGateway* ptr;

    CreditCardPayment c1;
    PaypalPayment p1;
    BitcoinPayment b1;

    // Processing payment using Credit Card
    ptr = &c1;
    ptr->processPayment(100.50); // Pass amount

    // Processing payment using PayPal
    ptr = &p1;
    ptr->processPayment(200.75); // Pass amount

    // Processing payment using Bitcoin
    ptr = &b1;
    ptr->processPayment(0.015); // Pass amount

    return 0;
}
