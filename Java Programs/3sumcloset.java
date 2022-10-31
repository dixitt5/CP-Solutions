class Solution {
    public int threeSumClosest(int[] nums, int target) {
        Arrays.sort(nums);
        int result=nums[0]+nums[1]+nums[nums.length-1];
        for(int i=0;i<nums.length;i++)
        {
            int start=i+1;
            int end=nums.length-1;
            int sum=1000000;
            while(start<end)
            {
                sum=nums[i]+nums[start]+nums[end];
                if ((Math.abs(target-sum))<Math.abs(target-result))
                {
                    result=sum;
                }
                else if(sum<target){
                    start+=1;
                }
                else
                    end-=1;
            }
        }
        return result;
        
    }
}
