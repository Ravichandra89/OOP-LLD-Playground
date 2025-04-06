#ifndef IPROMOTIONS_HPP
#define IPROMOTIONS_HPP

class IPromotions {
public:
    virtual ~IPromotions() = default;
    virtual double apply(double amount) = 0;
};
#endif