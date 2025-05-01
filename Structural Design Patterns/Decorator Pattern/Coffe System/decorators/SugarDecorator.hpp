#ifndef Sugar_Decorator_hpp
#define Sugar_Decorator_hpp

#include "CoffeDecorator.hpp"

class SugarDecorator : public CoffeDecorator {
    public: 
        SugarDecorator(ICoffe* coffe);
        string getDescription() const override;
        double getCoffeCost() const override;
};

#endif