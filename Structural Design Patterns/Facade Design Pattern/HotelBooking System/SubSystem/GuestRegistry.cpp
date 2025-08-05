#include "GuestRegistry.hpp"
#include <iostream>
using namespace std;

bool GuestRegistry::verifyGuest(const string& guestId) {
    cout << "Verifying existing guest Id: " << guestId << endl;
    return true; 
}

void GuestRegistry::registerGuest(const string& guestName, const string& guestId) {
    cout << "Registering guest " << guestName << " with ID " << guestId << endl;
}
