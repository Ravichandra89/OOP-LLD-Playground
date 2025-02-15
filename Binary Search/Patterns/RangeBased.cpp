/**
 * Range Based Binary Search : Finding the Minimum Time to Complete n Tasks
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canCompelete(vector<int> &machine, int n, long long time) {
    long long total = 0;
    for (int it: machine) {
        total += time / it;
        if (total >= n) return true;
    }
    return false;
}

long long MinimumTime (vector<int> &machine, int n) {
    long long left = 0, right = 1e18, ans = right;

    while (left <= right) {
        long long mid = left + (right - left) / 2;
        if (canCompelete(machine, n, mid)) {
            ans = mid;
            right = mid -1;
        } else {
            left = mid + 1;
        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<int> machine = {2, 3, 7};
    cout << MinimumTime(machine, n) << endl;

    return 0;
}