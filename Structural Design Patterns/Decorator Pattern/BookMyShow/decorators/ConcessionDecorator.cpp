#include "ConcessionDecorator.hpp"
#include "../components/ITicketPrice.hpp"

// Constructor
ConcessionDecorator::ConcessionDecorator(ITicketPrice* ticket, double rate) : TicketDecorator(ticket), concessionRate(rate){};

// Method
double ConcessionDecorator::getTicketPrice() const {
    return ticket->getTicketPrice() * (1 - concessionRate);
};

