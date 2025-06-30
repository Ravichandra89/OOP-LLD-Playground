#ifndef INVOICE_VISITOR_HPP
#define INVOICE_VISITOR_HPP

#include "Visitor.hpp"
#include "../element/SingleRoom.hpp"
#include "../element/DoubleRoom.hpp"
#include "../element/SuitRoom.hpp"

#include <iostream>
using namespace std;

class InvoiceVisitor : public Visitor {
public:
    void visit(SingleRoom& room) override {
        cout << "Invoice for Single Room " << room.getRoomNumber()
                  << ": Thank you!\n";
    }
    void visit(DoubleRoom& room) override {
        cout << "Invoice for Double Room " << room.getRoomNumber()
                  << ": Thank you!\n";
    }
    void visit(SuiteRoom& room) override {
        cout << "Invoice for Suite Room " << room.getRoomNumber()
                  << ": Thank you!\n";
    }
};

#endif