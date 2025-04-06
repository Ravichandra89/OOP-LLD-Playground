#ifndef IUSER_REPO_HPP
#define IUSER_REPO_HPP

#include <string>
using namespace std;

// Forward Declaration
class User;

class IUserRepo
{
public:
    virtual ~IUserRepo() = default;
    virtual User *getUser(const string &userId) = 0;
    virtual void saveUser(const User &user) = 0;
};

#endif