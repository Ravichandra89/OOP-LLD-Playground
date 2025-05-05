#ifndef FOODCOMBO_DECORATOR_HPP
#define FOODCOMBO_DECORATOR_HPP

#include "TicketDecorator.hpp"
#include "../components/ITicketPrice.hpp"

class FoodComboDecorator : public TicketDecorator {
    double comboPrice;

    public: 
        FoodComboDecorator(ITicketPrice* ticket, double price);
        double getTicketPrice() const override;
};

#endif