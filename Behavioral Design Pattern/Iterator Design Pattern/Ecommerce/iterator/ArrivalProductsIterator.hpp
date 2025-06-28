#ifndef ARRIVAL_ITERATOR_HPP
#define ARRIVAL_ITERATOR_HPP

#include "Iterator.hpp"
#include <list>

using namespace std;

class ArrivalProductIterator : public Iterator {
        list<Product>::const_iterator it_, end_;
    public : 
        ArrivalProductIterator(list<Product> &lst) : it_(lst.begin()), end_(lst.end()){}
        
        // hasNext Method
        bool hasNext() override {
            return it_ != end_;
        }

        Product next() override {
            return *it_++;
        }
};

#endif