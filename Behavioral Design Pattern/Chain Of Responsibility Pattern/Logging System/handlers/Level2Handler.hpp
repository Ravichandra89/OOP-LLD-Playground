#ifndef LEVEL_TWO_HANDLER_HPP
#define LEVEL_TWO_HANDLER_HPP

#include "SupportHandler.hpp"
#include <iostream>

using namespace std;

class Level2Handler : public SupportHandler {
    protected : 
        bool processRequest(const Request & req) {
            // Check first the priority then handle request
            if (req.priority == 2) {
                cout << "[Level 2] Handling intermediate request: " << req.message << endl;
                return true;
            }

            // Mismatch Priority request
            return false;
        }
};

#endif