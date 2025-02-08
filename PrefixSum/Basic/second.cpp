#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {10, 20, 10, 5, 15};
    vector<int> pf(arr.size());

    // Calculate the prefixSum
    pf[0] = arr[0];

    for (int i = 0; i < arr.size(); i++)
    {
        pf[i] = pf[i - 1] + arr[i];
    }

    // queries
    int q = 4;
    vector<vector<int>> queries{
        {2, 3},
        {3, 4}};

    for (auto &it : queries)
    {
        int left = it[0], right = it[1];
        cout << pf[right] - pf[left-1] << " ";
    }

    return 0;
}