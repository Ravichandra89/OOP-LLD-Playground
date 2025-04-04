#include "BasicCoffeeMachine.hpp"
#include "CustomDrinkMaker.hpp"
#include "SmartCoffeeMachine.hpp"

int main() {
    BasicCoffeeMachine bs;
    CustomDrinkMaker cs;
    SmartCoffeeMachine ss;

    bs.brewCoffee();

    ss.brewCoffee();
    ss.steamMilk();
    ss.MakeCustomDrink();

    cs.MakeCustomDrink();
    
    return 0;
}