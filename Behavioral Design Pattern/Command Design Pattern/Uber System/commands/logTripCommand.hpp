#ifndef LOG_TRIP_COMMAND_HPP
#define LOG_TRIP_COMMAND_HPP

#include "ITripCommand.hpp"
#include "../receivers/LoggingService.hpp"
using namespace std;

class LogTripCommand : public ITripCommand {
        LoggingService * service_;
    public : 
        explicit LogTripCommand(LoggingService * log) : service_(log) {};
        void execute() {
            service_->logTrip();
        }

};

#endif