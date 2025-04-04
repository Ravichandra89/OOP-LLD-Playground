#ifndef SMART_COFFEE_MACHINE_HPP
#define SMART_COFFEE_MACHINE_HPP

#include "IBrewable.hpp"
#include "IMilkSteamer.hpp"
#include "ICustomDrinkMaker.hpp"

class SmartCoffeeMachine : public IBrewable, public IMilkSteamer, public ICustomDrinkMaker {
    public: 
        void brewCoffee() override;
        void steamMilk() override;
        void MakeCustomDrink() override;
};

#endif