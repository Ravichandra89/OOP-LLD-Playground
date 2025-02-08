#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:
    Number(int value)
    {
        this->value = value;
    }

    Number operator+(const Number &obj) const
    {
        return Number(value - obj.value);
    }

    int getValue() const
    {
        return value;
    }
};

int main()
{
    Number a(10), b(4);
    Number result = a + b;

    cout << "Result of a + b: " << result.getValue() << endl;
}