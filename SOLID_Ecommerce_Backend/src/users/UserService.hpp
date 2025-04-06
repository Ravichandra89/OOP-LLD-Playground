#ifndef UYSER_SERVICE_HPP
#define UYSER_SERVICE_HPP

#include "IUserRepo.hpp"
#include <string>

class UserService
{
    IUserRepo *ur;

public:
    UserService(IUserRepo *ur) : ur(ur) {};
    User *getUser(const string &userId);
};

#endif