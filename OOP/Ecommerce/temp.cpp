#include <iostream>
using namespace std;

class Solution
{
public:
    virtual void show() final
    {
        cout << "Base Class" << endl;
    }
};

class sub : public Solution
{
public:
    void show() override
    {
        cout << "Sub Class" << endl;
    }
};

int main()
{
    Solution s;
    s.show();
}