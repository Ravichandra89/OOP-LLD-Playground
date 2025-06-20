#ifndef PAYMENT_COMMAND_HPP
#define PAYMENT_COMMAND_HPP

#include "ITripCommand.hpp"
#include "../receivers/PaymentService.hpp"

class PaymentCommand : public ITripCommand {
        PaymentService * svc;
        string riderId;
        double amount;

    public : 
        // Constructor 
        PaymentCommand(PaymentService * service, const string & id, double amount) : svc(service), riderId(id), amount(amount){};

        void execute() {
            svc->processPayment(riderId, amount);
        }
};

#endif