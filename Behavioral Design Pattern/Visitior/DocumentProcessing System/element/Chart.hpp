#ifndef CHART_HPP
#define CHART_HPP

#include "IDocument.hpp"
#include <string>

using namespace std;

class Chart : public IDocument
{
    string caption_;

public:
    Chart(const string &c) : caption_(c) {}
    const string &caption() const { return caption_; }
    void accept(IVisitor &v) override { v.visit(*this); }
};

#endif