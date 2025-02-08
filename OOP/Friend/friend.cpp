// Defining the friend function of the another class into the Any class (Base)

#include <iostream>
using namespace std;

class Base; // Forward Declaration

class anotherClass
{
public:
    void helperFunction(Base &obj);
};

// Class Defination
class Base
{
private:
    int privateVariable;

protected:
    int protectedVariable;

public:
    Base()
    {
        privateVariable = 50;
        protectedVariable = 100;
    }

    // declare the friend function
    friend void anotherClass::helperFunction(Base &obj);
};

void anotherClass::helperFunction(Base &obj)
{
    cout << "Private Variable: " << obj.privateVariable << endl;
    cout << "Protected Variable: " << obj.protectedVariable << endl;
}

int main()
{
    Base obj;

    anotherClass obj2;
    obj2.helperFunction(obj);

    return 0;
}