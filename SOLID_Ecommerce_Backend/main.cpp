#include "src/users/UserService.hpp"
#include "src/users/UserRepoIml.hpp"
#include "src/orders/OrderService.hpp"
#include "src/orders/OrderRepoIml.hpp"
#include "src/orders/Order.hpp"
#include "src/payments/PaypalPayment.hpp"
#include "src/payments/CreditCardPayment.hpp"
#include "src/shipments/FedExShipping.hpp"
#include "src/shipments/ShipRocketShipping.hpp"
#include "src/promotions/PrecentDiscount.hpp"
#include "src/events/EventStoreImpl.hpp"

int main()
{
    UserRepoImpl userRepo;
    UserService userService(&userRepo);

    PaypalPayment paypalPayment;
    FedExShipping fedExShipping;
    PrecentDiscount discount(10.0);
    EventStoreImpl eventStore;

    OrderService orderService(new OrderRepoImpl(), &paypalPayment, &eventStore, &fedExShipping, &discount);

    userRepo.saveUser(User("u1", "Alice"));

    orderService.createOrder("o1", "u1", 1000.0);

    return 0;
}
