#ifndef EMAIL_FILTER_HPP
#define EMAIL_FILTER_HPP

#include "Email.hpp"
#include <memory>

class EmailFilter {
        shared_ptr<EmailFilter> next_{nullptr};

    protected : 
        virtual bool processEmail(const Email & mail) = 0;
    
    public : 
        virtual ~EmailFilter() = default;

        // Set next handler method
        void setNext(shared_ptr<EmailFilter> next) {
            next_ = next;
        }

        // Handler Method
        void handle(const Email & mail) {
            if (!processEmail(mail) && next_) {
                next_->handle(mail);
            }
        }
};

#endif