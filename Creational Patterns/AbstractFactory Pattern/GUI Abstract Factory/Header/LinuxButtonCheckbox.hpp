#ifndef LinuxButtonCheckbox_hpp
#define LinuxButtonCheckbox_hpp

#include "Button.hpp"
#include "Checkbox.hpp"

#include <iostream>
using namespace std;

class LinuxButton : public Button {
    public:
        void paint() const override {
            cout << "[Linux] Render a button with GTK style.\n";
        }
};

class LinuxCheckbox : public Checkbox {
    public:
        void paint() const override {
            cout << "{Linux} Render a Checkbox with GTK style." << endl;
        }
};

#endif