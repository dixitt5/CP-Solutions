class Solution:
    def smallestSubsequence(self, s: str) -> str:
        d={}
        for i in range(len(s)):
            d[s[i]]=i
        ans=set()
        stack=[]
        for i in range(len(s)):
            if s[i] in ans:
                continue
            if len(stack)!=0 and stack[-1]<s[i]:
                stack.append(s[i])
                ans.add(s[i])
            else:
                while len(stack)!=0 and stack[-1]>s[i] and d[stack[-1]]>i:
                    a=stack.pop()
                    ans.remove(a)
                stack.append(s[i])
                ans.add(s[i])
        return "".join(stack)
