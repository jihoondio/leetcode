class Solution:
    def findPeakElement(self, nums: List[int]) -> int:
        for i in range(len(nums)):
            if i == 0:
                prev = -sys.maxsize - 1
            else:
                prev = nums[i - 1]
                
            if i == len(nums) - 1:
                next = -sys.maxsize - 1
            else:
                next = nums[i + 1]
            
            if prev < nums[i] and nums[i] > next:
                return i
            
        return 0