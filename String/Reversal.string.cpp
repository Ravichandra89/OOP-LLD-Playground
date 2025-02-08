#include<iostream>
using namespace std;

string ReverOptimal(string s) {
    int left = 0, right = s.size()-1;
    while (left < right) {
        swap(s[left], s[right]);
        left++;
        right--;
    }

    return s;
}

int main() {
    string s = "Ravi";
    cout << ReverOptimal(s) << endl;
    return 0;
}