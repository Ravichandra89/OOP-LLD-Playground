#include "ComputerDirector.hpp"

void ComputerDirector::construct(IBuilder & build) const {
    build.buildCpu();
    build.buildRam();
    build.buildStorage();
};

