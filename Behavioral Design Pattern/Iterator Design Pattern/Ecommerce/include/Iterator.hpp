/**
 * Iterator Interface - hasNext(), next()
 */

#ifndef ECOMMERCE_ITERATOR_INTERFACE_HPP
#define ECOMMERCE_ITERATOR_INTERFACE_HPP

#include <string>

#include "product.hpp"
using namespace std;

class Iterator {
    public : 
        virtual ~Iterator() = default;
        virtual bool hasNext() = 0;
        virtual Product next() = 0;
};

#endif