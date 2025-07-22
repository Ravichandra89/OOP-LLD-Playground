/**
 * Redmi Concrete Product
 */
#ifndef GOOGLE_PIXEL_CONCRETE_PRODUCT_HPP
#define GOOGLE_PIXEL_CONCRETE_PRODUCT_HPP

#include "Phone.hpp"

class Pixel : public Phone {
    public : 
        string getModel() const override;
        void specs() const override;
};

#endif