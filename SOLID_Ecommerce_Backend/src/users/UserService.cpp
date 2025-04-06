#include "UserService.hpp"
#include <iostream>
using namespace std;

User *UserService::getUser(const string &userId)
{
    return ur->getUser(userId);
};