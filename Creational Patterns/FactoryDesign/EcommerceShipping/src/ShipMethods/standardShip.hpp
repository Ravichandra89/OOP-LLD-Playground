#ifndef standardShip_hpp
#define standardShip_hpp

#include <string>
#include "./Interface/Ishipping.hpp"
using namespace std;

class standardShip : public Ishipping {
    public: 
        void calculatePrice(double weight, double distance) override;
};

#endif