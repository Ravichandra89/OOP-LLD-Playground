#ifndef DBCONNECTION_HPP
#define DBCONNECTION_HPP

#include <string>
using namespace std;

class dbConnection {
    static int count;
    string url;

public:
    dbConnection(const string& url);
    ~dbConnection();

    void connect();
    void execute(const string& query);
};

#endif
