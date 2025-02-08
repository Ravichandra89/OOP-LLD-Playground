#include <iostream>
using namespace std;

bool isPalindrome(string &s)
{
    int left = 0, right = s.size() - 1;
    while (left < right)
    {
        if (s[left] != s[right])
            return false;
        left++;
        right--;
    }

    return true;
}

int main()
{
    string s = "Rar";
    if (isPalindrome(s))
    {
        cout << "Palindrom String" << endl;
    }
    else
    {
        cout << "Not a Palindrom String" << endl;
    }
}