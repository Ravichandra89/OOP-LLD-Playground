#ifndef TREE_ITERATOR_HPP
#define TREE_ITERATOR_HPP

#include "../include/Iterable.hpp"
#include <set>
using namespace std;

class TreeIterator : public Iterable {
    set<int>::const_iterator it_, end_;
    public : 
        TreeIterator(set<int> &s) : it_(s.begin()), end_(s.end()){};

        bool hasNext() override {
            return it_ != end_;
        }

        int next() override {
            return *it_++;
        }
};

#endif