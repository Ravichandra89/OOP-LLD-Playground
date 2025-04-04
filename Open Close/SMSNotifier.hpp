#ifndef SMS_NOTIFIER_HPP
#define SMS_NOTIFIER_HPP

#include <string>
#include "Notifier.hpp"

using namespace std;

class SMSNotifier : public Notifier
{
public:
    void sendNotification(const string &msg) override;
};

#endif