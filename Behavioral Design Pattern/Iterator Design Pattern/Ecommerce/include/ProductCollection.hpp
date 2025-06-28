#ifndef PRODUCT_COLLECTION_HPP
#define PRODUCT_COLLECTION_HPP

#include "Iterator.hpp"
#include <memory>

class ProductCollection {
    public : 
        virtual ~ProductCollection() = default;
        
        // Iterator 
        virtual unique_ptr<Iterator> createIterator() = 0;
};

#endif