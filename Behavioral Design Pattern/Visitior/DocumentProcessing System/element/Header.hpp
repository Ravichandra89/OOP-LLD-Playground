#ifndef HEADER_HPP
#define HEADER_HPP

#include "IDocument.hpp"
#include <string>

using namespace std;

class Header : public IDocument {
    string title_;

public:
    Header(const string &t) : title_(t) {}
    const string &Gettitle() const {
        return title_;
    }
    void accept(IVisitor &v) override
    {
        v.visit(*this);
    }
};

#endif