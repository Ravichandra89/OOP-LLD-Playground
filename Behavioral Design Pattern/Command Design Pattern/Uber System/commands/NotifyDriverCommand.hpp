/***
 * Concrete Command for notifying The driver
 */

#ifndef NOTIFY_DRIVER_COMMAND_HPP
#define NOTIFY_DRIVER_COMMAND_HPP

#include "ITripCommand.hpp"
#include "../receivers/DriverReceiver.hpp"
#include <iostream>
using namespace std;

class NotifyDriver : public ITripCommand {
        DriverService * service_;

    public: 
        // Constructor 
        explicit NotifyDriver(DriverService* svc) : service_(svc) {};

        // Execute method 
        void execute() override {
            service_->notifyDriver();
        }
};

#endif