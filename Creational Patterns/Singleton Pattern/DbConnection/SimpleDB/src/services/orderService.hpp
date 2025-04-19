#ifndef ORDERSERVICE_HPP
#define ORDERSERVICE_HPP

#include "../db/dbConnection.hpp"

class orderService {
    dbConnection& db;

public:
    explicit orderService(dbConnection& db);
    void getOrderById(int orderId);
};

#endif
