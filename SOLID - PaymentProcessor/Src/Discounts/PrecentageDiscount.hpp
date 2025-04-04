#ifndef PRECENTAGE_DISCOUNT_HPP
#define PRECENTAGE_DISCOUNT_HPP

#include "IDiscount.hpp"

class PrecentageDiscount : public IDiscount {
    double ans;

public:
    explicit PrecentageDiscount(double percent) : ans(percent) {}
    double applyDiscount(double amount) override;
};

#endif