#include "Header/WindowFactory.hpp"
#include "Header/WindowButtonCheckbox.hpp"

#include <iostream>
#include <memory>
using namespace std;

unique_ptr<Button> WindowFactory::createButton() const {
    return make_unique<WindowButton>();
}

unique_ptr<Checkbox> WindowFactory::createCheckbox() const {
    return make_unique<WindowCheckbox>();
}
