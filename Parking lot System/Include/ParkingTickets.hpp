#ifndef PARKING_TICKETS_HPP
#define PARKING_TICKETS_HPP

#include "Enums.hpp"
#include "Vehicle.hpp"
#include "Utils.hpp"

#include <chrono>
#include <string>
#include <iostream>
using namespace std;

class ParkingTicket {
        string ticketId_;
        string lisencePlate_;
        VehicleType vehicleType_;
        string enteryFloor_;
        string spotId_;
        chrono::system_clock::time_point enteryTime_;
        chrono::system_clock::time_point exitTime_;
        double paidAmount_;
        TicketStatus status_;

    public : 
        // Constructor
        ParkingTicket(const string & plate, VehicleType vt, const string & floorId, const string & spotId) : ticketId_(Utils::generateId("TKT_")), lisencePlate_(plate), vehicleType_(vt), enteryFloor_(floorId), spotId_(spotId), enteryTime_(Utils::now()), paidAmount_(0.0), status_(TicketStatus::UNPAID) {
            cout << "[Ticket] Issued ticket " << ticketId_ << " for " << lisencePlate_ << " at time " << Utils::timePointToString(enteryTime_) << endl;
        };

        // Getters - getTicketId, getLisencePlate, getVehicleType, getEnteryFloor,
        // getSpotId, getEnteryTime, getExitTime, getPaidAmount, getStatus

        string getTicketId() const {
            return ticketId_;
        }

        string getLisencePlate() const {
            return lisencePlate_;
        }

        VehicleType getVehicleType() const {
            return vehicleType_;
        }

        string getEnteryFloor() const {
            return enteryFloor_;
        }

        string getSpotId() const {
            return spotId_;
        }

        chrono::system_clock::time_point getEnteryTime() const {
            return enteryTime_;
        }

        chrono::system_clock::time_point getExitTime() const {
            return exitTime_;
        }

        double getPaidAmount() const {
            return paidAmount_;
        }

        TicketStatus getStatus() const {
            return status_;
        }

        // Own ParkingTicket Methods - markAsPaid, markAsExited, calculateAmount, isPaid, getParkingDuration

        void markAsPaid(double amount) {
            paidAmount_ = amount;
            status_ = TicketStatus::PAID;
            cout << "[Ticket] Ticket " << ticketId_ << " marked as paid with amount: " << paidAmount_ << endl;
        }

        bool isPaid() const {
            return status_ == TicketStatus::PAID;
        }

        void markAsExited() {
            exitTime_ = Utils::now();
            status_ = TicketStatus::EXITED;
            cout << "[Ticket] Ticket " << ticketId_ << " marked as exited at time " << Utils::timePointToString(exitTime_) << endl;
        }

        double calculateFee(const class ParkingRatePolicy& policy) const;

        double getParkingDuration() const {
            auto nowTime = Utils::now();

            // Utils method to calculate parking duration in hours
            return Utils::hoursBetween(enteryTime_, nowTime);
        }
};

#endif