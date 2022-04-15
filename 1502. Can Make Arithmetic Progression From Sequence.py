class Solution:
    def canMakeArithmeticProgression(self, arr: List[int]) -> bool:
        sorted_arr = sorted(arr)
        diff = sorted_arr[0]- sorted_arr[1]
        for i in range(2, len(sorted_arr)):
            if sorted_arr[i - 1] - sorted_arr[i] != diff:
                return False
        return True