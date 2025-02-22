#include <iostream>
#include <vector>

using namespace std;

/**
 * Finding the maximum subarray sum <= k
 */

int LargestSubarraySum(vector<int> &nums, int k)
{
    // Compute the prefix sum

    int n = nums.size();
    int length = 0;

    vector<long long> pf(n + 1, 0);
    pf[0] = nums[0];

    for (int i = 1; i < n; i++)
    {
        pf[i] = pf[i - 1] + nums[i];
    }

    // Apply Binary Search
    for (int i = 0; i < n; i++)
    {
        int left = i, right = n - 1, temp = i;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (pf[mid] - pf[i] <= k)
            {
                temp = mid;
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        length = max(length, temp - i + 1);
    }
    return length;
}

int main()
{
    int k;
    cin >> k;

    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int value = LargestSubarraySum(nums, k);

    cout << value << endl;

    return 0;
}