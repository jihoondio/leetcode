class Solution:
    def arrayStringsAreEqual(self, word1: List[str], word2: List[str]) -> bool:
        str1 = ''
        for s1 in word1:
            str1 = str1 + s1
        str2 = ''
        for s2 in word2:
            str2 = str2 + s2
        if str1 == str2:
            return True
        else:
            return False