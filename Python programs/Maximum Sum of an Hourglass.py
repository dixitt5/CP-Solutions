class Solution:
    def maxSum(self, grid: List[List[int]]) -> int:
        rows=len(grid)
        columns=len(grid[0])
        s=0
        maxs=0
        for i in range(0,rows-2):
            for j in range(0,columns-2):
                s=grid[i][j] + grid[i][j+1] + grid[i][j+2] + grid[i+1][j+1] + grid[i+2][j] + grid[i+2][j+1] + grid[i+2][j+2]
                if s>maxs:
                    maxs=s
        return maxs
