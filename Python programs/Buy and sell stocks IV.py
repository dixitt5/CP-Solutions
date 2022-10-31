class Solution:
    def maxProfit(self, k: int, prices: List[int]) -> int:
        def func(i,buy,prices,ct,dic):
            if i>=len(prices) or ct==0:
                return 0
            if (i,buy,ct) in dic:
                return dic[(i,buy,ct)]
            x,y,a,b=0,0,0,0
            if buy:
                x=-prices[i]+func(i+1,False,prices,ct,dic)
                y=0+func(i+1,buy,prices,ct,dic)
            else:
                a=prices[i]+func(i+1,True,prices,ct-1,dic)
                b=0+func(i+1,buy,prices,ct,dic)
            dic[(i,buy,ct)]=max(a,b,x,y)
            return max(a,b,x,y)
        return func(0,True,prices,k,{})
        
