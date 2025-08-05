#ifndef ROOM_SERVICE_SUB_SYSTEM_HPP
#define ROOM_SERVICE_SUB_SYSTEM_HPP

#include <string>
using namespace std;

class RoomService {
    public: 
        bool checkRoomAvailability(const string& roomType);
        int bookRoom(const string& roomType);
};

#endif