/**
 * Concrete_email_factory
 */

#ifndef EMAIL_FACTORY_HPP
#define EMAIL_FACTORY_HPP

#include "notification_factory.hpp"

class EmailFactory : public NotificationFactory {
    public: 
        unique_ptr<NotificationBuilder> createBuilder() const override;
};

#endif