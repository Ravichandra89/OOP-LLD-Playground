#ifndef GUIFactory_hpp
#define GUIFactory_hpp

#include "Button.hpp"
#include "Checkbox.hpp"

#include <iostream>
using namespace std;

class GUI_Factory {
    public: 
        virtual ~GUI_Factory() = default;
        virtual unique_ptr<Button> createButton() const = 0;
        virtual unique_ptr<Checkbox> createCheckbox() const = 0;
};

#endif