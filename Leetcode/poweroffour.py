class Solution:
    def isPowerOfFour(self, n: int) -> bool:
        for i in range(0,31):
            ans = 4**i
            if(ans == n):
                return True
        else:    
            return False
