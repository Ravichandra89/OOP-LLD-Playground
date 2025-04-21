#ifndef ShippingFactory_hpp
#define ShippingFactory_hpp

#include <iostream>
#include <memory>
#include "./Interface/Ishipping.hpp"
using namespace std;


class ShippingFactory {
    public: 
        static unique_ptr<Ishipping> create (const string & methodType);
};
#endif