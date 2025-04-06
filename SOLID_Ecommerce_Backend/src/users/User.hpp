#ifndef USER_HPP
#define USER_HPP

#include <string>
using namespace std;

class User {
private:
    string userId;
    string name;

public:
    User(const string &userId, const string &name) {
        this->userId = userId;
        this->name = name;
    }

    string getUserId() const {
        return userId;
    }

    string getUserName() const {
        return name;
    }
};

#endif