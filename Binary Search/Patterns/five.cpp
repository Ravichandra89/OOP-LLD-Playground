/**
 * Finding the first occurence of the element using lower_bound
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> nums = {1, 2, 2, 2, 3, 3, 3, 4, 4, 5, 6, 7};

    int target;
    cin >> target;

    auto it = lower_bound(nums.begin(), nums.end(), target);

    int ind = distance(nums.begin(), it);

    if (ind != nums.size() && *it == target)
    {
        cout << "First Occurence" << ind << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}

/*
 *it -> Return the iterator pointing to the first element that is not less than target value
 */