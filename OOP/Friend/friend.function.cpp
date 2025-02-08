// Same in friend function it is used to access the private and protected data members of the class in the functions
// 1. Global friend function
// 2. Friend Function

#include <iostream>
using namespace std;

class GlobalBase
{
private:
    int pvar;

protected:
    int provar;

public:
    GlobalBase(int pvar, int provar)
    {
        this->pvar = pvar;
        this->provar = provar;
    }

    // Declare the friend global function here
    friend void globalFriend(GlobalBase &obj);
};

// Give Defination
void globalFriend(GlobalBase &obj)
{
    cout << "Private Variable is : " << obj.pvar << endl;
    cout << "Protected Variable is: " << obj.provar << endl;
}

int main()
{
    GlobalBase obj(10, 20);
    globalFriend(obj);
    return 0;
}

