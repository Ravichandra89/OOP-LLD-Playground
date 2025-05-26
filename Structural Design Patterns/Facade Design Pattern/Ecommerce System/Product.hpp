/***
 * Product Service Sub System - 
 *  - searchProduct(...)
 *  - getProductDetails(...)
 */

#ifndef PRODUCT_SERVICE_HPP
#define PRODUCT_SERVICE_HPP

#include <vector>
#include <string>
using namespace std;

class Product {
    public: 
        Product() = default;
        vector<string> searchProduct(const string & query);
        string getProductDetails(const string & productId);
};

#endif