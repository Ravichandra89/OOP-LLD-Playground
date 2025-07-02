#ifndef SPELL_CHECHKING_CONCRETE_VISITOR_HPP
#define SPELL_CHECHKING_CONCRETE_VISITOR_HPP

#include "IVisitor.hpp"
#include "../element/Paragraph.hpp"
#include "../element/Chart.hpp"
#include "../element/Header.hpp"
#include "../element/ImageElement.hpp"
#include "../element/Table.hpp"

#include <iostream>
using namespace std;

class SpellChecking : public IVisitor {
    public : 
        void visit(Paragraph& item) override {
            cout << "Spell checking paragraph: " << item.getText() << endl;
        }

        void visit(Header& item) override {
            cout << "Spell checking header: " << item.Gettitle() << endl;
        }

        void visit(Table& item) override{}
        void visit(ImageElement& item) override {}
        void visit(Chart& item) override {}
};

#endif