#ifndef GUEST_REGISTRY_HPP
#define GUEST_REGISTRY_HPP

#include <string>
using namespace std;

class GuestRegistry {
public:
    bool verifyGuest(const string &guestId);
    void registerGuest(const string &guestName, const string &guestId);
};

#endif