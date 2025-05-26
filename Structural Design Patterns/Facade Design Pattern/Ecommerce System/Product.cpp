#include "Product.hpp"
#include <iostream>
using namespace std;

vector<string> Product::searchProduct(const string & query) {
    cout << "[Product] Searching for: " << query << endl;
    return {"product1", "Product2"};
}

string Product::getProductDetails(const string & productId) {
    cout << "[Product] Getting details for: " << productId << endl;
    return "Product Details for: " + productId;
}
