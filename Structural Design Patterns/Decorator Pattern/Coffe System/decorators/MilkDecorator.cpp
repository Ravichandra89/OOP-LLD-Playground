#include "MilkDecorator.hpp"
#include <iostream>
#include "../components/ICoffe.hpp"
using namespace std;

MilkDecorator::MilkDecorator(ICoffe* coffe) : CoffeDecorator(coffe){};

string MilkDecorator::getDescription() const {
    return coffeDecorator->getDescription() + ", Milk";
};

double MilkDecorator::getCoffeCost() const {
    return coffeDecorator->getCoffeCost() + 20.0;
};

