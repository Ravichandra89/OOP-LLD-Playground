#include "BaseFare.hpp"
#include <iostream>
using namespace std;

// Constructor Initilization
BaseFare::BaseFare(const string & name_, double amount_) : name(name_), amount(amount_){};

// CalculateFare Method
double BaseFare::calculateFare() const {
    return amount;
}
