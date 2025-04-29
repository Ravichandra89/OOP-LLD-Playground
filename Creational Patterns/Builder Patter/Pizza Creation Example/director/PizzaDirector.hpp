#ifndef PizzaDirector_hpp
#define PizzaDirector_hpp

#include "../builder/IPizzaBuilder.hpp"

class PizzaDirector {
    public: 
        void constructPizza(IPizzaBuilder & builder);
};

#endif