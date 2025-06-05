#ifndef LEVEL_THREE_HANDLER_HPP
#define LEVEL_THREE_HANDLER_HPP

#include "SupportHandler.hpp"
#include <iostream>

using namespace std;

class Level3Handler : public SupportHandler {
    protected : 
        bool processRequest(const Request & req) override {
            // Check first priority
            if (req.priority == 3) {
                cout << "[Level 3] Handling critical requests" << req.message << endl;
                return true;
            }
            cout << "[level3] Can't Handle the Request" << endl;
            return false;
        }
};

#endif