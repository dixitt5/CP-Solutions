// Problem Link: https://leetcode.com/problems/minimum-size-subarray-sum/

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n= nums.size();
        vector<int>pre(n,0);
        pre[0]=nums[0];
        for(int i=1; i<n; i++){
            pre[i]= pre[i-1]+nums[i];
        }
        if(pre[n-1]<target) return 0;
        int left=0;
        int right=0;
        int ans=INT_MAX;
        while(right<n){
            int currsum= pre[right];
            while(currsum>=target){
                ans= min(ans, right-left+1);
                currsum-= nums[left];
                left++;
            }
            left=0;
            right++;
        }
        return ans;
        
    }
};