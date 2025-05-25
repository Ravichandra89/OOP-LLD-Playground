#ifndef TRIP_FACADE_HPP
#define TRIP_FACADE_HPP

#include "HotelService.hpp"
#include "FlightService.hpp"
#include "CabService.hpp"
#include "ItineraryService.hpp"
#include "NotificationService.hpp"
#include "PaymentService.hpp"
#include "RestaurantService.hpp"

class TripFacade {
        FlightService flight;
        HotelService hotel;
        CabService cab;
        RestaurantService restaurant;
        PaymentService payment;
        NotificationService notification;
        ItineraryService itinerary;

    public: 
        void bookTrip(const string & user);
        void cancelTrip(const string & user);

};

#endif