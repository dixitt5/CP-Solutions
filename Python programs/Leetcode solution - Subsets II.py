
class Solution:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
		nums.sort()
        ans=[] #result array , stores subset array
        array=[] #subset array
        make(nums,array,0,ans) #function call for recursion or backtracking
		
        l=[]
        for i in ans: #selecting unique subsets from ans array
            if i not in l:
                l.append(i)
        return l #final answer 
              
        
def make(nums,array,i,ans): 
    if i==len(nums): #if the index reaches to end of nums, 
        ans.append(array) #time to store the subset formed
        return #return back to the called function
    make(nums,array,i+1,ans) #when the element need not to include in subset and i+1 is for next element 
	#will backtrack
    make(nums,array+[nums[i]],i+1,ans) #when the element is included in subset and i+1 is for next element
