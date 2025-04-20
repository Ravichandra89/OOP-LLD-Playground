#ifndef FACTORYMETHOD_HPP
#define FACTORYMETHOD_HPP

#include <memory>
#include <string>
#include "./Interface/IpaymentGateway.hpp"

class paymentFactory {
public:
    static std::unique_ptr<IpaymentGateway> create(const std::string& type);
};

#endif 
