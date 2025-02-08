#include <iostream>
#include <vector>
using namespace std;

bool Brute(vector<int> &arr, int target)
{
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

bool TwoPointers(vector<int> &arr, int target) {
    int n = arr.size();
    int left = 0, right = n-1;

    while (left < right) {
        // Calculate the current sum
        int sum = arr[left] + arr[right];
        if (sum == target) {
            return true;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50};
    int target = 70;

    bool result = Brute(arr, target);
    cout << result << endl;
};