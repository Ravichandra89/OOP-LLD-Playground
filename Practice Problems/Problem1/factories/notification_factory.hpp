/**
 * Super Factory reponsible for creating the sub_factories
 * 
 */
#ifndef NOTIFICATION_SUPER_FACTORY_INTERFACE_HPP
#define NOTIFICATION_SUPER_FACTORY_INTERFACE_HPP

#include <string>
#include <memory>

class NotificationFactory {
    public :
        virtual ~NotificationFactory() = default;

};

#endif