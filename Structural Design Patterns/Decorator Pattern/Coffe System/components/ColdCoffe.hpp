#ifndef Cold_Coffe_hpp
#define Cold_Coffe_hpp

#include "ICoffe.hpp"
#include <string>

using namespace std;

class ColdCoffe : public ICoffe {
    public: 
        string getDescription() const override;
        double getCoffeCost() const override;
};
#endif