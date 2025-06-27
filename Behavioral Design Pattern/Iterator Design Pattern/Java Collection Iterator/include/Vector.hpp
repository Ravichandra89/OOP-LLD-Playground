#ifndef VECTOR_HPP
#define VECTOR_HPP

#include "Iterable.hpp"
#include "../iterator/vectorIterator.hpp"
#include <vector>

using namespace std;

class Vector : public IterableCollection {
        vector<int> data_;

    public : 
        // Add Value to the data
        void add(int value) {
            data_.push_back(value);
        }

        unique_ptr<Iterable> iterator() override {
            return make_unique<VectorIterator>(data_);
        }
};

#endif