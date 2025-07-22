#include "GoogleFactory.hpp"
#include "../Products/Pixel.hpp"

using namespace std;

Phone* GoogleFactory::createPhone() const {
    return new Pixel();
}