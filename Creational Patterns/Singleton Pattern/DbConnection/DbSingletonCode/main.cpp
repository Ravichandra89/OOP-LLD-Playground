#include <iostream>
#include "src/db/dbConnection.hpp"
#include "src/Repository/userRepository.hpp"
#include "src/Repository/orderRepository.hpp"

using namespace std;

int main() {
    // get singleton Instance
    dbConnection* db = dbConnection::getInstance("localhost:3000");

    // Create repositories
    userRepository userRepo(db);
    orderRepository orderRepo(db);

    // Use repositories
    userRepo.getUserById(1);
    orderRepo.getOrderById(2);

    return 0;
}