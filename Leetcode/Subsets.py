
class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        ans=[] #result array , stores subset array
        array=[] #subset array
        make(nums,array,0,ans) #function call for recursion or backtracking
        return ans #final answer after updation of result array
              
def make(nums,array,i,ans): 
    if i==len(nums): #if the index reaches to end of nums, 
        ans.append(array) #time to store the subset formed
        return #return back to the called function
    make(nums,array,i+1,ans) #when the element need not to include in subset and i+1 is for next element 
	#will backtrack
    make(nums,array+[nums[i]],i+1,ans) #when the element is included in subset and i+1 is for next element 
    
