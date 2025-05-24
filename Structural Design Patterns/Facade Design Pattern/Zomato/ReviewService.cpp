#include "ReviewService.hpp"
#include <iostream>

void ReviewService::ReviewCollect(int orderId, const std::string& review) {
    cout << "[ReviewService] Collected review for order " << orderId
              << ": \"" << review << endl;
}