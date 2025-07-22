#ifndef GOOGLE_PIXEL_CONCRETE_FACTORY_HPP
#define GOOGLE_PIXEL_CONCRETE_FACTORY_HPP

#include "PhoneFactory.hpp"

class GoogleFactory : public PhoneFactory {
    public: 
        Phone* createPhone() const override;
};

#endif
