#ifndef PARKING_LOT_SYSTEM_ENUMS_HPP
#define PARKING_LOT_SYSTEM_ENUMS_HPP

// Vehicle types Enumeration
enum class VehicleType {
    Car,
    Motorcycle,
    Truck,
    Bus,
    Bicycle
};

// Parking Spot Type
enum class ParkingSpotType {
    COMPACT,
    LARGE,
    HANDICAPPED,
    MOTORCYCLE,
    ELECTRIC
};

// Ticket status for Parking
enum class TicketStatus {
    ACTIVE,
    PAID,
    UNPAID,
    EXITED
};

// Possible Payment Methods Cash, Card, Rozarpay / UPI
enum class PaymentMethod {
    CASH,
    CREDIT_CARD,
    ROZARPAY
};

// Account Roles
enum class AccountRole {
    ADMIN,
    ATTENDANT,
    CUSTOMER
};

#endif