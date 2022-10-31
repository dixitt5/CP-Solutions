class Solution:
    def countSubarrays(self, nums: List[int], minK: int, maxK: int) -> int:
        n=len(nums)
        ws,we=0,0
        rmin,rmax=-1,-1
        count=0
        while we<n:
            while we<n:
                curr=nums[we]
                if not minK<=curr<=maxK:
                    break
                if curr==minK:
                    rmin=we
                if curr==maxK:
                    rmax=we
                we+=1
                if rmin!=-1 and rmax!=-1:
                    count+=(min(rmin,rmax)-ws)+1
            we+=1
            ws=we
            rmin,rmax=-1,-1
        return count
