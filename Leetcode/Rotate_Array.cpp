// Lets take an Example:-
// nums = [-1,-100,3,99], k = 2
// Algo
// Step 1- Reverse first size-k element
// nums=[-100,-1,3,99]
// Step 2- Reverse last k element
// nums=[-100,-1,99,3]
// Step 3- At last, reverse whole array
// nums[3,99,-1,-100]

class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        int len=nums.size();
        k%=len;
        if(k==0)
            return;
		// reversing first size-k element
        reverse(nums.begin(),nums.end()-k);
		
		// reversing last k element
        reverse(nums.end()-k,nums.end());
		
		//reversing the whole array
        reverse(nums.begin(),nums.end());
    }
};