def minDistance(self, word1: str, word2: str) -> int:
        m=len(word1)
        n=len(word2)
        dp=[[-1 for i in range(n+1)]for j in range(m+1)]
        return (len(word1)+len(word2))-2*(lcs(dp,word1,word2,len(word1)+1,len(word2)+1))
def lcs(dp,s1,s2,m,n):
    for i in range(m):
        for j in range(n):
            if i==0 or j==0:
                dp[i][j]=0
            elif s1[i-1]==s2[j-1]:
                dp[i][j]=1+dp[i-1][j-1]
            else:
                dp[i][j]=max(dp[i-1][j],dp[i][j-1])
    return max(max(dp))
