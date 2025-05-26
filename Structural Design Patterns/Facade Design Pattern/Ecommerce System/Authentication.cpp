#include "Authentication.hpp"
#include<iostream>
using namespace std;

// Methods Definition
bool Authentication::registerUser(const string & username, const string & password) {
    cout << "[Auth.] Registering User: " << username << endl;
    return true;
}

string Authentication::loginUser(const string &username, const string & password) {
    cout << "[Auth.] Logging in user" << username << endl;
}

void Authentication::logOut(const string & token) {
    cout << "[Auth] Logging out token: " << token << endl;
}

bool Authentication::validateToken(const string & token) {
    cout << "[Auth] Validating token: " << token << endl;
    return true;
}
