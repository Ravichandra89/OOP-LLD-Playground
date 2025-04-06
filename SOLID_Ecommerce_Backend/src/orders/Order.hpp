#ifndef ORDER_HPP
#define ORDER_HPP

#include <string>
using namespace std;


class Order {
    private: 
        string orderId, status, userId;
        double amount;
    public:    
        Order(const string & orderId, const string & status, const string & userId, double amount) {
            this->orderId = orderId;
            this->status = status;
            this->userId = userId;
            this->amount = amount;
        }

        // Methods
        string getOrderId() const {
            return orderId;
        }

        string getStatus() const {
            return status;
        }

        string getUserId() const {
            return userId;
        }

        double getAmount() const {
            return amount;
        }

        void setStatus (const string & status) {
            this->status = status;
        }
};

#endif