/**
 * Second Operation :: Render the Document Elements
 */

#ifndef RENDER_VISITOR_CONCRETE_HPP
#define RENDER_VISITOR_CONCRETE_HPP

#include "IVisitor.hpp"
#include "../element/Paragraph.hpp"
#include "../element/Chart.hpp"
#include "../element/Header.hpp"
#include "../element/ImageElement.hpp"
#include "../element/Table.hpp"

#include <iostream>
using namespace std;

class RenderVisitor : public IVisitor
{
public:
    void visit(Paragraph &p) override
    {
        cout << "Rendering paragraph: " << p.getText() << "\n";
    }
    void visit(Header &h) override
    {
        cout << "Rendering header: ## " << h.Gettitle() << " ##\n";
    }
    void visit(ImageElement &img) override
    {
        cout << "Rendering image URL: " << img.getUrl() << "\n";
    }
    void visit(Table &tbl) override
    {
        cout << "Rendering table with " << tbl.getCell().size() << " rows\n";
    }
    void visit(Chart &c) override
    {
        cout << "Rendering chart caption: " << c.caption() << "\n";
    }
};

#endif