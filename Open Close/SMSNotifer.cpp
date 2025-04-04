#include "SMSNotifier.hpp"
#include <iostream>
using namespace std;

void SMSNotifier::sendNotification(const string &msg)
{
    cout << "Sending SMS: " << msg << endl;
}
