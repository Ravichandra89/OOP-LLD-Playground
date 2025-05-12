/***
 * Concrete Implementor for the Sms Notifier
 */
#include "SMSNotifier.hpp"
#include <iostream>
using namespace std;

void SMSNotifier::notify(const string & receiver, const string & message) {
    cout << "Sending SMS to " << receiver << ": " << message << endl;
};
