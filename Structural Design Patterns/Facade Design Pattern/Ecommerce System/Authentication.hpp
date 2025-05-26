/***
 * Authentication Sub System - 
 *  - Authentication(...)
 *  - registerUser(...)
 *  - loginUser(...)
 *  - logOut(...)
 *  - ValidateToken(...)
 */

#ifndef AUTHENTICATION_SYSTEM_HPP
#define  AUTHENTICATION_SYSTEM_HPP

#include <string>
using namespace std;

class Authentication {
    public: 
        // Default Constructor
        Authentication() = default;
        bool registerUser(const string & username, const string & password);
        string loginUser(const string & username, const string & password);
        void logOut(const string & token);
        bool validateToken(const string & token);
};

#endif