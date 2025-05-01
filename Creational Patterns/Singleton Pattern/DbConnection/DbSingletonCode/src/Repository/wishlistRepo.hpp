#ifndef wishlistRepo_hpp
#define wishlistRepo_hpp

#include <string>
using namespace std; 

class wishlistRepo {
    dbConnection* db;
    public:
        explicit wishlistRepo(dbConnection* db);
        void addItem(const string & item);
        void removeItem(const string & item);
        void viewWishlist();
};

#endif