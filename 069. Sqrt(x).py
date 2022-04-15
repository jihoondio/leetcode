class Solution:
    def mySqrt(self, x: int) -> int:
        if x == 0:
            return 0
        
        for i in range(x + 1):
            n = i * i
            if n > x:
                return i - 1
            elif n == x:
                return i