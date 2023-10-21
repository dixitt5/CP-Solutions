#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPossible(vector<vector<char>> &board, int row, int col, char val)
    {
        for (int i = 0; i < 9; i++)
        {
            if (board[row][i] == val)
                return false;
            if (board[i][col] == val)
                return false;
            if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == val)
                return false;
        }
        return true;
    }
    bool solve(vector<vector<char>> &board, int i, int j)
    {
        if (i == 9 && j == 0)
            return true;
        if (board[i][j] !='.')
            return solve(board, (j + 1) == 9 ? i + 1 : i, (j + 1) == 9 ? 0 : j + 1);

        for (char num ='1'; num <='9'; num++)
        {
            if (isPossible(board, i, j, num))
            {
                board[i][j] = num;
                if (solve(board, (j + 1) == 9 ? i + 1 : i, (j + 1) == 9 ? 0 : j + 1))
                    return true;
                board[i][j] ='.';
            }
        }

        return false;
    }
    void solveSudoku(vector<vector<char>> &board)
    {
        if (board.size() == 0)
            return;
        solve(board, 0, 0);
    }
};
int main()
{
    Solution s;
    vector<vector<char>> board = {{'5','3','.','.','7','.','.','.','.'}, {'6','.','.','1','9','5','.','.','.'}, {'.','9','8','.','.','.','.','6','.'}, {'8','.','.','.','6','.','.','.','3'}, {'4','.','.','8','.','3','.','.','1'}, {'7','.','.','.','2','.','.','.','6'}, {'.','6','.','.','.','.','2','8','.'}, {'.','.','.','4','1','9','.','.','5'}, {'.','.','.','.','8','.','.','7','9'}};

    s.solveSudoku(board);
    return 0;
}