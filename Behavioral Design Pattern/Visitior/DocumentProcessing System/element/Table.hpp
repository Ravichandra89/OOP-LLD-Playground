#ifndef TABLE_CONCRETE_HPP
#define TABLE_CONCRETE_HPP

#include "IDocument.hpp"
#include <string>
#include <vector>
using namespace std;

class Table : public IDocument {
        vector<vector<string>> cells_;
    public : 
        Table(vector<vector<string>> &cell) : cells_(cell) {}

        const vector<vector<string>> getCell() const {
            return cells_;
        }

        void accept(IVisitor& vis) override {
            vis.visit(*this);
        }

};

#endif