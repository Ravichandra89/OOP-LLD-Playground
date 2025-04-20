#include "./paymentFactory.hpp"
#include <stdexcept>                  

#include "./paymentMethods/PaypalMethod.hpp"
#include "./paymentMethods/StripeMethod.hpp"
#include "./paymentMethods/RozarpayMethod.hpp"

using namespace std;
unique_ptr<IpaymentGateway>paymentFactory::create(const string& type) {
    if (type == "paypal") {
        return make_unique<PaypalMethod>();
    }
    else if (type == "stripe") {
        return make_unique<StripeMethod>();
    }
    else if (type == "rozarpay") {
        return make_unique<RozarpayMethod>();
    }
    throw invalid_argument("Unsupported payment processor: " + type);
}
