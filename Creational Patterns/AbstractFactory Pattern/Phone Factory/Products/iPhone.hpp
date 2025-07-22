/**
 * Concrete Products : iphone 
 */
#ifndef IPHONE_CONCRETE_PRODUCT_HPP
#define IPHONE_CONCRETE_PRODUCT_HPP

#include "Phone.hpp"

class iPhone : public Phone {
    public : 
        string getModel() const override;
        void spec() const override;
};

#endif