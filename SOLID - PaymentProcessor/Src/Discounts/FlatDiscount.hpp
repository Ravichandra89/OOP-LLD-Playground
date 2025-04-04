#ifndef FLAT_DISCOUNT_HPP
#define FLAT_DISCOUNT_HPP

#include "IDiscount.hpp"

class FlatDiscount : public IDiscount {
    double ans;
    public: 
        explicit FlatDiscount(double amount) : ans (amount) {};
        double applyDiscount(double amount) override;
};

#endif