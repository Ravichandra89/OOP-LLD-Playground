// Factory Design Pattern - For Payment Processing CreditCard, Cash, Rozarpay, 
#ifndef PAYMENT_PROCESSOR_HPP
#define PAYMENT_PROCESSOR_HPP

#include "Enums.hpp"
#include "ParkingTickets.hpp"

#include <iostream>
#include <memory>
#include <string>
#include <iostream>

using namespace std;

// PaymentClass Propperties
struct paymentDetails {
    PaymentMethodType type;
    double cash = 0.0;
    string cardNumber;
    string cardHolerName;
    string cardExpiry;
    string cardCvv;
    string upiId;
};

// ------------- Payment Processor Interface ----------------------
class IPaymentProcessor {
        virtual ~IPaymentProcessor() = default;
    
        // Pay Method 
        bool pay(ParkingTicket& ticket, double amount, paymentDetails& details) {
            if (!validate(details)) {
                cout << "[Payment Processor] Validation Failed" << endl;
                return false;
            }

            if(!isAuthorized(details, amount)) {
                cout << "[Payment Processor] Not Authorized! " << endl;
                return false;
            }

            capture(amount);
            ticket.markAsPaid(amount);
            issueReceipt(ticket);
            return true;
        }

    protected : 
        virtual bool validate(const paymentDetails & details) = 0;
        virtual bool isAuthorized(const paymentDetails & details, double amount) = 0;
        virtual void capture(double amount) = 0;
        virtual void issueReceipt(const ParkingTicket & ticket) {
            cout << "[Payment Processor] Receipt issued for ticket: " << ticket.getTicketId() << " with amount: " << ticket.getPaidAmount() << endl;
        }
};

// ------------- Concrete Payment Processors ----------------------
class CreditCardProcessor : public IPaymentProcessor {
    protected : 
        bool validate(const paymentDetails & details) override {
            return !details.cardNumber.empty() && !details.cardExpiry.empty() && !details.cardCvv.empty();
        }

        bool isAuthorized(const paymentDetails & details, double amount) override {
            // simulating Authorization logic
            cout << "[CreditCardProcessor] Authorizing payment of " << amount << " for card: " << details.cardNumber << endl;
            return true;
        }

        void capture(double amount) override {
            cout << "[CreditCardProcessor] Capturing payment of " << amount << endl;
        }
};

class CashProcessor : public IPaymentProcessor {
    protected : 
        bool validate(const paymentDetails & details) override {
            return details.cash > 0.0;
        }

        bool isAuthorized(const paymentDetails & details, double amount) override {
            // simulating Authorization logic
            cout << "[CashProcessor] Authorizing cash payment of " << amount << endl;
            return true;
        }

        void capture(double amount) override {
            cout << "[CashProcessor] Capturing cash payment of " << amount << endl;
        }
};

class RozarpayProcessor : public IPaymentProcessor {
    protected :     
        bool validate(const paymentDetails & details) override {
            return !details.upiId.empty();
        }

        bool isAuthorized(const paymentDetails & details, double amount) override {
            // simulating Authorization logic
            cout << "[RozarpayProcessor] Authorizing UPI payment of " << amount << " for UPI ID: " << details.upiId << endl;
            return true;
        }

        void capture(double amount) override {
            cout << "[RozarpayProcessor] Capturing UPI payment of " << amount << endl;
        }
};

#endif