#ifndef VECTOR_ITERATOR_HPP
#define VECTOR_ITERATOR_HPP

#include "../include/Iterable.hpp"
#include <vector>
using namespace std;

class VectorIterator : public Iterable {
        const vector<int> data_;
        size_t ind;

    public : 
        VectorIterator(const vector<int> & ele) : data_(ele), ind(0) {};

        bool hasNext() override {
            return ind < data_.size();
        }

        int next() override {
            return data_[ind++];
        }
};

#endif