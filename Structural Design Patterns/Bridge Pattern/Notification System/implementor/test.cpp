#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    const int MOD = 1e9 + 7;

    int countPaths(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int, int>>> adj(n);

        // Adj building
        for (auto & it : roads) {
            int u = it[0], v = it[1], w = it[2];
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }

        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<>> pq;
        vector<long long> dist(n, LLONG_MAX), ways(n, 0);

        dist[0] = 0;
        ways[0] = 1;
        pq.push({0, 0});

        while (!pq.empty()) {
            auto [distance, node] = pq.top();
            pq.pop();

            if (distance > dist[node]) continue;

            // Traverse all neighbours
            for (auto & it : adj[node]) {
                int nei = it.first;
                int weight = it.second;

                long long newDist = distance + weight;

                if (newDist < dist[nei]) {
                    // Update distance and ways
                    dist[nei] = newDist;
                    ways[nei] = ways[node];
                    pq.push({newDist, nei});
                } else if (newDist == dist[nei]) {
                    ways[nei] = (ways[nei] + ways[node]) % MOD;
                }
            }
        }

        return ways[n-1];
    }
};