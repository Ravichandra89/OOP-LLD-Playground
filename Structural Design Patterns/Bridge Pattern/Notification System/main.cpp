#include <iostream>

// Abstraction Notification 
#include "abstraction/Notification.hpp"
#include "abstraction/InstantNotification.hpp"
#include "abstraction/LazyNotification.hpp"


// Notifier Methods
#include "implementor/Notifier.hpp"
#include "implementor/EmailNotifier.hpp"
#include "implementor/SMSNotifier.hpp"
#include "implementor/PushNotifier.hpp"

using namespace std;

int main() {
    EmailNotifier email;
    SMSNotifier sms;
    PushNotifier push;

    InstantNotification instantEmail(&email);
    InstantNotification instantSms(&sms);

    instantEmail.send("user@example.com", "Server is down!");
    instantSms.send("+1234567890", "Server is down!");
}
