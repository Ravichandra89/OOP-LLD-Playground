#ifndef Ishipping_hpp
#define Ishipping_hpp

#include <string>
using namespace std;

class Ishipping {
    public: 
        virtual ~Ishipping() = default;
        virtual void calculatePrice(double weight, double distance) = 0;
};

#endif