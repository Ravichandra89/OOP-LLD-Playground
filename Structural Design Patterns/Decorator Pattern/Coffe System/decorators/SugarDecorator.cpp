#include "SugarDecorator.hpp"
#include <iostream>
using namespace std;

SugarDecorator::SugarDecorator(ICoffe* coffe) : CoffeDecorator(coffe){};

string SugarDecorator::getDescription() const {
    return coffeDecorator->getDescription() + ", Sugar";
};

double SugarDecorator::getCoffeCost() const {
    return coffeDecorator->getCoffeCost() + 5.0;
};
