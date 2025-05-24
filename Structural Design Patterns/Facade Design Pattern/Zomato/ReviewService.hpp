#ifndef REVIEW_SERVICE_HPP
#define REVIEW_SERVICE_HPP

#include <string>
using namespace std;

class ReviewService {
public:
    ReviewService() = default;
    void ReviewCollect(int orderId, const string& review);
};

#endif 