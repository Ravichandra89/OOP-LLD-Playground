#ifndef HOTEL_FACADE_HPP
#define HOTEL_FACADE_HPP



#include <string>
using namespace std;

class HotelFacade {
    public: 
        HotelFacade();
        string getRoom(const string& guestName, const string& guestId, const string& roomType, const string& cardInfo, double amount);
};

#endif