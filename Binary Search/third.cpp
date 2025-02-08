#include <iostream>
#include <vector>
using namespace std;

int cieling(vector<int> &arr, int x) {
    int n = arr.size();
    int low = 0, high = n-1;

    while (low <= high){
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)  return mid;

        else if (arr[mid] < x) low = mid +1;
        else high = mid - 1;
    }

    return -1;
}

// lower bound
int lowerBoundCiel(vector<int> &arr, int x) {
    int n = arr.size();
    int ind = lowerbound(arr.begin(), arr.end(), x);
    
}