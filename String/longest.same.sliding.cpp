#include <iostream>
#include <unordered_map>
using namespace std;

int longest(string s, int k)
{
    unordered_map<char, int> ch;
    int left = 0, right = 0, freq = 0, maxi = 0;

    while (right < s.size())
    {
        // Expand the window
        ch[s[right]]++;
        freq = max(freq, ch[s[right]]);

        // Shrink case
        if ((right - left + 1) - freq > k)
        {
            ch[s[left]]--;
            left++;
        }

        maxi = max(maxi, right - left + 1);
    }

    return maxi;
}