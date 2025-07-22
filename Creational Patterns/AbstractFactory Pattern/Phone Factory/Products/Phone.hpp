/**
 * Abstract Product for iPhone, Samsung Mobile, GooglePhone and etc...
 * - getModel()
 * - showSpec()
 */

#ifndef INTERFACE_PHONE_ABSTRACT_PRODUCT_HPP
#define INTERFACE_PHONE_ABSTRACT_PRODUCT_HPP

#include <string>
using namespace std;

class Phone {
    public : 
        virtual string getModel() const = 0;
        virtual void specs() const = 0;
        virtual ~Phone() = default;
};

#endif