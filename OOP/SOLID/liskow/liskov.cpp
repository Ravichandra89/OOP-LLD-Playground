#include <iostream>
using namespace std;

class Bird
{
public:
    virtual void Eat()
    {
        cout << "Bird is eating." << endl;
    }
};

class Flyable
{
public:
    // Define the pure virtual Function
    virtual void fly() = 0;
};

class Sparrow : public Bird, public Flyable
{
public:
    // Provide defination
    void fly() override
    {
        cout << "Sparrow is flying." << endl;
    }
};

class Penguin : public Bird
{
public:
    void swimming()
    {
        cout << "Penguin is swimming." << endl;
    }
};

void makeBirdFly(Flyable *flying)
{
    flying->fly();
}

int main()
{
    Sparrow sp;
    Penguin pe;

    makeBirdFly(&sp);
    // makeBirdFly(&pe);

    return 0;
}
