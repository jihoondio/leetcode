class Solution:
    def singleNumber(self, nums: List[int]) -> List[int]:
        counts = {}
        for n in nums:
            if n in counts:
                del counts[n]
            else:
                counts[n] = 1
        res = []
        for k in counts:
            res.append(k)
            
        return res