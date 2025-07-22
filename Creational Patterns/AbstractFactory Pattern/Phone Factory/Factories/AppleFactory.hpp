/**
 * Concrete Factory - Responsible for creating the Apple Products
 * Impelements the createPhone Method
 */
#ifndef CONCRETE_FACTORY_APPLE_HPP
#define CONCRETE_FACTORY_APPLE_HPP

#include "PhoneFactory.hpp"

class AppleFactory : public PhoneFactory {
    public : 
        Phone* createPhone() const override;
};

#endif