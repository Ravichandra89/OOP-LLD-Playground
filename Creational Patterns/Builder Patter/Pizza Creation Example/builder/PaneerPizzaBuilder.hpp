#ifndef PANEERPIZZABUILDER_HPP
#define PANEERPIZZABUILDER_HPP

#include "IPizzaBuilder.hpp"

class PaneerPizzaBuilder : public IPizzaBuilder
{
private:
    Pizza *pz;
public:
    PaneerPizzaBuilder();
    ~PaneerPizzaBuilder();

    void buildSize() override;
    void buildCrust() override;
    void buildSauce() override;
    void buildCheese() override;
    void buildToppings() override;
    Pizza *getPizza() override;
};

#endif