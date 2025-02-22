/**
 * Find the minimum threshold 𝑇 T such that if we only consider edges with weight <= * the graph becomes connected.
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge
{
    int u, v, w;
};

struct DSU
{
    vector<int> parent, rank;
    DSU(int n)
    {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; i++)
            parent[i] = i;
    }
    int find(int a)
    {
        if (parent[a] != a)
            parent[a] = find(parent[a]);
        return parent[a];
    }
    void unionn(int a, int b)
    {
        a = find(a);
        b = find(b);
        if (a == b)
            return;
        if (rank[a] < rank[b])
            swap(a, b);
        parent[b] = a;
        if (rank[a] == rank[b])
            rank[a]++;
    }
};

// T == mid
bool checkConnectivity(vector<Edge> &edges, int n, int T)
{
    DSU dsu(n);
    for (auto &edge : edges)
    {
        if (edge.w <= T)
        {
            dsu.unionn(edge.u, edge.v);
        }
    }

    int root = dsu.find(0);
    for (int i = 1; i < n; i++)
    {
        if (dsu.find(i) != root)
            return false;
    }
    return true;
}

int minimumThreshold(vector<Edge> &edges, int n)
{
    // Find the binary search range
    int low = edges.front().w, high = edges.front().w, ans = high;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (checkConnectivity(edges, n, mid))
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return ans;
}

int main()
{
    int n = 4;
    vector<Edge> edges = {{0, 1, 3}, {1, 2, 4}, {2, 3, 5}, {0, 3, 10}};
    // Sort edges by weight for binary search on threshold.
    sort(edges.begin(), edges.end(), [](Edge a, Edge b)
         { return a.w < b.w; });
    int T = minimumThreshold(edges, n);
    cout << "Minimum threshold T for connectivity: " << T << endl;
    // Expected output: In this graph, T should be 5 since with threshold 5,
    // edges (0,1), (1,2), and (2,3) connect all nodes.
    return 0;
}
