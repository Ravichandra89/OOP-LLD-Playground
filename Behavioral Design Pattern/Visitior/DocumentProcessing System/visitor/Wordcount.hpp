/**
 * Wordcount Operation 3:: Concrete Visitor 
 */

#ifndef WORDCOUNT_HPP
#define WORDCOUNT_HPP

#include "IVisitor.hpp"
#include "../element/Paragraph.hpp"
#include "../element/Chart.hpp"
#include "../element/Header.hpp"
#include "../element/ImageElement.hpp"
#include "../element/Table.hpp"

#include <iostream>
#include <sstream>
using namespace std;

class WordCount : public IVisitor {
        int total_;
    public : 
        void visit(Paragraph& p) override {
        std::istringstream iss(p.getText());
        int cnt=0; std::string w;
        while(iss>>w) cnt++;
        total_ += cnt;
        std::cout << "Paragraph words: " << cnt << "\n";
    }
    void visit(Header& h) override {}
    void visit(ImageElement&) override {}
    void visit(Table&) override {}
    void visit(Chart&) override {}
    int totalWords() const { return total_; }
};

#endif