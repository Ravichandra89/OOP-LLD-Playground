#ifndef UBER_BLACK_HPP
#define UBER_BLACK_HPP

#include "Uber.hpp"
#include <string>
#include <memory>

using namespace std;

class UberBlack : public Uber {
    private: 
        string pickup, drop, type;
        float baseFare;
    public:
        UberBlack();
        UberBlack(const UberBlack &ub);
        unique_ptr<Uber> clone() const override;
        void setPickupLocation(const string & location) override;
        void setDropLocation(const string & location) override;
};

#endif