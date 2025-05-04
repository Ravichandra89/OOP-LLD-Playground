#ifndef IORDERED_HPP
#define IORDERED_HPP

class IOrderCost {
    public: 
        virtual ~IOrderCost() = default;
        virtual double calculateCost() const = 0;
};

#endif