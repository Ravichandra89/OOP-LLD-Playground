#ifndef Milk_Decorator_hpp
#define Milk_Decorator_hpp

#include "CoffeDecorator.hpp"
#include "../components/ICoffe.hpp"

class MilkDecorator : public CoffeDecorator {
    public: 
        MilkDecorator(ICoffe* coffe);
        string getDescription() const override;
        double getCoffeCost() const override;
};

#endif
