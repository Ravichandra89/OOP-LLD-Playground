#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> Calculate(vector<vector<int>> &mat)
{
    int n = mat.size();
    int m = mat[0].size();

    vector<vector<int>> prefix(n, vector<int>(m, 0));

    // fill the prefix sum
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            prefix[i][j] = mat[i][j] + (i > 0 ? prefix[i - 1][j] : 0) + (j > 0 ? prefix[i][j - 1] : 0) - (i > 0 && j > 0 ? prefix[i - 1][j - 1] : 0);
        }
    }

    return prefix;
}

int main()
{
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    vector<vector<int>> ans = Calculate(mat);

    // print the prefix
    for (const auto &it : ans)
    {
        for (const auto &ele : it)
        {
            cout << ele << " ";
        }
        cout << endl;
    }
}