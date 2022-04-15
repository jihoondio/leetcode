class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        res = []
        dic = {}
        for i_str in strs:
            i_sorted = str(sorted(i_str))
            if i_sorted in dic:
                dic[i_sorted].append(i_str)
            else:
                dic[i_sorted] = [i_str]
        for k, v in dic.items():
            res.append(v)
        return res