class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        for i in range(0,31):
            ans = 2**i
            if(ans == n):
                return True
        else:    
            return False
