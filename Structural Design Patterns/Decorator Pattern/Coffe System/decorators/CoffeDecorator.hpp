#ifndef Coffe_Decorator_hpp
#define Coffe_Decorator_hpp

#include "../components/ICoffe.hpp"

class CoffeDecorator : public ICoffe {
    protected : 
        ICoffe * coffeDecorator;
    public : 
        CoffeDecorator(ICoffe* coffe) : coffeDecorator(coffe) {};
        virtual ~CoffeDecorator() {
            delete coffeDecorator;
        }
};

#endif