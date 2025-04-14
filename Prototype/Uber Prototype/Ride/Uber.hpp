#ifndef UBER_HPP
#define UBER_HPP

#include <string>
#include <memory>
using namespace std;

class Uber {
    public:
        virtual unique_ptr<Uber> clone() const = 0;
        virtual void setPickupLocation(const string & location) = 0;
        virtual void setDropLocation(const string & location) =0;
        virtual ~Uber() = default;
};

#endif