/**
 * Problem 2: allocate Books to Students (Minimize Maximum Pages)
 *
 * 💡 Problem:
 *          Given n books with pages[] and m students, assign books such that:

 *          Each student gets contiguous books.
 *          The maximum pages assigned to a student is minimized.
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPossible(vector<int> &books, int student, int pages) {
    int assigned = 0, count = 1;
    for (int it : books) {
        if (assigned + it > pages) {
            count++;
            assigned = it;
            if (count > student) return false;
        }
    }
    return true;
}

int findPages(vector<int> &books, int student) {
    int left = *max_element(books.begin(), books.end());
    int right = accumulate(books.begin(), books.end(), 0);
    int ans = right;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (isPossible(books, student, mid)) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return ans;
}

int main() {
    int student;
    cin >> student;

    vector<int> books = {12, 34, 67, 90};
    cout << findPages(books, student) << endl;

    return 0;
}