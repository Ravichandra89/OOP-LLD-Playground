#include "handlers/Level1Handler.hpp"
#include "handlers/Level2Handler.hpp"
#include "handlers/Level3Handler.hpp"
#include "handlers/SupportHandler.hpp"

#include <vector>
#include <memory>
#include <iostream>

using namespace std;

int main() {
    auto level1 = make_shared<Level1Handler> ();
    auto level2 = make_shared<Level2Handler> ();
    auto level3 = make_shared<Level3Handler> ();

    // Build the chain of handlers
    level1->setNext(level2);
    level2->setNext(level3);

    // Sample Request For Support System
    vector<Request> requests = {
        {1, "Forgot password"},
        {2, "Unable to process payment"},
        {3, "Data corruption in user profile"},
        {2, "Order confirmation not received"},
        {1, "Change shipping address"},
        {3, "Security breach detected"}
    };

    for (auto & it : requests) {
        cout << "\nClient submits (priority " << it.priority
                  << "): \"" << it.message << "\"\n";
        
        level1->handleRequest(it);
    }

    return 0;
}