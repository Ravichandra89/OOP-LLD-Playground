#ifndef MacOsButtonCheckbox_hpp
#define MacOsButtonCheckbox_hpp

#include "Button.hpp"
#include "Checkbox.hpp"

#include <iostream>
using namespace std;

class MacOsButton : public Button {
    public:
        void paint() const override {
            cout << "[macOS] Render a button with Cocoa style.\n";
        }
};

class MacOsCheckbox : public Checkbox {
    public:
        void paint() const override {
            cout << "[macOS] Render a checkbox with Cocoa style.\n";
        }
};

#endif