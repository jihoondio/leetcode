class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        alphas = [0] * 26
        
        for c1 in s:
            alphas[ord(c1) - ord('a')] += 1
            
        for c2 in t:
            alphas[ord(c2) - ord('a')] -= 1
            
        for n in alphas:
            if n != 0:
                return False
            
        return True