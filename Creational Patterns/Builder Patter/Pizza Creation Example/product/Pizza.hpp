#ifndef PIZZA_HPP
#define PIZZA_HPP

#include <string>
#include <vector>
using namespace std;

// Forward declarations of builder classes to grant friendship
class IPizzaBuilder;
class PaneerPizzaBuilder;
class CheesePizzaBuilder;
class VeggiePizzaBuilder;

class Pizza
{
    friend class IPizzaBuilder;
    friend class PaneerPizzaBuilder;
    friend class CheesePizzaBuilder;
    friend class VeggiePizzaBuilder;

private:
    string size_;
    string crust_;
    string sauce_;
    string cheese_;
    vector<string> toppings_;

    Pizza();

public:
    void showPizza() const;
};

#endif