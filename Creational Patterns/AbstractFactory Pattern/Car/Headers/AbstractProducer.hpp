/**
 * Producer that which car object creation is Instantiation
 */

#ifndef AbstractProducer_hpp
#define AbstractProducer_hpp

// Import the EconomyFactory and LuxaryFactory
#include "EconomyFactory.hpp"
#include "LuxaryFactory.hpp"

enum CarFactoryType
{
    ECONOMIC,
    LUXURY
};

class AbstractProducer
{
public:
    static AbstractFactory *getFactory(CarFactoryType type)
    {
        if (type == ECONOMIC)
            return new EconomyFactory();
        else
            return new LuxaryFactory();
    }
};

#endif