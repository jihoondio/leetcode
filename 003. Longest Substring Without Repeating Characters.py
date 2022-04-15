class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        dic_str = []

        max_len = 0
        i = 0
        j = 0
        len_str = len(s)
        while i < len_str and j < len_str:
            ch = s[j]
            if ch not in dic_str:
                dic_str.append(ch)
                j += 1
                max_len = max(max_len, j - i)
            else:
                dic_str.pop(0)
                i += 1

        return max_len