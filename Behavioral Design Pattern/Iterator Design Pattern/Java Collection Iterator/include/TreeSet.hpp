#ifndef TREE_SET_AGGREGATOR_HPP
#define TREE_SET_AGGREGATOR_HPP

#include "Iterable.hpp"
#include "../iterator/TreeIterator.hpp"

#include <set>
#include <memory>

using namespace std;

class TreeSet : public IterableCollection {
        set<int> data_;
    public:    
        void add(int value) {
            data_.insert(value);
        }

        unique_ptr<Iterable> iterator() override {
            return make_unique<TreeIterator>(data_);
        }
};

#endif