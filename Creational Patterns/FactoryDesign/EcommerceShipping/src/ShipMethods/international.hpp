#ifndef international_hpp
#define international_hpp

#include <iostream>
#include "./Interface/Ishipping.hpp"
using namespace std;

class international : public Ishipping {
    public:     
        void calculatePrice(double weight, double distance) override;
};

#endif