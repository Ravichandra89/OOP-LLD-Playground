#include <iostream>
#include <memory>
#include "Header/GUI_Factory.hpp"
#include "Header/WindowFactory.hpp"
#include "Header/LinuxFactory.hpp"
#include "Header/MacOSFactory.hpp"
#include <memory>

using namespace std;

int main()
{
    string os = "linux";

    unique_ptr<GUI_Factory> factory;

    if (os == "windows")
        factory = make_unique<WindowFactory>();
    else if (os == "linux")
        factory = make_unique<LinuxFactory>();
    else
        factory = make_unique<MacOSFactory>();

    auto button = factory->createButton();
    auto checkbox = factory->createCheckbox();

    button->paint();
    checkbox->paint();

    return 0;
}