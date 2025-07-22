#ifndef SAMSUNG_CONRETE_FACTORY_HPP
#define SAMSUNG_CONRETE_FACTORY_HPP

#include "PhoneFactory.hpp"

class SamsungFactory : public PhoneFactory {
    public : 
        Phone* createPhone() const override;
};

#endif