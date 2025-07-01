#ifndef VISITOR_HPP
#define VISITOR_HPP
// Visitor Interface

class Electronics;
class Grocery;
class Clothing;

#include <string>
using namespace std;

class Visitor {
    public : 
        virtual ~Visitor() = default;
        virtual void visit(Electronics& item) = 0;
        virtual void visit(Grocery& item) = 0;
        virtual void visit(Clothing& item) = 0;
};

#endif