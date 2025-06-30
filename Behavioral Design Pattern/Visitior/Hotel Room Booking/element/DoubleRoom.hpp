#ifndef DOUBLE_ROOM_HPP
#define DOUBLE_ROOM_HPP

#include "IRoomElement.hpp"
using namespace std;

class DoubleRoom : public IRoomElement {
        int roomNumber_;
        double rate_;

    public : 
        DoubleRoom(int num, double rate) : roomNumber_(num), rate_(rate) {}

        int getRoomNumber() const {
            return roomNumber_;
        }

        double getRoomRate() const {
            return rate_;
        }

        // Accept the visitor
        void accept(Visitor& vis) override {
            vis.visit(*this);
        }
};

#endif