#ifndef GamingComputer_hpp
#define GamingComputer_hpp

#include "IBuilder.hpp"
#include <iostream>
#include "../product/Computer.hpp"

class GamingComputer : public IBuilder {
    private: 
        Computer * cp;
    public: 
        GamingComputer();
        ~GamingComputer() override;

        void buildCpu() override;
        void buildRam() override;
        void buildStorage() override;
        Computer* getResult() override;
};

#endif