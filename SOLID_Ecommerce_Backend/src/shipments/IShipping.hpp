#ifndef ISHIPPING_HPP
#define ISHIPPING_HPP

#include <string>
using namespace std;

class IShipping {
    public: 
        virtual ~IShipping() = default;
        virtual void shipOrder(const string & orderId) = 0;
};

#endif