#ifndef BASE_TICKET_PRICE_HPP
#define BASE_TICKET_PRICE_HPP

#include "ITicketPrice.hpp"

class BaseTicketPrice : public ITicketPrice {
    double ticketPrice;
    public: 
        BaseTicketPrice(double cost);
        double getTicketPrice() const override;
};

#endif