#ifndef NODISCOUNT_HPP
#define NODISCOUNT_HPP

#include "IDiscount.hpp"

class NoDiscount : public IDiscount {
    public: 
        double applyDiscount(double price) override;
};

#endif