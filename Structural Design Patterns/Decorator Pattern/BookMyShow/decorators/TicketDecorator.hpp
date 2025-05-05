#ifndef TICKET_DECORATOR_HPP
#define TICKET_DECORATOR_HPP

#include "../components/ITicketPrice.hpp"

class TicketDecorator : public ITicketPrice {
    protected: 
        ITicketPrice * ticket;
    public: 
        TicketDecorator(ITicketPrice* ticket);
        virtual ~TicketDecorator() = default;
};

#endif
