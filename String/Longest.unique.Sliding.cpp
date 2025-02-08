#include <iostream>
#include <unordered_map>
using namespace std;

int longestSubstring(string s)
{
    unordered_map<char, int> mp;
    int l = 0, length = 0;

    for (int r = 0; r < s.size(); r++)
    {
        // expand the window
        char curr = s[r];
        mp[curr]++;

        while (mp[curr] > 1)
        {
            // shrink the window
            char ch = s[l];
            mp[ch]--;
            l++;
        }
        length = max(length, r - l + 1);
    }
    return length;
}

int main()
{
}