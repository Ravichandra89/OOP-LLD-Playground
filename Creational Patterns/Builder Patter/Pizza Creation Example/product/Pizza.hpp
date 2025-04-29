#ifndef Pizza_hpp
#define Pizza_hpp

#include <iostream>
#include <vector>
using namespace std;

class Pizza {
        string size;
        string crust;
        string sauce;
        string cheese;
        vector<string> topping;
        Pizza();
    public: 
        void showPizza() const;
};

#endif