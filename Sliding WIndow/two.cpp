#include <iostream>
#include <vector>

using namespace std;

int Length(vector<int> &nums, int k)
{
    int n = nums.size();
    int left = 0, right = 0, sum = 0, length = 0;

    while (right < n)
    {
        //  Expand the window
        sum += nums[right];

        // Shrink the window
        while (sum > k && left <= right)
        {
            sum -= nums[left];
            left++;
        }

        if (sum <= k)
        {
            length = max(length, right - left + 1);
        };

        right++;
    }

    return length;
}

int main()
{
    vector<int> arr = {2, 5, 1, 7, 10};
    int k = 14;

    cout << Length(arr, k) << endl;
    return 0;
}