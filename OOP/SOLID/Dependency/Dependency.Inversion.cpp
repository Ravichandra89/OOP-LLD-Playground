#include <iostream>
using namespace std;

class PaymentGateway
{
public:
    virtual void processPayment(double amount) = 0;
    virtual ~PaymentGateway() {};
};

class PayPalGateway : public PaymentGateway
{
public:
    void processPayment(double amount) override
    {
        cout << "Processing payment through PayPal: " << amount << endl;
    };
};

class StripeGateway : public PaymentGateway
{
public:
    void processPayment(double amount) override
    {
        cout << "Processing payment through Stripe: " << amount << endl;
    };
};

class paymentProcessor
{
private:
    PaymentGateway *p;

public:
    paymentProcessor(PaymentGateway *p)
    {
        this->p = p;
    };

    void process(double amount)
    {
        p->processPayment(amount);
    };
};

int main() {
    PayPalGateway p1;
    paymentProcessor p2(&p1);
    p2.process(12.9);

    StripeGateway s1;
    paymentProcessor s2(&s1);
    s2.process(191.99);

    return 0;
}