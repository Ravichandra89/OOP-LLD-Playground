#include "VariableFare.hpp"

VariableFare::VariableFare(const std::string& name, double unitRate, double units)
    : name(name), unitRate(unitRate), units(units) {}

double VariableFare::calculateFare() const {
    return unitRate * units;
}
