// Concrete Component for the ICoffe Interface
#ifndef Plain_Coffe_hpp
#define Plain_Coffe_hpp

#include "ICoffe.hpp"
#include <string>
using namespace std;

class PlainCoffe : public ICoffe {
    public: 
        string getDescription() const override;
        double getCoffeCost() const override;
};

#endif