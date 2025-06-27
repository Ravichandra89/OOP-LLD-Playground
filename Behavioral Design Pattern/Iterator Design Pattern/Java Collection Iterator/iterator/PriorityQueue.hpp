#ifndef PRIORITY_QUEUE_ITERATOR_HPP
#define PRIORITY_QUEUE_ITERATOR_HPP

#include "../include/Iterable.hpp"
#include <vector>

using namespace std;

class PriorityQueue : public Iterable {
        vector<int> data_;
        size_t ind;

    public:     
        PriorityQueue(vector<int> &ele) : data_(ele), ind(0) {}

        bool hasNext() override {
            return ind < data_.size();
        }

        int next() override {
            return data_[ind++];
        }
};


#endif