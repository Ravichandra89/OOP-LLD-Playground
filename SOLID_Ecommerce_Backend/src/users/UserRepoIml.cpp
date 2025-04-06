#include <iostream>
#include "UserRepoIml.hpp"
#include "User.hpp"
using namespace std;

// Get User Function Implementation

User * UserRepoImpl::getUser(const string & userId) {
    auto it = users.find(userId);
    return (it != users.end()) ? &it->second : nullptr;
};

// Save user 
void UserRepoImpl::saveUser(const User& user) {
    users[user.getUserId()] = user;
}

