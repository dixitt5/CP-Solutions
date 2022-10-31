class Solution:
    def minDistance(self, word1: str, word2: str) -> int:
        m=len(word1)
        n=len(word2)
        dp=[[-1 for i in range(n)] for j in range(m)]
        
        def lcs(m,n):
            if m<0 or n<0:
                return 0
            if dp[m][n]!=-1:
                return dp[m][n]
            if word1[m]==word2[n]:
                dp[m][n]=1+lcs(m-1,n-1)
                return dp[m][n]
            dp[m][n]=max(lcs(m-1,n),lcs(m,n-1))
            return dp[m][n]
        return m+n-lcs(m-1,n-1)*2
