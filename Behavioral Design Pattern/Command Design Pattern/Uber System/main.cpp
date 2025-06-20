#include <iostream>

#include "commands/logTripCommand.hpp"
#include "commands/NotifyDriverCommand.hpp"
#include "commands/StartTrackingCommand.hpp"
#include "commands/PaymentCommand.hpp"

#include "commands/ITripCommand.hpp"

#include "receivers/DriverReceiver.hpp"
#include "receivers/LoggingService.hpp"
#include "receivers/TrackingService.hpp"
#include "receivers/PaymentService.hpp"

// Inovaker
#include "invoker/TripDispatcher.hpp"

using namespace std;

int main() {
    DriverService driver;
    LoggingService logging;
    TrackingService tracking;
    PaymentService payment;

    // commands Creation
    NotifyDriver notify(&driver, "Driver_123");
    StartTracking tracking(&tracking, "trip_455");
    LogTripCommand log(&logging);
    PaymentCommand payment(&payment, "rider_399", 190.0);

    // Dispatcher
    TripDispatcher dispatcher;

    dispatcher.addCommand(&notify);
    dispatcher.addCommand(&tracking);
    dispatcher.addCommand(&log);
    dispatcher.addCommand(&payment);

    // dispatc.
    dispatcher.dispatch();

    return 0;
}

