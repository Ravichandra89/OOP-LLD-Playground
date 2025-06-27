#ifndef ARRAY_LIST_ITERATOR_HPP
#define ARRAY_LIST_ITERATOR_HPP

#include "../include/Iterable.hpp"
#include <vector>
using namespace std;

class ArrayListIterator : public Iterable {
        const vector<int> & data_;
        size_t ind;
    public : 
        ArrayListIterator(const vector<int> & ele) : data_(ele), ind(0){};

        bool hasNext() override {
            return ind < data_.size();
        }

        int next() override {
            return data_[ind++];
        }
};

#endif