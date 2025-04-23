#ifndef AbstractCar_hpp
#define AbstractCar_hpp

#include <string>
using namespace std;

class AbstractCar {
    public: 
        virtual string getDescription() = 0;
        virtual ~AbstractCar() = default;
};


#endif