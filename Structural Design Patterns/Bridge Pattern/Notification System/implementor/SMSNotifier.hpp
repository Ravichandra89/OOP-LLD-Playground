/**
 * SMS Notifier Header File
 * This class implements the INotifier interface for sending SMS notifications.
 */

#ifndef SMS_NOTIFIER_HPP
#define SMS_NOTIFIER_HPP

#include "Notifier.hpp"
using namespace std;

class SMSNotifier : public INotifier {
    public: 
        void notify(const string & receiver, const string & message) override;
};

#endif