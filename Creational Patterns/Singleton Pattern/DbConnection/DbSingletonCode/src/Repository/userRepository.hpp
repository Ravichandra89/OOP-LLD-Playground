#ifndef userRepository_hpp
#define userRepository_hpp

#include "../db/dbConnection.hpp"
using namespace std;

class userRepository {
    dbConnection* db;

    public:
        explicit userRepository(dbConnection* db);
        void getUserById(int userId);
};

#endif