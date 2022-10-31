class Solution:
    def numberOfSubarrays(self, nums: List[int], k: int) -> int: 
        #Subarrays with exactly K odd numbers  = Subarrays with at most K odd numbers  - Subarrays with at most K-1 odd numbers
        return make(nums,k)-make(nums,k-1)
    
def make(nums,k):
    c=0 #count of odd numbers in window
    i=0 #starting of window
    j=0 #iterate through nums till end to make window
    ans=0 #calculate the valid windows
    while j<len(nums): #loop runs through the nums
        if nums[j]%2!=0: #if element is odd , count it
            c+=1
        if c>k: #if count becomes greater than the k
            while c>k: #making the window which having k odd elements
                if nums[i]%2!=0: #taking i from starting of window, as the window will shift towards right, so need to decrement the 
                #odd numbers from the left side if in the current window (bcoz those elements are removing from current window)
                    c-=1
                i+=1 #moved to the next element which is now the starting of window
        ans+=j-i+1 #counting the valid window (index of leftmost odd number in current window - index of beginning of window + 1)
        j+=1 #move to next element in nums

    return ans
