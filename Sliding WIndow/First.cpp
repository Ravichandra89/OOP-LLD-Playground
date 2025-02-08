//  arr[] = {1, 4, 2, 10, 2, 3, 1, 0, 20},  k = 4

#include <iostream>
#include <vector>

using namespace std;

int Function(vector<int> &arr, int k)
{
    int n = arr.size();

    if (n <= k)
    {
        return -1;
    };

    // Calculate Initial Window sum
    int maxi = 0;
    for (int i = 0; i < k; i++)
    {
        maxi += arr[i];
    };

    // Keep moving the window
    int window_sum = maxi;

    for (int i = k; i < n; i++)
    {
        window_sum += arr[i] - arr[i - k];
        maxi = max(maxi, window_sum);
    }

    return maxi;
}

int main()
{
    vector<int> arr = {1, 4, 2, 10, 2, 3, 1, 0, 20};
    int k = 4;

    cout << Function(arr, k) << endl;
}
