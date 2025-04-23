#ifndef LuxaryCars_hpp
#define LuxaryCars_hpp

#include "AbstractCar.hpp"
#include <string>
using namespace std;

class LuxaryCar1 : public AbstractCar {
    public: 
        string getDescription() override {
            return "Luxary Car1";
        };
};

class LuxaryCar2 : public AbstractCar {
    public: 
        string getDescription() override {
            return "Luxary Car-2";
        };
};

class LuxaryCar3 : public AbstractCar {
    public: 
        string getDescription() override {
            return "Luxary Car-3";
        };
};


#endif