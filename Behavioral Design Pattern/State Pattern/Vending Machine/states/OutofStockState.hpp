#ifndef VENDING_MACHINE_OUT_OF_STOCK_STATE_HPP
#define VENDING_MACHINE_OUT_OF_STOCK_STATE_HPP

#include "StateInterface.hpp"

class OutOfStockState  : public StateInterface {
    public: 
        void handleRequest(VendingMachineContext& context) override;
};

#endif