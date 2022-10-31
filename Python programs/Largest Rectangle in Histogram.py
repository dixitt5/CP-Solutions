 def largestRectangleArea(self, heights: List[int]) -> int:
        r=nser(heights)
        l=nsel(heights)
        #print(r,l)
        #ans=[]
        maxblock=0
        for i in range(len(heights)):
            w=r[i]-l[i]-1
            s=heights[i]*w 
            maxblock=max(maxblock,s)
        return maxblock
        #return nser(heights)
        #return nsel(heights)
def nser(heights):
    stack=[]
    nsr=[0]*len(heights)
    for i in range(len(heights)-1,-1,-1):
        while len(stack)!=0 and stack[-1][0]>=heights[i]:
            stack.pop()
        if len(stack)==0:
            nsr[i]=len(heights)
        else:
            nsr[i]=stack[-1][1]
        stack.append((heights[i],i))
    return nsr
def nsel(heights):
    stack=[]
    nsl=[0]*len(heights)
    for i in range(len(heights)):
        while len(stack)!=0 and stack[-1][0]>=heights[i]:
            stack.pop()
        if len(stack)==0:
            nsl[i]=-1
        else:
            nsl[i]=stack[-1][1]
        stack.append((heights[i],i))
    return nsl
