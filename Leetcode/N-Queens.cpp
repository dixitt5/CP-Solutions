#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isSafe(vector<string> &demo, int col, int row, int n)
    {
        int dRow = row, dCol = col;
        // upper left diagonal
        while (row >= 0 && col >= 0)
        {
            if (demo[row][col] == 'Q')
            {
                return false;
            }
            row--;
            col--;
        }
        // upper right diagonal
        col = dCol, row = dRow;
        while (row < n && col >= 0)
        {
            if (demo[row][col] == 'Q')
            {
                return false;
            }
            row++;
            col--;
        }
        // left
        col = dCol, row = dRow;
        while (col >= 0)
        {
            if (demo[row][col] == 'Q')
            {
                return false;
            }
            col--;
        }
        return true;
    }
    void solve(vector<vector<string>> &ans, vector<string> &demo, int n, int col)
    {
        if (col == n)
        {
            ans.push_back(demo);
            return;
        }
        for (int i = 0; i < n; i++)
        {
            if (isSafe(demo, col, i, n))
            {
                demo[i][col] = 'Q';
                solve(ans, demo, n, col + 1);
                demo[i][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n)
    {
        vector<vector<string>> ans;
        vector<string> demo(n);
        string s(n, '.');
        for (int i = 0; i < n; i++)
        {
            demo[i] = s;
        }
        int col = 0;
        solve(ans, demo, n, col);
        return ans;
    }
};
int main()
{
    Solution s;
    int n = 4;
    vector<vector<string>> queens = s.solveNQueens(n);
    for (auto q_pos : queens)
    {
        for (auto q_s : q_pos)
        {
            cout << q_s << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}