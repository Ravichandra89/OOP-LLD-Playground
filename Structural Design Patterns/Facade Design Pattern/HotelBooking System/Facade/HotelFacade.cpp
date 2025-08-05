#include "HotelFacade.hpp"
#include <iostream>
using namespace std;

#include "../SubSystem/BillingSystem.hpp"
#include "../SubSystem/GuestRegistry.hpp"
#include "../SubSystem/RoomService.hpp"

HotelFacade::HotelFacade() {}

string HotelFacade::getRoom(const string &guestName, const string &guestId, const string &roomType, const string &cardInfo, double amount) {
    // Class Instances
    GuestRegistry guest;
    BillingSystem bill;
    RoomService room;

    // 1. Register the Guest
    if (!guest.verifyGuest(guestId)) {
        guest.registerGuest(guestName, guestId);
    }

    // 2. Check and Reserve room
    int roomNumber = room.bookRoom(roomType);

    if (!bill.processPayment(cardInfo, amount)) {
        cout << "Payment Authorization Failed" << endl;
    }

    string invoice = bill.getInvoice(roomNumber, amount);
    return "Booking Confirmed. Room #" + to_string(roomNumber) + ", Invoice: " + invoice;
}