#ifndef IORDER_REPO_HPP
#define IORDER_REPO_HPP

#include <string>
using namespace std;

// Forward Declaration
class Order;

class IOrderRepo {
    public: 
        virtual ~IOrderRepo() = default;
        virtual Order* getOrder(const string & orderId) = 0;
        virtual void saveOrder(const Order & order) = 0;
};

#endif