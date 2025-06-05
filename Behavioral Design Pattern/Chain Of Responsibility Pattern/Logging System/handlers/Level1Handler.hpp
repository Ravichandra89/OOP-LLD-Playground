#ifndef LEVEL_ONE_HANDLER_HPP
#define LEVEL_ONE_HANDLER_HPP

#include "SupportHandler.hpp"
#include <memory>
#include <iostream>

using namespace std;

class Level1Handler : public SupportHandler {
    protected : 
        bool processRequest(const Request& req) override {
            // Check priority is 1 or not
            if (req.priority == 1) {
                cout << "[Level 1] Handling basic request:" << req.message << endl;
                return true;
            }

            // If Priority differs
            return false;
        }
};

#endif