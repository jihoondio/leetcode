class Solution:
    def climbStairs(self, n: int) -> int:
        if n == 1:
            return 1
        nums = [0 for _ in range(n + 1)]
        nums[0] = 0
        nums[1] = 1
        nums[2] = 2
        for i in range(3, n + 1):
            nums[i] = nums[i - 1] + nums[i - 2]

        return nums[n]