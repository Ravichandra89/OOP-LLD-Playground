#ifndef IDISCOUNT_HPP
#define IDISCOUNT_HPP

class IDiscount {
public:
    virtual ~IDiscount() = default;
    virtual double applyDiscount(double amount) = 0;
};

#endif