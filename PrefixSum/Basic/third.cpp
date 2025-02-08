#include <iostream>
#include <vector>
using namespace std;

int find(int m, vector<vector<int>> &queries)
{
    int ans = 0;
    vector<int> pref(5, 0);

    for (auto &it : queries)
    {
        int left = it[0], right = it[1];

        pref[left - 1] += 100;
        pref[right] -= 100;
    }

    // Compute sum
    for (int i = 1; i < 5; i++)
    {
        pref[i] += pref[i - 1];
        ans = max(ans, pref[i]);
    }

    return ans;
}

int main()
{
    int m = 3;
    vector<vector<int>> queries = {{2, 4}, {1, 3}, {1, 2}};

    // Function call
    cout << find(m, queries);
    return 0;
}