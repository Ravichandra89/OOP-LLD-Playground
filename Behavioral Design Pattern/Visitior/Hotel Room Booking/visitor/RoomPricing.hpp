#ifndef ROOM_PRICING_HPP
#define ROOM_PRICING_HPP

#include "Visitor.hpp"
#include "../element/SingleRoom.hpp"
#include "../element/DoubleRoom.hpp"
#include "../element/SuitRoom.hpp"

#include <iostream>
using namespace std;

class RoomPricing : public Visitor {
    public : 
        void visit(SingleRoom& room ) override {
            // Calculating Pricing for Single Room
            double price = room.getRoomRate() * 1.0;
            cout << "Single Room " << room.getRoomNumber() << " price : $" << price << endl;
        }

        void visit(DoubleRoom& room) override {
            double price = room.getRoomNumber() * 1.5;
            cout << "Double Room: " << room.getRoomNumber() << " price : $" << price << endl;
        }

        void visit(SuiteRoom& room) override {
            double price = room.getRoomNumber() * 2.5;
            cout << "Suite Room:  " << room.getRoomNumber() << " price: $" << price << endl;
        }
};

#endif