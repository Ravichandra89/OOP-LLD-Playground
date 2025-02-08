#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int FindMinPlatforms(vector<int> arrival, vector<int> depature)
{
    sort(arrival.begin(), arrival.end());
    sort(depature.begin(), depature.end());

    int n = arrival.size();
    int count = 0;
    int maxi = 0;

    int i = 0, j = 0;

    while (i < n && j < n)
    {
        if (arrival[i] <= depature[j])
        {
            count++;
            maxi = max(maxi, count);
            i++;
        } else
        {
            count--;
            j++;
        }
    }

    return maxi;
};

int main()
{
    vector<int> arrival = {900, 940, 950, 1100, 1500, 1800};
    vector<int> depature = {910, 1200, 1120, 1130, 1900, 2000};

    int ans = FindMinPlatforms(arrival, depature);

    cout << "Minimum platforms are: " << ans << endl;

    return 0;
}