#ifndef dbConnection_hpp
#define dbConnection_hpp

#include <string>
using namespace std;

// Without singleton pattern 
class dbConnection {
    static int count;
    string url;

    public: 
        dbConnection(const string & url); // Responsible for Creating Instance
        ~dbConnection();

        // Connection function
        void connect();
        void execute(const string & query);
};

#endif