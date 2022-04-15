class Solution:
    def dominantIndex(self, nums: List[int]) -> int:
        idx = -1
        max_num = max(nums)
        for i in range(len(nums)):
            if nums[i] != max_num:
                if nums[i] * 2 > max_num:
                    return -1
            else:
                idx = i
        return idx