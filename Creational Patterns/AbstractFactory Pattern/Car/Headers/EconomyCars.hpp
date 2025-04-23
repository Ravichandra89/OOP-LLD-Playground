#ifndef EconomyCars_hpp
#define EconomyCars_hpp

#include "AbstractCar.hpp"
#include <string>
using namespace std;


class EconomyCar1 : public AbstractCar {
    public: 
        string getDescription() override {
            return "Economy Car 1";
        }
};

class EconomyCar2 : public AbstractCar {
    public: 
        string getDescription() override {
            return "Economy Car 2";
        };
};

class EconomyCar3 : public AbstractCar {
    public:     
        string getDescription() override {
            return "Economy Car 3";
        };
};

#endif