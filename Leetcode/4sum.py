class Solution:
    def fourSum(self, nums: List[int], target: int) -> List[List[int]]: 
        nums.sort()
        l=[]
		#this loop will help to fix the one number i.e, a
		
        for a in range(len(nums)):
            if a>0 and nums[a]==nums[a-1]: #skipping if we found the duplicate of a
                continue
            else:
			#this loop will help to fix the one number i.e, b
		
                for b in range(a+1,len(nums)):
                    if b>a+1 and nums[b]==nums[b-1]: #skipping if we found the duplicate of b
                        continue
						
                    else:
						#NOW FOLLOWING THE RULE OF TWO POINTERS AFTER FIXING THETWO VALUES a and b
                        c=b+1 #taking c pointer larger than b (as said in ques)
                        d=len(nums)-1 #taking d pointer from last 
						
                        while c<d:
                            s=nums[a]+nums[b]+nums[c]+nums[d]
							
							#if sum s is greater than target means the larger value(from right as nums is sorted i.e, d at right) is taken and it is not able to sum up to the target
                            if s>target: 
                                d-=1 #so take value less than previous
							
							 #if sum s is less than target means the shorter value(from left as nums is sorted i.e, c at left) is taken and it is not able to sum up to the target
                            elif s<target: 
                                c+=1 #so take value greater than previous
								
                            else:
								#if sum s found equal to the target
                                l.append([nums[a],nums[b],nums[c],nums[d]]) 
                                c+=1 
								
								#skipping if we found the duplicate of c and we dont need to check the duplicate 
								#of d cause it will automatically skip the duplicate by the adjustment of a,b,c
								
                                while nums[c-1]==nums[c] and c<d: 
                                    c+=1
        return l
