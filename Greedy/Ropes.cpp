#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;

int findRopes(vector<int> & ropes) {
    // make priorityQueue
    priority_queue<int, vector<int>, greater<int>> pq(ropes.begin(), ropes.end());

    int ans = 0;

    while (pq.size() > 1) {
        int first = pq.top();
        pq.pop();
        int second = pq.top();
        pq.pop();

        int cost = first + second;
        cout << "Cost Coming:  " << cost << endl;
        ans += cost;

        pq.push(cost);
    }

    return ans;
}

int main() {
    vector<int> ropes = {4,3,2,6};
    cout << "Length: " << findRopes(ropes) << endl;
    return 0;
}