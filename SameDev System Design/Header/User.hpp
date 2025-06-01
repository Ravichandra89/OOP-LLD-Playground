/**
 * Auth details, linked to sessions.
 */

#ifndef SAME_DEV_USER_HPP
#define SAME_DEV_USER_HPP

#include <string>
#include <vector>
using namespace std;

class UserSession;

class User {
        string userId;
        string email;
        vector<shared_ptr<UserSession>> sessions;
    
    public: 
        User(const string & id, const string & emailId);
        ~User();

        string getId() const;
        string getEmail() const;
        void addSection(const shared_ptr<UserSession> &session);
        const vector<shared_ptr<UserSession>> & getSessions() const;

};

#endif