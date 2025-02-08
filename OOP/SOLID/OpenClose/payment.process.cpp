#include <iostream>
using namespace std;

// Open - Close Principle

class PaymentMethod
{
public:
    virtual ~PaymentMethod() = default;
    virtual void processPayment(double amount) const = 0;
};

class CreditCardPayment : public PaymentMethod
{
public:
    void processPayment(double amount) const override
    {
        cout << "Processing credit card payment of $" << amount << endl;
    };
};

class paypalPayment : public PaymentMethod
{
public:
    void processPayment(double amount) const override
    {
        cout << "Processing paypal payment of $" << amount << endl;
    }
};

// Payment Processing Interface for all types of payments
class paymentProcessor
{
public:
    void process(const PaymentMethod &method, double amount)
    {
        method.processPayment(amount);
    }
};

int main()
{
    paymentProcessor p1;

    CreditCardPayment c1;
    paypalPayment p2;

    p1.process(c1, 100.00);
    p1.process(p2, 200.00);

    return 0;
}