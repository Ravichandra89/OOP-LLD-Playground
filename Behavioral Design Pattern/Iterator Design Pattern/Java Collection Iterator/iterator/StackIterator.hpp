/**
 * Stack : 1. State (Root)
 */

#ifndef STACK_ITERATOR_HPP
#define STACK_ITERATOR_HPP

#include "../include/Iterable.hpp"
#include <vector>
using namespace std;

class StackIterator : public Iterable {
        const vector<int> data_;
        size_t ind;

    public : 
        StackIterator(const vector<int> &d) : data_(d), ind(d.size()- 1){}
        bool hasNext() override {
            return ind >= 0; // Stack has full size
        }

        int next() override {
            return data_[ind--];
        }
};

#endif