class Solution(object):
    def numIdenticalPairs(self, nums):
        h = [0] * 101
        l_num = set()
        for i in range(0, len(nums)):
            h_idx = nums[i]
            h[h_idx] = h[h_idx] + 1
            l_num.add(h_idx)

        res = 0
        for idx in l_num:
            num = h[idx]
            if num > 1:
                res = res + int(num * (num - 1) / 2)

        return res