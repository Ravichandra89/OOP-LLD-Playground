/**
 * Inteface for Leaf products and Composite Product Category.
 */

#ifndef ECOMMERCE_COMPOSITE_PRODUCT_HPP
#define ECOMMERCE_COMPOSITE_PRODUCT_HPP

#include <string>

class IProduct {
    public: 
        virtual ~IProduct() = default;
        virtual void display(int indent = 0) const = 0;
        virtual double getPrice() const = 0;
};

#endif