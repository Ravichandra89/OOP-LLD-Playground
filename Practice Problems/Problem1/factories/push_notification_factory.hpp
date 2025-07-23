#ifndef PUSH_FACTORY_HPP
#define PUSH_FACTORY_HPP

#include "notification_factory.hpp"

class PushFactory : public NotificationFactory {
    public: 
        unique_ptr<NotificationBuilder> createBuilder() const override;
};

#endif