#ifndef CONCRETE_SMS_FACTORY_HPP
#define CONCRETE_SMS_FACTORY_HPP

#include "notification_factory.hpp"

class SMSFactory : public NotificationFactory {
    public: 
        unique_ptr<NotificationBuilder> createBuilder() const override;
};

#endif