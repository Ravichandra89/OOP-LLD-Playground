#include "HotelService.hpp"
#include <iostream>
using namespace std;

void HotelService::searchHotel(const string & location) {
// TODO: Write Actual Searching Logic
    cout << "Searching hotels in : " << location << endl;
}

void HotelService::reservHotelRoom(const string & user) {
    cout << "Reserving hotel for: " << user << endl;
}

void HotelService::cancelReservation(const string & reservationId) {
    cout << "Cancelling reservation ID: " << reservationId << endl;
}

void HotelService::getReservationDetails(const string & reservationId) {
    cout << "Fetching reservation details on: " << reservationId << endl;
}