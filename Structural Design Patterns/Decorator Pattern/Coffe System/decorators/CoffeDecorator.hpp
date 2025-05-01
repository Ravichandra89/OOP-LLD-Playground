#ifndef Coffe_Decorator_hpp
#define Coffe_Decorator_hpp

#include "../components/ICoffe.hpp"

class CoffeDecorator {
       ICoffe * coffeDecorator;
    public:
        // Initilize the CoffeDecorator
        CoffeDecorator(ICoffe* coffe) : coffeDecorator(coffe) {};
        virtual ~CoffeDecorator() {
            if (coffeDecorator) delete coffeDecorator;
        }
};

#endif