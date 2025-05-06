#include "InsuranceDecorator.hpp"

InsuranceDecorator::InsuranceDecorator(ITicketPrice* ticket, double rate) : TicketDecorator(ticket), insuranceRate(rate){};

double InsuranceDecorator::getTicketPrice() const {
    return ticket->getTicketPrice() + insuranceRate;
};
