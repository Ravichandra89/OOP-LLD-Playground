#include<iostream>
#include<vector>
using namespace std;

void CalCulatePrefixSum(vector<int> &arr, vector<int> &pf) {
    pf[0] = arr[0];

    for(int i=0; i<arr.size(); i++) {
        pf[i] = pf[i-1] + arr[i];
    }
}
int main() {
    vector<int> arr = {10, 4, 16, 20};
    vector<int> pf(arr.size());

    CalCulatePrefixSum(arr, pf);

    for (int it : pf) {
        cout << it << " ";
    }

    return 0;
}