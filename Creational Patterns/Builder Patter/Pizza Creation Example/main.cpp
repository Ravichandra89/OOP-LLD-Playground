#include <iostream>
#include "builder/PaneerPizzaBuilder.hpp"
#include "builder/CheesePizzaBuilder.hpp"
#include "director/PizzaDirector.hpp"
#include "product/Pizza.hpp"

using namespace std;

int main() {
    PizzaDirector pd;

    PaneerPizzaBuilder paneerBuilder;
    pd.constructPizza(paneerBuilder);
    Pizza* paneer = paneerBuilder.getPizza();
    paneer->showPizza();

    CheesePizzaBuilder cheeseBuilder;
    pd.constructPizza(cheeseBuilder);
    Pizza* cheese = cheeseBuilder.getPizza();
    cheese->showPizza();

    // Clean up Memory
    delete paneer;
    delete cheese;
}

