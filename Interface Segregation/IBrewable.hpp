#ifndef IBREWABLE_HPP
#define IBREWABLE_HPP

class IBrewable {
public: 
    virtual void brewCoffee() = 0;
    virtual ~IBrewable() = 0;  
};

#endif 
