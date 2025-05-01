#include <iostream>
#include "src/db/dbConnection.hpp"
#include "src/Repository/userRepository.hpp"
#include "src/Repository/orderRepository.hpp"
#include "src/Repository/wishlistRepo.hpp"
#include <thread>

using namespace std;

// Multithreading problem
void dbThread1() {
    dbConnection* db = dbConnection::getInstance("localhost:3000");
    userRepository userRepo(db);
    userRepo.getUserById(1);
}

void dbThread2() {
    dbConnection* db = dbConnection::getInstance("localhost:3001");
    orderRepository orderRepo(db);
    orderRepo.getOrderById(2);
}

void dbThread3() {
    dbConnection* db = dbConnection::getInstance("localhost:3002");
    wishlistRepo wishRepo(db);
    wishRepo.addItem("Laptop");
    wishRepo.viewWishlist();
    wishRepo.removeItem("Laptop");
    wishRepo.viewWishlist();
}

int main() {
    thread t1(dbThread1);
    thread t2(dbThread2);
    thread t3(dbThread3);



    t1.join();
    t2.join();
    t3.join();

    return 0;
}