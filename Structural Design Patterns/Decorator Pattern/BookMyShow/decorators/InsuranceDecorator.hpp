#ifndef INSURANCE_DECORATOR_HPP
#define INSURANCE_DECORATOR_HPP

#include "../components/ITicketPrice.hpp"
#include "TicketDecorator.hpp"

class InsuranceDecorator : public TicketDecorator {
        double insuranceRate;
    
    public:
        InsuranceDecorator(ITicketPrice* ticket, double rate);
        double getTicketPrice() const override;
};

#endif