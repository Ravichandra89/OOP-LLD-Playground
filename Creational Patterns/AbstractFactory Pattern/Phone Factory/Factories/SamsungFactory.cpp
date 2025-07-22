#include "SamsungFactory.hpp"
#include "../Products/Galaxy.hpp"
using namespace std;

Phone* SamsungFactory::createPhone() const {
    return new Galaxy();
}