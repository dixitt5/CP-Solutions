class Solution {
    public int trap(int[] height) {
       int n=height.length;
int left=0;
	int right=n-1;
	int leftbar=height[0];
	int rightbar=height[n-1];
	int ans=0;
	while(left<=right)
	{
		//which bar is limiting, left or right
		if(leftbar<rightbar)
		{
			//if element that you are seeing now is bigger than the leftbar, it will not store any water
			if(height[left]>leftbar)
			{
				leftbar=height[left];	
			}
			else {
				//it will store water
				ans+=leftbar-height[left];
				left++;
			}
		}
		else {
			if(height[right]>rightbar)
			{
				rightbar=height[right];
				
			}
			else {
				ans+=rightbar-height[right];
				right--;
			}
		}
	}
	return ans;

    }
}