#ifndef BOOKING_VISITOR_HPP
#define BOOKING_VISITOR_HPP

#include "Visitor.hpp"
#include "../element/SingleRoom.hpp"
#include "../element/DoubleRoom.hpp"
#include "../element/SuitRoom.hpp"

#include <iostream>
using namespace std;

class BookingVisitor : public Visitor {
public:
    void visit(SingleRoom& room) override {
        cout << "Booked Single Room " << room.getRoomNumber() << "\n";
    }
    void visit(DoubleRoom& room) override {
        cout << "Booked Double Room " << room.getRoomNumber() << "\n";
    }
    void visit(SuiteRoom& room) override {
        cout << "Booked Suite Room " << room.getRoomNumber() << "\n";
    }
};

#endif