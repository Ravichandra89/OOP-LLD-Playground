#include<iostream>
#include <vector>
using namespace std;

struct Task {
    int start, end, weight;
};

bool comprator(Task a, Task b) {
    return a.end < b.end;
}

int main() {
    int numTasks, temp;
    if (!(cin >> numTasks >> temp)) {
        cin.clear();
        cin >> numTasks;
    };

    vector<Task> tasks(numTasks);
    for (int i=0; i<numTasks; i++) {
        cin >> tasks[i].start >> tasks[i].end >> tasks[i].weight;
    }

    sort(tasks.begin(), tasks.end(), comprator);

    vector<int> dp(numTasks, 0);
    dp[0] = tasks[0].weight;

    for (int i=1; i<numTasks; i++) {
        int low = 0, high = i-1, lastNonConflict = -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (tasks[mid].end <= tasks[i].start) {
                lastNonConflict = mid;
                low = mid + 1;
            } else {
                high = mid  - 1;
            }
        }
        int includeWeight = tasks[i].weight;
        if (lastNonConflict != -1) {
            includeWeight += dp[lastNonConflict];
            dp[i] = max(includeWeight, dp[i-1]);
        }

        return dp[numTasks-1];
    }
}