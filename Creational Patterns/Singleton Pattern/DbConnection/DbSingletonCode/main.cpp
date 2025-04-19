#include <iostream>
#include "src/db/dbConnection.hpp"
#include "src/Repository/userRepository.hpp"
#include "src/Repository/orderRepository.hpp"
#include <thread>

using namespace std;

// Multithreading problem
void dbThread1() {
    dbConnection* db = dbConnection::getInstance("localhost:3000");
    userRepository userRepo(db);
    userRepo.getUserById(1);
}

void dbThread2() {
    dbConnection* db = dbConnection::getInstance("localhost:3000");
    orderRepository orderRepo(db);
    orderRepo.getOrderById(2);
}

int main() {
    thread t1(dbThread1);
    thread t2(dbThread2);

    t1.join();
    t2.join();

    return 0;
}