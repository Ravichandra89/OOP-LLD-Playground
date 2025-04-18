#ifndef orderService_hpp
#define orderService_hpp

#include <string>
using namespace std;

class dbConnection;

class orderService {
    dbConnection & db;

    public:
        explicit orderService(dbConnection & db) : db(db) {};
        void getOrderById(int orderId);
};

#endif