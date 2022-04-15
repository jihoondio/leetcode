class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        curr = 0
        max_n = 0
        dic = {}
        for n in nums:
            if dic.get(n) is None:
                dic[n] = 1
            else:
                dic[n] += 1
                
            if dic[n] > max_n:
                max_n = dic[n]
                curr = n
            
        return curr