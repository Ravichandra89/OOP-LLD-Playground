#include <iostream>
#include "Facade/HotelFacade.hpp"
using namespace std;

int main() {
    HotelFacade hotel;
    string response = hotel.getRoom("Ravi", "Guest123", "Family", "4111-****-****-1111", 2000);
    cout << response << endl;
    return 0;
}