#ifndef START_TRACKING_COMMAND_HPP
#define START_TRACKING_COMMAND_HPP

#include "ITripCommand.hpp"
#include "../receivers/TrackingService.hpp"

class StartTracking : public ITripCommand {
        TrackingService * service_;
    public: 
        // Constructor
        explicit StartTracking(TrackingService* svc) : service_(svc) {};
        void execute() {
            service_->startTracking();
        }
};

#endif