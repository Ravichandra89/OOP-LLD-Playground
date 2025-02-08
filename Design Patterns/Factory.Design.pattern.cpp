#include <iostream>
using namespace std;

/*
=========== Abstract Product ==============
*/
class PaymentMethod
{
public:
    virtual void processPayment(double amount) = 0; // pure virtual function
    virtual ~PaymentMethod() {}
};

/*
=========== Concrete Products  ==============
*/

class CreditCardPayment : public PaymentMethod
{
public:
    void processPayment(double amount) override
    {
        cout << "Processing Credit Card payment of $" << amount << endl;
    }
};

class PaypalPayment : public PaymentMethod
{
public:
    void processPayment(double amount) override
    {
        cout << "Processing Paypal Payment of $" << amount << endl;
    }
};

class BitcoinPayment : public PaymentMethod
{
public:
    void processPayment(double amount) override
    {
        cout << "Processing Bitcoin Payment of $" << amount << endl;
    }
};

/*
========== Create Abstract Creator : PaymentFactory =============
*/

class PaymentFactory
{
public:
    virtual PaymentMethod *createPayment() = 0;
    virtual ~PaymentFactory() {}
};

/*
===== Concrete Creator 1 CreditCardPaymentFactory
===== Concrete Creator 2: PaypalPaymentFactory
===== Concrete Creator 3: BitcoinPaymentFactory
*/

class CreditCardPaymentFactory : public PaymentFactory
{
public:
    PaymentMethod *createPayment() override
    {
        // Creating object for creditCardPayment
        return new CreditCardPayment();
    }
};

class PaypalPaymentFactory : public PaymentFactory
{
public:
    PaymentMethod *createPayment() override
    {
        return new PaypalPayment();
    }
};

class BitcointPaymentFactory : public PaymentFactory
{
public:
    PaymentMethod *createPayment() override
    {
        return new BitcoinPayment();
    }
};

/*
========= Client Code ===============
*/

int main()
{
    int choice;
    cout << "Select Payment Method" << endl;
    cout << "1. Credit Card " << endl;
    cout << "2. paypal" << endl;
    cout << "3. Bitcoin Payment" << endl;
    cout << "Enter your choice(1,2,3)" << endl;

    cin >> choice;

    PaymentFactory *fac = nullptr;

    switch (choice)
    {
    case 1:
        fac = new CreditCardPaymentFactory();
        break;
    case 2:
        fac = new PaypalPaymentFactory();
        break;
    case 3:
        fac = new BitcointPaymentFactory();
        break;
    default:
        cout << "Invalid payment method selected" << endl;
        return 1;
    };

    // using factory to create payment object
    PaymentMethod *pay = fac->createPayment();
    pay->processPayment(100.00);

    delete pay;
    delete fac;

    return 0;
}