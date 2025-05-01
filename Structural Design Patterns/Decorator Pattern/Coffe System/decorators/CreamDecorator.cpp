#include "CreamDecorator.hpp"
#include <iostream>
#include "../components/ICoffe.hpp"

using namespace std;

CreamDecorator::CreamDecorator(ICoffe *coffe) : CoffeDecorator(coffe) {};

string CreamDecorator::getDescription() const
{
    return coffeDecorator->getDescription() + ", Cream";
};

double CreamDecorator::getCoffeCost() const
{
    return coffeDecorator->getCoffeCost() + 20.0;
};