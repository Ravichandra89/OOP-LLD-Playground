#ifndef AbstractFactory_hpp
#define AbstractFactory_hpp

#include "AbstractCar.hpp"

// Interface for Concreate Abstract Class -> Luxary and Economy
class AbstractFactory {
    public:     
        virtual AbstractCar* createCar(int type) = 0;
        virtual ~AbstractFactory() = default;
};

#endif