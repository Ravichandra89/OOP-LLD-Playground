#include "MacOsButtonCheckbox.hpp"
#include "MacOSFactory.hpp"
#include <iostream>
#include <memory>

using namespace std;

unique_ptr<Button> MacOSFactory::createButton() const {
    return make_unique<MacOsButton>();
}

unique_ptr<Checkbox> MacOSFactory::createCheckbox() const {
    return make_unique<MacOsCheckbox>();
}

