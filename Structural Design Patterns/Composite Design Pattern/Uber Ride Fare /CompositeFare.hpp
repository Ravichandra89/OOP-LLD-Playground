#ifndef COMPOSITE_COMPOSITION_HPP
#define COMPOSITE_COMPOSITION_HPP

#include "RideFare.hpp"
#include <vector>
#include <memory>
using namespace std;

class CompositeFare : public RideFare {
        vector<unique_ptr<RideFare>> components;
    
    public: 
        void addComponent(unique_ptr<RideFare> comp);
        double calculateFare() const override;
};

#endif