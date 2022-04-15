class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        i_s = 0
        i_t = 0
        while i_s < len(s):
            found = False
            while i_t < len(t):
                if s[i_s] == t[i_t]:
                    found = True
                    i_t += 1
                    break
                i_t += 1

            if found is False:
                return False
            i_s += 1

        return True