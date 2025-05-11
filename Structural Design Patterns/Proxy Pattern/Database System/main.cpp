#include "proxy/DatabaseProxy.hpp"
#include "core/IDatabase.hpp"
#include "core/RealObject.hpp"

#include <iostream>
using namespace std;

int main() {
    DatabaseProxy UserDb(Role::User, make_unique<RealObject>());

    try {
        UserDb.create("foo", "bar");
        cout << "foo -> " << UserDb.get("foo") << endl;
        UserDb.remove("foo");
    } catch(const exception & er) {
        cout << "Error: " << er.what() << endl;
    }

    DatabaseProxy AdminDb(Role::Admin, make_unique<RealObject>());
    AdminDb.create("baz", "ravi");
    cout << "baz -> " << AdminDb.get("baz") << endl;
    AdminDb.remove("baz");
    cout << "Removed baz Successfully" << endl;
}