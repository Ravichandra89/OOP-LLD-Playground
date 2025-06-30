#ifndef DETAILS_VISITOR_HPP
#define DETAILS_VISITOR_HPP

#include "Visitor.hpp"
#include "../element/SingleRoom.hpp"
#include "../element/DoubleRoom.hpp"
#include "../element/SuitRoom.hpp"

#include <iostream>
using namespace std;

class DetailsVisitor : public Visitor
{
public:
    void visit(SingleRoom &room) override
    {
        cout << "[Details] Single Room #: " << room.getRoomNumber()
                  << ", Rate: $" << room.getRoomRate() << "\n";
    }
    void visit(DoubleRoom &room) override
    {
        cout << "[Details] Double Room #: " << room.getRoomNumber()
                  << ", Rate: $" << room.getRoomRate() << "\n";
    }
    void visit(SuiteRoom &room) override
    {
        cout << "[Details] Suite Room #: " << room.getRoomNumber()
                  << ", Rate: $" << room.getRoomRate() << "\n";
    }
};

#endif