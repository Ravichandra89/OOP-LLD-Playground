#ifndef PRECENTDISCOUNT_HPP
#define PRECENTDISCOUNT_HPP
#include "IPromotions.hpp"

class PrecentDiscount : public IPromotions
{
    double precentage;

public:
    PrecentDiscount(double percentage) : precentage(precentage) {}
    double apply(double amount) override;
};
#endif