#include <iostream>
using namespace std;

class BankAccount
{
private:
    static int totalAccounts;
    string name;

public:
    BankAccount(string name)
    {
        this->name = name;
    }

    static int getTotalAccounts()
    {
        return totalAccounts;
    }

    void displayAccount() const
    {
        cout << "Account Holder: " << name << endl;
    }
};

int BankAccount::totalAccounts = 0;

int main() {
    BankAccount obj1("Ravi");
    BankAccount obj2("Rahul");

    cout << BankAccount::getTotalAccounts() << endl;
}