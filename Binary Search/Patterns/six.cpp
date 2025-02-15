/**
 * Finding the last occurence of the element using upper_bound
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int target;
    cin >> target;

    vector<int> nums = {1, 2, 2, 2, 3, 3, 3, 4, 4, 5, 6, 7};
    auto it = upper_bound(nums.begin(), nums.end(), target);

    int ind = distance(nums.begin(), it);

    if (it != nums.end())
    {
        cout << "Last Occurence: " << ind - 1 << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}