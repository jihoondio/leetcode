class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        size = len(matrix)
        for x in range(int(size / 2)):
            for y in range(x, size - x - 1):
                temp = matrix[x][y]
                matrix[x][y] = matrix[size - y - 1][x]
                matrix[size - y - 1][x] = matrix[size - x - 1][size - y - 1]
                matrix[size - x - 1][size - y - 1] = matrix[y][size - x - 1]
                matrix[y][size - x - 1] = temp 