#include <iostream>
#include "components/PlainCoffe.hpp"
#include "components/ColdCoffe.hpp"
#include "decorators/CreamDecorator.hpp"
#include "decorators/IceDecorator.hpp"
#include "decorators/MilkDecorator.hpp"
#include "decorators/SugarDecorator.hpp"

int main()
{
    // Preparing the Hot coffee
    ICoffe *hotCoffee = new MilkDecorator(new SugarDecorator(new PlainCoffe()));
    cout << hotCoffee->getDescription() << " Cost is : " << hotCoffee->getCoffeCost() << endl;

    ICoffe *ColdCoffee = new CreamDecorator(new IceDecorator(new ColdCoffe()));
    cout << ColdCoffee->getDescription() << " Cost is : " << ColdCoffee->getCoffeCost() << endl;

    delete hotCoffee;
    delete ColdCoffee;
}