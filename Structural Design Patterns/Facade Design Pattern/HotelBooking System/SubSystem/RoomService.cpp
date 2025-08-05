#include "RoomService.hpp"
#include <iostream>
using namespace std;

bool RoomService::checkRoomAvailability(const string& roomType) {
    cout << "Checking room availability for room " << roomType << endl;
    return true; 
}

int RoomService::bookRoom(const string& roomType) {
    static int roomNumber = 100;
    int assign = roomNumber++;
    cout << "Reserving " << roomType << " roon. Assigned room #" << assign << endl;
    return assign;
}

