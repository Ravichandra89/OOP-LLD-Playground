#ifndef dbConnection_hpp
#define dbConnection_hpp

#include <string>
using namespace std;

class dbConnection {
    private: 
        static dbConnection* dbInstance;
        static int count;
        string dbUrl;

        // private Constructor
        dbConnection(const string & url);

        // Copy constructor and assignment deletion
        dbConnection(const dbConnection&) = delete;
        dbConnection& operator=(const dbConnection&) = delete;
    public: 
        static dbConnection* getInstance(const string & url);
        ~dbConnection();

        // connect and execute methods
        void connect();
        void executeQuery(const string & query);
};

#endif