class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()
        s2 = ""
        for ch in s:
            if ord('a') <= ord(ch) <= ord('z'):
                s2 += ch
            if ord('0') <= ord(ch) <= ord('9'):
                s2 += ch
        r = s2[::-1]
        return r == s2