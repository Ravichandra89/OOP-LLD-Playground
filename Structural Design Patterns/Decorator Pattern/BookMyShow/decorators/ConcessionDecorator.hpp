#ifndef CONCESSION_DECORATOR_HPP
#define CONDESSION_DECORATOR_HPP

#include "../components/ITicketPrice.hpp"
#include "TicketDecorator.hpp"

class ConcessionDecorator : public TicketDecorator {
    double concessionRate;

    public: 
        ConcessionDecorator(ITicketPrice* ticket, double rate);
        double getTicketPrice() const override;
};

#endif