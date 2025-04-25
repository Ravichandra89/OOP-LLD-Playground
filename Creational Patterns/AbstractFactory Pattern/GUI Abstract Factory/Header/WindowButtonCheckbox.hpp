#ifndef WindowButton_hpp
#define WindowButton_hpp

#include "Button.hpp"
#include "Checkbox.hpp"

#include <iostream>
using namespace std;

class WindowButton : public Button {
    public:
        void paint() const override{
            cout << " [Windows] Render a button with Win32 style.\n";
        }
};

class WindowCheckbox : public Checkbox {
    public:
        void paint() const override {
            cout << "[Windows] Render a checkbox with Win32 style.\n";
        }

};

#endif