#include <iostream>
#include "src/db/dbConnection.hpp"
#include "src/services/userService.hpp"
#include "src/services/orderService.hpp"

using namespace std;

int main()
{
    dbConnection db1("Server=127.0.0.1;Database=Store;");
    dbConnection db2("server=127.0.0.1;database=store1");

    userService userRepo(db1);
    orderService orderRepo(db2);

    userRepo.getUserById(1);
    orderRepo.getOrderById(1);

    return 0;
}
