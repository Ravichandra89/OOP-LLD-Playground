#ifndef INTERFACE_VISITOR_HPP
#define INTERFACE_VISITOR_HPP


// Foward Declaration
class SingleRoom;
class DoubleRoom;
class DuplexRoom;

// visitor interface
class Visitor {
    public : 
        virtual ~Visitor() = default;
        virtual void visit(SingleRoom& room) = 0;
        virtual void visit(DoubleRoom& room) = 0;
        virtual void visit(DuplexRoom& room) = 0;
};

#endif