// Banking System
#include <iostream>
#include <string>
using namespace std;

// Main class
class BankingSystem
{
private:
    string AccountHolderName;
    double balance;

public:
    BankingSystem(string name, double balance)
    {
        AccountHolderName = name;
        this->balance = balance;
    }

    void deposit(double amount)
    {
        balance += amount;
    }

    void displayAccount()
    {
        cout << "Account Holder Name: " << AccountHolderName << " Balance is : " << balance << endl;
    }

    // Declare the friend function & Class
    friend void showData(BankingSystem &obj);
    friend class BankManager;
};

// Provide the Defination
void showData(BankingSystem &obj)
{
    cout << "Account Holder Name: " << obj.AccountHolderName << " Balance is: " << obj.balance << endl;
}

class BankManager
{
public:
    void audit(const BankingSystem &obj)
    {
        cout << "[Friend Class Access] Auditing Account - "
             << "Holder: " << obj.AccountHolderName
             << ", Balance: " << obj.balance << endl;
    }
};

int main()
{
    BankingSystem obj("Ravi", 4000);

    obj.deposit(400);
    obj.displayAccount();

    // Show Data
    showData(obj);

    BankManager b1;
    b1.audit(obj);

    obj.deposit(600);
    obj.displayAccount();

    return 0;
}