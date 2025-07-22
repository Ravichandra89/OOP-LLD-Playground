#include "AppleFactory.hpp"
#include <iostream>
#include "../Products/iPhone.hpp"

using namespace std;

Phone* AppleFactory::createPhone() const {
    return new iPhone();
}

