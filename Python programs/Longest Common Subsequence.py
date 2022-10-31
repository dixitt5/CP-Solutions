class Solution:
    def longestCommonSubsequence(self, text1: str, text2: str) -> int:
        m=len(text1)
        n=len(text2)
        dp=[[-1 for i in range(n)] for j in range(m)]
        
        def lcs(m,n):
            if m<0 or n<0:
                return 0
            if dp[m][n]!=-1:
                return dp[m][n]
            if text1[m]==text2[n]:
                dp[m][n]=1+lcs(m-1,n-1)
                return dp[m][n]
            dp[m][n]=max(lcs(m-1,n),lcs(m,n-1))
            return dp[m][n]
        return lcs(m-1,n-1)

        
