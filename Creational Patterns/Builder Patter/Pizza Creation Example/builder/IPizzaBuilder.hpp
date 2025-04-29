#ifndef IPIZZABUILDER_HPP
#define IPIZZABUILDER_HPP

#include "../Product/Pizza.hpp"

class IPizzaBuilder {
public:
    virtual ~IPizzaBuilder() {}
    virtual void buildSize() = 0;
    virtual void buildCrust() = 0;
    virtual void buildSauce() = 0;
    virtual void buildCheese() = 0;
    virtual void buildToppings() = 0;
    virtual Pizza* getPizza() = 0;
};

#endif