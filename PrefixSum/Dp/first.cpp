#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int maxSumSubarray(vector<int> &arr, int k)
    {
        int n = arr.size();
        vector<int> pf(n, 0);
        vector<int> dp(n, 0);

        // Compute the prefix sum
        pf[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            pf[i] = pf[i - 1] + arr[i];
        }

        dp[0] = arr[0];
        int maxi = dp[0];

        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j <= k; j++)
            {
                if (i - j + 1 >= 0)
                {
                    dp[i] = max(dp[i], pf[i] - (i - j >= 0 ? pf[j - i] : 0));
                }
            }

            maxi = max(maxi, dp[i]);
        }

        return maxi;
    }
};