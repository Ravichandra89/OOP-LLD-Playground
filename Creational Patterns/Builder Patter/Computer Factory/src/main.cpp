#include <iostream>
#include "product/Computer.hpp"
#include "builder/GamingComputer.hpp"
#include "builder/ProfessionalComputer.hpp"
#include "director/ComputerDirector.hpp"

using namespace std;

int main() {
    ComputerDirector cd;

    // build gaming computer
    GamingComputer gm;
    cd.construct(gm);
    Computer* gamingPc = gm.getResult();
    gamingPc->displayInfo();

    // Build professional computer
    ProfessionalComputer pc;
    cd.construct(pc);
    Computer* profPc = pc.getResult();
    profPc->displayInfo();

    delete profPc;
    delete gamingPc;

}
