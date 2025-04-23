#ifndef EconomyFactory_hpp
#define EconomyFactorty_hpp

#include "AbstractFactory.hpp"
#include <string>
#include "AbstractCar.hpp"

#include "EconomyCars.hpp"

using namespace std;

class EconomyFactory : public AbstractFactory {
    public: 
        AbstractCar* createCar(int type) {
            switch(type) {
                case 1 : return new EconomyCar1();
                case 2 : return new EconomyCar2();
                case 3 : return new EconomyCar3();
                default: return nullptr;
            }
        }
};

#endif