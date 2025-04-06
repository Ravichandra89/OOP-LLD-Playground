#ifndef USER_REPO_IMPL_HPP
#define USER_REPO_IMPL_HPP

#include "IUserRepo.hpp"
#include "User.hpp"
#include <map>
using namespace std;

class UserRepoImpl : public IUserRepo
{
    map<string, User> users;

public:
    User *getUser(const string &userId) override;
    void saveUser(const User &user) override;
};

#endif