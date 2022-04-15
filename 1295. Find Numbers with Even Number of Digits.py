class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        sum_ = 0;
        for num in nums:
            str_num = str(num)
            if len(str_num) % 2 == 0:
                sum_ += 1
        return sum_