#include "BillingSystem.hpp"
#include <iostream>

using namespace std;

bool BillingSystem::processPayment(const string &cardInfo, double amount)
{
    cout << "Processing payment for: " << cardInfo << " amount of : " << amount << endl;
    return true;
}

string BillingSystem::getInvoice(int roomNumber, double amount)
{
    string invoice = "INV-" + to_string(roomNumber) + "-" + to_string((int)amount);
    cout << "Generating invoice: " << invoice << "\n";
    return invoice;
}
