class Solution {
    public int[] maxSlidingWindow(int[] nums, int k) {
        //fixed size
        //using dequeue
        return max(nums,k);
    }
   public static int[] max(int[] arr, int k)
{
	int[] ans=new int[arr.length-k+1];
	Deque<Integer> dq=new LinkedList<>();
	int j=0;
	for(int i=0;i<k;i++)
	{
		//grow code
		while(!dq.isEmpty() && arr[dq.getLast()]<arr[i])	
		{
			dq.removeLast();	
		}
		dq.add(i);
	}
	ans[j]=arr[dq.getFirst()];
	j++;
	for(int i=k;i<arr.length;i++)
	{
while(!dq.isEmpty() && arr[dq.getLast()]<arr[i])	
		{
			dq.removeLast();
		}
		dq.add(i);
		if(!dq.isEmpty()&& dq.getFirst()==i-k)
		{
			dq.removeFirst();
		}
		ans[j]=arr[dq.getFirst()];
		j++;
	}
	return ans;
   }
}