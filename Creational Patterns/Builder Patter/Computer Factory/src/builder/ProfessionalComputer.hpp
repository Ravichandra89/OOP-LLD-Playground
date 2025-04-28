#ifndef ProfessionalComputer_hpp
#define ProfessionalComputer_hpp

#include "IBuilder.hpp"
#include <iostream>
#include "../product/Computer.hpp"

class ProfessionalComputer : public IBuilder {
    private: 
        Computer *pc;
    public:
        ProfessionalComputer();
        ~ProfessionalComputer();

        void buildCpu() override;
        void buildRam() override;
        void buildStorage() override;
        Computer* getResult() override;
};

#endif