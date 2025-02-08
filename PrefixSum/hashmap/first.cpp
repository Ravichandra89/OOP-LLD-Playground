#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        int n = nums.size();
        unordered_map<int, int> mp;
        int pfSum = 0, count = 0;
        mp[0] = 1;

        for (int it : nums)
        {
            pfSum += it;

            if (mp.find(pfSum - k) != mp.end())
            {
                count += mp[pfSum - k];
            }
            mp[pfSum]++;
        }

        return count;
    }
};

int main()
{
    vector<int> nums = {1, 1, 1};
    Solution s1;
    int k = 2;
    cout << s1.subarraySum(nums, k);
    return 0;
}