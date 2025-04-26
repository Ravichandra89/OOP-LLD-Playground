#include "Header/LinuxFactory.hpp"
#include "Header/LinuxButtonCheckbox.hpp"
#include <iostream>

#include <memory>

using namespace std;


// CreateButton & CreateCheckbox function Concrete Implementation

unique_ptr<Button> LinuxFactory::createButton() const {
    return make_unique<LinuxButton>();
}

unique_ptr<Checkbox> LinuxFactory::createCheckbox() const {
    return make_unique<LinuxCheckbox>();
}