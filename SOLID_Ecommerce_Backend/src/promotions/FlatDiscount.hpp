#ifndef FLATDISCOUNT_HPP
#define FLATDISCOUNT_HPP

#include "IPromotions.hpp"

class FlatDiscount : public IPromotions {
    double discount;
    public: 
    FlatDiscount(double discount) : discount(discount) {}
    double apply(double amount) override;
};

#endif