#ifndef ICUSTOM_DRINK_MAKER_HPP
#define ICUSTOM_DRINK_MAKER_HPP

class ICustomDrinkMaker {
public: 
    virtual void MakeCustomDrink() = 0;
    virtual ~ICustomDrinkMaker() = 0;   
};

#endif 
