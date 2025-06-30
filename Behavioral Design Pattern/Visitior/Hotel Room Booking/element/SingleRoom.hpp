#ifndef SINGLE_ROOM_HPP
#define SINGLE_ROOM_HPP

#include "IRoomElement.hpp"
#include "memory"
using namespace std;

class SingleRoom : public IRoomElement {
        int roomNumber_;
        double rate_;
    public :
        SingleRoom(int num, double rate_) : roomNumber_(num), rate_(rate_){}

        int getRoomNumber() const {
            return roomNumber_;
        }

        double getRoomRate() const {
            return rate_;
        }

        void accept(Visitor& vis) override {
            vis.visit(*this);
        }

};

#endif