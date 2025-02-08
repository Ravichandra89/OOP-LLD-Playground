// [2, 8 , 10] key = 8 ans = 8

#include<iostream>
#include<vector>
using namespace std;

int smallest(vector<int> &arr, int key) {
    int n = arr.size();

    if (arr[0] > key) {
        return -1;
    };

    int left = 0, right = n-1;
    while(left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) return arr[mid];
        else if (arr[mid] < key) left = mid+1;
        else right = mid-1;
    }
    
    // Contains the second smallest
    return arr[left];
}

int main() {
    vector<int> arr = {2, 8, 10};
    int key = 8;

    cout << smallest(arr, key) << endl;
}