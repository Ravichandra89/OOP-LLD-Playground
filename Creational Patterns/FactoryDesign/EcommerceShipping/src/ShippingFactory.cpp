#include "ShippingFactory.hpp"
#include <iostream>
#include <memory>

// Including Shipping Methods
#include "./ShipMethods/standardShip.hpp"
#include "./ShipMethods/international.hpp"
#include "./ShipMethods/expressShip.hpp"
#include "./Interface/Ishipping.hpp"

using namespace std;

unique_ptr<Ishipping> ShippingFactory::create(const string &type)
{
    if (type == "standard")
    {
        return make_unique<standardShip>();
    }
    else if (type == "express")
    {
        return make_unique<expressShip>();
    }
    else if (type == "international")
    {
        return make_unique<international>();
    }

    // throw any error
    throw invalid_argument(type);
};
