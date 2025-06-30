#ifndef SUITE_ROOM_HPP
#define SUITE_ROOM_HPP

#include "IRoomElement.hpp"
using namespace std;

class SuiteRoom : public IRoomElement {
        int roomNumber_;
        double rate_;
    public : 
        SuiteRoom(int num, double rate) : rate_(rate), roomNumber_(num) {}

        int getRoomNumber() const { return roomNumber_; }
        int getRoomRate() const { return rate_; }

        // Accept method
        void accept(Visitor& vis) override {
            vis.visit(*this);
        }
};

#endif