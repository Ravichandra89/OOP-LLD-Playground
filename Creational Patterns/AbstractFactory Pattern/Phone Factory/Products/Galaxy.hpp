/**
 * Concrete Product Samsung Galaxy Mobile 
 */
#ifndef SAMSUNG_GALAXY_CONCRETE_PRODUCT_HPP
#define SAMSUNG_GALAXY_CONCRETE_PRODUCT_HPP

#include "Phone.hpp"

class Galaxy : public Phone {
    public :
        string getModel() const override;
        void specs() const override;
};

#endif