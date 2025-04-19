#ifndef USERSERVICE_HPP
#define USERSERVICE_HPP

#include "../db/dbConnection.hpp"

class userService {
    dbConnection& db;

public:
    explicit userService(dbConnection& db);
    void getUserById(int userId);
};

#endif
