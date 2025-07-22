/**
 * Sub-Factory Abstract Interface defineing the creation methods for the sub factories: AppleFactory, SamsungFactory, GoogleFactory...
 * 
 * - Phone* createPhone() = 0;
 */
#ifndef PHONE_FACTORY_ABSTRACT_HPP
#define PHONE_FACTORY_ABSTRACT_HPP

#include "../Products/Phone.hpp"

class PhoneFactory {
    public : 
        virtual ~PhoneFactory() = 0;
        virtual Phone* createPhone() const = 0;
};

#endif
