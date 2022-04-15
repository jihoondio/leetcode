class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        sum_nums = sum(nums)
        prefix_sum = 0
        for i in range(len(nums)):
            postfix_sum = sum_nums - prefix_sum - nums[i]
            if prefix_sum == postfix_sum:
                return i
            prefix_sum += nums[i]

        return -1