/**
 * Concrete Aggregator - Implementing the Collection Interface
 */

#ifndef ARRAY_LIST_HPP
#define ARRAY_LIST_HPP

#include "Iterable.hpp"
#include "../iterator/arrayListIterator.hpp"

#include <vector>
using namespace std;

class ArrayList : public IterableCollection {
        vector<int> data_;

    public : 
        // add value to data vector
        void add(int val) {
            data_.push_back(val);
        }

        // Aggregate Object Creator
        unique_ptr<Iterable> iterator() override {
            return make_unique<ArrayListIterator>(data_);
        }
};

#endif