def threeSum(self, nums: List[int]) -> List[List[int]]:
        def find_pair(n,start,target,result):
            end=len(n)-1
            while start<end:
                summ=n[start]+n[end]
                if summ==target:
                    result.append([n[start],n[end],-target])
                    start+=1
                    end-=1
                    while (start<end and n[start]==n[start-1]):
                        start+=1
                    while (start<end and n[end]==n[end+1]):
                        end-=1
                elif summ<target:
                    start+=1
                else:
                    end-=1
        result=[]
        nums.sort()
        for i in range(len(nums)):
            if i!=0 and nums[i]==nums[i-1]:
                continue
            find_pair(nums,i+1,-nums[i],result)
        return result
