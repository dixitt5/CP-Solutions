def findNumberOfLIS(self, nums: List[int]) -> int:
        lis=[1]*len(nums)
        count=[1]*len(nums)
        m=1
        for i in range(len(nums)):
            for j in range(0,i):
                if (nums[i]>nums[j] and lis[j]+1>lis[i]):
                    lis[i]=lis[j]+1
                    count[i]=count[j]
                else:
                    if nums[i]>nums[j] and lis[j]+1==lis[i]:
                        count[i]+=count[j]
            m=max(m,lis[i])
        ans=0
        for i in range(len(nums)):
            if lis[i]==m:
                ans+=count[i]
        return ans
