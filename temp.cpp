#include <iostream>
#include <queue>
#include <vector>

using namespace std;

class Solution {
public:
    int islandPerimeter(vector<vector<int>> &grid) {
        int n = grid.size(), m = grid[0].size();
        bool temp = false;
        int x = -1, y = -1;

        for (int i=0; i<n && !temp; i++) {
            for (int j=0; j<m && !temp; j++) {
                if (grid[i][j] == 1) {
                    x = i;
                    y = j;
                    temp = true;
                }
            }
        }

        if (!temp) return 0;

        int ans = 0;
        queue<pair<int, int>> q;
        q.push({x, y});
        grid[x][y] = 3;

        vector<pair<int, int>> dir = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };
        while (!q.empty()) {
            auto [a, b] = q.front();
            q.pop();

            for (auto & it : dir) {
                int newX  = a + it.first;
                int newY = b + it.second;

                if (newX < 0 || newY < 0 || newX >= n || newY >= m) {
                    ans++;
                } else if (grid[newX][newY] == 1) {
                    q.push({newX, newY});
                    grid[newX][newY] = 3;
                } else if (grid[newX][newY] == 0) {
                    ans++;
                }
            }
        }

        return ans;
    }
};