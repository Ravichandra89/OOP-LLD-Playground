#ifndef WindowFactory_hpp
#define WindowFactory_hpp

#include "Button.hpp"
#include "Checkbox.hpp"
#include "GUI_Factory.hpp"

class WindowFactory : public GUI_Factory
{
public:
    unique_ptr<Button> createButton() const = 0;
    unique_ptr<Checkbox> createCheckbox() const = 0;
};

#endif