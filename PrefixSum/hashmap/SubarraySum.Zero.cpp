#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int SubarrayLength(vector<int> &nums)
    {
        int n = nums.size();
        unordered_map<int, int> mp;
        mp[0] = -1; // Initialize to handle case when the sum becomes 0 at an index
        int length = 0, sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += (nums[i] == 1 ? 1 : -1); // Update sum based on 1 or -1

            // Check if this sum has been seen before
            if (mp.find(sum) != mp.end())
            {
                length = max(length, i - mp[sum]); // Update the length if we found a larger subarray
            }
            else
            {
                mp[sum] = i; // Store the first occurrence of this sum
            }
        }

        return length; // Return the maximum length found
    }
};

int main()
{
    Solution s1;
    vector<int> nums; // {1, -1, 3, -3, 2, -2};
    nums.push_back(1);
    nums.push_back(-1);
    nums.push_back(3);
    nums.push_back(-3);
    nums.push_back(2);
    nums.push_back(-2);
    cout << s1.SubarrayLength(nums) << endl;
    return 0;
}
