#ifndef CONCRETE_FEATURED_PRODUCT_AGGREGATOR_HPP
#define CONCRETE_FEATURED_PRODUCT_AGGREGATOR_HPP

#include "ProductCollection.hpp"
#include "../iterator/FeaturedProductIterator.hpp"

#include <vector>
using namespace std;

class FeaturedProduct : public ProductCollection {
        vector<Product> products_;
    public : 
        // Constructor for New Product adding
        FeaturedProduct() {
            // Sample Products
            products_.push_back({
                1,
                "SmartPhone",
                1000.0
            });

            products_.push_back({
                2, 
                "iPhone",
                8000.0
            });
            products_.push_back({
                3,
                "Headphone",
                199.99
            });
        }

        // Create Collection
        unique_ptr<Iterator> createIterator() override {
            return make_unique<FeaturedProductIterator> (products_);
        }
};

#endif