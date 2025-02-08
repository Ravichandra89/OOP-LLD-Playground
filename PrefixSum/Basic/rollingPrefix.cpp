// Finding the K size subarray sum using the Rolling Prefix Sum Technique.

#include <iostream>
#include <vector>
using namespace std;

vector<int> RollingPrefixSum(vector<int> &arr, int k)
{
    vector<int> ans;
    int n = arr.size();
    int sum = 0;

    // Initial Window Sum
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }

    // Expand the window
    for (int i = k; i < n; i++)
    {
        sum = sum - arr[i - k] + arr[i];
        ans.push_back(sum);
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 3;

    vector<int> ans = RollingPrefixSum(arr, k);
    for (auto &it : ans)
    {
        cout << it << " ";
    }
    return 0;
}