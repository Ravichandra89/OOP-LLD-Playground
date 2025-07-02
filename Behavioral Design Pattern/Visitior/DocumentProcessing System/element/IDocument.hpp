#ifndef INTERFACE_DOCUMENT_HPP
#define INTERFACE_DOCUMENT_HPP

#include <string>
#include "../visitor/IVisitor.hpp"
using namespace std;

class IDocument {
    public : 
        virtual ~IDocument() = default;
        virtual void accept(IVisitor& vis) = 0;
};

#endif