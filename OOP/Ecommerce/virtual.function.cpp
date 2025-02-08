#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "Constructor of A's" << endl;
    }

    virtual void show()
    {
        cout << "A'is Show function" << endl;
    }
};

class B : virtual A
{
public:
    B()
    {
        cout << "Constructor of B's" << endl;
    }

    void show() override
    {
        cout << "B'is Show function" << endl;
    }
};

class C : virtual A
{
public:
    C()
    {
        cout << "Constructor of C's" << endl;
    }
    void show() override
    {
        cout << "C'is Show function" << endl;
    }
};

class D : public B, public C
{
public:
    D()
    {
        cout << "Constructor of D's" << endl;
    }

    void show() override
    {
        cout << "D'is Show function" << endl;
    }
};

int main()
{
    D obj;
    obj.show();

    return 0;
}