#include "IceDecorator.hpp"
#include <iostream>
using namespace std;

IceDecorator::IceDecorator(ICoffe* coffe) : CoffeDecorator(coffe){};

string IceDecorator::getDescription() const {
    return coffeDecorator->getDescription() + ", Ice";
};

double IceDecorator::getCoffeCost() const {
    return coffeDecorator->getCoffeCost() + 5.0;
}