#ifndef COUPON_DECORATOR_HPP
#define COUPON_DECORATOR_HPP

#include "TicketDecorator.hpp"
#include "../components/ITicketPrice.hpp"

class CouponDecorator : public TicketDecorator {
        double discountAmount;
    public: 
        CouponDecorator(ITicketPrice* ticket, double amount);
        double getTicketPrice() const override;
};

#endif