class Solution:
    def canJump(self, nums: List[int]) -> bool:
        last_pos = len(nums) - 1
        for i in range(len(nums) - 1, -1, -1):
            possible_pos = i + nums[i]
            if possible_pos >= last_pos:
                last_pos = i
        return last_pos == 0