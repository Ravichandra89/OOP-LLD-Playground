#ifndef orderRepository_hpp
#define orderRepository_hpp

#include "../db/dbConnection.hpp"
using namespace std;

class orderRepository {
    dbConnection* db;
    public:
        explicit orderRepository(dbConnection* db);
        void getOrderById(int orderId);
};

#endif