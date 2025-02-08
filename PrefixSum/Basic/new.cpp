#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<long long> pref(n);
    pref[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + arr[i];
    }

    long long ans = pref[0];
    long long mini = 0;

    for (int i = 0; i < n; i++)
    {
        ans = max(ans, pref[i] - mini);
        mini = min(mini, pref[i]);
    }

    cout << ans << endl;
    return 0;
}
