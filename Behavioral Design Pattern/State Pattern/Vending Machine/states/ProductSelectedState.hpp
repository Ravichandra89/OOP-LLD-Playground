#ifndef VENDING_MACHINE_PRODUCT_SELECTED_STATE_HPP
#define VENDING_MACHINE_PRODUCT_SELECTED_STATE_HPP

#include "StateInterface.hpp"

class ProductSelectedState : public StateInterface {
    public: 
        void handleRequest(VendingMachineContext& context) override;
};

#endif