#ifndef STACK_HPP
#define STACK_HPP

#include "Iterable.hpp"
#include "../iterator/StackIterator.hpp"
#include <vector>

using namespace std;

class Stack : public IterableCollection {
        vector<int> data_;

    public : 
        // push element to stack data
        void push(int value) {
            data_.push_back(value);
        }

        unique_ptr<Iterable> iterator() override {
            return make_unique<StackIterator>(data_);
        }
};

#endif