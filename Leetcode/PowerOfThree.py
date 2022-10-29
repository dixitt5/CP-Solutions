class Solution:
    def isPowerOfThree(self, n: int) -> bool:
        for i in range(0,31):
            ans = 3**i
            if(ans == n):
                return True
        else:    
            return False
