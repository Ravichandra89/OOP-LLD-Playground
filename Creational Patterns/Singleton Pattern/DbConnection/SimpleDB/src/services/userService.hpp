#ifndef userService_hpp
#define userService_hpp

#include <string>

class dbConnection;

// UserService class
class userService {
    dbConnection * db;

    public:
        explicit userService(dbConnection & db) : db(db) {};
        void getUserById(int userId);
};

#endif