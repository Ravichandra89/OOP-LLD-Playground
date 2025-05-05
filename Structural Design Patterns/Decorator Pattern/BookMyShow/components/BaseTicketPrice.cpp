#include <iostream>
#include "BaseTicketPrice.hpp"

BaseTicketPrice::BaseTicketPrice(double cost) : ticketPrice(cost){};

// Method 
double BaseTicketPrice::getTicketPrice() const {
    return ticketPrice;
};