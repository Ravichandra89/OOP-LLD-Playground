/***
 * Product Category Header File
 * 
 */

#ifndef COMPOSITE_PRODUCT_CATEGORY_HPP
#define COMPOSITE_PRODUCT_CATEGORY_HPP

#include "IProduct.hpp"
#include <memory>
#include <string>
using namespace std;

class ProductCategory : public IProduct {
        string name;
        unique_ptr<IProduct> products;

    public: 
        ProductCategory(const string & name);
        void display(int indent=0) const override;
        double getPrice() const override;

        // Additional Method to add Product and ProductCategory
        void add(unique_ptr<IProduct> product);
};

#endif