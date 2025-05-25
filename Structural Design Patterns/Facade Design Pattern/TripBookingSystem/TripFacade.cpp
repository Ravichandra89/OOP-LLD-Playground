#include "TripFacade.hpp"

void TripFacade::bookTrip(const string & user) {
    flight.searchFlight("DEL-MUM", "2025-06-01");
    flight.bookFlight(user);

    // Hotel Booking
    hotel.searchHotel("Mumbai");
    hotel.reservHotelRoom(user);

    // Cab Booking 
    cab.searchCabs("Airport", "Hotel");
    cab.bookCab(user);

    // Restaurant Booking
    restaurant.searchRestaurant("Mumbai");
    restaurant.placeOrder(user);

    // Payment Authorization
    payment.authorizePayment(500.0);
    payment.capturePayment(500.0);

    // Notification and Itinerary class
    itinerary.createItinerary(user);
    notification.sendNotification(user, "Your trip has been booked successfully!");
};

void TripFacade::cancelTrip(const string & user) {
    flight.cancelFlight("FL123");
    hotel.cancelReservation("HT456");
    cab.cancelRide("CB789");
    restaurant.cancelOrder("ORD321");

    payment.refundPayment(500.0);
    itinerary.cancelTrip(user);
    notification.sendNotification(user, "Your trip has been cancelled.");
};

