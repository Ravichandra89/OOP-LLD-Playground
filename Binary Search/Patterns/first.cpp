/*
Problem 1: Given a sorted integer array and an input target, find the index of first element greater than target
*/

#include <iostream>
#include <vector>

using namespace std;

int BinarySearch(vector<int> &nums, int target) {
    int left = 0, right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] <= target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return left;
}

int main() {
    int target;
    cin >> target;

    vector<int> nums = {2,3,4,5,6};
    int value = BinarySearch(nums, target);

    cout << value << endl;
}