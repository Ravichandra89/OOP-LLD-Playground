#ifndef CHAIN_PATTERN_SUPPORT_HANDLER_HPP
#define CHAIN_PATTERN_SUPPORT_HANDLER_HPP

#include "Request.hpp"
#include <memory>

using namespace std;

class SupportHandler {
        shared_ptr<SupportHandler> next_{nullptr};
    
    protected :     
        virtual bool processRequest(const Request & req) = 0;
    
    public : 
        virtual ~SupportHandler() = default;

        // SetNext Handler Method
        void setNext(shared_ptr<SupportHandler> next) {
            next_ = next;
        }

        // Handle Request Method
        void handleRequest(const Request & req) {
            if (!processRequest(req) && next_) {
                next_->handleRequest(req);
            }
        }
};

#endif