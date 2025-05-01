#ifndef ICoffe_hpp
#define ICoffe_hpp

#include <string>
using namespace std;

class ICoffe
{
public:
    virtual string getDescription() const = 0;
    virtual double getCoffeCost() const = 0;
    virtual ~ICoffe() = default;
};

#endif