#include "FoodComboDecorator.hpp"
#include "../components/ITicketPrice.hpp"
#include "TicketDecorator.hpp"

// Constructor 
FoodComboDecorator::FoodComboDecorator(ITicketPrice* ticket, double price) : TicketDecorator(ticket), comboPrice(price){};

// Method
double FoodComboDecorator::getTicketPrice() const {
    return ticket->getTicketPrice() + comboPrice;
};

