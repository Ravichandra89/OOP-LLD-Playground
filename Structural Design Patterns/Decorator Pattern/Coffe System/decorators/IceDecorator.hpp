#ifndef Ice_Decorator_hpp
#define Ice_Decorator_hpp

#include "CoffeDecorator.hpp"

class IceDecorator : public CoffeDecorator {
    public: 
        IceDecorator(ICoffe* coffe);
        string getDescription() const override;
        double getCoffeCost() const override;
};

#endif