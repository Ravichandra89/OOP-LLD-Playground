#include "wishlistRepo.hpp"
#include "../db/dbConnection.hpp"
#include <iostream>

using namespace std;

wishlistRepo::wishlistRepo(dbConnection* db) : db(db) {};

void wishlistRepo::addItem(const string & item) {
    cout << "Adding item to wishlist: " << item << endl;
    string query = "INSERT INTO wishlist (item) VALUES ('" + item + "')";
    db->executeQuery(query);
}

void wishlistRepo::removeItem(const string & item) {
    cout << "Removing item from wishlist: " << item << endl;
    string query = "DELETE FROM wishlist WHERE item = '" + item + "'";
    db->executeQuery(query);
}

void wishlistRepo::viewWishlist() {
    cout << "Viewing wishlist" << endl;
    string query = "SELECT * FROM wishlist";
    db->executeQuery(query);
}
