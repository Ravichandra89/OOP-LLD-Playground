#ifndef CONCRETE_ELEMENT_PARAGRAPH_HPP
#define CONCRETE_ELEMENT_PARAGRAPH_HPP

#include "IDocument.hpp"
#include <string>
using namespace std;

class Paragraph : public IDocument {
        string text_;
    public : 
        // Constructor 
        Paragraph(const string & text) : text_(text) {}
        
        const string getText() const {
            return text_;
        }

        void accept(IVisitor& vis) override {
            vis.visit(*this);
        }
};

#endif