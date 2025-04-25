#ifndef LinuxFactory_hpp
#define LinuxFactory_hpp

#include "Button.hpp"
#include "Checkbox.hpp"
#include "GUI_Factory.hpp"

class LinuxFactory : public GUI_Factory {
    public:     
        unique_ptr<Button> createButton() const = 0;
        unique_ptr<Checkbox> createCheckbox() const = 0;
};
#endif