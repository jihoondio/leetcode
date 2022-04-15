class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        d = dict()
        res = []
        for i in range(0, len(nums) - 2):
            j = i + 1
            k = len(nums) - 1
            while j < k:
                _sum = nums[i] + nums[j] + nums[k]

                if _sum > 0:
                    k -= 1
                    continue            
                if _sum < 0:
                    j += 1
                    continue

                l = [nums[i], nums[j], nums[k]]
                key = str(l)
                if not key in d:
                    d[key] = 0
                    res.append(l)

                changed = False
                while j < k and nums[j] == nums[j + 1]:
                    j += 1
                    changed = True
                while j < k and nums[k] == nums[k - 1]:
                    k -= 1
                    changed = True
                if not changed:
                    j += 1
                    k -= 1
        return res