// Common Interface for Ticket Pricing
#ifndef ITICKET_PRICE_HPP
#define ITICKET_PRICE_HPP

class ITicketPrice {
    public: 
        virtual ~ITicketPrice() = default;
        virtual double getTicketPrice() const = 0;
};

#endif