#include "PizzaDirector.hpp"

void PizzaDirector::constructPizza(IPizzaBuilder & build) {
    build.buildSize();
    build.buildSauce();
    build.buildCheese();
    build.buildCrust();
    build.buildToppings();
}

