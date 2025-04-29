#ifndef CheesePizzaBuilder_hpp
#define CheesePizzaBuilder_hpp

#include "IPizzaBuilder.hpp"

class CheesePizzaBuilder : public IPizzaBuilder
{
private:
    Pizza *cp;

public:
    CheesePizzaBuilder();
    ~CheesePizzaBuilder();

    void buildSize() override;
    void buildCrust() override;
    void buildSauce() override;
    void buildCheese() override;
    void buildToppings() override;
    Pizza *getPizza() override;
};

#endif