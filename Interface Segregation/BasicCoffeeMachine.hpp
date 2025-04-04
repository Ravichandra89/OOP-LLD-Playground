/**
 * Implementing a basic coffee machine using the Interface Segregation Principle.
 */

#ifndef BASIC_COFFEE_MACHINE_HPP
#define BASIC_COFFEE_MACHINE_HPP

#include "IBrewable.hpp"

class BasicCoffeeMachine : public IBrewable {
    public: 
        void brewCoffee() override;
};

#endif