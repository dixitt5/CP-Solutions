#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool valid(int row, int col, vector<string> arr)
    {
        int n = arr.size();

        // check row
        for (int i = 0; i < n; i++)
        {
            if (arr[row][i] != '.')
            {
                return 0;
            }
        }

        // check column
        for (int i = 0; i < n; i++)
        {
            if (arr[i][col] != '.')
            {
                return 0;
            }
        }

        // check diagonal (upper left to lower right)
        int i = row, j = col;
        while (i >= 0 && j >= 0)
        {
            if (arr[i][j] != '.')
            {
                return 0;
            }
            i--;
            j--;
        }

        // check diagonal (lower left to upper right)
        i = row, j = col;
        while (i >= 0 && j < n)
        {
            if (arr[i][j] != '.')
            {
                return 0;
            }
            i--;
            j++;
        }

        return 1;
    }

    void dfs(int index, int count, int n, vector<string> arr, vector<vector<string>> &ans)
    {
        if (count == n)
        {
            ans.push_back(arr);
            return;
        }

        if (index >= n)
        {
            return;
        }

        for (int i = 0; i < n; i++)
        {
            if (valid(index, i, arr))
            {
                arr[index][i] = 'Q';
                dfs(index + 1, count + 1, n, arr, ans);
                arr[index][i] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n)
    {
        vector<string> arr;

        string brr;

        vector<vector<string>> ans;
        for (int i = 0; i < n; i++)
        {
            brr += '.';
        }

        for (int i = 0; i < n; i++)
        {
            arr.push_back(brr);
        }

        dfs(0, 0, n, arr, ans);

        return ans;
    }
};