#include <iostream>
#include <memory>
#include <vector>

#include "element/DoubleRoom.hpp"
#include "element/SingleRoom.hpp"
#include "element/SuitRoom.hpp"
#include "element/IRoomElement.hpp"

#include "visitor/BookingVisitior.hpp"
#include "visitor/DetailsVisitor.hpp"
#include "visitor/InvoiceVisitor.hpp"
#include "visitor/RoomPricing.hpp"

using namespace std;

int main() {
    vector<unique_ptr<IRoomElement>> rooms;

    rooms.emplace_back(make_unique<SingleRoom> (101, 1000));
    rooms.emplace_back(make_unique<DoubleRoom> (102, 2000));
    rooms.emplace_back(make_unique<SuiteRoom> (104, 4000));

    BookingVisitor bookVis;
    RoomPricing roomPrice;
    InvoiceVisitor in;
    DetailsVisitor details;

    for (auto & it : rooms) it->accept(details);
    for (auto & it : rooms) it->accept(roomPrice);
    for (auto & it : rooms) it->accept(bookVis);
    for (auto & it : rooms) it->accept(in);

    return 0;
}