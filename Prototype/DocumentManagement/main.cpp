#include <iostream>
#include <vector>
#include "manager/DocumentManager.hpp"

using namespace std;

int main()
{
    // Original Objects
    DocumentManager docManager;

    auto nda1 = docManager.createDocument("NDA", "client1", "2025-01-01");
    if (nda1)
    {
        nda1->print();
    }

    auto nda2 = docManager.createDocument("NDA", "client2", "2025-02-01");
    if (nda2)
    {
        nda2->print();
    }

    auto invoice1 = docManager.createDocument("Invoice", "client3", "2025-03-01");
    if (invoice1)
    {
        invoice1->print();
    }

    auto invoice2 = docManager.createDocument("Invoice", "client4", "2025-04-01");
    if (invoice2)
    {
        invoice2->print();
    }

    return 0;
}