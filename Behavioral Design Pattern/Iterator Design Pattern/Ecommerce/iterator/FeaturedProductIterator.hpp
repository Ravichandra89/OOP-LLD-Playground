#ifndef FEATURED_PRODUCT_ITERATOR_HPP
#define FEATURED_PRODUCT_ITERATOR_HPP

#include "../include/Iterator.hpp"
#include <vector>
using namespace std;

class FeaturedProductIterator : public Iterator {
        vector<Product> data_;
        size_t ind;

    public : 
        FeaturedProductIterator(vector<Product> & products_) : data_(products_), ind(0){}

        // hasNext Method
        bool hasNext() override {
            return ind < data_.size();
        }

        // next Method
        Product next() override {
            return data_[ind++];
        }
};

#endif
