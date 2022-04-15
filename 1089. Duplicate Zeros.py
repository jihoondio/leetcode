class Solution:
    def duplicateZeros(self, arr: List[int]) -> None:
        """
        Do not return anything, modify arr in-place instead.
        """
        len_arr = len(arr)
        i = 0
        while i < len_arr:
            if arr[i] == 0:
                arr.insert(i + 1, 0)
                i += 2
            else:
                i += 1

        for j in range(len(arr) - len_arr):
            arr.pop()