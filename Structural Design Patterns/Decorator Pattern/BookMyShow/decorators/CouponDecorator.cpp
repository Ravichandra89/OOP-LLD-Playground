#include "CouponDecorator.hpp"
#include "../components/ITicketPrice.hpp"
#include "TicketDecorator.hpp"

CouponDecorator::CouponDecorator(ITicketPrice* ticket, double amount) : TicketDecorator(ticket), discountAmount(amount){};

double CouponDecorator::getTicketPrice() const {
    return ticket->getTicketPrice() + discountAmount;
};