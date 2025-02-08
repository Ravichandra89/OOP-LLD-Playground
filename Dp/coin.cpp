#include <iostream>
#include <vector>
using namespace std;

class solution
{
public:
    int CoinChange(vector<int> &coins, int amount)
    {
        vector<int> dp(amount + 1, INT_MAX);
        // Initilize the dp state
        dp[0] = 0;

        // Traverse the other possibilities
        for (int i = 1; i <= amount; i++)
        {
            for (int it : coins)
            {
                if (i >= it && dp[i - it] != INT_MAX)
                {
                    dp[i] = min(dp[i], dp[i - it] + 1);
                }
            }
        }

        return dp[amount] == INT_MAX ? -1 : dp[amount];
    }

    int NonDecSequence(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> dp(n, 1);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (dp[j] <= dp[i])
                {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
        }

        return dp[n];
    }

    int MaxApples(vector<vector<int>> &apple)
    {
        int n = apple.size();
        int m = apple[0].size();

        vector<vector<int>> dp(n, vector<int>(m, 0));
        dp[0][0] = apple[0][0];

        // fill first row
        for (int j = 1; j < m; j++)
        {
            dp[0][j] = dp[0][j - 1] + apple[0][j];
        }

        // fill first column
        for (int i = 1; i < n; i++)
        {
            dp[i][0] = dp[i - 1][0] + apple[i][0];
        }

        // Fill the rest of part
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < m; j++)
            {
                dp[i][j] = apple[i][j] + max(dp[i - 1][j], dp[i][j - 1]);
            }
        }

        return dp[n - 1][m - 1];
    }

    int LongestCommonSubsequence(string a, string b) {
        int n = a.size();
        int m = b.size();
        vector<vector<int>> dp(n+1, vector<int> (m+1, 0));

        for (int i=1; i<n; i++) {
            for (int j=1; j<m; j++) {
                // If character matches 
                if (a[i-1] == b[j-1]) {
                    dp[i][j] = 
                } else {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        return dp[n][m];
    }
};