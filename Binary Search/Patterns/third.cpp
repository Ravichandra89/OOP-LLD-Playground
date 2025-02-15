/*
Problem 4: Given a sorted integer array and an input target, find the index of first occurrence of target
For example, when target = 3, inputArray = {1, 2, 2, 2, 3, 3, 3, 4, 4, 5, 6, 7}, we should find target index as 4.
*/

#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> &nums, int target)
{
    int left = 0, right = nums.size() - 1;
    int ans = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
        {
            ans = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return ans;
}

int main()
{
    int target;
    cin >> target;

    vector<int> nums = {1, 2, 2, 2, 3, 3, 3, 4, 4, 5, 6, 7};
    int value = binarySearch(nums, target);

    cout << value << endl;
}
