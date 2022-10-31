

class Solution:
    def maxChunksToSorted(self, arr: List[int]) -> int:
        st=[]
        for i in arr:
            m=i #as the max range of any chunk (as some chunks can be just single element also)
			## check if stack not empty and if previous chunk's max range (i.e, st[-1]) is greater 
			##than current arr[i] (i.e, m) that means the m is the part of the previous 
			##chunk , so then update the max range (insert into the stack and pop the previous value) of that chunk
			
            while st and st[-1]>i:
                m=max(m,st[-1])
                st.pop()
				
			##m is going to make the new chunk (starting of the new chunk)
            st.append(m) 
            
        return len(st)
PLEASE UPVOTE IF YOU FOUND THE SOLUTION HELPFUL


Comments: 0
 
Type comment here... (Markdown is supported)
Enter topic title...
