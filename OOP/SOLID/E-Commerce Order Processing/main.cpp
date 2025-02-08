#include <iostream>
#include <memory>
#include <string>
#include <utility> // For std::move
using namespace std;

class Order {
public:
    int orderId;
    string name;
    double amount;

    Order(int orderId, string name, double amount)
        : orderId(orderId), name(name), amount(amount) {}
};

// Payment Processing Module

class IPaymentGateway {
public:
    virtual void processPayment(const Order &order) = 0;
    virtual ~IPaymentGateway() {}
};

class PaypalGatway : public IPaymentGateway {
public:
    void processPayment(const Order &order) override {
        cout << "Processing payment for Order #" << order.orderId 
             << " of $" << order.amount << " via PayPal." << endl;
    }
};

class StripePayment : public IPaymentGateway {
public:
    void processPayment(const Order &order) override {
        cout << "Processing payment for Order #" << order.orderId 
             << " of $" << order.amount << " via Stripe." << endl;
    }
};

// Shipping Module

class Ishipping {
public:
    virtual void shipOrder(const Order &order) = 0;
    virtual ~Ishipping() {}
};

class FedExShipping : public Ishipping {
public:
    void shipOrder(const Order &order) override {
        cout << "Shipping Order #" << order.orderId << " via FedEx." << endl;
    }
};

class shipRocket : public Ishipping {
public:
    void shipOrder(const Order &order) override {
        cout << "Shipping Order #" << order.orderId << " via ShipRocket." << endl;
    }
};

// Notification Module

class INotification {
public:
    virtual void sendNotification(const Order &order) = 0;
    virtual ~INotification() {}
};

class EmailMessage : public INotification {
public:
    void sendNotification(const Order &order) override {
        cout << "Sending email notification for Order #" << order.orderId << endl;
    }
};

class SMSMessage : public INotification {
public:
    void sendNotification(const Order &order) override {
        cout << "Sending SMS notification for Order #" << order.orderId << endl;
    }
};

// High-Level Module: OrderProcess

class OrderProcess {
private:
    unique_ptr<IPaymentGateway> gateway;
    unique_ptr<Ishipping> ship;
    unique_ptr<INotification> notify;

public:
    OrderProcess(unique_ptr<IPaymentGateway> gateway, 
                 unique_ptr<Ishipping> ship, 
                 unique_ptr<INotification> notify)
        : gateway(std::move(gateway)), 
          ship(std::move(ship)), 
          notify(std::move(notify)) {}

    void processOrder(const Order &order) {
        cout << "Starting processing for Order #" << order.orderId << endl;
        gateway->processPayment(order);
        ship->shipOrder(order);
        notify->sendNotification(order);
        cout << "Completed processing for Order #" << order.orderId << "\n" << endl;
    }
};

int main() {
    // Process first order using PayPal, FedEx, and Email notification
    Order order1(101, "Ravi", 4999.90);

    unique_ptr<IPaymentGateway> payment1 = std::make_unique<PaypalGatway>();
    unique_ptr<Ishipping> ship1 = std::make_unique<FedExShipping>();
    unique_ptr<INotification> notify1 = std::make_unique<EmailMessage>();

    OrderProcess o1(std::move(payment1), std::move(ship1), std::move(notify1));
    o1.processOrder(order1);

    // Process second order using Stripe, ShipRocket, and SMS notification
    Order order2(102, "Chandra", 1389.99);

    unique_ptr<IPaymentGateway> payment2 = std::make_unique<StripePayment>();
    unique_ptr<Ishipping> ship2 = std::make_unique<shipRocket>();
    unique_ptr<INotification> notify2 = std::make_unique<SMSMessage>();

    OrderProcess o2(std::move(payment2), std::move(ship2), std::move(notify2));
    o2.processOrder(order2);
    
    return 0;
}
