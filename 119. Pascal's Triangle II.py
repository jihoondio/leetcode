class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        def get_row(rowIndex: int, currRow: int, upperRow: List[int]) -> List[int]:
            if currRow > rowIndex:
                return upperRow
            
            row = [0] * (currRow + 1)
            for i in range(currRow + 1):
                if i == 0 or i == currRow:
                    row[i] = 1
                else:
                    row[i] = upperRow[i - 1] + upperRow[i]
                    
            return get_row(rowIndex, currRow + 1, row)
            
        return get_row(rowIndex, 0, [])