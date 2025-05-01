#ifndef Cream_Decorator_hpp
#define Cream_Decorator_hpp

#include "CoffeDecorator.hpp"

class CreamDecorator : public CoffeDecorator {
    public: 
        CreamDecorator(ICoffe* coffe);
        string getDescription() const override;
        double getCoffeCost() const override;
};
#endif