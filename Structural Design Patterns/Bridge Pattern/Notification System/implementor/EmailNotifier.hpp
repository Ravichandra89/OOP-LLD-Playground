/**
 * Email Notifier Header File
 */
#ifndef EMAIL_NOTIFIER_HPP
#define EMAIL_NOTIFIER_HPP

#include "Notifier.hpp"
#include <iostream>
using namespace std;

/**
 * EmailNotifier Header File
 * This class implements the INotifier interface for sending email notifications.
 */

class EmailNotifier : public INotifier {
    public: 
        void notify(const string & receiver, const string & message) override;
};

#endif