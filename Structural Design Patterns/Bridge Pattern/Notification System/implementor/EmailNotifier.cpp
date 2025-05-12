#include "EmailNotifier.hpp"
#include <iostream>

using namespace std;

/**
 * EmailNotifier Class Implementation
 * This class implements the INotifier interface for sending email notifications.
 */

void EmailNotifier::notify(const string & receiver, const string & message) {
    cout << "Sending email to " << receiver << ": " << message << endl;
}