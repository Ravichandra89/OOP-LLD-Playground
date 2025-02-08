#include <iostream>
#include <vector>
using namespace std;

// Can be used for both sorting Orders according to the isAsc Variable

int Helper(vector<int> &arr, int key)
{
    int n = arr.size();
    bool isAsc = arr[0] < arr[n - 1];
    int left = 0, right = n - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return mid;

        // If the isAsc is true than
        if (isAsc)
        {
            if (arr[mid] < key)
                left = mid + 1;
            else
                right = mid - 1;
        }
        else
        {
            if (arr[mid] > key)
                right = mid - 1;
            else
                left = mid + 1;
        }
    }

    return -1;
};

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int key = 3;

    cout << Helper(arr, key) << endl;
}