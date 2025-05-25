/***
 * Hotel Sub System -
 * searchHotel(...)
 * reserveRoom(...)
 * cancelReservation(...)
 * getReservationDetails(...)
 */

#ifndef HOTEL_SERVICE_HPP
#define HOTEL_SERVICE_HPP

#include <string>
using namespace std;

class HotelService {
    public: 
        void searchHotel(const string & location);
        void reservHotelRoom(const string & user);
        void cancelReservation(const string & reservationId);
        void getReservationDetails(const string &reservationId);
};

#endif