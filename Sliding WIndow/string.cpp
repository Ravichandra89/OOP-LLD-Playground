#include <iostream>
#include <map>
#include <vector>
using namespace std;

int length(string str, int k)
{
    int left = 0, length = 0;
    unordered_map<char, int> freq;

    for (int right = 0; right < str.size(); right++)
    {
        // Expand the window
        freq[str[right]]++;

        // shrink the window
        while (freq.size() > k)
        {
            freq[str[left]]--;
            if (freq[str[left]] == 0)
                freq.erase(str[left]);
            left++;
        };

        // update the length
        length = max(length, right - left + 1);
    }

    return length;
}

int main()
{
    string str = "eceba";
    int k = 2;

    cout << length(str, k) << endl;
    return 0;
}