#include <iostream>
#include <vector>
using namespace std;

// Mark first & last (Row & Column visited)

class Solution
{
public:
    void dfs(int row, int col, vector<vector<int>> &vis, vector<vector<char>> &board, int delRow[], int delCol[])
    {
        vis[row][col] = 1;
        int n = board.size();
        int m = board[0].size();

        for (int i = 0; i < 4; i++)
        {
            int nRow = row + delRow[i];
            int nCol = col + delCol[i];

            if (nRow >= 0 && nRow < n && nCol >= 0 && nCol < m && !vis[nRow][nCol] && board[nRow][nCol] == 'O')
            {
                dfs(nRow, nCol, vis, board, delRow, delCol);
            }
        }
    }

    void solve(vector<vector<char>> &board)
    {
        int delRow[] = {-1, 0, +1, 0};
        int delCol[] = {0, 1, 0, -1};
        int n = board.size();
        int m = board[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));

        for (int i = 0; i < m; i++)
        {
            // First row
            if (!vis[0][i] && board[0][i] == 'O')
            {
                dfs(0, i, vis, board, delRow, delCol);
            };

            // Last row
            if (!vis[n - 1][i] && board[n - 1][i] == 'O')
            {
                dfs(n - 1, i, vis, board, delRow, delCol);
            };
        };

        for (int i = 0; i < n; i++)
        {
            // First coloumn
            if (!vis[i][0] && board[i][0] == 'O')
            {
                dfs(i, m - 1, vis, board, delRow, delCol);
            };

            if (!vis[i][m - 1] && board[i][m - 1])
            {
                dfs(i, m - 1, vis, board, delRow, delCol);
            }
        }

        // Convert rest all the O to X
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!vis[i][j] && board[i][j] == 'O')
                {
                    board[i][j] = 'X';
                }
            }
        };
    }
};