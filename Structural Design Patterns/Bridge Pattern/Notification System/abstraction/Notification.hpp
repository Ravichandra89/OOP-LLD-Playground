/**
 * 
 * Abstraction for the Notification class Interface.
 * This class defines the interface for sending notifications.
 */

#ifndef NOTIFICATION_HPP
#define NOTIFICATION_HPP

#include "../implementor/Notifier.hpp"
#include <string>
using namespace std;

class INotification {
    protected: 
        INotifier * notifier;
    public: 
        /**
         * Constructor for the INotifier Initializer.
         */
        INotification(INotifier * notifier) : notifier(notifier) {};
        virtual ~INotification() = default;
        virtual void send(const string & reciver, const string & message) = 0;
};

#endif