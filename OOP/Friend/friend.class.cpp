// friend class a class which can able to access the data members of the another class Private / Protected;

#include <iostream>
using namespace std;

class Base
{
private:
    int privateVar;

protected:
    int protectedVar;

public:
    Base(int pVar, int proVar)
    {
        privateVar = pVar;
        protectedVar = proVar;
    }

    // Declare the friend class here
    friend class temp;
};

class temp
{
public:
    // Defination of the friend class
    void Display(Base &obj)
    {
        cout << "Private variable is : " << obj.privateVar << endl;
        cout << "Protected variable is : " << obj.protectedVar << endl;
    }
};

int main()
{
    Base obj(10, 20);
    temp t1;

    t1.Display(obj);
    return 0;
}