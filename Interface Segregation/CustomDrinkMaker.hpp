#ifndef CUSTOM_DRINK_MAKER_HPP
#define CUSTOM_DRINK_MAKER_HPP

#include "ICustomDrinkMaker.hpp"

class CustomDrinkMaker : public ICustomDrinkMaker {
    public: 
        void MakeCustomDrink() override;
};

#endif