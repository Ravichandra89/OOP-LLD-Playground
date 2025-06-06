#ifndef DELIVERY_HANDLER_HPP
#define DELIVERY_HANDLER_HPP

#include "EmailFilter.hpp"
#include <iostream>

using namespace std;

class DeliveryHandler : public EmailFilter {
    protected : 
        bool processEmail(const Email& email) override {
            cout << "[DeliveryHandler] Delivering email to " << email.sender << " with subject: \"" << email.subject << endl;
            return true;
        }

};

#endif