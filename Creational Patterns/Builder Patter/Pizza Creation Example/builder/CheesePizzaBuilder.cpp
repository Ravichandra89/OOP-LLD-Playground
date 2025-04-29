#include "CheesePizzaBuilder.hpp"
#include "../product/Pizza.hpp"

CheesePizzaBuilder::CheesePizzaBuilder()
{
    cp = new Pizza();
};

CheesePizzaBuilder::~CheesePizzaBuilder()
{
    delete cp;
}

void CheesePizzaBuilder::buildSize()
{
    cp->size_ = "Medium";
}

void CheesePizzaBuilder::buildCrust()
{
    cp->crust_ = "Thick";
};

void CheesePizzaBuilder::buildSauce()
{
    cp->sauce_ = "Tomoto Sauce";
};

void CheesePizzaBuilder::buildCheese()
{
    cp->cheese_ = "Cheddar";
};

void CheesePizzaBuilder::buildToppings()
{
    cp->toppings_.push_back("Paneer");
    cp->toppings_.push_back("Capcicum");
};

Pizza *CheesePizzaBuilder::getPizza()
{
    Pizza *result = cp;
    cp = nullptr;
    return result;
}
