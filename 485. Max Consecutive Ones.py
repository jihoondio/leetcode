class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        ans = 0
        curr = 0
        for num in nums:
            if num != 0:
                curr += 1
            else:
                if curr > ans:
                    ans = curr
                curr = 0
        if curr > ans:
            ans = curr
        return ans
        