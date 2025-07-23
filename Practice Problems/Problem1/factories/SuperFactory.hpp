#ifndef SUPER_FACTORY_HPP
#define SUPER_FACTORY_HPP

#include "email_factory.hpp"
#include "push_notification_factory.hpp"
#include "sms_factory.hpp"
#include "notification_factory.hpp"
#include "../utils/channel_type.hpp"
#include <memory>
#include <stdexcept>

using namespace std;

// Super Factory
class NotificationSystem {              
    public : 
        static unique_ptr<NotificationFactory> getFactory(ChannelType channel) {
            switch(channel) {
                case ChannelType::Email: 
                        return make_unique<EmailFactory>();
                break;

                case ChannelType::SMS:
                        return make_unique<SMSFactory>();
                break;

                case ChannelType::Push: 
                        return make_unique<PushFactory>();
                break;

                default: cout << "Wrong ChannelType" << endl;
                break;
            } 
        }
};

#endif