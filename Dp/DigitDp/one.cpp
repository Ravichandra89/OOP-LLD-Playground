#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int dp[20][2][20];

int solve(string &s, int ind, bool tight, int count)
{
    if (ind == s.size())
        return count;
    if (dp[ind][tight][count] != -1)
        return dp[ind][tight][count];
    int limit = tight ? s[ind] - '0' : 9, ans = 0;
    for (int i = 0; i <= limit; i++)
    {
        ans += solve(s, ind + 1, tight && (i == limit), count + (i == 3 ? 1 : 0));
    }
    return dp[ind][tight][count] = ans;
}

int main()
{
    int left, right;
    cin >> left >> right;
    string ri = to_string(right), li = to_string(left - 1);
    memset(dp, -1, sizeof(dp));
    int rightAns = solve(ri, 0, 1, 0);
    memset(dp, -1, sizeof(dp));
    int leftAns = solve(li, 0, 1, 0);
    cout << rightAns - leftAns << endl;
    return 0;
}
