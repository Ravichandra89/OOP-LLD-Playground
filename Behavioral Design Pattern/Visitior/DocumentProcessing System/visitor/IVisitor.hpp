#ifndef INTERFACE_VISITOR_HPP
#define INTERFACE_VISITOR_HPP

class Paragraph;
class ImageElement;
class Table;
class Header;
class Chart;

class IVisitor {
    public : 
        virtual ~IVisitor() = default;

        virtual void visit(Paragraph& item) = 0;
        virtual void visit(ImageElement& item) = 0;
        virtual void visit(Table& item) = 0;
        virtual void visit(Header& item) = 0;
        virtual void visit(Chart& item) = 0;
};

#endif