#include <iostream>
#include "ZomatoFacade.hpp"

int main() {
    ZomatoFacade order;
    order.ZomatoPlaceOrder("Pizza Margherita", 2, 50, "CreditCard");
    cout << "\n After Delivery " << endl;
    order.ZomatoCompeleteOrder(1, "Delicious pizza and fast delivery!");

    return 0;
}