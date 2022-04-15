class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        rows = []
        cols = []
        for irow in range(len(matrix)):
            for icol in range(len(matrix[0])):
                if matrix[irow][icol] == 0:
                    rows.append(irow)
                    cols.append(icol)
                    
        for row in rows:
            for col in range(len(matrix[0])):
                matrix[row][col] = 0
                
        for col in cols:
            for row in range(len(matrix)):
                matrix[row][col] = 0