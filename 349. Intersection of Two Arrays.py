class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        set1 = set()
        set_r = set()
        for n1 in nums1:
            if not n1 in set1:
                set1.add(n1)
        for n2 in nums2:
            if n2 in set1 and not n2 in set_r:
                set_r.add(n2)

        return list(set_r)