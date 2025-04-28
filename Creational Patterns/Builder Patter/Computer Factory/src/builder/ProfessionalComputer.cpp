#include "ProfessionalComputer.hpp"

ProfessionalComputer::ProfessionalComputer()
{
    pc = new Computer();
};

ProfessionalComputer::~ProfessionalComputer()
{
    delete pc;
};

void ProfessionalComputer::buildCpu()
{
    pc->setCPU("Intel Xeon W-2295");
};

void ProfessionalComputer::buildRam()
{
    pc->setRAM("64GB ECC DDR4");
};

void ProfessionalComputer::buildStorage()
{
    pc->setStorage("1TB NVMe SSD + 4TB HDD");
};

Computer *ProfessionalComputer::getResult()
{
    return pc;
};
