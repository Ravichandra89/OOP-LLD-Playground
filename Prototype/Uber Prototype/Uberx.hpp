#ifndef UBERX_HPP
#define UBERX_HPP

#include "Uber.hpp"
#include <string>
#include <memory>

using namespace std;

class UberX : public Uber
{
private:
    string pickup, drop, type;
    float basseFare;

public:
    UberX();
    UberX(const UberX &ub);
    unique_ptr<Uber> clone() const override;
    void setPickupLocation(const string &location) override;
    void setDropLocation(const string &location) override;
};

#endif