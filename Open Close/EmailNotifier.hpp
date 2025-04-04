#ifndef EMAIL_NOTIFIER_HPP
#define EMAIL_NOTIFIER_HPP

// Include the Notifier Interface
#include "Notifier.hpp";
#include <string>
using namespace std;

class EmailNotifier : public Notifier
{
public:
    void sendNotification(const string &msg) override;
};

#endif