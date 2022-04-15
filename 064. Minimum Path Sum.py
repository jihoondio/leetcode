class Solution:
    def minPathSum(self, grid: List[List[int]]) -> int:
        for i_col in range(1, len(grid[0])):
            grid[0][i_col] += grid[0][i_col - 1] 

        for i_row in range(1, len(grid)):
            grid[i_row][0] += grid[i_row - 1][0]

        for i in range(1, len(grid)):
            for j in range(1, len(grid[0])):
                grid[i][j] += min(grid[i][j - 1], grid[i - 1][j])

        return grid[len(grid) - 1][len(grid[0]) - 1]