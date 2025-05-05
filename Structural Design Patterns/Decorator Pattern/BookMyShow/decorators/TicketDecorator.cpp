#include "TicketDecorator.hpp"
#include "../components/ITicketPrice.hpp"

// Constructor 
TicketDecorator::TicketDecorator(ITicketPrice * ticket) : ticket(ticket){};

// Destructor
TicketDecorator::~TicketDecorator() {
    delete ticket;
};