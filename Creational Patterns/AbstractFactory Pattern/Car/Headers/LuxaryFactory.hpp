#ifndef LuxaryFactory_hpp
#define LuxaryFactory_hpp

#include "AbstractFactory.hpp"

#include "LuxaryCars.hpp"
#include "AbstractCar.hpp"
using namespace std;

class LuxaryFactory : public AbstractFactory {
    public: 
        AbstractCar* createCar(int type) {
            switch(type) {
                case 1: return new LuxaryCar1();
                case 2: return new LuxaryCar2();
                case 3: return new LuxaryCar3();
                default: return nullptr;
            }
        }
};

#endif