#include <iostream>
using namespace std;

/*
====== Make the Abstract Interface =======
*/
class PaymentGateway
{
public:
    virtual bool processPayment(double amount) = 0;
    virtual ~PaymentGateway() {}
};

/*
CreditCard Payment : Storing the CreditCard Details
Implementing the PaymentGateway
*/

class CreditCardPayment : public PaymentGateway
{
private:
    string cardNumber, expiryDate, cvv;

public:
    // Constructor
    CreditCardPayment(string cardNumber, string expiryDate, string cvv)
    {
        this->cardNumber = cardNumber;
        this->expiryDate = expiryDate;
        this->cvv = cvv;
    };

    // Implements the Interface
    bool processPayment(double amount) override
    {
        cout << "Processing Payment for CardNumber: " << cardNumber << endl;
        cout << "Amount: " << amount << endl;
        cout << endl;

        return true;
    }
};

class DebitCardPayment : public PaymentGateway
{
private:
    string cardNumber, pin;

public:
    DebitCardPayment(string cardNumber, string pin)
    {
        this->cardNumber = cardNumber;
        this->pin = pin;
    }

    // Implements the Interface
    bool processPayment(double amount) override
    {
        cout << "Processing payment for Ammount : " << amount << endl;
        cout << "Card Number: " << cardNumber << endl;
        cout << endl;

        return true;
    }
};

class PayPalPayment : public PaymentGateway
{
private:
    string email;
    string password;

public:
    PayPalPayment(string email, string password)
    {
        this->email = email;
        this->password = password;
    }

    bool processPayment(double amount) override
    {
        cout << "Processing Payment for PayPal Ammount: " << amount << endl;
        cout << endl;
        return true;
    }
};

class StripePayment : public PaymentGateway
{
private:
    string email, password;

public:
    StripePayment(string email, string password)
    {
        this->email = email;
        this->password = password;
    }

    bool processPayment(double amount) override
    {
        cout << "Processing Payment for Stripe Ammount: " << amount << endl;
        cout << endl;


        return true;
    }
};

// PaymentProcessor
class paymentProcessor
{
public:
    void process(PaymentGateway *pg, double amount)
    {
        if (pg->processPayment(amount))
        {
            cout << "Payment Processed Successfully" << endl;
        }
        else
        {
            cout << "Payment Failed" << endl;
        }
    }
};

int main()
{

    // objects for PaymentMethods
    CreditCardPayment cc("123-456-789", "12/7/2025", "767");
    DebitCardPayment dd("1220-2121-12", "8981");
    PayPalPayment pp("ravi@gmail.com", "ravi@1234");
    StripePayment st("ravi@gmail.com", "ravi@1234");


    // Create PaymentProcessor Object
    paymentProcessor obj;

    cout << "---- Credit Card Payment -----" << endl;
    obj.process(&cc, 100.00);

    cout << "----- Debit Card Payment ------" << endl;
    obj.process(&dd, 1000.00);

    cout << "----- Paypal Card Payment -----" << endl;
    obj.process(&pp, 200);

    cout << "------ Stripe Payment -------" << endl;
    obj.process(&st, 5000);

    return 0;
}