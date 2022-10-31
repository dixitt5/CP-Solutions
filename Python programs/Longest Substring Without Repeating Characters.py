def lengthOfLongestSubstring(self, s: str) -> int:
        maxlen=0
        ws=0
        d={}
        for i in range(len(s)):
            c=s[i]
            if c in d:
                index=d[c]
                if index>=ws:
                    ws=index+1
            d[c]=i
            maxlen=max(maxlen,i-ws+1)
        return maxlen
