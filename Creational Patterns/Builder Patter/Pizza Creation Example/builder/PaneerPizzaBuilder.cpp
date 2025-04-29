#include "PaneerPizzaBuilder.hpp"
#include "../product/Pizza.hpp"

// Constructor / Destructor
PaneerPizzaBuilder::PaneerPizzaBuilder()
    : pz(new Pizza())
{}

PaneerPizzaBuilder::~PaneerPizzaBuilder() {
    delete pz;
}

// Build steps
void PaneerPizzaBuilder::buildSize() {
    pz->size_ = "Large";
}

void PaneerPizzaBuilder::buildCrust() {
    pz->crust_ = "Thick";
}

void PaneerPizzaBuilder::buildSauce() {
    pz->sauce_ = "Tomato Sauce";
}

void PaneerPizzaBuilder::buildCheese() {
    pz->cheese_ = "Cheddar";
}

void PaneerPizzaBuilder::buildToppings() {
    pz->toppings_.push_back("Paneer");
    pz->toppings_.push_back("Capsicum");
}

Pizza* PaneerPizzaBuilder::getPizza() {
    Pizza* result = pz;
    pz = nullptr;
    return result;
}